/*
 * XREFs of MiInitializeBootDefaults @ 0x14078E68C
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     KiInitializeMutant @ 0x140087474 (KiInitializeMutant.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     strstr @ 0x14014D4A8 (strstr.c)
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
    byte_1403277D9 = 1;
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
  LODWORD(dword_1403273C8[0]) = 275;
  qword_1403273E0 = (__int64)MiAllocatePfnRepurposeLogDispatch;
  qword_1403273E8 = 0LL;
  qword_140327400 = 0LL;
  qword_1403273D8 = 0LL;
  KiInitializeMutant((__int64)&Mutant, 0, 0);
  qword_1403268B8 = 0LL;
  v6 = byte_1403276A0;
  for ( i = 0; i < 2; ++i )
  {
    InitializeSListHead(&stru_140327680[i]);
    if ( i )
      *v6 = 2 * byte_1403276A0[i - 1];
    else
      *v6 = 8;
    ++v6;
  }
  dword_1403271F0 = 5;
  qword_1403269C0 = (__int64)&qword_1403269B8;
  qword_1403269B8 = (__int64)&qword_1403269B8;
  qword_1403269B0 = -10000000LL * dword_1403A9158;
  qword_140327200 = 0LL;
  qword_140327780 = 0LL;
  qword_1403265A0 = 0LL;
  qword_1403265B8 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_1403265B8 += -25165824 - result;
  return result;
}
