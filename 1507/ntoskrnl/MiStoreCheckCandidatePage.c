/*
 * XREFs of MiStoreCheckCandidatePage @ 0x14013FCD8
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiGetTopLevelPfn @ 0x1400FD760 (MiGetTopLevelPfn.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(__int64 a1, __int64 a2, unsigned __int64 *a3, _OWORD *a4, _QWORD *a5)
{
  __int16 *v8; // rax
  unsigned int v9; // r10d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // rdi
  __int64 TopLevelPfn; // rax
  struct _KPROCESS *v15; // rcx
  char v16; // al
  BOOL v17; // r9d
  char v18; // r8
  __int64 v19; // rax
  __int128 v21; // [rsp+20h] [rbp-10h]
  __int64 v22; // [rsp+60h] [rbp+30h]

  v8 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v10 = v9 | ((unsigned __int64)*((unsigned int *)v8 + 261) << 60);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v12 = 0;
    *(_QWORD *)&v21 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v21 + 1) = 3LL;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    v12 = 0;
    if ( v11 + 0x200000000000LL <= 0xFFFFFFFFFFFLL
      || qword_14034EDB0
      && v11 >= qword_14034EDB0
      && v11 < qword_14034EDB0 + (qword_14034ED90 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
    {
      *(_QWORD *)&v21 = v11 - 1088;
      *((_QWORD *)&v21 + 1) = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      v13 = (__int64)(v11 << 25) >> 16;
      HIDWORD(v21) = HIDWORD(v13);
      if ( v13 <= (unsigned __int64)MmHighestUserAddress
        || v13 + 0x70000000000LL <= 0x7FFFFFFFFFLL
        || v13 + 0xA8000000000LL <= 0x17FFFFFFFFFLL )
      {
        TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
        if ( TopLevelPfn == a1 )
          return (unsigned int)-1073741253;
        v15 = *(struct _KPROCESS **)TopLevelPfn;
        *(_QWORD *)&v21 = *(_QWORD *)TopLevelPfn;
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v13 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
        {
          DWORD2(v21) = v13 & 0xFFFFFFFC | 1;
        }
        else
        {
          if ( v15 == PsInitialSystemProcess )
            return (unsigned int)-1073741401;
          DWORD2(v21) = v13 & 0xFFFFFFFC;
        }
      }
      else
      {
        *(_QWORD *)&v21 = 0LL;
        DWORD2(v21) = v13 & 0xFFFFFFFC | 2;
      }
    }
  }
  v16 = *(_BYTE *)(a1 + 35);
  v17 = (*(_BYTE *)(a1 + 34) & 0xC0) != 64;
  if ( (v16 & 8) != 0 )
    v18 = 5;
  else
    v18 = v16 & 7;
  *a3 = v10;
  HIDWORD(v22) = HIDWORD(*a5);
  v19 = *a5 & 0xFFFFF860LL;
  *a4 = v21;
  LODWORD(v22) = (((unsigned __int16)(v19 | ((v18 & 7) << 8)) | 0x60) ^ (v17 << 12)) & 0x1000 ^ (v19 | ((v18 & 7) << 8) | 0x60);
  *a5 = v22;
  return v12;
}
