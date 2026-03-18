/*
 * XREFs of ?GetNumberOfDisplays@CDesktopRenderTarget@@UEAAJPEAI@Z @ 0x180075E80
 * Callers:
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18003B164 (-CheckStereoState@CComposition@@QEAAJXZ.c)
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
