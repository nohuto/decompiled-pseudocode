/*
 * XREFs of SetNewForegroundQueue @ 0x1C00DC330
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 * Callees:
 *     HasHidTable @ 0x1C005C980 (HasHidTable.c)
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
    v2 = *(_QWORD *)(a1 + 72);
    if ( v2 )
      v3 = *(_QWORD *)(v2 + 16);
    else
      v3 = *(_QWORD *)(a1 + 56);
    if ( !(unsigned int)HasHidTable(v3)
      || (v2 ? (v6 = *(_QWORD *)(v2 + 16)) : (v6 = *(_QWORD *)(a1 + 56)),
          v4 = 1,
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 376) + 776LL) + 100LL) & 1) == 0) )
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
