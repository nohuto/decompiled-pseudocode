/*
 * XREFs of ?ProcessUpdate@CBlendEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BLENDEFFECT@@@Z @ 0x1800F6560
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CBlendEffect::ProcessUpdate(
        CBlendEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_BLENDEFFECT *a3)
{
  int v4; // edi

  v4 = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CBlendEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 48) = v4;
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
