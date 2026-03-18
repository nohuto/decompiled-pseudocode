/*
 * XREFs of ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C011A0B0
 * Callers:
 *     DrawThumb2 @ 0x1C0119F80 (DrawThumb2.c)
 * Callees:
 *     FillRect @ 0x1C0086584 (FillRect.c)
 *     DrawEdge @ 0x1C0094D78 (DrawEdge.c)
 */

void __fastcall DrawGroove(HDC a1, HBRUSH a2, struct tagRECT *a3, int a4)
{
  HDC v5; // rdi
  const RECT *v6; // rdx
  RECT v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  if ( a2 == *(HBRUSH *)(gpsi + 3856LL) || a2 == *(HBRUSH *)(gpsi + 3944LL) )
  {
    v6 = a3;
  }
  else
  {
    v7 = *a3;
    DrawEdge(a1, &v7, 0xAu, (a4 != 0 ? 5 : 10) | 0x6000);
    v6 = &v7;
    a1 = v5;
  }
  FillRect(a1, v6, a2);
}
