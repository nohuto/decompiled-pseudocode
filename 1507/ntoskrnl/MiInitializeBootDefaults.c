/*
 * XREFs of MiInitializeBootDefaults @ 0x1407E29A0
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     KiInitializeMutant @ 0x1400756B8 (KiInitializeMutant.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 *     MmIsVerifierEnabled @ 0x1407324BC (MmIsVerifierEnabled.c)
 *     MiInitializeSystemPteTracker @ 0x1407E2C50 (MiInitializeSystemPteTracker.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 *__fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  int v4; // ebx
  int v5; // ebx
  _BYTE *v6; // rdi
  unsigned int i; // ebx
  __int64 v8; // rbx
  __int64 *result; // rax
  ULONG VerifierFlags; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h]

  MmSystemRangeStart = (const PVOID)0xFFFF800000000000LL;
  MmUserProbeAddress = 0x7FFFFFFF0000LL;
  MmHighestUserAddress = (const PVOID)0x7FFFFFFEFFFFLL;
  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmLargePageDriverBufferLength = -1;
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_14034FB99 = 1;
    dword_1403D00E0 = 0;
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
  dword_14034F448 = 275;
  qword_14034F460 = (__int64)MiAllocatePfnRepurposeLogDispatch;
  qword_14034F468 = 0LL;
  qword_14034F480 = 0LL;
  qword_14034F458 = 0LL;
  KiInitializeMutant((__int64)&Mutant, 0, 0);
  qword_14034EA68 = 0LL;
  v6 = byte_14034F6D0;
  for ( i = 0; i < 2; ++i )
  {
    InitializeSListHead(&stru_14034F6B0[i]);
    if ( i )
      *v6 = 2 * byte_14034F6D0[i - 1];
    else
      *v6 = 8;
    ++v6;
  }
  dword_14034F270 = 5;
  qword_14034EB40 = -10000000LL * dword_1403D0100;
  qword_14034F280 = 0LL;
  qword_14034E7B8 = (__int64)MmHighestUserAddress - 0x9FFFF0000LL;
  SpinLock = 0LL;
  qword_14034E7A0 = 0LL;
  qword_14034EB50 = (__int64)&qword_14034EB48;
  qword_14034EB48 = (__int64)&qword_14034EB48;
  qword_14034E7B8 = (__int64)MmHighestUserAddress
                  + -25165824LL
                  - ((unsigned __int8)ExGenRandom(1) << 16)
                  - 0x9FFFF0000LL;
  if ( MmDynamicMemorySupported )
  {
    v8 = MmDynamicPfn << 18;
    if ( !(MmDynamicPfn << 18) )
    {
      v11 = 0LL;
      VerifierFlags = 8;
      if ( (int)off_140321B18() >= 0 )
        v8 = v11 / 4096;
    }
    MmDynamicPfn = v8;
  }
  else
  {
    MmDynamicPfn = 0LL;
  }
  MiInitializeSystemPteTracker();
  result = &qword_14034F660;
  qword_14034F668 = (__int64)&qword_14034F660;
  qword_14034F660 = (__int64)&qword_14034F660;
  qword_14034F640 = 0LL;
  qword_14034F648[0] = 0LL;
  qword_14034F650 = 0LL;
  qword_14034F658 = 0LL;
  return result;
}
