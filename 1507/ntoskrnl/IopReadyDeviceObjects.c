/*
 * XREFs of IopReadyDeviceObjects @ 0x1405724BC
 * Callers:
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopReadyDeviceObjects(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 16) |= 0x10u;
  while ( result )
  {
    *(_DWORD *)(result + 48) &= ~0x80u;
    result = *(_QWORD *)(result + 16);
  }
  return result;
}
