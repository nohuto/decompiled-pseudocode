/*
 * XREFs of RtlSwitchedVVI @ 0x18002B380
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x18002B6B8 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x18002B7BC (RtlpVerGetConditionMask.c)
 *     SwitchedRtlGetVersion @ 0x18002B7E0 (SwitchedRtlGetVersion.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

DWORD __cdecl RtlSwitchedVVI(PRTL_OSVERSIONINFOEXW VersionInfo, DWORD TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  DWORD result; // eax
  char v8; // al
  int v9; // edi
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // eax
  WORD wSuiteMask; // ax
  unsigned int v15; // r10d
  int v16; // r11d
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v21[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(v21, 0, 0x11CuLL);
  v21[0] = 284;
  result = SwitchedRtlGetVersion(v21);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      wSuiteMask = VersionInfo->wSuiteMask;
      if ( wSuiteMask )
      {
        v15 = 0;
        v16 = wSuiteMask;
        do
        {
          v17 = 1 << v15;
          if ( (v16 & (1 << v15)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
              v18 = RtlpVerGetConditionMask(ConditionMask, 64LL);
            else
              v18 = 0;
            v19 = v18 - 6;
            if ( v19 )
            {
              if ( v19 != 1 )
                return -1073741811;
              if ( (v21[70] & (unsigned __int16)v17) != 0 )
                v6 = 1;
            }
            else if ( (v21[70] & (unsigned __int16)v17) == 0 )
            {
              return -1073741735;
            }
          }
          ++v15;
        }
        while ( v15 < 0x10 );
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
      v10 = (unsigned __int8)RtlpVerCompare(v9, VersionInfo->dwMajorVersion, v21[1], (unsigned int)v20, 0) == 0;
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
    v10 = (unsigned __int8)RtlpVerCompare(v9, VersionInfo->dwMinorVersion, v21[2], (unsigned int)v20, 1) == 0;
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
    if ( (v4 & 0x20) == 0 )
      goto LABEL_12;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0 )
        v9 = RtlpVerGetConditionMask(ConditionMask, 32LL);
      else
        v9 = 0;
    }
    if ( (unsigned __int8)RtlpVerCompare(v9, VersionInfo->wServicePackMajor, LOWORD(v21[69]), (unsigned int)v20, 0) )
    {
      v8 = v20[0];
LABEL_12:
      if ( v8 )
      {
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
                                   VersionInfo->wServicePackMinor,
                                   HIWORD(v21[69]),
                                   (unsigned int)v20,
                                   1) )
            return -1073741735;
        }
      }
LABEL_14:
      if ( (v4 & 4) != 0 )
      {
        v13 = (ConditionMask & 0x8000000000000000uLL) != 0
            ? RtlpVerGetConditionMask(ConditionMask, 4LL)
            : BYTE2(ConditionMask);
        if ( !(unsigned __int8)RtlpVerCompare(v13, VersionInfo->dwBuildNumber, v21[3], (unsigned int)v20, 0) )
          return -1073741735;
      }
      if ( (v4 & 8) != 0 )
      {
        v12 = (ConditionMask & 0x8000000000000000uLL) != 0 ? RtlpVerGetConditionMask(ConditionMask, 8LL) : 0;
        if ( !(unsigned __int8)RtlpVerCompare(v12, VersionInfo->dwPlatformId, v21[4], (unsigned int)v20, 0) )
          return -1073741735;
      }
      if ( v4 < 0 )
      {
        v11 = (ConditionMask & 0x8000000000000000uLL) != 0 ? RtlpVerGetConditionMask(ConditionMask, 128LL) : 0;
        if ( !(unsigned __int8)RtlpVerCompare(v11, VersionInfo->wProductType, BYTE2(v21[70]), (unsigned int)v20, 0) )
          return -1073741735;
      }
      return 0;
    }
    if ( v20[0] )
      goto LABEL_13;
    return -1073741735;
  }
  return result;
}
