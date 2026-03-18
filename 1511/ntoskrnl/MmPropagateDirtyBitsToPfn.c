/*
 * XREFs of MmPropagateDirtyBitsToPfn @ 0x1400B22A0
 * Callers:
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MmPropagateDirtyBitsToPfn(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int8 v10; // r14
  int *v11; // r12
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = (((a1 + 0x3FFFF) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    result = MI_READ_PTE_LOCK_FREE(v2);
    v12 = result;
    v5 = result;
    if ( (result & 1) != 0 && (result & 0x42) != 0 )
    {
      v6 = 0LL;
      v7 = MI_READ_PTE_LOCK_FREE(&v12);
      result = MI_IS_PFN((v7 >> 12) & 0xFFFFFFFFFLL);
      if ( !(_DWORD)result )
        continue;
      v9 = 48 * v8 - 0x58000000000LL;
      v10 = MiLockPageInline(v9);
      v11 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v9 + 40)) >> 8) & 0x3FF);
      if ( MI_READ_PTE_LOCK_FREE(v2) != v5 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = v10;
        __writecr8(v10);
        continue;
      }
      if ( (*(_BYTE *)(v9 + 34) & 0x10) == 0 || (*(_DWORD *)(v9 + 16) & 0x400LL) == 0 )
        v6 = MiCaptureDirtyBitToPfn(v9);
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = v10;
      __writecr8(v10);
      if ( v6 )
        result = MiReleasePageFileInfo(v11, v6, 0LL);
    }
    v2 += 8LL;
  }
  while ( v2 <= v3 );
  return result;
}
