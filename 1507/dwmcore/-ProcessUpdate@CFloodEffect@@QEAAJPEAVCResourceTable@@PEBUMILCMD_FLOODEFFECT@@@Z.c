/*
 * XREFs of ?ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLOODEFFECT@@@Z @ 0x1801180B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CFloodEffect::ProcessUpdate(
        CFloodEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_FLOODEFFECT *a3)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-28h]

  *(_QWORD *)&v5[16] = *((_QWORD *)a3 + 2);
  *(_OWORD *)v5 = *(_OWORD *)a3;
  (*(void (__fastcall **)(CFloodEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_OWORD *)this + 11) = *(_OWORD *)&v5[8];
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
