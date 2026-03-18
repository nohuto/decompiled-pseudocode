/*
 * XREFs of ?SetForIntermediate@CCachedVisualImage@@QEAAJPEAVCVisual@@II@Z @ 0x1801441CC
 * Callers:
 *     ?DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18014F1CC (-DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801443DC (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetForIntermediate(CCachedVisualImage *this, struct CVisual *a2, int a3, int a4)
{
  unsigned int v4; // edi
  int v8; // eax

  v4 = 0;
  if ( *((struct CVisual **)this + 24) == a2 || (v8 = CCachedVisualImage::SetRootVisual(this, a2), v4 = v8, v8 >= 0) )
  {
    *((_DWORD *)this + 36) = 0;
    *((_DWORD *)this + 37) = 0;
    *((_DWORD *)this + 50) = 0;
    *((_DWORD *)this + 51) = 0;
    *((_DWORD *)this + 52) = 0;
    *((_DWORD *)this + 53) = 0;
    *((float *)this + 39) = (float)a4;
    *((float *)this + 38) = (float)a3;
    *((double *)this + 22) = (float)a4;
    *((double *)this + 21) = (float)a3;
    CResource::NotifyOnChanged((_DWORD *)this + 4, 0, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x7D1u);
  }
  return v4;
}
