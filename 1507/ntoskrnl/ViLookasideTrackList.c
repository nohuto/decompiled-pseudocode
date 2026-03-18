/*
 * XREFs of ViLookasideTrackList @ 0x14074BA1C
 * Callers:
 *     VerifierExInitializeNPagedLookasideList @ 0x14074B574 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14074B680 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     <none>
 */

void __fastcall ViLookasideTrackList(ULONG_PTR a1, int a2)
{
  PVOID (__stdcall *v2)(POOL_TYPE, SIZE_T, ULONG); // rax
  __int64 (__fastcall *v3)(__int64, int, __int64); // rax

  if ( a2 && *(void (__stdcall **)(PVOID))(a1 + 56) == ExFreePool )
  {
    v2 = *(PVOID (__stdcall **)(POOL_TYPE, SIZE_T, ULONG))(a1 + 48);
    if ( v2 == ExAllocatePoolWithTag )
    {
      v3 = VerifierExAllocatePoolWithTag;
LABEL_7:
      *(_QWORD *)(a1 + 48) = v3;
      *(_QWORD *)(a1 + 56) = VerifierExFreePool;
      goto LABEL_8;
    }
    if ( v2 == ExAllocatePoolWithQuotaTag )
    {
      v3 = VerifierExAllocatePoolWithQuotaTag;
      goto LABEL_7;
    }
  }
LABEL_8:
  ViLookasideAdd(a1);
}
