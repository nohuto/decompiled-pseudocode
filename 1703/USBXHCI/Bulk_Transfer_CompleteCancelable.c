/*
 * XREFs of Bulk_Transfer_CompleteCancelable @ 0x1C0003348
 * Callers:
 *     Bulk_MapStage @ 0x1C00031B8 (Bulk_MapStage.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BA50 (Bulk_ProcessTransferEventWithED1.c)
 *     Bulk_PrepareStage @ 0x1C000BE40 (Bulk_PrepareStage.c)
 *     Bulk_RetrieveNextStage @ 0x1C000C460 (Bulk_RetrieveNextStage.c)
 *     Bulk_ProcessTransferEventWithHaltedCompletion @ 0x1C002B520 (Bulk_ProcessTransferEventWithHaltedCompletion.c)
 * Callees:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C000343C (Bulk_Transfer_PrepareForCompletion.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_DDDqd @ 0x1C002C4F0 (WPP_RECORDER_SF_DDDqd.c)
 */

void __fastcall Bulk_Transfer_CompleteCancelable(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v5; // esi
  int v7; // edx
  __int64 v8; // rdx
  int v9; // r8d
  __int64 **v10; // rcx
  __int64 v11; // rcx
  __int64 **v12; // rax
  __int64 *v13; // rcx
  __int64 **v14; // rax

  v5 = a3;
  v7 = *((_DWORD *)a2 + 12) - 1;
  if ( v7 )
  {
    if ( v7 == 2 )
    {
      if ( !a4 )
        return;
      v11 = *a2;
      if ( a3 == -1 )
        v5 = -1073676288;
      v12 = (__int64 **)a2[1];
      if ( *(__int64 **)(v11 + 8) != a2 || *v12 != a2 )
        __fastfail(3u);
      *v12 = (__int64 *)v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
LABEL_22:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
    Bulk_Transfer_PrepareForCompletion(a1, a2, v5);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
      WdfDriverGlobals,
      a2[3],
      *((unsigned int *)a2 + 14));
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    return;
  }
  v13 = (__int64 *)*a2;
  v14 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v14 != a2 )
    __fastfail(3u);
  *v14 = v13;
  v13[1] = (__int64)v14;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2048))(WdfDriverGlobals, a2[3]) >= 0 )
  {
    *((_DWORD *)a2 + 12) = 0;
    goto LABEL_22;
  }
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(unsigned __int8 *)(v8 + 135);
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_DDDqd(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v8, v9, 41);
  *((_DWORD *)a2 + 12) = 2;
  v10 = *(__int64 ***)(a1 + 344);
  if ( *v10 != (__int64 *)(a1 + 336) )
    __fastfail(3u);
  *a2 = a1 + 336;
  a2[1] = (__int64)v10;
  *v10 = a2;
  *(_QWORD *)(a1 + 344) = a2;
}
