/*
 * XREFs of ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x1C022F174
 * Callers:
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
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
    v4 = *(_DWORD *)(gpsi + 4968LL);
    v5 = *(_DWORD *)(gpsi + 5068LL);
  }
  else
  {
    v4 = *(_DWORD *)(gpsi + 4972LL);
    v5 = *(_DWORD *)(gpsi + 5072LL);
  }
  if ( v4 == v5 )
  {
    if ( a3 )
      v6 = *(HBRUSH *)(gpsi + 5104LL);
    else
      v6 = *(HBRUSH *)(gpsi + 5112LL);
    FillRect(a1, a2, v6);
  }
  else
  {
    FillGradient(a1, a2, v4, v5);
  }
}
