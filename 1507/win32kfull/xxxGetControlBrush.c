/*
 * XREFs of xxxGetControlBrush @ 0x1C00F34C4
 * Callers:
 *     NtUserGetControlBrush @ 0x1C00F3420 (NtUserGetControlBrush.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C011A0FC (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     xxxGetControlColor @ 0x1C0086354 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 ControlColor; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (((*(_BYTE *)(a1 + 55) & 0xC0) + 0x80) & 0xBF) != 0 )
    v4 = *(_QWORD *)(a1 + 88);
  else
    v4 = *(_QWORD *)(a1 + 104);
  if ( !v4 )
    v4 = a1;
  v9[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v9;
  v9[1] = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  ControlColor = xxxGetControlColor(v4, (__int64 *)a1, a2, a3);
  ThreadUnlock1(v7, v6);
  return ControlColor;
}
