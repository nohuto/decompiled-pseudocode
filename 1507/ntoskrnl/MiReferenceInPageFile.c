/*
 * XREFs of MiReferenceInPageFile @ 0x140088848
 * Callers:
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x1404B2C24 (MiPfExecuteReadList.c)
 * Callees:
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiComputeImagePteIndex @ 0x140087F2C (MiComputeImagePteIndex.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

__int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rsi
  char v12; // r9

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 )
    return 0LL;
  v8 = MI_REFERENCE_CONTROL_AREA_FILE(*(_QWORD *)(a1 + 200));
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 104));
    v9 = *(_QWORD *)(a1 + 248);
    v10 = *(_QWORD **)(v2 + 96);
    if ( !v9 )
      v9 = a1 + 256;
    v11 = 48LL * *(_QWORD *)(v9 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 184) = MiComputeImagePteIndex(v11, a2, v6, v7);
    if ( *v10 )
    {
      *(_BYTE *)(a1 + 190) |= 8u;
      if ( (BYTE2(MiFlags) & 3) == 3
        && (!MiCanPageMove(v11)
         || (*(_DWORD *)(v2 + 92) & 0xC000000) != 0
         && (v10[1] & 0xFFFFFFFFFFFFFFF8uLL) != 8
         && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v11 + 16) & 2) != 0) )
      {
        *(_BYTE *)(a1 + 190) = v12 & 0xF7;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  return v8;
}
