/*
 * XREFs of CleanupWindowRedirection @ 0x1C00567B0
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01DE540 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     UnsetRedirectedWindow @ 0x1C00D7B74 (UnsetRedirectedWindow.c)
 */

__int64 __fastcall CleanupWindowRedirection(struct tagWND *a1)
{
  __int64 result; // rax

  if ( (*((_BYTE *)a1 + 50) & 8) != 0 )
  {
    UnsetLayeredWindow(a1);
    *((_DWORD *)a1 + 72) &= ~0x20u;
  }
  if ( (*((_BYTE *)a1 + 51) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1);
    SetOrClrWF(0LL, a1, 2818LL, 1LL);
  }
  result = *((unsigned int *)a1 + 72);
  if ( (result & 4) != 0 )
  {
    result = UnsetRedirectedWindow(a1);
    *((_DWORD *)a1 + 72) &= ~4u;
  }
  return result;
}
