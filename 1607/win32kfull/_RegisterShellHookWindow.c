/*
 * XREFs of _RegisterShellHookWindow @ 0x1C012C4D0
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C0113A60 (-VWPLAddBase@@YAHPEAPEAUVWPL@@_KPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall RegisterShellHookWindow(struct tagWND *a1)
{
  __int64 v2; // rcx

  if ( *((char *)a1 + 44) < 0 || *((char *)a1 + 43) < 0 )
  {
    UserSetLastError(87LL);
  }
  else
  {
    v2 = *((_QWORD *)a1 + 3);
    if ( v2 && (unsigned int)VWPLAddBase((struct VWPL **)(*(_QWORD *)(v2 + 8) + 232LL), 0LL, a1, 2u) )
    {
      SetOrClrWF(1, a1, 0x740u, 1);
      return 1LL;
    }
  }
  return 0LL;
}
