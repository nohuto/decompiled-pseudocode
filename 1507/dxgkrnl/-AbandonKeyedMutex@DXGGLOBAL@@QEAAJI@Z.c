/*
 * XREFs of ?AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z @ 0x1C014BB7C
 * Callers:
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01522E4 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000106C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C005B6FC (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGGLOBAL::AbandonKeyedMutex(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v9; // rdx
  signed __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  volatile signed __int64 *v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-18h] BYREF
  char v19; // [rsp+28h] [rbp-10h]

  v2 = a2;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v18);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  Global = DXGGLOBAL::GetGlobal(v4, v3, v5, v6);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v2, 9);
  v13 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v14 = *(_QWORD *)(ObjectA + 24);
    while ( v14 )
    {
      v10 = v14 + 1;
      v15 = v14;
      v14 = _InterlockedCompareExchange64(v13 + 3, v14 + 1, v14);
      if ( v15 == v14 )
      {
        if ( v19 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
        DXGKEYEDMUTEX::SignalAbandonedInternal((DXGKEYEDMUTEX *)v13, 0, 1);
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v13);
        return 0LL;
      }
    }
  }
  v16 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
  *(_QWORD *)(v16 + 24) = v2;
  *(_QWORD *)(v16 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v16);
  if ( v19 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  return 3221225485LL;
}
