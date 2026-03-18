/*
 * XREFs of ?Restore@CCursorVisual@@QEAAXXZ @ 0x18010ADE4
 * Callers:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800947D4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801009F4 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CCursorVisual::Restore(CCursorVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CMILCOMBase *v4; // rcx

  v2 = **((_QWORD **)this + 1);
  if ( v2 && *((_DWORD *)this + 7) )
    *(_BYTE *)(v2 + 74) ^= (*(_BYTE *)(v2 + 74) ^ (16 * *((_BYTE *)this + 24))) & 0x10;
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 56) = 0LL;
    CResource::NotifyOnChanged((_DWORD *)v3, 0, 0LL);
    v4 = (CMILCOMBase *)*((_QWORD *)this + 2);
    if ( v4 )
    {
      CMILCOMBase::InternalRelease(v4);
      *((_QWORD *)this + 2) = 0LL;
    }
  }
  *((_DWORD *)this + 7) = 0;
}
