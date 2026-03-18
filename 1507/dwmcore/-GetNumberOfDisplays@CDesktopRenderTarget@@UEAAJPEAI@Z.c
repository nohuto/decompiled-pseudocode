/*
 * XREFs of ?GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z @ 0x1800492A0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::GetNumberOfDisplays(CDesktopRenderTarget *this, unsigned int *a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *((_DWORD *)this + 8);
  result = 0LL;
  if ( v2 < 0 )
  {
    *a2 = -1;
    return 2147942934LL;
  }
  else
  {
    *a2 = v2;
  }
  return result;
}
