/*
 * XREFs of ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C007C820
 * Callers:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C007B9AC (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall SESSION_ADAPTER::Initialize(SESSION_ADAPTER *this)
{
  DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  struct DXGADAPTER *v4; // rbx
  unsigned __int64 *v5; // rbp
  struct DXGADAPTER **v6; // r14
  char *v7; // rsi
  int PairingAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v4 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)this + 8), &v23);
  if ( v4 )
  {
    v5 = (unsigned __int64 *)((char *)this + 32);
    v6 = (struct DXGADAPTER **)((char *)this + 16);
    v7 = (char *)this + 24;
    PairingAdapters = DxgkpGetPairingAdapters(
                        v4,
                        0,
                        (struct DXGADAPTER **)this + 2,
                        (unsigned __int64 *)this + 4,
                        (struct DXGADAPTER **)this + 3,
                        (unsigned __int64 *)this + 5);
    v13 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v19 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
      *(_QWORD *)(v19 + 24) = v4;
      *(_QWORD *)(v19 + 32) = v13;
      *(_QWORD *)v7 = 0LL;
      v20 = DxgkpGetPairingAdapters(v4, 0, v6, v5, 0LL, 0LL);
      v13 = v20;
      if ( v20 < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v22 + 24) = v4;
        *(_QWORD *)(v22 + 32) = v13;
        WdLogEvent5_WdError(v22);
        DXGADAPTER::ReleaseReference(v4);
        return (unsigned int)v13;
      }
    }
    else if ( !*(_QWORD *)(*(_QWORD *)v7 + 2128LL) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v16 + 24) = 1823LL;
      WdLogEvent5_WdAssertion(v16);
    }
    DXGADAPTER::ReleaseReference(v4);
    if ( !*v6 || !*((_QWORD *)*v6 + 267) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v17 + 24) = 1829LL;
      WdLogEvent5_WdAssertion(v17);
    }
    return (unsigned int)v13;
  }
  v18 = (_QWORD *)WdLogNewEntry5_WdError(v3);
  v18[3] = *((int *)this + 3);
  v18[4] = *((unsigned int *)this + 2);
  v18[5] = -1073741811LL;
  WdLogEvent5_WdError(v18);
  return 3221225485LL;
}
