/*
 * XREFs of ?SetHorizontalAlignmentRatio@CSurfaceBrush@@AEAAXM@Z @ 0x1801223D4
 * Callers:
 *     ?SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180122420 (-SetProperty@CSurfaceBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CSurfaceBrush::SetHorizontalAlignmentRatio(CSurfaceBrush *this, float a2)
{
  if ( *((float *)this + 22) != a2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    *((float *)this + 22) = a2;
    CResource::NotifyOnChanged(this, 5u, 0LL);
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
}
