/*
 * XREFs of MmMarkHiberPhase @ 0x1403CAD7C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403CAFB4 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140014200 (PsGetCurrentProcess.c)
 *     MiEnumerateLeafPtes @ 0x1400B7AA0 (MiEnumerateLeafPtes.c)
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiEnumerateKernelLeafPtes @ 0x1403C9674 (MiEnumerateKernelLeafPtes.c)
 *     MiGatherHiberRange @ 0x1403C97D4 (MiGatherHiberRange.c)
 *     MiMarkKernelPageTablePages @ 0x1403CA8B8 (MiMarkKernelPageTablePages.c)
 */

unsigned __int64 MmMarkHiberPhase()
{
  __int64 v0; // rsi
  _KPROCESS *CurrentProcess; // rax
  void *v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdi
  void *v5; // r8
  __int64 *v6; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  void *v10; // r8
  _QWORD *v11; // rcx
  _QWORD v13[6]; // [rsp+30h] [rbp-38h] BYREF

  memset(v13, 0, sizeof(v13));
  MiMarkKernelPageTablePages();
  v13[1] = 0LL;
  v13[0] = MiGatherHiberRange;
  v0 = 2LL;
  MiGatherHiberRange((__int64)v13, (void *)(PsInitialSystemProcess->DirectoryTableBase >> 12), 1LL, 2);
  MiEnumerateLeafPtes(
    0xFFFFFA8000000000uLL,
    (48 * BugCheckParameter3 - 0x57FFFFFFFD1LL) & 0xFFFFFFFFFFFFF000uLL,
    (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkNonPagedHiberPhasePages,
    0LL,
    2);
  PoSetHiberRange(0LL, 0x14000u, qword_140327728, 1uLL, 0x61676D4Du);
  CurrentProcess = PsGetCurrentProcess();
  PoSetHiberRange(0LL, 0x10000u, CurrentProcess, 0x7D0uLL, 0x62706D4Du);
  v2 = *(void **)&PsGetCurrentProcess()[2].Affinity.Count;
  if ( v2 )
    PoSetHiberRange(0LL, 0x10000u, v2, 0x1000uLL, 0x62706D4Du);
  MiEnumerateLeafPtes(
    0xFFFFFFFFFFC00000uLL,
    0xFFFFFFFFFFFFF000uLL,
    (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkNonPagedHiberPhasePages,
    0LL,
    0);
  PoSetHiberRange(0LL, 0x10000u, (PVOID)0xFFFFF78000000000LL, 0x1000uLL, 0x64736D4Du);
  PoSetHiberRange(0LL, 0x10000u, MmUnloadedDrivers, 0x7D0uLL, 0x64736D4Du);
  v3 = 0LL;
  v4 = 50LL;
  do
  {
    v5 = *(void **)((char *)MmUnloadedDrivers + v3 + 8);
    if ( v5 )
      PoSetHiberRange(0LL, 0x10000u, v5, *(unsigned __int16 *)((char *)MmUnloadedDrivers + v3), 0x64736D4Du);
    v3 += 40LL;
    --v4;
  }
  while ( v4 );
  v6 = &qword_140327610;
  do
  {
    v7 = (_QWORD *)*v6;
    v8 = 0LL;
    while ( v7 )
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
    }
    while ( v8 )
    {
      v9 = (_QWORD *)v8[1];
      v10 = v8;
      v11 = v8;
      if ( v9 )
      {
        do
        {
          v8 = v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
      }
      else
      {
        while ( 1 )
        {
          v8 = (_QWORD *)(v8[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v8 || (_QWORD *)*v8 == v11 )
            break;
          v11 = v8;
        }
      }
      PoSetHiberRange(0LL, 0x10000u, v10, 0x440uLL, 0x6F496D4Du);
    }
    ++v6;
    --v0;
  }
  while ( v0 );
  return MiEnumerateKernelLeafPtes(
           (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkHiberNotCachedPages,
           0LL);
}
