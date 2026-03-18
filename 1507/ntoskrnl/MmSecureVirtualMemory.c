/*
 * XREFs of MmSecureVirtualMemory @ 0x14052FA34
 * Callers:
 *     RtlFileMapMapView @ 0x140269450 (RtlFileMapMapView.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     VerifierMmSecureVirtualMemory @ 0x140742340 (VerifierMmSecureVirtualMemory.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MiSecureVad @ 0x140477960 (MiSecureVad.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  char *v3; // rsi
  ULONG_PTR v7; // rax
  char *v8; // rdi
  int v9; // ebx
  HANDLE result; // rax
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)Address + Size;
  if ( (char *)Address + Size > MmHighestUserAddress )
    return 0LL;
  if ( v3 <= Address )
    return 0LL;
  v7 = MiObtainReferencedVad((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL, &v11);
  v8 = (char *)v7;
  if ( !v7 )
    return 0LL;
  if ( (((*(_DWORD *)(v7 + 48) & 7) - 3) & 0xFFFFFFFD) == 0
    || (unsigned __int64)(v3 - 1) >> 12 > (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
  {
    MiUnlockAndDereferenceVad((char *)v7);
    return 0LL;
  }
  if ( ProbeMode != 2 )
    ProbeMode = 4;
  v9 = MiSecureVad(v7, (__int64)Address, Size, ProbeMode, (__int64 *)&v11);
  MiUnlockAndDereferenceVad(v8);
  result = v11;
  if ( v9 < 0 )
    return 0LL;
  return result;
}
