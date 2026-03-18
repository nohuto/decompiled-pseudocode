/*
 * XREFs of rimContainsCustomHidKeyboardUsages @ 0x1C00DEBFC
 * Callers:
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C00DE924 (RIMCreateHidKeyboardDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0008A6C (rimHidP_GetSpecificButtonCaps.c)
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall rimContainsCustomHidKeyboardUsages(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned int v7; // ebx
  struct _HIDP_BUTTON_CAPS *v8; // rsi
  unsigned __int8 v9; // di
  int SpecificButtonCaps; // eax
  unsigned __int16 v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h]

  v13 = 0LL;
  if ( a5 )
  {
    v12 = *(_WORD *)(a4 + 46);
    v8 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolNonPaged();
    if ( v8 )
    {
      memset(v8, 0, 72LL * v12);
      *a5 = 0;
      v9 = 0;
      v13 = 0xF300F400F100F0LL;
      while ( 1 )
      {
        v12 = *(_WORD *)(a4 + 46);
        memset(v8, 0, 72LL * v12);
        SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 7u, 0, *((_WORD *)&v13 + v9), v8, &v12, a3);
        v7 = SpecificButtonCaps;
        if ( SpecificButtonCaps < 0 )
          break;
        if ( ++v9 >= 4u )
        {
          *a5 = 1;
          goto LABEL_11;
        }
      }
      if ( SpecificButtonCaps == -1072627708 )
        v7 = 0;
LABEL_11:
      Win32FreePool();
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
