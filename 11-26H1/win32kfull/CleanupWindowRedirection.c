/*
 * XREFs of CleanupWindowRedirection @ 0x1400A2EF0
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 */

__int64 __fastcall CleanupWindowRedirection(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 26LL) & 8) != 0 )
    UnsetLayeredWindow(a1, 1LL);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 2) != 0 )
  {
    UnsetRedirectedWindow(a1, 2LL);
    SetOrClrWF(0, (struct tagWND *)a1, 0xB02u, 1);
  }
  result = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(result + 232) & 1) != 0 )
  {
    UnsetRedirectedWindow(a1, 8LL);
    result = *(_QWORD *)(a1 + 40);
    *(_DWORD *)(result + 232) &= ~1u;
  }
  if ( (*(_DWORD *)(a1 + 380) & 0x20000000) != 0 )
  {
    result = UnsetRedirectedWindow(a1, 8LL);
    *(_DWORD *)(a1 + 380) &= ~0x20000000u;
  }
  return result;
}
