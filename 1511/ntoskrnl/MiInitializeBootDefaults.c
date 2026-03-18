/*
 * XREFs of MiInitializeBootDefaults @ 0x14076F498
 * Callers:
 *     MmInitNucleus @ 0x140748C60 (MmInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     KiInitializeMutant @ 0x14007CCC0 (KiInitializeMutant.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     strstr @ 0x140143918 (strstr.c)
 *     MmIsVerifierEnabled @ 0x1406B24BC (MmIsVerifierEnabled.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  int v4; // ebx
  int v5; // ebx
  _BYTE *v6; // rdi
  unsigned int i; // ebx
  __int64 result; // rax
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  MmSystemRangeStart = (const PVOID)0xFFFF800000000000LL;
  MmUserProbeAddress = 0x7FFFFFFF0000LL;
  MmHighestUserAddress = (const PVOID)0x7FFFFFFEFFFFLL;
  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmLargePageDriverBufferLength = -1;
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_1402FF6D9 = 1;
    dword_1403810F0 = 0;
    MEMORY[0xFFFFF780000002EC] = 1;
    v4 = MiFlags;
  }
  else
  {
    v1 = MmPageValidationFrequency;
    if ( _BitScanReverse((unsigned int *)&v3, MmPageValidationFrequency) )
      v1 = 1 << v3;
    v4 = MiFlags;
    MmPageValidationFrequency = v1;
    if ( v1 )
    {
      MmPageValidationFrequency = v1 - 1;
      v4 = MiFlags | 0x80;
    }
    if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 )
    {
      v4 |= 1u;
      if ( KernelVerifier == 1 )
        v4 |= 2u;
    }
    if ( MmSpecialPoolTag )
      MmProtectFreedNonPagedPool = 1;
    if ( (v4 & 1) != 0 )
    {
      MmLargePageDriverBufferLength = -1;
      MmProtectFreedNonPagedPool = 1;
    }
  }
  v5 = v4 | 8;
  MiFlags = v5;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    MiFlags = v5 | 0x40;
  LODWORD(dword_1402FEF88[0]) = 275;
  qword_1402FEFA0 = (__int64)MiAllocatePfnRepurposeLogDispatch;
  qword_1402FEFA8 = 0LL;
  qword_1402FEFC0 = 0LL;
  qword_1402FEF98 = 0LL;
  KiInitializeMutant((__int64)&Mutant, 0LL, 0LL);
  qword_1402FE5A8 = 0LL;
  v6 = byte_1402FF210;
  for ( i = 0; i < 2; ++i )
  {
    InitializeSListHead(&stru_1402FF1F0[i]);
    if ( i )
      *v6 = 2 * byte_1402FF210[i - 1];
    else
      *v6 = 8;
    ++v6;
  }
  dword_1402FEDB0 = 5;
  qword_1402FE690 = -10000000LL * dword_140381110;
  qword_1402FEDC0 = 0LL;
  qword_1402FE2B8 = (__int64)MmHighestUserAddress - 0x9FFFF0000LL;
  SpinLock = 0LL;
  qword_1402FE2A0 = 0LL;
  qword_1402FE6A0 = (__int64)&qword_1402FE698;
  qword_1402FE698 = (__int64)&qword_1402FE698;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_1402FE2B8 += -25165824 - result;
  return result;
}
