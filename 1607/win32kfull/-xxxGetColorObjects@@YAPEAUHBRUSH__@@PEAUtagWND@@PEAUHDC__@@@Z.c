/*
 * XREFs of ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C014F0AC
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C014E5CC (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C022AB00 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022AFE8 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C022B210 (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxGetColorObjects(struct tagWND *a1, __int64 a2)
{
  if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0x29A )
    return xxxGetControlBrush((__int64)a1, a2, 0x137u);
  else
    return xxxDefWindowProc(a1, 0x137u, a2, *(_QWORD *)a1);
}
