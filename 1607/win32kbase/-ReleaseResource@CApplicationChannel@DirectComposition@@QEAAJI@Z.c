/*
 * XREFs of ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C003FC3C
 * Callers:
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C003DD50 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C003BF50 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReleaseResource(
        DirectComposition::CApplicationChannel *this,
        int a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // r8
  struct DirectComposition::CResourceMarshaler *v6; // rdi
  struct DirectComposition::CResourceMarshaler *v8; // rsi

  v2 = 0;
  v3 = (unsigned int)(a2 - 1);
  if ( a2 && v3 < *((_QWORD *)this + 11) )
  {
    _mm_lfence();
    v6 = *(struct DirectComposition::CResourceMarshaler **)(v3 * *((_QWORD *)this + 12) + *((_QWORD *)this + 8));
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v6 + 112LL))(
           v6,
           32LL) )
    {
      v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v6 + 20);
      if ( v8 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 208LL))(*((_QWORD *)v6 + 20)) )
          DirectComposition::CApplicationChannel::ReleaseResource(this, v8);
      }
    }
    DirectComposition::CLinearObjectTableBase::ReleaseHandle(
      (DirectComposition::CApplicationChannel *)((char *)this + 56),
      a2);
    DirectComposition::CApplicationChannel::ReleaseResource(this, v6);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
