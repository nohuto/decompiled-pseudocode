/*
 * XREFs of ViInitSystemPhase0 @ 0x1407E50D8
 * Callers:
 *     VerifierInitSystem @ 0x1407E507C (VerifierInitSystem.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400756B8 (KiInitializeMutant.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     VfInitSystemNoRebootNeeded @ 0x140736CF8 (VfInitSystemNoRebootNeeded.c)
 *     VfRandomGetNumber @ 0x140737648 (VfRandomGetNumber.c)
 *     VfDisableCodeIntegrityBreaks @ 0x140738818 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x140745668 (VfSetVerifierRunningMode.c)
 *     VfTriageSystem @ 0x1407E5224 (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x1407FBBCC (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1)
{
  char v1; // al
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  wchar_t *v6; // rdi
  __int64 v7; // r12
  wchar_t v8; // dx
  wchar_t *i; // rbx
  int v10; // ecx
  int v11; // edi
  unsigned int v12; // esi
  unsigned int Number; // edx
  wchar_t v14; // dx
  int v15; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  v1 = VfOptionFlags;
  if ( (VfOptionFlags & 0xFFFFFC00) != 0 )
  {
    v1 = 0;
    VfOptionFlags = 0;
  }
  if ( (v1 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( v1 < 0 )
    VfDisableCodeIntegrityBreaks();
  KiInitializeMutant((__int64)&ViDriversLoadLock, 0, 1);
  qword_14032BB48 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_14032B5F8 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_14032B648 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = 4;
    dword_140331D7C = 4;
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
    v4 = -1LL;
    do
      ++v4;
    while ( asc_1407ECE90[v4] );
    VfInitSetVerifyDriverTargets(L"*", (unsigned int)(2 * v4 + 2));
  }
  v3 = ViVerifyAllDrivers;
  if ( ViVerifyAllDrivers == 1 )
    goto LABEL_22;
  if ( ViVerifyAllDrivers == 2 )
  {
    v3 = 1;
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
    v5 = 0LL;
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
  qword_140763248 = (__int64)&VfRandomTargetsBitMap;
  memset(&VfRandomTargetsBitMap, 0, 0x20uLL);
  v10 = VfRandomVerifiedDrivers;
  if ( (unsigned int)VfRandomVerifiedDrivers > 0x100 )
  {
    v10 = 256;
    VfRandomVerifiedDrivers = 256;
  }
  v11 = 0;
  v12 = 0;
  if ( v10 )
  {
    do
    {
      Number = VfRandomGetNumber(1u, 0xFFu);
      if ( _bittest((const signed __int32 *)qword_140763248, Number) )
        ++v11;
      else
        _bittestandset((signed __int32 *)qword_140763248, Number);
      v10 = VfRandomVerifiedDrivers;
      ++v12;
    }
    while ( v12 < VfRandomVerifiedDrivers );
  }
  v5 = (unsigned int)(v10 - v11);
  MmVerifyDriverLevel = 1;
  VfRandomVerifiedDrivers = v5;
  MmVerifyDriverBufferLength = 0;
  if ( VfVerifyMode > 2 )
  {
    VfSetVerifierRunningMode(2);
    v3 = ViVerifyAllDrivers;
    v5 = (unsigned int)VfRandomVerifiedDrivers;
  }
LABEL_24:
  if ( (VfOptionFlags & 1) != 0 && !(_DWORD)v5 )
  {
LABEL_65:
    ViVerifyAllDrivers = 1;
  }
  else if ( !v3 && !(_DWORD)v5 )
  {
    v5 = (__int64)MmVerifyDriverBuffer;
    v6 = (wchar_t *)MmVerifyDriverBuffer + (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1);
    if ( MmVerifyDriverBuffer < (__int64 *)v6 )
    {
      v7 = 0x100002601LL;
      do
      {
        v8 = *(_WORD *)v5;
        if ( *(_WORD *)v5 <= 0x20u && _bittest64(&v7, v8) || v8 == 12288 )
        {
          v5 += 2LL;
        }
        else
        {
          if ( v8 == 42 )
            goto LABEL_65;
          if ( v8 == 34 )
          {
            v5 += 2LL;
            i = (wchar_t *)(v5 + 2);
            if ( v5 + 2 >= (unsigned __int64)v6 )
              break;
            do
            {
              if ( *i == 34 )
                break;
              ++i;
            }
            while ( i < v6 );
            if ( i >= v6 )
              break;
          }
          else
          {
            for ( i = (wchar_t *)(v5 + 2); i < v6; ++i )
            {
              v14 = *i;
              if ( *i <= 0x20u )
              {
                if ( _bittest64(&v7, v14) )
                  break;
              }
              if ( v14 == 12288 )
                break;
            }
          }
          v15 = 2 * (((__int64)i - v5) >> 1);
          if ( v15 )
          {
            String2.Length = 2 * (((__int64)i - v5) >> 1);
            String2.MaximumLength = v15 + 2;
            if ( (unsigned __int16)(v15 + 2) < (unsigned __int16)v15 )
              break;
            String2.Buffer = (wchar_t *)v5;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
          v5 = (__int64)(i + 1);
        }
      }
      while ( v5 < (unsigned __int64)v6 );
    }
  }
  VfInitSystemNoRebootNeeded(v5, 1);
}
