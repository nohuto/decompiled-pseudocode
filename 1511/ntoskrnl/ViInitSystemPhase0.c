/*
 * XREFs of ViInitSystemPhase0 @ 0x14076F8BC
 * Callers:
 *     VerifierInitSystem @ 0x14076F860 (VerifierInitSystem.c)
 * Callees:
 *     KiInitializeMutant @ 0x14007CCC0 (KiInitializeMutant.c)
 *     strstr @ 0x140143918 (strstr.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     VfInitSystemNoRebootNeeded @ 0x1406B6A08 (VfInitSystemNoRebootNeeded.c)
 *     VfRandomGetNumber @ 0x1406B72E0 (VfRandomGetNumber.c)
 *     VfDisableCodeIntegrityBreaks @ 0x1406B82F4 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x1406C3DC8 (VfSetVerifierRunningMode.c)
 *     VfTriageSystem @ 0x14076FA08 (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x140785268 (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  wchar_t *v8; // rdi
  __int64 v9; // r12
  wchar_t v10; // dx
  wchar_t *i; // rbx
  int v12; // ecx
  int v13; // edi
  unsigned int v14; // esi
  unsigned int Number; // edx
  wchar_t v16; // dx
  int v17; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  v3 = VfOptionFlags;
  if ( (VfOptionFlags & 0xFFFFFC00) != 0 )
  {
    v3 = 0;
    VfOptionFlags = 0;
  }
  if ( (v3 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( v3 < 0 )
    VfDisableCodeIntegrityBreaks();
  LOBYTE(a3) = 1;
  KiInitializeMutant((__int64)&ViDriversLoadLock, 0LL, a3);
  qword_1402DB7E8 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_1402DB2D8 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_1402DB2E8 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = 4;
    dword_1402E18FC = 4;
  }
  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmVerifyDriverLevel = 0;
    MmVerifyDriverBufferLength = -1;
    ViVerifyAllDrivers = 0;
    VfSafeMode = 1;
    return;
  }
  VfTriageSystem(a1);
  ViRandomSeed = KeQueryPerformanceCounter(0LL).LowPart;
  if ( MmVerifyDriverLevel != -1 && MmVerifyDriverBufferLength == -1 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( asc_140775D00[v6] );
    VfInitSetVerifyDriverTargets(L"*", (unsigned int)(2 * v6 + 2));
  }
  v5 = ViVerifyAllDrivers;
  if ( ViVerifyAllDrivers == 1 )
    goto LABEL_22;
  if ( ViVerifyAllDrivers == 2 )
  {
    v5 = 1;
    KernelVerifier = 1;
    ViVerifyAllDrivers = 1;
    ViForceAllDriversSuspect = 1;
LABEL_22:
    MmVerifyDriverBufferLength = 0;
    goto LABEL_23;
  }
  if ( MmVerifyDriverBufferLength != -1 )
  {
LABEL_23:
    v7 = 0LL;
    VfRandomVerifiedDrivers = 0;
    goto LABEL_24;
  }
  if ( !VfRandomVerifiedDrivers )
    return;
  if ( (unsigned int)VfRandomGetNumber(0, 0xFu) < 8 )
  {
    VfRandomVerifiedDrivers = 0;
    return;
  }
  VfRandomTargetsBitMapHeader = 256;
  qword_1406E0248 = (__int64)&VfRandomTargetsBitMap;
  memset(&VfRandomTargetsBitMap, 0, 0x20uLL);
  v12 = VfRandomVerifiedDrivers;
  if ( (unsigned int)VfRandomVerifiedDrivers > 0x100 )
  {
    v12 = 256;
    VfRandomVerifiedDrivers = 256;
  }
  v13 = 0;
  v14 = 0;
  if ( v12 )
  {
    do
    {
      Number = VfRandomGetNumber(1u, 0xFFu);
      if ( _bittest((const signed __int32 *)qword_1406E0248, Number) )
        ++v13;
      else
        _bittestandset((signed __int32 *)qword_1406E0248, Number);
      v12 = VfRandomVerifiedDrivers;
      ++v14;
    }
    while ( v14 < VfRandomVerifiedDrivers );
  }
  v7 = (unsigned int)(v12 - v13);
  MmVerifyDriverLevel = 1;
  VfRandomVerifiedDrivers = v7;
  MmVerifyDriverBufferLength = 0;
  if ( VfVerifyMode > 2 )
  {
    VfSetVerifierRunningMode(2);
    v5 = ViVerifyAllDrivers;
    v7 = (unsigned int)VfRandomVerifiedDrivers;
  }
LABEL_24:
  if ( (VfOptionFlags & 1) != 0 && !(_DWORD)v7 )
  {
LABEL_65:
    ViVerifyAllDrivers = 1;
  }
  else if ( !v5 && !(_DWORD)v7 )
  {
    v7 = (__int64)MmVerifyDriverBuffer;
    v8 = (wchar_t *)MmVerifyDriverBuffer + (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1);
    if ( MmVerifyDriverBuffer < (__int64 *)v8 )
    {
      v9 = 0x100002601LL;
      do
      {
        v10 = *(_WORD *)v7;
        if ( *(_WORD *)v7 <= 0x20u && _bittest64(&v9, v10) || v10 == 12288 )
        {
          v7 += 2LL;
        }
        else
        {
          if ( v10 == 42 )
            goto LABEL_65;
          if ( v10 == 34 )
          {
            v7 += 2LL;
            i = (wchar_t *)(v7 + 2);
            if ( v7 + 2 >= (unsigned __int64)v8 )
              break;
            do
            {
              if ( *i == 34 )
                break;
              ++i;
            }
            while ( i < v8 );
            if ( i >= v8 )
              break;
          }
          else
          {
            for ( i = (wchar_t *)(v7 + 2); i < v8; ++i )
            {
              v16 = *i;
              if ( *i <= 0x20u )
              {
                if ( _bittest64(&v9, v16) )
                  break;
              }
              if ( v16 == 12288 )
                break;
            }
          }
          v17 = 2 * (((__int64)i - v7) >> 1);
          if ( v17 )
          {
            String2.Length = 2 * (((__int64)i - v7) >> 1);
            String2.MaximumLength = v17 + 2;
            if ( (unsigned __int16)(v17 + 2) < (unsigned __int16)v17 )
              break;
            String2.Buffer = (wchar_t *)v7;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
          v7 = (__int64)(i + 1);
        }
      }
      while ( v7 < (unsigned __int64)v8 );
    }
  }
  VfInitSystemNoRebootNeeded(v7, 1);
}
