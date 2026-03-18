/*
 * XREFs of ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C0151220
 * Callers:
 *     DxgkOpenKeyedMutex @ 0x1C0152200 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C01523A0 (DxgkOpenKeyedMutex2.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0158378 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0001088 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0006B18 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z @ 0x1C005C730 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutex(
        DXGGLOBAL *this,
        unsigned int a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v14; // rdx
  signed __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  volatile signed __int64 *v18; // rbx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rax
  _BYTE v30[8]; // [rsp+20h] [rbp-18h] BYREF
  char v31; // [rsp+28h] [rbp-10h]

  v6 = a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 3373LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 3374LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v30);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  Global = DXGGLOBAL::GetGlobal(v11);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v6, 9);
  v18 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v19 = *(_QWORD *)(ObjectA + 24);
    while ( v19 )
    {
      v15 = v19 + 1;
      v20 = v19;
      v19 = _InterlockedCompareExchange64(v18 + 3, v19 + 1, v19);
      if ( v20 == v19 )
      {
        if ( v31 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
        v23 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v18, a4, a5, a6);
        v28 = v23;
        if ( v23 < 0 )
        {
          v29 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
          *(_QWORD *)(v29 + 24) = v6;
          *(_QWORD *)(v29 + 32) = v28;
          WdLogEvent5_WdWarning(v29);
        }
        else
        {
          *a3 = (struct DXGKEYEDMUTEX *)v18;
        }
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v18);
        return (unsigned int)v28;
      }
    }
  }
  v21 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
  *(_QWORD *)(v21 + 24) = v6;
  *(_QWORD *)(v21 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v21);
  if ( v31 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  return 3221225485LL;
}
