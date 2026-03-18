/*
 * XREFs of xxxImmLoadLayout @ 0x1C010DCE0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0097694 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     ClientImmLoadLayout @ 0x1C010DD60 (ClientImmLoadLayout.c)
 */

__int64 __fastcall xxxImmLoadLayout(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*gpsi & 4) != 0 || (WORD1(a1) & 0xF000) == 0xE000 )
  {
    v2 = Win32AllocPool(352LL);
    v3 = v2;
    if ( v2 )
    {
      PushW32ThreadLock(v2, v5, (__int64)Win32FreePool);
      if ( (unsigned int)ClientImmLoadLayout(a1, v3) )
      {
        PopW32ThreadLock(v5);
        return v3;
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)v5);
    }
  }
  return 0LL;
}
