/*
 * XREFs of ViInitSystemPhase0 @ 0x1407B9E64
 * Callers:
 *     VerifierInitSystem @ 0x1407B9E08 (VerifierInitSystem.c)
 * Callees:
 *     KiInitializeMutant @ 0x140087474 (KiInitializeMutant.c)
 *     strstr @ 0x14014D4A8 (strstr.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     VfRandomGetNumber @ 0x140702B00 (VfRandomGetNumber.c)
 *     VfInitSystemNoRebootNeeded @ 0x140703204 (VfInitSystemNoRebootNeeded.c)
 *     VfDisableCodeIntegrityBreaks @ 0x1407043A8 (VfDisableCodeIntegrityBreaks.c)
 *     VfSetVerifierRunningMode @ 0x14070FE90 (VfSetVerifierRunningMode.c)
 *     VfTriageSystem @ 0x1407B9FB0 (VfTriageSystem.c)
 *     VfInitSetVerifyDriverTargets @ 0x1407D1678 (VfInitSetVerifyDriverTargets.c)
 */

void __fastcall ViInitSystemPhase0(__int64 a1)
{
  int v1; // eax
  int v3; // ebx
  __int64 v4; // rcx
  wchar_t *v5; // rdi
  __int64 v6; // r12
  wchar_t v7; // dx
  wchar_t *i; // rbx
  int v9; // ecx
  int v10; // edi
  unsigned int v11; // esi
  unsigned int Number; // edx
  wchar_t v13; // dx
  int v14; // edx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF

  v1 = VfOptionFlags & 0x3FF;
  VfOptionFlags = v1;
  if ( (v1 & 4) != 0 )
    MmVerifierTrimFrequency = 7;
  if ( (v1 & 0x80u) != 0 )
    VfDisableCodeIntegrityBreaks();
  KiInitializeMutant((__int64)&ViDriversLoadLock, 0, 1);
  qword_140300B28 = (__int64)&VfSuspectDriversList;
  VfSuspectDriversList = (__int64)&VfSuspectDriversList;
  qword_140300628 = (__int64)&VfExcludedDriversList;
  VfExcludedDriversList = (__int64)&VfExcludedDriversList;
  qword_140300638 = (__int64)&VfXdvExcludedDriversList;
  VfXdvExcludedDriversList = (__int64)&VfXdvExcludedDriversList;
  if ( VfVerifyMode == -1 )
  {
    VfVerifyMode = 4;
    dword_1403072BC = 4;
  }
  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmVerifyDriverLevel = 0;
    ViVerifyAllDrivers = 0;
    MmVerifyDriverBufferLength = -1;
    VfSafeMode = 1;
    return;
  }
  VfTriageSystem(a1);
  ViRandomSeed = KeQueryPerformanceCounter(0LL).LowPart;
  if ( MmVerifyDriverLevel != -1 && MmVerifyDriverBufferLength == -1 )
    VfInitSetVerifyDriverTargets(L"*", 4uLL);
  v3 = ViVerifyAllDrivers;
  if ( ViVerifyAllDrivers == 1 )
    goto LABEL_18;
  if ( ViVerifyAllDrivers == 2 )
  {
    v3 = 1;
    KernelVerifier = 1;
    ViVerifyAllDrivers = 1;
    ViForceAllDriversSuspect = 1;
LABEL_18:
    MmVerifyDriverBufferLength = 0;
    goto LABEL_19;
  }
  if ( MmVerifyDriverBufferLength != -1 )
  {
LABEL_19:
    v4 = 0LL;
    VfRandomVerifiedDrivers = 0;
    goto LABEL_20;
  }
  if ( !VfRandomVerifiedDrivers )
    return;
  if ( (unsigned int)VfRandomGetNumber(0, 0xFu) < 8 )
  {
    VfRandomVerifiedDrivers = 0;
    return;
  }
  VfRandomTargetsBitMapHeader = 256;
  qword_14072C250 = (__int64)&VfRandomTargetsBitMap;
  memset(&VfRandomTargetsBitMap, 0, 0x20uLL);
  v9 = VfRandomVerifiedDrivers;
  if ( (unsigned int)VfRandomVerifiedDrivers > 0x100 )
  {
    v9 = 256;
    VfRandomVerifiedDrivers = 256;
  }
  v10 = 0;
  v11 = 0;
  if ( v9 )
  {
    do
    {
      Number = VfRandomGetNumber(1u, 0xFFu);
      if ( _bittest((const signed __int32 *)qword_14072C250, Number) )
        ++v10;
      else
        _bittestandset((signed __int32 *)qword_14072C250, Number);
      v9 = VfRandomVerifiedDrivers;
      ++v11;
    }
    while ( v11 < VfRandomVerifiedDrivers );
  }
  MmVerifyDriverBufferLength = 0;
  v4 = (unsigned int)(v9 - v10);
  VfRandomVerifiedDrivers = v4;
  MmVerifyDriverLevel = 1;
  if ( VfVerifyMode > 2 )
  {
    VfSetVerifierRunningMode(2);
    v3 = ViVerifyAllDrivers;
    v4 = (unsigned int)VfRandomVerifiedDrivers;
  }
LABEL_20:
  if ( (VfOptionFlags & 1) != 0 && !(_DWORD)v4 )
  {
LABEL_61:
    ViVerifyAllDrivers = 1;
  }
  else if ( !v3 && !(_DWORD)v4 )
  {
    v4 = (__int64)MmVerifyDriverBuffer;
    v5 = (wchar_t *)MmVerifyDriverBuffer + (((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1);
    if ( MmVerifyDriverBuffer < (__int64 *)v5 )
    {
      v6 = 0x100002601LL;
      do
      {
        v7 = *(_WORD *)v4;
        if ( *(_WORD *)v4 <= 0x20u && _bittest64(&v6, v7) || v7 == 12288 )
        {
          v4 += 2LL;
        }
        else
        {
          if ( v7 == 42 )
            goto LABEL_61;
          if ( v7 == 34 )
          {
            v4 += 2LL;
            i = (wchar_t *)(v4 + 2);
            if ( v4 + 2 >= (unsigned __int64)v5 )
              break;
            do
            {
              if ( *i == 34 )
                break;
              ++i;
            }
            while ( i < v5 );
            if ( i >= v5 )
              break;
          }
          else
          {
            for ( i = (wchar_t *)(v4 + 2); i < v5; ++i )
            {
              v13 = *i;
              if ( *i <= 0x20u )
              {
                if ( _bittest64(&v6, v13) )
                  break;
              }
              if ( v13 == 12288 )
                break;
            }
          }
          v14 = 2 * (((__int64)i - v4) >> 1);
          if ( v14 )
          {
            String2.Length = 2 * (((__int64)i - v4) >> 1);
            String2.MaximumLength = v14 + 2;
            if ( (unsigned __int16)(v14 + 2) < (unsigned __int16)v14 )
              break;
            String2.Buffer = (wchar_t *)v4;
            if ( RtlEqualUnicodeString(&VfKernelImageName, &String2, 1u) )
            {
              KernelVerifier = 1;
              break;
            }
          }
          v4 = (__int64)(i + 1);
        }
      }
      while ( v4 < (unsigned __int64)v5 );
    }
  }
  VfInitSystemNoRebootNeeded(v4, 1);
}
