/*
 * XREFs of MiMakeZeroedPageTables @ 0x1400697D8
 * Callers:
 *     MiMapWsMetaPage @ 0x14003C190 (MiMapWsMetaPage.c)
 *     MiExpandPtes @ 0x140068530 (MiExpandPtes.c)
 *     MiSplitBitmapPages @ 0x1400688D0 (MiSplitBitmapPages.c)
 *     MiMapNewWorkingSetPage @ 0x140068BC8 (MiMapNewWorkingSetPage.c)
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 *     MiExpandSystemCache @ 0x14006B790 (MiExpandSystemCache.c)
 *     MiExpandPagedPool @ 0x140128FF4 (MiExpandPagedPool.c)
 *     MiMapWithLargePages @ 0x140158140 (MiMapWithLargePages.c)
 *     MiExpandSpecialPool @ 0x14021F2B8 (MiExpandSpecialPool.c)
 *     MiMapSystemImage @ 0x140575D34 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x140579BF4 (MiInitializeDynamicBitmap.c)
 *     MiSessionInitializeWorkingSetList @ 0x140579F34 (MiSessionInitializeWorkingSetList.c)
 *     MiMapNewPfns @ 0x1406A1F4C (MiMapNewPfns.c)
 *     MiAllocatePartitionId @ 0x1406A3690 (MiAllocatePartitionId.c)
 *     MiMapBBTMemory @ 0x1407C8220 (MiMapBBTMemory.c)
 *     MiCreateZeroContext @ 0x1407C9940 (MiCreateZeroContext.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiPageTablesNeeded @ 0x140069BA0 (MiPageTablesNeeded.c)
 *     MiMakeZeroedPageTableRange @ 0x140069E70 (MiMakeZeroedPageTableRange.c)
 *     MiInitializeColorBase @ 0x14006AB5C (MiInitializeColorBase.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiZeroPfn @ 0x140156414 (MiZeroPfn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(unsigned __int64 a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rdi
  char v5; // al
  __int64 v7; // r8
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned int v10; // esi
  unsigned __int64 v11; // rbx
  __int64 v13; // r14
  __int16 *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // r14
  __int16 v17; // cx
  int v18; // edx
  _WORD *v19; // rax
  __int64 Page; // rax
  __int64 v21; // rdx
  unsigned __int64 *v22; // rax
  __int64 v23; // rcx
  bool v24; // cf
  bool v25; // zf
  int v26; // ecx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  int v29; // [rsp+30h] [rbp-89h]
  unsigned int v30; // [rsp+34h] [rbp-85h]
  __int64 v31; // [rsp+38h] [rbp-81h]
  char v32; // [rsp+40h] [rbp-79h]
  _WORD *v33; // [rsp+48h] [rbp-71h] BYREF
  __int16 v34; // [rsp+50h] [rbp-69h]
  unsigned __int16 v35; // [rsp+52h] [rbp-67h]
  unsigned __int64 v36; // [rsp+58h] [rbp-61h]
  __int64 v37[3]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v38; // [rsp+78h] [rbp-41h]
  int v39; // [rsp+80h] [rbp-39h]
  int v40; // [rsp+84h] [rbp-35h]
  int v41; // [rsp+88h] [rbp-31h]
  char v42; // [rsp+90h] [rbp-29h] BYREF
  char v43; // [rsp+98h] [rbp-21h] BYREF

  v4 = a1;
  v5 = a4;
  if ( a4 == 6 )
    v5 = 6;
  v32 = v5;
  if ( (a3 & 4) != 0 )
  {
    v7 = 3LL;
  }
  else if ( (a3 & 2) != 0 )
  {
    v7 = 2LL;
  }
  else
  {
    v7 = ((unsigned __int8)~(_BYTE)a3 >> 5) & 1;
  }
  v8 = (__int64)(a1 << 25) >> 16;
  v9 = a2 << 25 >> 16;
  v41 = v7;
  v10 = 0;
  v11 = MiPageTablesNeeded(v8, v9, v7, 1LL);
  if ( !v11 )
    return 1LL;
  v29 = 0;
  while ( v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL )
    v4 = (__int64)(v4 << 25) >> 16;
  v13 = 0LL;
  MiInitializeColorBase(v4, &v33);
  if ( v4 > (unsigned __int64)MmHighestUserAddress && v4 + 0xA8000000000LL > 0x17FFFFFFFFFLL )
  {
    v24 = v4 + 0x70000000000LL < 0x7FFFFFFFFFLL;
    v25 = v4 == 0xFFFFF97FFFFFFFFFuLL;
    v14 = MiSystemPartition;
    v39 = (!v24 && !v25) + 1;
  }
  else
  {
    v13 = 128LL;
    v39 = 0;
    v14 = MiPartitionIdToPointer(WORD2(KeGetCurrentThread()->ApcState.Process[1].SecurePid));
  }
  if ( (a3 & 8) != 0 || !qword_140355368 )
    goto LABEL_22;
  if ( !(unsigned int)MiChargeCommit(v14, v11, 1LL) )
    return 0LL;
  if ( !(unsigned int)MiChargeResident(v14, v11, v13, v15) )
  {
    MiReturnCommit(v14, v11);
    return 0LL;
  }
  v29 = 1;
  if ( v39 )
  {
    if ( v14 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14034F860, v11);
    if ( (a3 & 0x40) == 0 && v39 == 2 )
      _InterlockedExchangeAdd64(&qword_14034FCE8, v11);
  }
  else if ( v14 == MiSystemPartition )
  {
    _InterlockedExchangeAdd64(&qword_14034F850, v11);
  }
LABEL_22:
  v40 = a3;
  v37[0] = 0xFFFFFFFFFLL;
  v16 = 0xFFFFFFFFFLL;
  v38 = 0LL;
  v36 = 0LL;
  v17 = v34;
  v18 = v35;
  do
  {
    v19 = v33;
    ++*v33;
    v30 = v18 | (unsigned __int16)(v17 & *v19);
    Page = MiGetPage(v14, v30, 10LL);
    if ( Page == -1 )
    {
      v26 = a3 & 0x10;
      do
      {
        if ( v26 )
        {
          if ( *((_QWORD *)v14 + 688) >= 0x60uLL )
          {
            Page = MiGetPage(v14, v30, 14LL);
            if ( Page != -1 )
              break;
          }
        }
        if ( (a3 & 1) == 0 )
          goto LABEL_33;
        MiWaitForFreePage(v14);
        Page = MiGetPage(v14, v30, 10LL);
        v26 = a3 & 0x10;
      }
      while ( Page == -1 );
    }
    v31 = 48 * Page - 0x58000000000LL;
    MiFinalizePageAttribute(v31, 1LL, 0);
    v21 = v31;
    if ( *(_QWORD *)(v31 + 16) )
    {
      MiZeroPfn(v31);
      v21 = v31;
      *(_QWORD *)(v31 + 16) = 0LL;
    }
    *(_QWORD *)v21 = v16;
    if ( v39 )
      *(_BYTE *)(v21 + 38) = (16 * v32) | *(_BYTE *)(v21 + 38) & 0xF;
    v17 = v34;
    v37[0] = v21;
    v16 = v21;
    v18 = v35;
    ++v36;
  }
  while ( v36 < v11 );
  v22 = (unsigned __int64 *)&v43;
  v23 = 4LL;
  do
  {
    v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v22 - 1) = v8;
    *v22 = v9;
    v22 += 2;
    --v23;
  }
  while ( v23 );
  MiMakeZeroedPageTableRange(v8, v9, (unsigned int)&v42, 3, (__int64)v37);
  v16 = v37[0];
  v10 = 1;
LABEL_33:
  if ( v16 != 0xFFFFFFFFFLL )
  {
    do
    {
      v27 = v16;
      v16 = *(_QWORD *)v16;
      MiReleaseFreshPage(v27);
    }
    while ( v16 != 0xFFFFFFFFFLL );
    v37[0] = 0xFFFFFFFFFLL;
  }
  if ( v29 == 1 && v38 != v11 )
  {
    v28 = v11 - v38;
    MiReturnCommit(v14, v28);
    if ( v14 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v28);
      _InterlockedExchangeAdd64(&qword_14034F868, v28);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 696, v28);
    }
    if ( (a3 & 0x40) == 0 && v39 == 2 )
      _InterlockedExchangeAdd64(&qword_14034FCE8, -(__int64)v28);
  }
  return v10;
}
