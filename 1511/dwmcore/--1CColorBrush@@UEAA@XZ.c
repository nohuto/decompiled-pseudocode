/*
 * XREFs of ??1CColorBrush@@UEAA@XZ @ 0x180112CE0
 * Callers:
 *     ??_ECColorBrush@@UEAAPEAXI@Z @ 0x180113200 (--_ECColorBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CColorBrush::~CColorBrush(CColorBrush *this)
{
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CColorBrush::`vftable';
  CResource::NotifyOnChanged(this, 5u, 0LL);
  CResource::~CResource(this);
}
