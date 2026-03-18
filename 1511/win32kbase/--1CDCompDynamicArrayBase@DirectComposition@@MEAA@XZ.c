/*
 * XREFs of ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E4A0
 * Callers:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C001CE2C (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_E?$CDCompDynamicArray@_K@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D6710 (--_E-$CDCompDynamicArray@_K@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCDCompDynamicArrayBase@DirectComposition@@MEAAPEAXI@Z @ 0x1C00D6750 (--_GCDCompDynamicArrayBase@DirectComposition@@MEAAPEAXI@Z.c)
 *     ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D7880 (--_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_E?$CDCompDynamicArray@UPropertyUpdate@@@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D9280 (--_E-$CDCompDynamicArray@UPropertyUpdate@@@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00D92C0 (--_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
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
