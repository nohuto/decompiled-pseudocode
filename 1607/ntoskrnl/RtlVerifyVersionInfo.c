/*
 * XREFs of RtlVerifyVersionInfo @ 0x14012EF2C
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerGetConditionMask @ 0x14012F1E0 (RtlpVerGetConditionMask.c)
 *     RtlpVerCompare @ 0x14012F1FC (RtlpVerCompare.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlGetVersion @ 0x1404C17B0 (RtlGetVersion.c)
 */

NTSTATUS __stdcall RtlVerifyVersionInfo(PRTL_OSVERSIONINFOEXW VersionInfo, ULONG TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  char v8; // al
  int v9; // edi
  WORD wSuiteMask; // ax
  unsigned int v11; // r10d
  int v12; // r11d
  int v13; // r9d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  int v19; // eax
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE VersionInformation[284]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(VersionInformation, 0, sizeof(VersionInformation));
  *(_DWORD *)VersionInformation = 284;
  result = RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      wSuiteMask = VersionInfo->wSuiteMask;
      if ( wSuiteMask )
      {
        v11 = 0;
        v12 = wSuiteMask;
        do
        {
          v13 = 1 << v11;
          if ( (v12 & (1 << v11)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
              v14 = RtlpVerGetConditionMask(ConditionMask, 64LL);
            else
              v14 = 0;
            v15 = v14 - 6;
            if ( v15 )
            {
              if ( v15 != 1 )
                return -1073741811;
              if ( (*(_WORD *)&VersionInformation[280] & (unsigned __int16)v13) != 0 )
                v6 = 1;
            }
            else if ( (*(_WORD *)&VersionInformation[280] & (unsigned __int16)v13) == 0 )
            {
              return -1073741735;
            }
          }
          ++v11;
        }
        while ( v11 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
          return -1073741735;
      }
    }
    v8 = 1;
    v20[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
        v9 = RtlpVerGetConditionMask(ConditionMask, 2LL);
      else
        v9 = (unsigned __int8)(ConditionMask >> 4);
      v17 = (unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInfo->dwMajorVersion,
                               *(_DWORD *)&VersionInformation[4],
                               (unsigned int)v20,
                               0) == 0;
      v8 = v20[0];
      if ( v17 )
      {
        if ( !v20[0] )
          return -1073741735;
      }
      else if ( !v20[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
        v9 = RtlpVerGetConditionMask(ConditionMask, 1LL);
      else
        v9 = (unsigned __int8)(ConditionMask >> 2);
    }
    v17 = (unsigned __int8)RtlpVerCompare(
                             v9,
                             VersionInfo->dwMinorVersion,
                             *(_DWORD *)&VersionInformation[8],
                             (unsigned int)v20,
                             1) == 0;
    v8 = v20[0];
    if ( v17 )
    {
      if ( !v20[0] )
        return -1073741735;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v9 == 1 )
      {
        if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
          v9 = RtlpVerGetConditionMask(ConditionMask, 32LL);
        else
          v9 = 0;
      }
      if ( !(unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInfo->wServicePackMajor,
                               *(unsigned __int16 *)&VersionInformation[276],
                               (unsigned int)v20,
                               0) )
      {
        if ( !v20[0] )
          return -1073741735;
        goto LABEL_9;
      }
      v8 = v20[0];
    }
    if ( v8 )
    {
LABEL_9:
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 == 1 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
            v9 = RtlpVerGetConditionMask(ConditionMask, 16LL);
          else
            v9 = 0;
        }
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v9,
                                 VersionInfo->wServicePackMinor,
                                 *(unsigned __int16 *)&VersionInformation[278],
                                 (unsigned int)v20,
                                 1) )
          return -1073741735;
      }
    }
LABEL_10:
    if ( (v4 & 4) != 0 )
    {
      v18 = (ConditionMask & 0x8000000000000000uLL) != 0
          ? RtlpVerGetConditionMask(ConditionMask, 4LL)
          : BYTE2(ConditionMask);
      if ( !(unsigned __int8)RtlpVerCompare(
                               v18,
                               VersionInfo->dwBuildNumber,
                               *(_DWORD *)&VersionInformation[12],
                               (unsigned int)v20,
                               0) )
        return -1073741735;
    }
    if ( (v4 & 8) != 0 )
    {
      v19 = (ConditionMask & 0x8000000000000000uLL) != 0 ? RtlpVerGetConditionMask(ConditionMask, 8LL) : 0;
      if ( !(unsigned __int8)RtlpVerCompare(
                               v19,
                               VersionInfo->dwPlatformId,
                               *(_DWORD *)&VersionInformation[16],
                               (unsigned int)v20,
                               0) )
        return -1073741735;
    }
    if ( v4 < 0 )
    {
      v16 = (ConditionMask & 0x8000000000000000uLL) != 0 ? RtlpVerGetConditionMask(ConditionMask, 128LL) : 0;
      if ( !(unsigned __int8)RtlpVerCompare(
                               v16,
                               VersionInfo->wProductType,
                               VersionInformation[282],
                               (unsigned int)v20,
                               0) )
        return -1073741735;
    }
    return 0;
  }
  return result;
}
