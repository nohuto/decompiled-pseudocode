/*
 * XREFs of ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C00DAB14
 * Callers:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C008F1B0 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::Initialize(SESSION_ADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  SESSION_ADAPTER *v4; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rdi
  char *v9; // rsi
  struct DXGADAPTER **v10; // r14
  int PairingAdapters; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax

  v4 = this;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)v4 + 8));
  v8 = v6;
  if ( !v6 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v19[3] = *((int *)v4 + 3);
    v20 = *((unsigned int *)v4 + 2);
    LODWORD(v4) = -1073741811;
    v19[5] = -1073741811LL;
    v19[4] = v20;
LABEL_10:
    WdLogEvent5_WdError(v19);
    return (unsigned int)v4;
  }
  v9 = (char *)v4 + 24;
  v10 = (struct DXGADAPTER **)((char *)v4 + 16);
  PairingAdapters = DxgkpGetPairingAdapters(v6, 0LL, (struct DXGADAPTER **)v4 + 2, (struct DXGADAPTER **)v4 + 3);
  v4 = (SESSION_ADAPTER *)PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)v9 + 1976LL) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = 1574LL;
      WdLogEvent5_WdAssertion(v17);
    }
    goto LABEL_5;
  }
  v21 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
  *(_QWORD *)(v21 + 24) = v8;
  *(_QWORD *)(v21 + 32) = v4;
  *(_QWORD *)v9 = 0LL;
  v22 = DxgkpGetPairingAdapters(v8, 0LL, v10, 0LL);
  v4 = (SESSION_ADAPTER *)v22;
  if ( v22 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v19[3] = v8;
    v19[4] = v4;
    goto LABEL_10;
  }
LABEL_5:
  if ( !*v10 || !*((_QWORD *)*v10 + 248) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v18 + 24) = 1578LL;
    WdLogEvent5_WdAssertion(v18);
  }
  return (unsigned int)v4;
}
