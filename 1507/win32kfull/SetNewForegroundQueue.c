/*
 * XREFs of SetNewForegroundQueue @ 0x1C0047320
 * Callers:
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 * Callees:
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundQueue(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rax

  gpqForeground = a1;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 )
      v3 = *(_QWORD *)(v2 + 16);
    else
      v3 = *(_QWORD *)(a1 + 48);
    if ( !(unsigned int)HasHidTable(v3)
      || (v2 ? (v6 = *(_QWORD *)(v2 + 16)) : (v6 = *(_QWORD *)(a1 + 48)),
          v4 = 1,
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 384) + 784LL) + 100LL) & 1) == 0) )
    {
      v4 = 0;
    }
    result = gfRawMouse;
    gfRawMouse = v4;
  }
  else
  {
    result = gfRawMouse;
    gfRawMouse = 0;
  }
  return result;
}
