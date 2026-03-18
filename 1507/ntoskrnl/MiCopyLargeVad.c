/*
 * XREFs of MiCopyLargeVad @ 0x1406A9BD0
 * Callers:
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1401153C0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1401159C0 (MiMapContiguousMemory.c)
 *     MiLocateVadEvent @ 0x140122918 (MiLocateVadEvent.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall MiCopyLargeVad(__int64 a1)
{
  char *v1; // rsi
  unsigned int v2; // r15d
  __int64 *VadEvent; // rax
  __int64 v4; // r8
  __int64 v5; // r14
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  void *v9; // rbp

  v1 = (char *)((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
  v2 = (*(_DWORD *)(a1 + 48) >> 3) & 0x1F;
  VadEvent = MiLocateVadEvent(a1, 16);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL);
  v6 = *(_QWORD **)v5;
  *(_BYTE *)(v5 + 28) = *(_BYTE *)(VadEvent[2] + 28);
  *(_QWORD *)(v5 + 32) = *(_QWORD *)(VadEvent[2] + 32);
  while ( v6 != (_QWORD *)v5 )
  {
    v7 = v6[3] << 12;
    result = MiMapContiguousMemory(v6[2] << 12, v7, v2, 0);
    v9 = (void *)result;
    if ( !result )
      return result;
    memmove((void *)result, v1, v7);
    MmUnmapIoSpace(v9, v7);
    v6 = (_QWORD *)*v6;
    v1 += v7;
  }
  return 1LL;
}
