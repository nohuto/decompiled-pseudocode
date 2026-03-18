/*
 * XREFs of MmMarkHiberPhase @ 0x1403F16C0
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403F1A14 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiEnumerateLeafPtes @ 0x1400DCA4C (MiEnumerateLeafPtes.c)
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiEnumerateKernelLeafPtes @ 0x1403F0340 (MiEnumerateKernelLeafPtes.c)
 *     MiGatherHiberRange @ 0x1403F042C (MiGatherHiberRange.c)
 *     MiMarkKernelPageTablePages @ 0x1403F1558 (MiMarkKernelPageTablePages.c)
 */

unsigned __int64 MmMarkHiberPhase()
{
  __int64 v0; // rsi
  void *v1; // r8
  __int64 v2; // rbx
  __int64 v3; // rdi
  void *v4; // r8
  __int64 *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  void *v9; // r8
  _QWORD *v10; // rcx
  _QWORD v12[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(&v12[1], 0, 0x20uLL);
  MiMarkKernelPageTablePages();
  v12[1] = 0LL;
  v12[0] = MiGatherHiberRange;
  v0 = 2LL;
  MiGatherHiberRange((__int64)v12, (void *)(PsInitialSystemProcess->DirectoryTableBase >> 12), 1LL, 2);
  MiEnumerateLeafPtes(
    0xFFFFFA8000000000uLL,
    (48 * BugCheckParameter3 - 0x57FFFFFFFD1LL) & 0xFFFFFFFFFFFFF000uLL,
    (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkNonPagedHiberPhasePages,
    0LL);
  PoSetHiberRange(0LL, 0x10000u, KeGetCurrentThread()->ApcState.Process, 0x7B0uLL, 0x62706D4Du);
  v1 = *(void **)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
  if ( v1 )
    PoSetHiberRange(0LL, 0x10000u, v1, 0x1000uLL, 0x62706D4Du);
  MiEnumerateLeafPtes(
    0xFFFFFFFFFFC00000uLL,
    0xFFFFFFFFFFFFF000uLL,
    (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkNonPagedHiberPhasePages,
    0LL);
  PoSetHiberRange(0LL, 0x10000u, (PVOID)0xFFFFF78000000000LL, 0x1000uLL, 0x64736D4Du);
  PoSetHiberRange(0LL, 0x10000u, qword_140350048, 0x7D0uLL, 0x64736D4Du);
  v2 = 0LL;
  v3 = 50LL;
  do
  {
    v4 = *(void **)((char *)qword_140350048 + v2 + 8);
    if ( v4 )
      PoSetHiberRange(0LL, 0x10000u, v4, *(unsigned __int16 *)((char *)qword_140350048 + v2), 0x64736D4Du);
    v2 += 40LL;
    --v3;
  }
  while ( v3 );
  v5 = &qword_14034F650;
  do
  {
    v6 = (_QWORD *)*v5;
    v7 = 0LL;
    while ( v6 )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
    }
    while ( v7 )
    {
      v8 = (_QWORD *)v7[1];
      v9 = v7;
      v10 = v7;
      if ( v8 )
      {
        do
        {
          v7 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        while ( 1 )
        {
          v7 = (_QWORD *)(v7[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v7 || (_QWORD *)*v7 == v10 )
            break;
          v10 = v7;
        }
      }
      PoSetHiberRange(0LL, 0x10000u, v9, 0x440uLL, 0x6F496D4Du);
    }
    ++v5;
    --v0;
  }
  while ( v0 );
  return MiEnumerateKernelLeafPtes(
           (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkHiberNotCachedPages,
           0LL);
}
