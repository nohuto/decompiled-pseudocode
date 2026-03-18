/*
 * XREFs of GreWatchVisRgnChange @ 0x14032632C
 * Callers:
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402D87C4 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??1DCOBJA@@QEAA@XZ @ 0x140015860 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14004129C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

void __fastcall GreWatchVisRgnChange(HDC a1, int a2)
{
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
  {
    if ( a2 )
      *(_DWORD *)(v3[0] + 36LL) |= 0x20000u;
    else
      *(_DWORD *)(v3[0] + 36LL) &= ~0x20000u;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v3);
}
