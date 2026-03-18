/*
 * XREFs of MiDuplicateCloneLeaf @ 0x1400F3798
 * Callers:
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInitializePfnForOtherProcess @ 0x140018484 (MiInitializePfnForOtherProcess.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiDuplicateCloneLeaf(__int64 a1, unsigned __int64 *a2, ULONG_PTR a3, char a4, unsigned __int8 a5)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // r15
  __int64 v15; // rbx
  int v16; // r13d
  volatile LONG *v17; // rdi
  __int64 v19; // rsi
  unsigned __int8 v20; // r9
  unsigned __int64 v21; // rbx
  __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  __int64 v24; // r14
  unsigned __int8 v25; // bl
  int v26; // [rsp+20h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-40h]
  char v28; // [rsp+28h] [rbp-40h]
  unsigned __int64 v29; // [rsp+30h] [rbp-38h] BYREF
  volatile LONG *v30; // [rsp+38h] [rbp-30h]

  v9 = MI_READ_PTE_LOCK_FREE(a1);
  v12 = v9;
  v29 = v9;
  if ( (v9 & 1) != 0 )
  {
    v13 = MI_READ_PTE_LOCK_FREE(&v29);
    v10 = 0xFFFFFFFFFLL;
    v14 = (v13 >> 12) & 0xFFFFFFFFFLL;
    v15 = 48 * v14 - 0x58000000000LL;
    v30 = (volatile LONG *)((*(_DWORD *)(v15 + 16) >> 5) & 0x1F);
    v16 = 1;
  }
  else
  {
    v14 = (v9 >> 12) & 0xFFFFFFFFFLL;
    v15 = 48 * v14 - 0x58000000000LL;
    if ( (*(_BYTE *)(v15 + 34) & 0x20) != 0 )
    {
      v17 = (volatile LONG *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
      v30 = v17;
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v10) = a4;
      MiUnlockWorkingSetExclusive((__int64)v17, v10, v11);
      CurrentThread = KeGetCurrentThread();
      ++BYTE2(CurrentThread[1].Teb);
      --BYTE2(CurrentThread[1].Teb);
      ExAcquireSpinLockExclusive(v17);
      return 0LL;
    }
    LODWORD(v30) = (v9 >> 5) & 0x1F;
    v16 = 0;
  }
  v19 = 48 * a3 - 0x58000000000LL;
  if ( v16 == 1 )
  {
    v20 = 1;
  }
  else
  {
    MiLockNestedPageAtDpcInline(v19, v10, v11);
    v20 = 4;
  }
  MiCopyPage(a3, v14, 0LL, v20);
  if ( !v16 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = v29;
  }
  v28 = MI_GET_PFN_PRIORITY(v15);
  v26 = *(unsigned __int8 *)(v15 + 34) >> 6;
  if ( v16 == 1 )
  {
    v21 = v12 & 0xFFFF00000000081EuLL | (32 * (((a3 & 0xFFFFFFFFFLL) << 7) | (unsigned __int8)v30 & 0x1F | 0x40));
    v22 = a3;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a5);
    v22 = a3;
    v21 = (v29 ^ (a3 << 12)) & 0xFFFFFFFFF000LL ^ v29;
  }
  v29 = v21;
  *a2 = v21;
  if ( (unsigned int)MiPteInShadowRange(a2) )
    MiWritePteShadow(a2, v21);
  if ( (*(_BYTE *)(8 * (((unsigned __int64)a2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)((((unsigned __int64)a2 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (v23 = *(_QWORD *)((((unsigned __int64)a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL), (v23 & 0x81) == 0x81) )
  {
    v24 = ((v23 >> 12) & 0xFFFFFFFFFLL) + (((unsigned __int64)a2 >> 12) & 0x1FF);
  }
  else
  {
    v24 = MI_GET_PAGE_FRAME_FROM_PTE((((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  MiInitializePfnForOtherProcess(v22, a1, v24, 16);
  *(_QWORD *)(v19 + 16) ^= (*(_DWORD *)(v19 + 16) ^ (32 * (_DWORD)v30)) & 0x3E0;
  v25 = MiLockPageInline(v19);
  if ( *(unsigned __int8 *)(v19 + 34) >> 6 != v26 )
    MiChangePageAttribute(v19, v26, 3u);
  *(_BYTE *)(v19 + 35) ^= (v28 ^ *(_BYTE *)(v19 + 35)) & 7;
  *(_BYTE *)(v19 + 34) = *(_BYTE *)(v19 + 34) & 0xF8 | 6;
  MiDecrementShareCount(v19);
  _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v25);
  return 1LL;
}
