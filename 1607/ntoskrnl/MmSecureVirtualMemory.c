/*
 * XREFs of MmSecureVirtualMemory @ 0x14042985C
 * Callers:
 *     RtlFileMapMapView @ 0x14023374C (RtlFileMapMapView.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     AslpFileLargeMapCreate @ 0x1406C9AA8 (AslpFileLargeMapCreate.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiSecureVad @ 0x140429950 (MiSecureVad.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  char *v3; // rsi
  int v5; // ebp
  int v6; // ebx
  unsigned __int64 v7; // rax
  char *v8; // rdi
  int v9; // ebx
  HANDLE result; // rax
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)Address + Size;
  v5 = Size;
  v6 = (int)Address;
  if ( (unsigned __int64)Address + Size > 0x7FFFFFFEFFFFLL )
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
  v9 = MiSecureVad(v7, v6, v5, ProbeMode, (__int64)&v11);
  MiUnlockAndDereferenceVad(v8);
  result = v11;
  if ( v9 < 0 )
    return 0LL;
  return result;
}
