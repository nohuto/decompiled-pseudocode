/*
 * XREFs of MiDeletePteRange @ 0x1400A1370
 * Callers:
 *     MiDeleteAllHashMappings @ 0x14001C23C (MiDeleteAllHashMappings.c)
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     MiRemoveWorkingSetPages @ 0x1400B94A0 (MiRemoveWorkingSetPages.c)
 *     MiConvertWsleHash @ 0x1400CED80 (MiConvertWsleHash.c)
 *     MiDeleteExcessWorkingSetPages @ 0x1400F46A0 (MiDeleteExcessWorkingSetPages.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     MiFreeUnmappedPageTables @ 0x1400A1CD0 (MiFreeUnmappedPageTables.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MiReplicatePteChange @ 0x14013F8C8 (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiDeletePteRange(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  ULONG_PTR NextPageTable; // rsi
  __int64 v14; // rax
  _KPROCESS *v15; // rdx
  __int64 v16; // rbx
  ULONG_PTR v17; // r15
  __int64 v18; // rsi
  unsigned int v19; // r12d
  ULONG_PTR v20; // rbx
  __int64 v21; // rax
  __int16 v22; // cx
  _KPROCESS *v23; // rdx
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // al
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  char v28; // al
  __int64 v30; // [rsp+30h] [rbp-D0h] BYREF
  int v31; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+40h] [rbp-C0h]
  __int64 v33; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 VmPartition; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h]
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+90h] [rbp-70h] BYREF
  __int16 v43; // [rsp+94h] [rbp-6Ch]
  __int64 v44; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]

  v31 = a4;
  v39 = 0LL;
  v38 = 0LL;
  v4 = a2;
  v40 = 0LL;
  v41 = 0LL;
  VmPartition = MiGetVmPartition(a1, a2, a3);
  v6 = VmPartition;
  v44 = 20LL;
  v7 = MiTbFlushType(a1);
  v10 = v9 - 8;
  v42 = v7;
  v43 = 0;
  v11 = 0LL;
  v33 = 0LL;
  v12 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v34 = v9 - 8;
  v30 = 0LL;
  if ( v4 <= v9 - 8 )
  {
    while ( 1 )
    {
      LOBYTE(v8) = 17;
      NextPageTable = MiGetNextPageTable(v4, v10, 0LL, v8, 5, &v37);
      if ( !NextPageTable )
        goto LABEL_27;
      do
      {
        v14 = MI_READ_PTE_LOCK_FREE(NextPageTable);
        v16 = v14;
        if ( (v14 & 1) != 0 )
        {
          if ( (v31 & 0x20) != 0 )
            *(_DWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(NextPageTable) - 0x57FFFFFFFECLL) = 0;
          MiDeleteValidSystemPte(NextPageTable, (__int64)&v30);
LABEL_7:
          ++v12;
          goto LABEL_15;
        }
        if ( (v14 & 0x400) != 0 )
          goto LABEL_15;
        if ( (v14 & 0x800) != 0 )
        {
          if ( (unsigned int)MiDeleteTransitionPte(NextPageTable, 1) != 1 )
            goto LABEL_7;
          v16 = MI_READ_PTE_LOCK_FREE(NextPageTable);
        }
        MiReleasePageFileSpace(v6, v16, 1LL);
        if ( v16 )
        {
          *(_QWORD *)NextPageTable = 0LL;
          ++v12;
          if ( (unsigned int)MiPteInShadowRange(NextPageTable) )
            MiWritePteShadow(NextPageTable, 0LL);
        }
LABEL_15:
        NextPageTable += 8LL;
      }
      while ( NextPageTable <= v10 && (NextPageTable & 0xFFF) != 0 );
      v32 = v12;
      v36 = NextPageTable;
      MiFlushTbList((__int64)&v42, v15);
      MiFreeUnmappedPageTables(v30, &v38);
      v17 = NextPageTable - 8;
      v30 = 0LL;
      v18 = v33;
      v19 = 1;
      v20 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v21 = MI_GET_PFN_FROM_PTE(v20);
        if ( (*(_QWORD *)(v21 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          break;
        v22 = *(_WORD *)(v21 + 32);
        if ( v22 != 1 && (v22 != 2 || (*(_BYTE *)(v21 + 34) & 8) == 0) )
          break;
        MiDeleteValidSystemPte(v20, (__int64)&v30);
        if ( v19 == 3 && *(_QWORD *)(a1 + 184) != 0xFFFFF58010804000uLL )
          MiReplicatePteChange(v17, v17);
        MiFlushTbList((__int64)&v42, v23);
        MiFreeUnmappedPageTables(v30, &v38);
        v30 = 0LL;
        ++v18;
        v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        ++v19;
      }
      while ( v19 < 4 );
      v10 = v34;
      v12 = v32;
      v6 = VmPartition;
      v33 = v18;
      v4 = v36;
      if ( v36 > v34 )
      {
LABEL_27:
        LOBYTE(v8) = v31;
        v11 = v33;
        break;
      }
    }
  }
  v24 = v11 + v12;
  if ( (v8 & 0x10) != 0 )
  {
    v25 = *(_BYTE *)(a1 + 216) & 7;
    if ( v25 != 1 )
    {
      v26 = *(_QWORD *)(a1 + 144);
      v27 = *(_QWORD *)(a1 + 152) - v24;
      *(_QWORD *)(a1 + 152) = v27;
      if ( v26 )
      {
        if ( v25 >= 2u || v27 + v24 <= v26 )
        {
          v24 = 0LL;
        }
        else if ( v27 < v26 )
        {
          v24 += v27 - v26;
        }
      }
    }
  }
  else if ( (v8 & 0x20) != 0 )
  {
    if ( !v24 )
      return v24;
    v28 = *(_BYTE *)(a1 + 216);
    *(_QWORD *)(a1 + 160) -= v24;
    if ( (v28 & 7) != 1 )
      _InterlockedExchangeAdd64(&qword_1402FF838, -(__int64)v24);
  }
  if ( v24 )
  {
    if ( (int *)v6 == MiSystemPartition )
    {
      MiReturnResidentAvailable(v24);
      _InterlockedExchangeAdd64(&qword_1402FF3C8, v24);
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 5952), v24);
    }
    v24 -= v39;
    MiReturnCommit(v6, v24);
  }
  return v24;
}
