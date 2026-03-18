/*
 * XREFs of xxxTrackThumb @ 0x1C02359E0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0231F9C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0232450 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxEndScroll @ 0x1C0233B14 (xxxEndScroll.c)
 */

__int64 __fastcall xxxTrackThumb(struct tagWND *a1, unsigned int a2, __int64 a3, int a4, struct tagSBCALC *a5)
{
  _DWORD *v8; // rbx
  __int64 result; // rax
  int v10; // r8d
  int v11; // r9d
  int v12; // r8d
  int v13; // r9d
  int v14; // ecx
  unsigned __int64 v15; // [rsp+40h] [rbp+8h]

  v8 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 632LL);
  result = a2 >> 8;
  if ( BYTE1(a2) == 2 && v8 )
  {
    if ( (*v8 & 8) != 0 )
    {
      RecalcTrackRect(*(struct tagSBTRACK **)(*((_QWORD *)a1 + 2) + 632LL));
      *v8 &= ~8u;
    }
    HIDWORD(v15) = SHIWORD(a4);
    LODWORD(v15) = (__int16)a4;
    if ( PtInRect(v8 + 8, v15) )
    {
      if ( (*(_BYTE *)v8 & 2) != 0 )
        v10 = v11;
      v13 = v10 + v8[18];
      v12 = *((_DWORD *)a5 + 15);
      if ( v13 >= v12 )
      {
        v14 = v12 + *((_DWORD *)a5 + 14);
        v12 = v13;
        if ( v13 >= v14 )
          v12 = v14;
      }
    }
    else
    {
      v12 = *((_DWORD *)a5 + 11);
    }
    xxxMoveThumb(a1, a5, v12);
    if ( a2 == 514 )
      return xxxEndScroll(a1, 0);
    result = GetKeyState(1u);
    if ( (result & 0x8000u) == 0LL )
      return xxxEndScroll(a1, 0);
  }
  return result;
}
