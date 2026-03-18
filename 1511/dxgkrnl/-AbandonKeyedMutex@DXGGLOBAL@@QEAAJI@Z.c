/*
 * XREFs of ?AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z @ 0x1C01508CC
 * Callers:
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0156584 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0001088 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0006B18 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C005C524 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGGLOBAL::AbandonKeyedMutex(DXGGLOBAL *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v6; // rdx
  signed __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  volatile signed __int64 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rax
  _BYTE v15[8]; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  v2 = a2;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  Global = DXGGLOBAL::GetGlobal(v3);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v2, 9);
  v10 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v11 = *(_QWORD *)(ObjectA + 24);
    while ( v11 )
    {
      v7 = v11 + 1;
      v12 = v11;
      v11 = _InterlockedCompareExchange64(v10 + 3, v11 + 1, v11);
      if ( v12 == v11 )
      {
        if ( v16 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
        DXGKEYEDMUTEX::SignalAbandonedInternal((DXGKEYEDMUTEX *)v10, 0, 1);
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v10);
        return 0LL;
      }
    }
  }
  v13 = WdLogNewEntry5_WdWarning(v7, v6, v8, v9);
  *(_QWORD *)(v13 + 24) = v2;
  *(_QWORD *)(v13 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v13);
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return 3221225485LL;
}
