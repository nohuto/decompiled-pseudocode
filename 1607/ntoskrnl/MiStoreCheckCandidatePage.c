/*
 * XREFs of MiStoreCheckCandidatePage @ 0x140119734
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiGetTopLevelPfn @ 0x1401086F0 (MiGetTopLevelPfn.c)
 *     MiIsStoreProcess @ 0x14010AC04 (MiIsStoreProcess.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(__int64 a1, __int64 a2, unsigned __int64 *a3, _OWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // rbp
  int *v9; // rax
  unsigned int v10; // r10d
  unsigned __int64 v11; // rbx
  unsigned int v12; // esi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 TopLevelPfn; // rax
  __int64 v17; // rcx
  int v18; // edi
  char PfnPriority; // al
  __int128 v20; // xmm0
  unsigned int v21; // eax
  int v22; // edx
  _QWORD *v23; // r8
  _BYTE v25[32]; // [rsp+60h] [rbp+60h] BYREF

  v5 = (_QWORD *)((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL);
  v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  v11 = v10 | ((unsigned __int64)(unsigned int)v9[265] << 60);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v12 = 0;
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
    *(_DWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 3;
  }
  else
  {
    v12 = 0;
    v13 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    if ( v13 >= qword_140327F60[0] && v13 < qword_140327F60[0] + 0x100000000000LL
      || qword_140326C70
      && v13 >= qword_140326C70
      && v13 < qword_140326C70 + (qword_140326C50 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((v13 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0xD0 )
    {
      *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v13 - 1088;
      *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0xFFFFF6FB7DBED000uLL;
      *(_DWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) &= 0xFFFFFFFC;
      goto LABEL_14;
    }
    v14 = qword_140326950;
    v15 = (__int64)(v13 << 25) >> 16;
    *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v15;
    if ( (v15 < v14 || v15 >= v14 + 0x8000000000LL)
      && v15 > 0x7FFFFFFEFFFFLL
      && (v15 < qword_140327FD0 || v15 > qword_140326D38)
      && (v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
      v18 = v15 & 0xFFFFFFFC | 2;
    }
    else
    {
      TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
      if ( TopLevelPfn == a1 )
        return (unsigned int)-1073741253;
      v17 = *(_QWORD *)TopLevelPfn;
      *(_QWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = *(_QWORD *)TopLevelPfn;
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v15 >= qword_140326950 && v15 < qword_140326950 + 0x8000000000LL )
      {
        *(_DWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v15 & 0xFFFFFFFC | 1;
        goto LABEL_14;
      }
      if ( MiIsStoreProcess(v17) )
        return (unsigned int)-1073741401;
      v18 = v15 & 0xFFFFFFFC;
    }
    *(_DWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v18;
  }
LABEL_14:
  *v5 = *a5;
  PfnPriority = MiGetPfnPriority(a1);
  v20 = *(_OWORD *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  v21 = *(_DWORD *)v5 & 0xFFFF0C00 | ((PfnPriority & 7) << 13);
  *a3 = v11;
  *a4 = v20;
  *(_DWORD *)v5 = ((v21 | 0xC00) ^ ((v22 != 0) << 17)) & 0x20000 ^ (v21 | 0xC00);
  *v23 = *v5;
  return v12;
}
