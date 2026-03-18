/*
 * XREFs of ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C014CEDC
 * Callers:
 *     DxgkOpenKeyedMutex @ 0x1C014E5B0 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C014E830 (DxgkOpenKeyedMutex2.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C01541C0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000106C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C014CBF8 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutex(
        DXGGLOBAL *this,
        __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v17; // rdx
  signed __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  volatile signed __int64 *v21; // rbx
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 v24; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // rax
  _BYTE v33[8]; // [rsp+30h] [rbp-18h] BYREF
  char v34; // [rsp+38h] [rbp-10h]

  v6 = (unsigned int)a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    *(_QWORD *)(v9 + 24) = 3426LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 3427LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v33);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  Global = DXGGLOBAL::GetGlobal(v12, v11, v13, v14);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v6, 9);
  v21 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v22 = *(_QWORD *)(ObjectA + 24);
    while ( v22 )
    {
      v18 = v22 + 1;
      v23 = v22;
      v22 = _InterlockedCompareExchange64(v21 + 3, v22 + 1, v22);
      if ( v23 == v22 )
      {
        if ( v34 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
        v26 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v21, a4, a5, a6);
        v31 = v26;
        if ( v26 < 0 )
        {
          v32 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
          *(_QWORD *)(v32 + 24) = v6;
          *(_QWORD *)(v32 + 32) = v31;
          WdLogEvent5_WdWarning(v32);
        }
        else
        {
          *a3 = (struct DXGKEYEDMUTEX *)v21;
        }
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v21);
        return (unsigned int)v31;
      }
    }
  }
  v24 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
  *(_QWORD *)(v24 + 24) = v6;
  *(_QWORD *)(v24 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v24);
  if ( v34 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
  return 3221225485LL;
}
