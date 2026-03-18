/*
 * XREFs of SpbCheckRect @ 0x1C00097BC
 * Callers:
 *     SpbCheckPwnd @ 0x1C000C958 (SpbCheckPwnd.c)
 *     SpbCheckDce @ 0x1C004C480 (SpbCheckDce.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0055B50 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     _ScrollDC @ 0x1C006A430 (_ScrollDC.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 * Callees:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C0009824 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     IsVisible @ 0x1C00CBE50 (IsVisible.c)
 */

__int64 __fastcall SpbCheckRect(struct tagWND *a1, struct tagRECT *a2, unsigned int a3)
{
  __int64 result; // rax
  struct tagSPB *v7; // rcx
  struct tagSPB *v8; // rbx

  result = IsVisible();
  if ( (_DWORD)result )
  {
    result = gpDispInfo;
    v7 = *(struct tagSPB **)(gpDispInfo + 72LL);
    if ( v7 )
    {
      do
      {
        v8 = *(struct tagSPB **)v7;
        result = SpbCheckRect2(v7, a1, a2, a3);
        v7 = v8;
      }
      while ( v8 );
    }
  }
  return result;
}
