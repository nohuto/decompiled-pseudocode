/*
 * XREFs of ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C006F948
 * Callers:
 *     DxgkOpenKeyedMutex2 @ 0x1C006F330 (DxgkOpenKeyedMutex2.c)
 *     DxgkOpenKeyedMutex @ 0x1C0177180 (DxgkOpenKeyedMutex.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C017D0C0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000115C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009B60 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C01763A8 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutex(
        DXGGLOBAL *this,
        unsigned int a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v11; // rdx
  signed __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int64 *v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  bool v29; // [rsp+20h] [rbp-28h]
  _BYTE v30[8]; // [rsp+30h] [rbp-18h] BYREF
  char v31; // [rsp+38h] [rbp-10h]

  v6 = a2;
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v25 + 24) = 3534LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !a4 )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v26 + 24) = 3535LL;
    WdLogEvent5_WdAssertion(v26);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v30);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v6, 9);
  v15 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v16 = *(_QWORD *)(ObjectA + 24);
    while ( v16 )
    {
      v12 = v16 + 1;
      v17 = v16;
      v16 = _InterlockedCompareExchange64(v15 + 3, v16 + 1, v16);
      if ( v17 == v16 )
      {
        if ( v31 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
        v18 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v15, a4, a5, a6, v29);
        v23 = v18;
        if ( v18 < 0 )
        {
          v27 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
          *(_QWORD *)(v27 + 24) = v6;
          *(_QWORD *)(v27 + 32) = v23;
          WdLogEvent5_WdWarning(v27);
        }
        else
        {
          *a3 = (struct DXGKEYEDMUTEX *)v15;
        }
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v15);
        return (unsigned int)v23;
      }
    }
  }
  v28 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
  *(_QWORD *)(v28 + 24) = v6;
  *(_QWORD *)(v28 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v28);
  if ( v31 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  return 3221225485LL;
}
