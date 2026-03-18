/*
 * XREFs of MiMapWsMetaPage @ 0x1400A90C0
 * Callers:
 *     MiMapWsleHash @ 0x1400AA33C (MiMapWsleHash.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiSetPfnTbFlushStamp @ 0x140071D20 (MiSetPfnTbFlushStamp.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiMapWsMetaPage(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // r12d
  int *VmPartition; // rbp
  _WORD *v7; // r8
  __int16 v8; // ax
  __int64 Page; // rax
  __int64 v10; // rbx
  int v11; // r14d
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  unsigned int v15; // r14d
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v22; // rbp
  unsigned int Queue_high; // esi
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rbx
  _WORD *v30; // [rsp+20h] [rbp-78h] BYREF
  __int16 v31; // [rsp+28h] [rbp-70h]
  unsigned __int16 v32; // [rsp+2Ah] [rbp-6Eh]
  __int64 v33; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-60h]
  unsigned __int64 v35; // [rsp+40h] [rbp-58h]
  unsigned __int64 v36; // [rsp+48h] [rbp-50h]
  __int64 v37; // [rsp+50h] [rbp-48h]

  if ( (*(_BYTE *)(a1 + 219) & 2) != 0 )
    return 0LL;
  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1;
  VmPartition = MiGetVmPartition(a1);
  if ( !(unsigned int)MiChargeCommit((unsigned __int64)VmPartition, 1uLL, 1uLL) )
    return 0LL;
  if ( !(unsigned int)MiChargeResident(VmPartition, 1LL, 128LL) )
  {
    MiReturnCommit((__int64)VmPartition, 1uLL);
    return 0LL;
  }
  if ( VmPartition == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_1402FF390, 1uLL);
  MI_INITIALIZE_COLOR_BASE(a1, 0, (__int64)&v30);
  v7 = v30;
  v8 = v31;
  ++*v30;
  Page = MiGetPage((__int64)VmPartition, v32 | (unsigned int)(unsigned __int16)(v8 & *v7), 2u);
  v10 = Page;
  if ( Page == -1 )
    goto LABEL_27;
  v11 = 0;
  v12 = 48 * Page - 0x58000000000LL;
  if ( *(_QWORD *)(v12 + 16) )
  {
    MiZeroPhysicalPage(Page, 1LL, 1LL);
    *(_QWORD *)(v12 + 16) = 0LL;
  }
  v34 = v4;
  v35 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v36 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v13) = 4;
  v37 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v13 = (unsigned int)(v13 - 1);
    if ( (*(_BYTE *)*(&v34 + v13) & 1) == 0 )
      break;
    if ( (_DWORD)v13 == 1 )
      goto LABEL_17;
  }
  v5 = v13 + 1;
LABEL_17:
  if ( v5 > 1 )
  {
    v14 = *(_BYTE *)(a1 + 216) & 7;
    if ( v14 < 2u )
    {
      LOBYTE(v11) = v14 != 1;
      v15 = v11 + 1;
    }
    else if ( (LONG *)a1 == &dword_1402FF880 )
    {
      v15 = 8;
    }
    else
    {
      v15 = 9;
      if ( (LONG *)a1 == &dword_1402FF980 )
        v15 = 6;
    }
    if ( !(unsigned int)MiMakeZeroedPageTables(v4, v4, 64, v15) )
    {
      MiReleaseFreshPage(v12);
LABEL_27:
      if ( VmPartition == MiSystemPartition )
      {
        MiReturnResidentAvailable(1uLL);
        _InterlockedExchangeAdd64(&qword_1402FF3D8, 1uLL);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)VmPartition + 744, 1uLL);
      }
      MiReturnCommit((__int64)VmPartition, 1uLL);
      return 0LL;
    }
  }
  *(_QWORD *)v4 = 128LL;
  v16 = MiPteInShadowRange(v4);
  if ( v16 )
    MiWritePteShadow(v4, 128LL);
  v17 = MI_READ_PTE_LOCK_FREE(v4);
  *(_BYTE *)(v12 + 34) |= 0x10u;
  *(_QWORD *)(v12 + 16) = v17 & 0xFFFFFFFFFF003FFFuLL;
  *(_WORD *)(v12 + 32) = 1;
  v33 = MI_READ_PTE_LOCK_FREE(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v18 = MI_GET_PAGE_FRAME_FROM_PTE(&v33);
  v20 = 0xFFFFFFFFFLL;
  *(_QWORD *)(v12 + 40) ^= (v18 ^ *(_QWORD *)(v12 + 40)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  v22 = 48 * v18 - 0x58000000000LL;
  Queue_high = HIDWORD(CurrentThread[1].Queue);
  if ( (Queue_high & 0x100) != 0 )
    v24 = (Queue_high >> 9) & 7;
  else
    LOBYTE(v24) = PsGetPagePriorityThread((__int64)CurrentThread);
  MiLockPageAtDpcInline(v12, v20, v19);
  MiLockNestedPageAtDpcInline(v22, v25, v26);
  *(_QWORD *)(v22 + 24) ^= (*(_QWORD *)(v22 + 24) ^ (*(_QWORD *)(v22 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (*(_BYTE *)(v12 + 34) & 0xC0) != 0x40 )
    MiChangePageAttribute(v12, 1LL, 1LL);
  MiSetPfnTbFlushStamp(v12, 0LL, 1);
  *(_QWORD *)(v12 + 24) = *(_QWORD *)(v12 + 24) & 0xC000000000000000uLL | 1;
  *(_BYTE *)(v12 + 35) ^= (v24 ^ *(_BYTE *)(v12 + 35)) & 7;
  *(_QWORD *)(v12 + 8) = v34;
  *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 6;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v27 = (_QWORD *)v34;
  v28 = qword_140381320 ^ (qword_140381320 ^ (v10 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( v34 + 0x904C0000000LL <= 0x3FFFFFFF )
    v28 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v34 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v34 >= 0xFFFFF68000000000uLL
    || v34 >= 0xFFFFF6FB40000000uLL
    && v34 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v34 >= 0xFFFFF6FB7DA00000uLL
    && v34 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || v34 >= 0xFFFFF6FB7DBED000uLL
    && v34 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v28 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v34) )
    v28 |= 0x100uLL;
  v29 = v28 | 0x42;
  *v27 = v29;
  if ( v16 )
    MiWritePteShadow(v27, v29);
  return v5;
}
