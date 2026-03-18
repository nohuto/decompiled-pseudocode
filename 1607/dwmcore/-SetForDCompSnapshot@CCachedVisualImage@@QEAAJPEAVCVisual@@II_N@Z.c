/*
 * XREFs of ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x180144108
 * Callers:
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180143348 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801443DC (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetForDCompSnapshot(
        CCachedVisualImage *this,
        struct CVisual *a2,
        int a3,
        int a4,
        bool a5)
{
  int v8; // edi

  v8 = CCachedVisualImage::SetRootVisual(this, a2);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x7B8u);
  }
  else
  {
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_BYTE *)this + 373) = a5;
    *((float *)this + 39) = (float)a4;
    *((float *)this + 38) = (float)a3;
    *((double *)this + 22) = (float)a4;
    *((double *)this + 21) = (float)a3;
    CResource::NotifyOnChanged((_DWORD *)this + 4, 0, 0LL);
  }
  return (unsigned int)v8;
}
