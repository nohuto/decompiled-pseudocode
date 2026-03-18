/*
 * XREFs of ?ProcessUpdate@CBlendEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BLENDEFFECT@@@Z @ 0x1801088EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBlendEffect::ProcessUpdate(
        CBlendEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_BLENDEFFECT *a3)
{
  int v4; // ebx

  v4 = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CBlendEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 68) = v4;
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
