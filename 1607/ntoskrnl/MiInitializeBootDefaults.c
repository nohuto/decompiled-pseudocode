/*
 * XREFs of MiInitializeBootDefaults @ 0x14078E68C
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x140002B3C (InitializeSListHead.c)
 *     KiInitializeMutant @ 0x140085B84 (KiInitializeMutant.c)
 *     ExGenRandom @ 0x1400F0494 (ExGenRandom.c)
 *     strstr @ 0x14014CF38 (strstr.c)
 *     MmIsVerifierEnabled @ 0x1406FE214 (MmIsVerifierEnabled.c)
 */

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

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmLargePageDriverBufferLength = -1;
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_140327799 = 1;
    dword_1403A913C = 0;
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
  LODWORD(dword_140327388[0]) = 275;
  qword_1403273A0 = (__int64)MiAllocatePfnRepurposeLogDispatch;
  qword_1403273A8 = 0LL;
  qword_1403273C0 = 0LL;
  qword_140327398 = 0LL;
  KiInitializeMutant((__int64)&Mutant, 0, 0);
  qword_140326878 = 0LL;
  v6 = byte_140327660;
  for ( i = 0; i < 2; ++i )
  {
    InitializeSListHead(&stru_140327640[i]);
    if ( i )
      *v6 = 2 * byte_140327660[i - 1];
    else
      *v6 = 8;
    ++v6;
  }
  dword_1403271B0 = 5;
  qword_140326980 = (__int64)&qword_140326978;
  qword_140326978 = (__int64)&qword_140326978;
  qword_140326970 = -10000000LL * dword_1403A9158;
  qword_1403271C0 = 0LL;
  qword_140327740 = 0LL;
  qword_140326560 = 0LL;
  qword_140326578 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_140326578 += -25165824 - result;
  return result;
}
