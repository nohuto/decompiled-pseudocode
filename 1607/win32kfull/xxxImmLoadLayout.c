/*
 * XREFs of xxxImmLoadLayout @ 0x1C012EE1C
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00E67CC (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ClientImmLoadLayout @ 0x1C012EE9C (ClientImmLoadLayout.c)
 */

__int64 __fastcall xxxImmLoadLayout(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*gpsi & 4) != 0 || (WORD1(a1) & 0xF000) == 0xE000 )
  {
    v2 = Win32AllocPool(352LL, 1835627349LL);
    v4 = v2;
    if ( v2 )
    {
      PushW32ThreadLock(v2, v9, (__int64)Win32FreePool, v3);
      if ( (unsigned int)ClientImmLoadLayout(a1, v4) )
      {
        PopW32ThreadLock(v9, v5, v6, v7);
        return v4;
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v9, v5, v6, v7);
    }
  }
  return 0LL;
}
