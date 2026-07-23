/*
 * XREFs of RtlVerifyVersionInfo @ 0x180085A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x18002B6B8 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x18002B7BC (RtlpVerGetConditionMask.c)
 *     RtlGetVersion @ 0x18002EE40 (RtlGetVersion.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __cdecl RtlVerifyVersionInfo(
        PRTL_OSVERSIONINFOEXW VersionInformation,
        ULONG TypeMask,
        ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  bool v8; // al
  int v9; // edi
  WORD wSuiteMask; // ax
  unsigned int v11; // r10d
  int v12; // r11d
  int v13; // r9d
  int v14; // eax
  int v15; // eax
  bool v16; // zf
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
        v11 = 0;
        v12 = wSuiteMask;
        do
        {
          v13 = 1 << v11;
          if ( (v12 & (1 << v11)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
              v14 = RtlpVerGetConditionMask(ConditionMask, 0x40u);
            else
              v14 = 0;
            v15 = v14 - 6;
            if ( v15 )
            {
              if ( v15 != 1 )
                return -1073741811;
              if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v13) != 0 )
                v6 = 1;
            }
            else if ( (VersionInformationa.wSuiteMask & (unsigned __int16)v13) == 0 )
            {
              return -1073741735;
            }
          }
          ++v11;
        }
        while ( v11 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 0x40u) == 7 && !v6 )
          return -1073741735;
      }
    }
    v8 = 1;
    v20[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
        v9 = RtlpVerGetConditionMask(ConditionMask, 2u);
      else
        v9 = (unsigned __int8)(ConditionMask >> 4);
      v16 = !RtlpVerCompare(v9, VersionInformation->dwMajorVersion, VersionInformationa.dwMajorVersion, v20, 0);
      v8 = v20[0];
      if ( v16 )
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
        v9 = RtlpVerGetConditionMask(ConditionMask, 1u);
      else
        v9 = (unsigned __int8)(ConditionMask >> 2);
    }
    v16 = !RtlpVerCompare(v9, VersionInformation->dwMinorVersion, VersionInformationa.dwMinorVersion, v20, 1);
    v8 = v20[0];
    if ( v16 )
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
          v9 = RtlpVerGetConditionMask(ConditionMask, 0x20u);
        else
          v9 = 0;
      }
      if ( !RtlpVerCompare(v9, VersionInformation->wServicePackMajor, VersionInformationa.wServicePackMajor, v20, 0) )
      {
        if ( !v20[0] )
          return -1073741735;
LABEL_9:
        if ( (v4 & 0x10) != 0 )
        {
          if ( v9 == 1 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
              v9 = RtlpVerGetConditionMask(ConditionMask, 0x10u);
            else
              v9 = 0;
          }
          if ( !RtlpVerCompare(v9, VersionInformation->wServicePackMinor, VersionInformationa.wServicePackMinor, v20, 1) )
            return -1073741735;
        }
LABEL_10:
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
      v8 = v20[0];
    }
    if ( !v8 )
      goto LABEL_10;
    goto LABEL_9;
  }
  return result;
}
