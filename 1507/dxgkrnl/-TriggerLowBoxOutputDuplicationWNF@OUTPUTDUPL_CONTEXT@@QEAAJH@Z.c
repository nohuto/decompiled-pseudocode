/*
 * XREFs of ?TriggerLowBoxOutputDuplicationWNF@OUTPUTDUPL_CONTEXT@@QEAAJH@Z @ 0x1C01593E4
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0157918 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0157BF8 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::TriggerLowBoxOutputDuplicationWNF(
        OUTPUTDUPL_CONTEXT *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int updated; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+50h] [rbp-18h]
  int v17; // [rsp+54h] [rbp-14h]
  int CurrentProcessSessionId; // [rsp+78h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 37);
  v6 = a2;
  if ( !*(_QWORD *)v4 )
    goto LABEL_6;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)v4 + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 2358LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *(_QWORD *)v4 )
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 16LL) + 252LL);
  else
LABEL_6:
    v9 = 0LL;
  v16 = *((_DWORD *)this + 4);
  v15[0] = *((_QWORD *)this + 4);
  v15[1] = v9;
  v17 = v6;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, a2, a3, a4);
  updated = ZwUpdateWnfStateData(&WNF_DX_MODERN_OUTPUTDUPLICATION, v15, 24LL, 0LL, &CurrentProcessSessionId, 0, 0);
  v12 = updated;
  if ( updated < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
