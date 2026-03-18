/*
 * XREFs of __GSHandlerCheck_EH @ 0x1800BF50C
 * Callers:
 *     <none>
 * Callees:
 *     __GSHandlerCheckCommon @ 0x1800BECFC (__GSHandlerCheckCommon.c)
 *     __CxxFrameHandler3_0 @ 0x1800BF500 (__CxxFrameHandler3_0.c)
 */

__int64 __fastcall _GSHandlerCheck_EH(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v6; // r8d
  int v7; // r11d

  v4 = *(_QWORD *)(a4 + 56);
  _GSHandlerCheckCommon(a2, a4);
  v6 = 1;
  v7 = *(_DWORD *)(v4 + 4) & 2;
  if ( (*(_DWORD *)(a1 + 4) & 0x66) == 0 )
    v7 = *(_DWORD *)(v4 + 4) & 1;
  if ( v7 )
    return (unsigned int)_CxxFrameHandler3_0();
  return v6;
}
