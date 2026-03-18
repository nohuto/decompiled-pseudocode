/*
 * XREFs of _SetClipboardData @ 0x1C014F6A0
 * Callers:
 *     xxxSnapWindow @ 0x1C014F320 (xxxSnapWindow.c)
 *     NtUserSetClipboardData @ 0x1C02196B0 (NtUserSetClipboardData.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 *     InternalSetClipboardData @ 0x1C014F894 (InternalSetClipboardData.c)
 */

__int64 __fastcall SetClipboardData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // ebp
  int v7; // edi
  __int64 v8; // rax
  unsigned int v9; // esi

  v4 = a4;
  v5 = a3;
  v7 = a1;
  v8 = CheckClipboardAccess(a1, a2, a3, a4);
  if ( !v8 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  v9 = InternalSetClipboardData(v8, v7, a2, v5, v4);
  if ( v9 )
  {
    if ( v7 == 2 )
    {
      GreSetBitmapOwner(a2, 0LL);
    }
    else if ( v7 == 9 )
    {
      GreSetPaletteOwner(a2, 0LL);
    }
  }
  return v9;
}
