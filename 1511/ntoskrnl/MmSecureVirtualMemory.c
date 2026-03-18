/*
 * XREFs of MmSecureVirtualMemory @ 0x1404A6550
 * Callers:
 *     RtlFileMapMapView @ 0x140219770 (RtlFileMapMapView.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     VerifierMmSecureVirtualMemory @ 0x1406C0B00 (VerifierMmSecureVirtualMemory.c)
 * Callees:
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiSecureVad @ 0x140415A20 (MiSecureVad.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  char *v3; // rsi
  unsigned int *v7; // rax
  unsigned int *v8; // rdi
  int v9; // ebx
  HANDLE result; // rax
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)Address + Size;
  if ( (char *)Address + Size > MmHighestUserAddress )
    return 0LL;
  if ( v3 <= Address )
    return 0LL;
  v7 = MiObtainReferencedVad((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL, &v11);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  if ( (((v7[12] & 7) - 3) & 0xFFFFFFFD) == 0
    || (unsigned __int64)(v3 - 1) >> 12 > (v7[7] | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32)) )
  {
    MiUnlockAndDereferenceVad(v7);
    return 0LL;
  }
  if ( ProbeMode != 2 )
    ProbeMode = 4;
  v9 = MiSecureVad((ULONG_PTR)v7, (__int64)Address, Size, ProbeMode, (__int64 *)&v11);
  MiUnlockAndDereferenceVad(v8);
  result = v11;
  if ( v9 < 0 )
    return 0LL;
  return result;
}
