/*
 * XREFs of _SetClipboardData @ 0x1C0120824
 * Callers:
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 *     NtUserSetClipboardData @ 0x1C021FC30 (NtUserSetClipboardData.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00D6580 (CheckClipboardAccess.c)
 *     InternalSetClipboardData @ 0x1C0120A30 (InternalSetClipboardData.c)
 */

__int64 __fastcall SetClipboardData(int a1, __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  unsigned int v10; // esi

  v8 = CheckClipboardAccess();
  if ( !v8 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v10 = InternalSetClipboardData(v8, a1, a2, a3, a4);
  if ( v10 )
  {
    if ( a1 == 2 )
    {
      GreSetBitmapOwner(a2, 0LL);
    }
    else if ( a1 == 9 )
    {
      GreSetPaletteOwner(a2, 0LL);
    }
  }
  return v10;
}
