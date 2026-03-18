/*
 * XREFs of ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C0236A84
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 * Callees:
 *     <none>
 */

void __fastcall FillCaptionGradient(HDC a1, const struct tagRECT *a2, int a3)
{
  unsigned int v4; // r8d
  unsigned int v5; // eax
  HBRUSH v6; // r8

  if ( a3 )
  {
    v4 = *(_DWORD *)(gpsi + 3576LL);
    v5 = *(_DWORD *)(gpsi + 3676LL);
  }
  else
  {
    v4 = *(_DWORD *)(gpsi + 3580LL);
    v5 = *(_DWORD *)(gpsi + 3680LL);
  }
  if ( v4 == v5 )
  {
    if ( a3 )
      v6 = *(HBRUSH *)(gpsi + 3712LL);
    else
      v6 = *(HBRUSH *)(gpsi + 3720LL);
    FillRect(a1, a2, v6);
  }
  else
  {
    FillGradient(a1, a2, v4, v5);
  }
}
