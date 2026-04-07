/*
 * XREFs of ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18007E2FC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x18007DC48 (-LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x18007DCBC (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateLivePreviewAnimation(CTopLevelWindow *this)
{
  int v1; // eax
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // r9d
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 68);
  if ( v1 <= 0 )
    goto LABEL_9;
  if ( v1 > 2 )
  {
    if ( v1 <= 4 )
    {
      v2 = CTopLevelWindow::LivePreviewAnimation_Animated((CLivePreviewTimeline **)this);
      v3 = v2;
      if ( v2 < 0 )
      {
        v6 = 4536;
LABEL_6:
        v4 = v2;
LABEL_10:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, v6);
        return v3;
      }
      return v3;
    }
LABEL_9:
    v3 = -2147467259;
    v6 = 4540;
    v4 = -2147467259;
    goto LABEL_10;
  }
  v2 = CTopLevelWindow::LivePreviewAnimation_Flipped(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    v6 = 4531;
    goto LABEL_6;
  }
  return v3;
}
