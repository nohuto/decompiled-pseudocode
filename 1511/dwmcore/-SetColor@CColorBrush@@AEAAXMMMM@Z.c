/*
 * XREFs of ?SetColor@CColorBrush@@AEAAXMMMM@Z @ 0x180121184
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801211F0 (-SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CColorBrush::SetColor(CColorBrush *this, float a2, float a3, float a4, float a5)
{
  if ( *((float *)this + 12) != a2
    || *((float *)this + 13) != a3
    || *((float *)this + 14) != a4
    || *((float *)this + 15) != a5 )
  {
    *((float *)this + 12) = a2;
    *((float *)this + 13) = a3;
    *((float *)this + 14) = a4;
    *((float *)this + 15) = a5;
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
}
