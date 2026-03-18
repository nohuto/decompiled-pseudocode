/*
 * XREFs of ?xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z @ 0x14014AF64
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x14014B2F4 (xxxDCETrackCaptionButton.c)
 * Callees:
 *     xxxMNCanClose @ 0x140032C30 (xxxMNCanClose.c)
 */

void __fastcall xxxDCECalcCaptionButton(struct tagWND *a1, int a2, unsigned __int16 *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  *a3 = 0;
  switch ( a2 )
  {
    case 5:
      if ( (unsigned int)xxxMNCanClose(a1) )
        *a3 = -4000;
      return;
    case 2:
      v5 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v5 + 30) & 2) == 0 )
        return;
      if ( (*(_BYTE *)(v5 + 31) & 0x20) == 0 )
      {
        *a3 = -4064;
        return;
      }
LABEL_16:
      *a3 = -3808;
      return;
    case 3:
      v4 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v4 + 30) & 1) == 0 )
        return;
      if ( (*(_BYTE *)(v4 + 31) & 1) == 0 )
      {
        *a3 = -4048;
        return;
      }
      goto LABEL_16;
  }
  if ( a2 == 4 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 4) != 0 )
    *a3 = -3712;
}
