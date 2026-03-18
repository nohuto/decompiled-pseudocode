/*
 * XREFs of ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C0028E14
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C002FC9C (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ??_GCDCompDynamicArrayBase@DirectComposition@@MEAAPEAXI@Z @ 0x1C00D4A20 (--_GCDCompDynamicArrayBase@DirectComposition@@MEAAPEAXI@Z.c)
 *     ??_G?$CLinearHandleTable@IVCResourceMarshaler@DirectComposition@@$0HEHCEDEE@@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D4E50 (--_G-$CLinearHandleTable@IVCResourceMarshaler@DirectComposition@@$0HEHCEDEE@@DirectComposition@@.c)
 *     ??_E?$CDCompDynamicArray@_K@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D5880 (--_E-$CDCompDynamicArray@_K@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D58C0 (--_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D72A0 (--_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(
        DirectComposition::CDCompDynamicArrayBase *this)
{
  __int64 v1; // rcx

  *(_QWORD *)this = &DirectComposition::CDCompDynamicArrayBase::`vftable';
  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    Win32FreePool(v1);
}
