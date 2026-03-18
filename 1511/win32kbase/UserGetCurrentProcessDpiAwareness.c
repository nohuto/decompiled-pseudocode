/*
 * XREFs of UserGetCurrentProcessDpiAwareness @ 0x1C0070540
 * Callers:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00B7B48 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00B7B88 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserGetCurrentProcessDpiAwareness(_DWORD *a1)
{
  __int64 result; // rax

  result = PsGetCurrentProcessWin32Process(a1);
  if ( result )
  {
    result = *(unsigned int *)(result + 776);
    if ( (result & 0x4000) != 0 )
    {
      *a1 = 2;
    }
    else
    {
      result = ((unsigned int)result >> 13) & 1;
      *a1 = result;
    }
  }
  return result;
}
