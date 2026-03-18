/*
 * XREFs of ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0277BD4
 * Callers:
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0279A70 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreClientRgnDone @ 0x1C027A514 (GreClientRgnDone.c)
 *     GreDeleteWnd @ 0x1C027A5A0 (GreDeleteWnd.c)
 * Callees:
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0273C48 (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpWndobjChange(HDEV a1, struct EWNDOBJ *a2)
{
  HDEV v4; // rsi
  __int64 v5; // rbx
  HDEV v6; // [rsp+40h] [rbp+8h] BYREF
  char v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v7, (struct PDEVOBJ *)&v6);
  v4 = v6;
  v5 = 0LL;
  if ( *((_DWORD *)v6 + 41) )
  {
    do
    {
      vSpDeviceWndobjChange(*(HDEV *)(*((_QWORD *)v4 + 21) + 8 * v5), a2);
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *((_DWORD *)v4 + 41) );
  }
  else
  {
    vSpDeviceWndobjChange(a1, a2);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v7);
}
