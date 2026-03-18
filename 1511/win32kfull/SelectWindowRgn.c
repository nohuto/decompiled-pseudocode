/*
 * XREFs of SelectWindowRgn @ 0x1C007AAB8
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserSetWindowRgnEx @ 0x1C0220C00 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     DwmAsyncChildClipRgnChange @ 0x1C007ABB4 (DwmAsyncChildClipRgnChange.c)
 *     GreUpdateSpriteClipRgn @ 0x1C007AC30 (GreUpdateSpriteClipRgn.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 */

_UNKNOWN **__fastcall SelectWindowRgn(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  _UNKNOWN **result; // rax
  int v4; // esi
  __int64 v6; // rcx
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rax
  _QWORD *v14; // rdi
  int v15; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 200);
  v8 = a2;
  if ( v6 )
  {
    if ( (*(_BYTE *)(a1 + 45) & 8) != 0 )
    {
      result = (_UNKNOWN **)SetOrClrWF(0LL, a1, 1288LL, 1LL);
    }
    else
    {
      if ( a2 == 2 )
        return result;
      result = (_UNKNOWN **)GreDeleteObject(v6);
      v4 = 1;
    }
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  if ( v8 > 1 )
  {
    if ( v8 == 2 )
    {
      if ( (*(_BYTE *)(a1 + 55) & 1) == 0 )
        return result;
      if ( (*(_BYTE *)(a1 + 43) & 0x40) == 0 )
        return result;
      result = (_UNKNOWN **)MonitorFromWindow(a1, 0);
      v14 = result;
      if ( !result )
        return result;
      v15 = *(_DWORD *)(a1 + 344);
      if ( v15 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
      {
        if ( v15 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) != 0 )
          v8 = v14[18];
        else
          v8 = v14[16];
      }
      else
      {
        v8 = v14[17];
      }
      result = (_UNKNOWN **)SetOrClrWF(1LL, a1, 1288LL, 1LL);
    }
    else
    {
      if ( a1 != GetDesktopWindow(a1) )
        GreOffsetRgn(v8, *(unsigned int *)(a1 + 112), *(unsigned int *)(a1 + 116));
      result = (_UNKNOWN **)GreSetRegionOwner(v8, 0LL);
      v4 = 1;
    }
    *(_QWORD *)(a1 + 200) = v8;
  }
  if ( v4 )
  {
    result = (_UNKNOWN **)IsWindowDesktopComposed(a1);
    if ( (_DWORD)result )
    {
      if ( (unsigned int)IsTopLevelWindow(a1) )
      {
        if ( (*(_BYTE *)(a1 + 50) & 8) != 0 )
          GreUpdateSpriteClipRgn(v10, *(_QWORD *)a1, *(_QWORD *)(a1 + 200), a3);
      }
      v13 = (void *)ReferenceDwmApiPort(v10, v9, v11, v12);
      return (_UNKNOWN **)DwmAsyncChildClipRgnChange(v13);
    }
  }
  return result;
}
