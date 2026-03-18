/*
 * XREFs of ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C003F0FC
 * Callers:
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C007E2F8 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C00813E4 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(
        DirectComposition::CApplicationChannel *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  struct DirectComposition::CResourceMarshaler *v4; // rdi

  v1 = (_QWORD *)((char *)a1 + 256);
  result = *((_QWORD *)a1 + 32);
  if ( (DirectComposition::CApplicationChannel *)result != (DirectComposition::CApplicationChannel *)((char *)a1 + 256) )
  {
    while ( 1 )
    {
      v4 = (struct DirectComposition::CResourceMarshaler *)(result - 248);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(result - 248) + 272LL))(result - 248) )
        break;
      result = *((_QWORD *)v4 + 31);
      if ( (_QWORD *)result == v1 )
        return result;
    }
    return DirectComposition::CApplicationChannel::ReleaseResource(a1, v4);
  }
  return result;
}
