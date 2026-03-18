/*
 * XREFs of ?LookupSystemVisualForParent@CApplicationChannel@DirectComposition@@QEAAJIPEAI@Z @ 0x1C001B670
 * Callers:
 *     ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C00116B0 (-RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0012928 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?GetSystemVisualHandle@CDuplicatedVisualMarshaler@DirectComposition@@QEAAIXZ @ 0x1C0013E48 (-GetSystemVisualHandle@CDuplicatedVisualMarshaler@DirectComposition@@QEAAIXZ.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C001CCA0 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@IEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::LookupSystemVisualForParent(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v4; // edi
  struct DirectComposition::CResourceMarshaler *v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rbx
  DirectComposition::CDuplicatedVisualMarshaler *v7; // rbx

  v4 = -1073741811;
  v5 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v5 + 16LL))(v5) == 31 )
    {
      v7 = (DirectComposition::CDuplicatedVisualMarshaler *)*((_QWORD *)v6 + 19);
      if ( v7 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CDuplicatedVisualMarshaler *))(*(_QWORD *)v7 + 200LL))(v7) )
        {
          *a3 = DirectComposition::CDuplicatedVisualMarshaler::GetSystemVisualHandle(v7);
          return 0;
        }
      }
    }
  }
  return v4;
}
