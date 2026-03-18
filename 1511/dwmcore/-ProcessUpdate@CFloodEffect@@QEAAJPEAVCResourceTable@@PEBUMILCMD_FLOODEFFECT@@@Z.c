/*
 * XREFs of ?ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLOODEFFECT@@@Z @ 0x1800F61F4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
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
  *((_OWORD *)this + 12) = *(_OWORD *)&v5[8];
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
