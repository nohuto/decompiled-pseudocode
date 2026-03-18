/*
 * XREFs of CleanupWindowRedirection @ 0x1C008B0D0
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01E7880 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x1C000BB60 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 */

__int64 __fastcall CleanupWindowRedirection(struct tagWND *a1)
{
  __int64 result; // rax

  if ( (*((_BYTE *)a1 + 50) & 8) != 0 )
  {
    UnsetLayeredWindow(a1, 1);
    *((_DWORD *)a1 + 72) &= ~0x20u;
  }
  if ( (*((_BYTE *)a1 + 51) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1);
    SetOrClrWF(0, a1, 0xB02u, 1);
  }
  result = *((unsigned int *)a1 + 72);
  if ( (result & 4) != 0 )
  {
    result = UnsetRedirectedWindow(a1);
    *((_DWORD *)a1 + 72) &= ~4u;
  }
  return result;
}
