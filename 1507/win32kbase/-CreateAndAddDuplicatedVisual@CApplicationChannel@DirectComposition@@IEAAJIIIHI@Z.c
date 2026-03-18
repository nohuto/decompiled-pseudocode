/*
 * XREFs of ?CreateAndAddDuplicatedVisual@CApplicationChannel@DirectComposition@@IEAAJIIIHI@Z @ 0x1C002DA24
 * Callers:
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0023C08 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 * Callees:
 *     ?CreateInternalDuplicatedVisual@CApplicationChannel@DirectComposition@@QEAAJIIPEAPEAVCDuplicatedVisualMarshaler@2@@Z @ 0x1C002E4C8 (-CreateInternalDuplicatedVisual@CApplicationChannel@DirectComposition@@QEAAJIIPEAPEAVCDuplicated.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z @ 0x1C0030130 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJIPEA_N@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C003070C (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateAndAddDuplicatedVisual(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int a6)
{
  unsigned int v9; // edi
  int v10; // ebx
  struct DirectComposition::CDuplicatedVisualMarshaler *v11; // rax
  struct DirectComposition::CDuplicatedVisualMarshaler *v13; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0;
  v10 = DirectComposition::CApplicationChannel::CreateInternalDuplicatedVisual(this, a2, a6, &v13);
  if ( v10 >= 0 )
  {
    v11 = v13;
    *((_DWORD *)v13 + 4) |= 1u;
    v9 = *((_DWORD *)v11 + 6);
    if ( !a6 )
    {
      v10 = DirectComposition::CApplicationChannel::AddVisualChild(this, v9, a3, a5, 0);
LABEL_5:
      if ( v10 >= 0 )
        return (unsigned int)v10;
      goto LABEL_8;
    }
    v10 = DirectComposition::CApplicationChannel::AddVisualChild(this, a3, v9, a5, a4);
    if ( v10 >= 0 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(this, v9, 0LL);
      goto LABEL_5;
    }
  }
LABEL_8:
  if ( v9 )
    DirectComposition::CApplicationChannel::ReleaseResource(this, v9, 0LL);
  return (unsigned int)v10;
}
