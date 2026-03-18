/*
 * XREFs of MiStoreCheckCandidatePage @ 0x14010AD28
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiGetTopLevelPfn @ 0x1400D56E0 (MiGetTopLevelPfn.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(__int64 a1, __int64 a2, unsigned __int64 *a3, _OWORD *a4, __int64 *a5)
{
  int *v8; // rax
  unsigned int v9; // r10d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // rdi
  __int64 TopLevelPfn; // rax
  struct _KPROCESS *v15; // rcx
  char v16; // al
  int v17; // edx
  _QWORD *v18; // r8
  __int128 v20; // [rsp+20h] [rbp-10h]
  __int64 v21; // [rsp+60h] [rbp+30h]

  v8 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v10 = v9 | ((unsigned __int64)(unsigned int)v8[269] << 60);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v12 = 0;
    *(_QWORD *)&v20 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v20 + 1) = 3LL;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    v12 = 0;
    if ( v11 + 0x200000000000LL <= 0xFFFFFFFFFFFLL
      || qword_1402FE8F0
      && v11 >= qword_1402FE8F0
      && v11 < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
    {
      *(_QWORD *)&v20 = v11 - 1088;
      *((_QWORD *)&v20 + 1) = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      v13 = (__int64)(v11 << 25) >> 16;
      HIDWORD(v20) = HIDWORD(v13);
      if ( v13 <= (unsigned __int64)MmHighestUserAddress
        || v13 + 0x70000000000LL <= 0x7FFFFFFFFFLL
        || v13 + 0xA8000000000LL <= 0x17FFFFFFFFFLL )
      {
        TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
        if ( TopLevelPfn == a1 )
          return (unsigned int)-1073741253;
        v15 = *(struct _KPROCESS **)TopLevelPfn;
        *(_QWORD *)&v20 = *(_QWORD *)TopLevelPfn;
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v13 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
        {
          DWORD2(v20) = v13 & 0xFFFFFFFC | 1;
        }
        else
        {
          if ( v15 == PsInitialSystemProcess )
            return (unsigned int)-1073741401;
          DWORD2(v20) = v13 & 0xFFFFFFFC;
        }
      }
      else
      {
        *(_QWORD *)&v20 = 0LL;
        DWORD2(v20) = v13 & 0xFFFFFFFC | 2;
      }
    }
  }
  v21 = *a5;
  v16 = MI_GET_PFN_PRIORITY(a1);
  *a3 = v10;
  *a4 = v20;
  LODWORD(v21) = (((unsigned __int16)(v21 & 0xF860 | ((v16 & 7) << 8)) | 0x60) ^ ((v17 != 0) << 12)) & 0x1000 ^ (v21 & 0xFFFFF860 | ((v16 & 7) << 8) | 0x60);
  *v18 = v21;
  return v12;
}
