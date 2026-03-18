/*
 * XREFs of ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C009FAB4
 * Callers:
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C009EE04 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

__int64 __fastcall SESSION_ADAPTER::Initialize(SESSION_ADAPTER *this)
{
  SESSION_ADAPTER *v1; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v3; // rax
  __int64 v4; // rcx
  struct DXGADAPTER *v5; // rdi
  char *v6; // rsi
  struct DXGADAPTER **v7; // r14
  int PairingAdapters; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax

  v1 = this;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v3 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)v1 + 8));
  v5 = v3;
  if ( !v3 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v16[3] = *((int *)v1 + 3);
    v17 = *((unsigned int *)v1 + 2);
    LODWORD(v1) = -1073741811;
    v16[5] = -1073741811LL;
    v16[4] = v17;
LABEL_10:
    WdLogEvent5_WdError(v16);
    return (unsigned int)v1;
  }
  v6 = (char *)v1 + 24;
  v7 = (struct DXGADAPTER **)((char *)v1 + 16);
  PairingAdapters = DxgkpGetPairingAdapters(v3, 0, (struct DXGADAPTER **)v1 + 2, (struct DXGADAPTER **)v1 + 3);
  v1 = (SESSION_ADAPTER *)PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)v6 + 1984LL) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v14 + 24) = 1575LL;
      WdLogEvent5_WdAssertion(v14);
    }
    goto LABEL_5;
  }
  v18 = WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  *(_QWORD *)(v18 + 24) = v5;
  *(_QWORD *)(v18 + 32) = v1;
  *(_QWORD *)v6 = 0LL;
  v19 = DxgkpGetPairingAdapters(v5, 0, v7, 0LL);
  v1 = (SESSION_ADAPTER *)v19;
  if ( v19 < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v10);
    v16[3] = v5;
    v16[4] = v1;
    goto LABEL_10;
  }
LABEL_5:
  if ( !*v7 || !*((_QWORD *)*v7 + 249) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v15 + 24) = 1579LL;
    WdLogEvent5_WdAssertion(v15);
  }
  return (unsigned int)v1;
}
