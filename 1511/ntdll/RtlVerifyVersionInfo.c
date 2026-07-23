/*
 * XREFs of RtlVerifyVersionInfo @ 0x180073630
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x180073FEC (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x1800740F0 (RtlpVerGetConditionMask.c)
 *     RtlGetVersion @ 0x1800742A0 (RtlGetVersion.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS __cdecl RtlVerifyVersionInfo(
        PRTL_OSVERSIONINFOEXW VersionInformation,
        ULONG TypeMask,
        ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  char v8; // al
  int v9; // edi
  bool v10; // zf
  WORD wSuiteMask; // ax
  unsigned int v12; // r10d
  int v13; // r11d
  int v14; // r9d
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOEXW VersionInformationa; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(&VersionInformationa, 0, sizeof(VersionInformationa));
  VersionInformationa.dwOSVersionInfoSize = 284;
  result = RtlGetVersion(&VersionInformationa);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      wSuiteMask = VersionInformation->wSuiteMask;
      if ( wSuiteMask )
      {
        v12 = 0;
        v13 = wSuiteMask;
        do
        {
          v14 = 1 << v12;
          if ( (v13 & (1 << v12)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
              v15 = RtlpVerGetConditionMask(ConditionMask, 64LL);
            else
              v15 = 0;
            v16 = v15 - 6;
            if ( v16 )
            {
              if ( v16 != 1 )
                return -1073741811;
              if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v14) != 0 )
                v6 = 1;
            }
            else if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v14) == 0 )
            {
              return -1073741735;
            }
          }
          ++v12;
        }
        while ( v12 < 0x10 );
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
      v10 = (unsigned __int8)RtlpVerCompare(
                               v9,
                               VersionInformation->dwMajorVersion,
                               VersionInformationa.dwMajorVersion,
                               (unsigned int)v20,
                               0) == 0;
      v8 = v20[0];
      if ( v10 )
      {
        if ( !v20[0] )
          return -1073741735;
      }
      else if ( !v20[0] )
      {
        goto LABEL_14;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_10;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
        v9 = RtlpVerGetConditionMask(ConditionMask, 1LL);
      else
        v9 = (unsigned __int8)(ConditionMask >> 2);
    }
    v10 = (unsigned __int8)RtlpVerCompare(
                             v9,
                             VersionInformation->dwMinorVersion,
                             VersionInformationa.dwMinorVersion,
                             (unsigned int)v20,
                             1) == 0;
    v8 = v20[0];
    if ( v10 )
    {
      if ( !v20[0] )
        return -1073741735;
    }
    else
    {
LABEL_10:
      if ( !v8 )
        goto LABEL_14;
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
                               VersionInformation->wServicePackMajor,
                               VersionInformationa.wServicePackMajor,
                               (unsigned int)v20,
                               0) )
      {
        if ( !v20[0] )
          return -1073741735;
LABEL_13:
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
                                   VersionInformation->wServicePackMinor,
                                   VersionInformationa.wServicePackMinor,
                                   (unsigned int)v20,
                                   1) )
            return -1073741735;
        }
LABEL_14:
        if ( (v4 & 4) == 0
          || ((ConditionMask & 0x8000000000000000uLL) != 0
            ? (v18 = RtlpVerGetConditionMask(ConditionMask, 4LL))
            : (v18 = BYTE2(ConditionMask)),
              (unsigned __int8)RtlpVerCompare(
                                 v18,
                                 VersionInformation->dwBuildNumber,
                                 VersionInformationa.dwBuildNumber,
                                 (unsigned int)v20,
                                 0)) )
        {
          if ( (v4 & 8) == 0
            || ((ConditionMask & 0x8000000000000000uLL) != 0
              ? (v19 = RtlpVerGetConditionMask(ConditionMask, 8LL))
              : (v19 = 0),
                (unsigned __int8)RtlpVerCompare(
                                   v19,
                                   VersionInformation->dwPlatformId,
                                   VersionInformationa.dwPlatformId,
                                   (unsigned int)v20,
                                   0)) )
          {
            if ( v4 >= 0 )
              return 0;
            v17 = (ConditionMask & 0x8000000000000000uLL) != 0 ? RtlpVerGetConditionMask(ConditionMask, 128LL) : 0;
            if ( (unsigned __int8)RtlpVerCompare(
                                    v17,
                                    VersionInformation->wProductType,
                                    VersionInformationa.wProductType,
                                    (unsigned int)v20,
                                    0) )
              return 0;
          }
        }
        return -1073741735;
      }
      v8 = v20[0];
    }
    if ( !v8 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return result;
}
