/*
 * XREFs of MiDeleteTransitionPte @ 0x1400B6F88
 * Callers:
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiTryDeleteTransitionPte @ 0x1400B6E00 (MiTryDeleteTransitionPte.c)
 *     MiDeletePerSessionProtos @ 0x1401F4CF8 (MiDeletePerSessionProtos.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x1400B0704 (MiInvalidateCollidedIos.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiDeleteTransitionPte(__int64 *BugCheckParameter2, ULONG_PTR a2, unsigned __int8 a3, int a4)
{
  __int64 v6; // rdx
  ULONG_PTR v7; // r13
  _QWORD *v8; // r12
  unsigned __int64 v9; // rdi
  __int64 *PrototypePteDirect; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned int v13; // r12d
  char v14; // al
  __int64 v15; // rcx
  __int64 v16; // rbx
  unsigned __int8 v17; // cl
  ULONG_PTR v19; // rax
  ULONG_PTR BugCheckParameter4; // r10
  struct _KEVENT *v21; // [rsp+80h] [rbp+8h]
  __int64 v22; // [rsp+88h] [rbp+10h]

  v6 = (unsigned __int128)((__int64)(a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  if ( (__int64 *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
  {
    v19 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    KeBugCheckEx(0x1Au, 0x402uLL, (ULONG_PTR)BugCheckParameter2, v19, BugCheckParameter4);
  }
  v8 = (_QWORD *)(a2 + 16);
  v21 = 0LL;
  v22 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  v9 = 0LL;
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*v8);
    MiDereferenceControlAreaPfnList(*PrototypePteDirect, (__int64)PrototypePteDirect, 1LL, 2);
    v11 = MiTransferSoftwarePte(*v8, 0LL, 0LL, 0LL);
  }
  else
  {
    v11 = 0LL;
  }
  v12 = 0LL;
  if ( *(_WORD *)(a2 + 32) )
  {
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    v14 = *(_BYTE *)(a2 + 34);
    if ( (v14 & 0x20) != 0 && (v14 & 8) == 0 )
    {
      v12 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v12 + 16) == v12 + 16 )
        v12 = 0LL;
    }
    v13 = 3;
  }
  else
  {
    MiUnlinkPageFromList(a2, 0);
    if ( (*(_DWORD *)v8 & 0x400LL) == 0 )
    {
      v9 = MiCapturePageFileInfoInline((_QWORD *)(a2 + 16), 0, 1);
      v21 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF);
    }
    v13 = 4;
  }
  *BugCheckParameter2 = v11;
  if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2, v6) )
    MiWritePteShadow(v15, v11);
  if ( v13 == 4 )
    MiInsertPageInFreeOrZeroedList(v7, 2);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v16 = 48 * v22 - 0x58000000000LL;
  MiLockPageAtDpcInline(v16);
  MiDecrementShareCount(v16);
  v17 = a3;
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 != 17 )
    __writecr8(a3);
  if ( v12 )
  {
    MiInvalidateCollidedIos(v12);
    v17 = a3;
  }
  if ( v9 && a4 )
    MiReleasePageFileInfo(v21, v9, v17 == 17);
  return v13;
}
