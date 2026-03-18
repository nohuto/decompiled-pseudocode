/*
 * XREFs of CleanupWindowRedirection @ 0x1C00686E8
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     UserReleaseRedirectionBitmap @ 0x1C01E7CF0 (UserReleaseRedirectionBitmap.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C007FC9C (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C007FEDC (UnsetRedirectedWindow.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
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
