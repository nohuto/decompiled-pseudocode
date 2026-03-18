/*
 * XREFs of xxxGetControlBrush @ 0x1C00E7834
 * Callers:
 *     NtUserGetControlBrush @ 0x1C00E7790 (NtUserGetControlBrush.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0145088 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     xxxGetControlColor @ 0x1C00E7BB4 (xxxGetControlColor.c)
 */

__int64 __fastcall xxxGetControlBrush(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 ControlColor; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]

  if ( (((*(_BYTE *)(a1 + 55) & 0xC0) + 0x80) & 0xBF) != 0 )
    v4 = *(_QWORD *)(a1 + 88);
  else
    v4 = *(_QWORD *)(a1 + 104);
  if ( !v4 )
    v4 = a1;
  v9 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v9;
  v10 = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  ControlColor = xxxGetControlColor(v4, a1, a2, a3, v9, v10);
  ThreadUnlock1(v7, v6);
  return ControlColor;
}
