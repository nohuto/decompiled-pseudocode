/*
 * XREFs of RtlVerifyVersionInfo @ 0x1800455E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x180042170 (RtlGetVersion.c)
 *     RtlpVerCompare @ 0x1800425D4 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x180042750 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

NTSTATUS __cdecl RtlVerifyVersionInfo(
        PRTL_OSVERSIONINFOEXW VersionInformation,
        ULONG TypeMask,
        ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  WORD wSuiteMask; // ax
  unsigned int v9; // r10d
  int v10; // r11d
  int v11; // r9d
  bool v12; // al
  int v13; // edi
  bool v14; // zf
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  bool v20[16]; // [rsp+30h] [rbp-D0h] BYREF
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
        v9 = 0;
        v10 = wSuiteMask;
        do
        {
          v11 = 1 << v9;
          if ( (v10 & (1 << v9)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
              v15 = RtlpVerGetConditionMask(ConditionMask, 0x40u);
            else
              v15 = 0;
            v16 = v15 - 6;
            if ( v16 )
            {
              if ( v16 != 1 )
                return -1073741811;
              if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v11) != 0 )
                v6 = 1;
            }
            else if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v11) == 0 )
            {
              return -1073741735;
            }
          }
          ++v9;
        }
        while ( v9 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 0x40u) == 7 && !v6 )
          return -1073741735;
      }
    }
    v12 = 1;
    v20[0] = 1;
    v13 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
        v13 = RtlpVerGetConditionMask(ConditionMask, 2u);
      else
        v13 = (unsigned __int8)(ConditionMask >> 4);
      v14 = !RtlpVerCompare(v13, VersionInformation->dwMajorVersion, VersionInformationa.dwMajorVersion, v20, 0);
      v12 = v20[0];
      if ( v14 )
      {
        if ( !v20[0] )
          return -1073741735;
      }
      else if ( !v20[0] )
      {
        goto LABEL_19;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_15;
    if ( v13 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
        v13 = RtlpVerGetConditionMask(ConditionMask, 1u);
      else
        v13 = (unsigned __int8)(ConditionMask >> 2);
    }
    v14 = !RtlpVerCompare(v13, VersionInformation->dwMinorVersion, VersionInformationa.dwMinorVersion, v20, 1);
    v12 = v20[0];
    if ( v14 )
    {
      if ( !v20[0] )
        return -1073741735;
    }
    else
    {
LABEL_15:
      if ( !v12 )
        goto LABEL_19;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v13 == 1 )
      {
        if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
          v13 = RtlpVerGetConditionMask(ConditionMask, 0x20u);
        else
          v13 = 0;
      }
      if ( !RtlpVerCompare(v13, VersionInformation->wServicePackMajor, VersionInformationa.wServicePackMajor, v20, 0) )
      {
        if ( !v20[0] )
          return -1073741735;
LABEL_18:
        if ( (v4 & 0x10) != 0 )
        {
          if ( v13 == 1 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
              v13 = RtlpVerGetConditionMask(ConditionMask, 0x10u);
            else
              v13 = 0;
          }
          if ( !RtlpVerCompare(
                  v13,
                  VersionInformation->wServicePackMinor,
                  VersionInformationa.wServicePackMinor,
                  v20,
                  1) )
            return -1073741735;
        }
LABEL_19:
        if ( (v4 & 4) == 0
          || ((ConditionMask & 0x8000000000000000uLL) != 0
            ? (v18 = RtlpVerGetConditionMask(ConditionMask, 4u))
            : (v18 = BYTE2(ConditionMask)),
              RtlpVerCompare(v18, VersionInformation->dwBuildNumber, VersionInformationa.dwBuildNumber, v20, 0)) )
        {
          if ( (v4 & 8) == 0
            || ((ConditionMask & 0x8000000000000000uLL) != 0
              ? (v19 = RtlpVerGetConditionMask(ConditionMask, 8u))
              : (v19 = 0),
                RtlpVerCompare(v19, VersionInformation->dwPlatformId, VersionInformationa.dwPlatformId, v20, 0)) )
          {
            if ( v4 >= 0 )
              return 0;
            v17 = (ConditionMask & 0x8000000000000000uLL) != 0 ? RtlpVerGetConditionMask(ConditionMask, 0x80u) : 0;
            if ( RtlpVerCompare(v17, VersionInformation->wProductType, VersionInformationa.wProductType, v20, 0) )
              return 0;
          }
        }
        return -1073741735;
      }
      v12 = v20[0];
    }
    if ( !v12 )
      goto LABEL_19;
    goto LABEL_18;
  }
  return result;
}
