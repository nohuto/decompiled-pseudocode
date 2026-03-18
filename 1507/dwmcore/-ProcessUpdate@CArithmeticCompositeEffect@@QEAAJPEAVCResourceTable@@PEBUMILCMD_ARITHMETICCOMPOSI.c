/*
 * XREFs of ?ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ARITHMETICCOMPOSITEEFFECT@@@Z @ 0x180117C24
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CArithmeticCompositeEffect::ProcessUpdate(
        CArithmeticCompositeEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_ARITHMETICCOMPOSITEEFFECT *a3)
{
  int v4; // edi
  _BYTE v6[24]; // [rsp+20h] [rbp-28h]

  v4 = *((_DWORD *)a3 + 6);
  *(_OWORD *)v6 = *(_OWORD *)a3;
  *(_QWORD *)&v6[16] = *((_QWORD *)a3 + 2);
  (*(void (__fastcall **)(CArithmeticCompositeEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 48) = v4;
  *((_OWORD *)this + 11) = *(_OWORD *)&v6[8];
  CResource::NotifyOnChanged(this, 0, 0LL);
  return 0LL;
}
