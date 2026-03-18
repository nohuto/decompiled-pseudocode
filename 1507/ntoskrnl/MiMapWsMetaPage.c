/*
 * XREFs of MiMapWsMetaPage @ 0x14003C190
 * Callers:
 *     MiMapWsleHash @ 0x14003C764 (MiMapWsleHash.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiMapWsMetaPage(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int16 *VmPartition; // rsi
  _WORD *v6; // r8
  __int16 v7; // ax
  __int64 Page; // rax
  __int64 v9; // rbx
  int v10; // ebp
  __int64 v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  unsigned int v15; // ebp
  __int64 DemandZeroPte; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rbx
  _WORD *v20; // [rsp+20h] [rbp-78h] BYREF
  __int16 v21; // [rsp+28h] [rbp-70h]
  unsigned __int16 v22; // [rsp+2Ah] [rbp-6Eh]
  unsigned __int64 v23; // [rsp+30h] [rbp-68h]
  unsigned __int64 v24; // [rsp+38h] [rbp-60h]
  unsigned __int64 v25; // [rsp+40h] [rbp-58h]
  __int64 v26; // [rsp+48h] [rbp-50h]

  if ( (*(_BYTE *)(a1 + 219) & 2) != 0 )
    return 0LL;
  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  VmPartition = MiGetVmPartition(a1);
  if ( !(unsigned int)MiChargeCommit(VmPartition, 1LL, 1LL) )
    return 0LL;
  if ( !(unsigned int)MiChargeResident(VmPartition, 1LL, 128LL) )
  {
    MiReturnCommit(VmPartition, 1LL);
    return 0LL;
  }
  if ( VmPartition == MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_14034F810, 1uLL);
  MI_INITIALIZE_COLOR_BASE(a1, 0LL, &v20);
  v6 = v20;
  v7 = v21;
  ++*v20;
  Page = MiGetPage(VmPartition, v22 | (unsigned int)(unsigned __int16)(v7 & *v6), 2LL);
  v9 = Page;
  if ( Page == -1 )
    goto LABEL_27;
  v10 = 0;
  v11 = 48 * Page - 0x58000000000LL;
  if ( *(_QWORD *)(v11 + 16) )
  {
    MiZeroPhysicalPage(Page, 1LL, 1LL);
    *(_QWORD *)(v11 + 16) = 0LL;
  }
  v23 = v4;
  v12 = 1;
  v24 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v13) = 4;
  v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v13 = (unsigned int)(v13 - 1);
    if ( (*(_BYTE *)*(&v23 + v13) & 1) == 0 )
      break;
    if ( (_DWORD)v13 == 1 )
      goto LABEL_17;
  }
  v12 = v13 + 1;
LABEL_17:
  if ( v12 > 1 )
  {
    v14 = *(_BYTE *)(a1 + 216) & 7;
    if ( v14 < 2u )
    {
      LOBYTE(v10) = v14 != 1;
      v15 = v10 + 1;
    }
    else if ( (signed __int32 *)a1 == dword_14034FD40 )
    {
      v15 = 8;
    }
    else
    {
      v15 = 9;
      if ( (signed __int32 *)a1 == dword_14034FE40 )
        v15 = 6;
    }
    if ( !(unsigned int)MiMakeZeroedPageTables(v4, v4, 64LL, v15) )
    {
      MiReleaseFreshPage(v11);
LABEL_27:
      if ( VmPartition == MiSystemPartition )
      {
        MiReturnResidentAvailable(1uLL);
        _InterlockedExchangeAdd64(&qword_14034F858, 1uLL);
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)VmPartition + 696, 1uLL);
      }
      MiReturnCommit(VmPartition, 1LL);
      return 0LL;
    }
  }
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  *(_QWORD *)v4 = DemandZeroPte;
  if ( v4 + 0x90482413000LL <= 0x7F8 )
    MiWritePteShadow(v4, DemandZeroPte);
  MiInitializePfn(v11, v4, 4LL);
  v17 = 0x904C0000000LL;
  v18 = qword_1403D0230 ^ (qword_1403D0230 ^ (v9 << 12)) & 0xFFFFFFFFF000LL | 0x21;
  if ( v4 + 0x904C0000000LL <= 0x3FFFFFFF )
    v18 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
  if ( v4 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && v4 >= 0xFFFFF68000000000uLL
    || v4 >= 0xFFFFF6FB40000000uLL
    && v4 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || v4 >= 0xFFFFF6FB7DA00000uLL
    && (v17 = 0x90482600000LL, v4 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL)
    || v4 >= 0xFFFFF6FB7DBED000uLL
    && v4 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    v18 |= 4uLL;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v4, v17, 0x98000000000LL) )
    v18 |= 0x100uLL;
  v19 = v18 | 0x42;
  *(_QWORD *)v4 = v19;
  if ( v4 + 0x90482413000LL <= 0x7F8 )
    MiWritePteShadow(v4, v19);
  return v12;
}
