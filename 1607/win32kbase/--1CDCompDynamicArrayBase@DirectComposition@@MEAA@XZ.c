/*
 * XREFs of ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C004CEAC
 * Callers:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0018814 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ??_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C003C7D0 (--_ECPropertyBagMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0042038 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_GCDCompDynamicArrayBase@DirectComposition@@MEAAPEAXI@Z @ 0x1C00E3E30 (--_GCDCompDynamicArrayBase@DirectComposition@@MEAAPEAXI@Z.c)
 *     ??_E?$CDCompDynamicArray@_K@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E4450 (--_E-$CDCompDynamicArray@_K@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_E?$CDCompDynamicArray@UD2D1_INK_BEZIER_SEGMENT@@@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E50E0 (--_E-$CDCompDynamicArray@UD2D1_INK_BEZIER_SEGMENT@@@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E5120 (--_ECInkMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_G?$CDCompDynamicArray@UD2D1_PENCIL_SEGMENT@@@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E5900 (--_G-$CDCompDynamicArray@UD2D1_PENCIL_SEGMENT@@@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_GCPencilMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E5940 (--_GCPencilMarshaler@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_E?$CDCompDynamicArray@UPropertyUpdate@@@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E6F40 (--_E-$CDCompDynamicArray@UPropertyUpdate@@@DirectComposition@@UEAAPEAXI@Z.c)
 *     ??_E?$CDCompDynamicArray@UPositionShift@@@DirectComposition@@UEAAPEAXI@Z @ 0x1C00E7E80 (--_E-$CDCompDynamicArray@UPositionShift@@@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase(
        DirectComposition::CDCompDynamicArrayBase *this)
{
  *(_QWORD *)this = &DirectComposition::CDCompDynamicArrayBase::`vftable';
  if ( *((_QWORD *)this + 1) )
    Win32FreePool();
}
