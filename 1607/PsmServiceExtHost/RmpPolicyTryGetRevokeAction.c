/*
 * XREFs of RmpPolicyTryGetRevokeAction @ 0x1800343D0
 * Callers:
 *     ?TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180011B4C (-TransitionFGSharedResources@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     RmpActivityHostRevokeResourceSets @ 0x18002F600 (RmpActivityHostRevokeResourceSets.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@W4Enum@Priority@ExecutionModel@@PEAVResourceSet@7@@Z @ 0x180033EF0 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 *     ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180035E94 (-RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpPolicyTryGetRevokeAction(__int64 a1, int a2, int *a3)
{
  __int64 v3; // rax
  __int16 v4; // r9
  __int16 v5; // ax
  int v6; // edx
  int v7; // edx
  unsigned int v8; // ebx
  int v9; // eax

  v3 = *(_QWORD *)(a1 + 1400);
  if ( v3 )
    v4 = *(_WORD *)(v3 + 666);
  else
    LOBYTE(v4) = 102;
  v5 = *(_WORD *)(a1 + 1456);
  v6 = a2 - 1;
  if ( !v6 )
  {
    v8 = 1;
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v8 = 1;
      if ( (*(_WORD *)(a1 + 1456) & 2) != 0 && (v4 & 0x20) != 0 )
        goto LABEL_11;
LABEL_13:
      if ( (v5 & 1) == 0 )
        return 0;
LABEL_15:
      v9 = 0;
      goto LABEL_16;
    }
    return 0;
  }
  v8 = 1;
  if ( (v5 & 1) != 0 )
    goto LABEL_15;
  if ( (v5 & 2) == 0 )
    return 0;
LABEL_11:
  v9 = 1;
LABEL_16:
  if ( a3 )
    *a3 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 1368) + 88LL))(a1 + 1368);
  return v8;
}
