/*
 * XREFs of ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x1800946F8
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 *     ??1CResource@@MEAA@XZ @ 0x180085834 (--1CResource@@MEAA@XZ.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180094860 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CComposition::ClearWeakReference(CComposition *this, struct CResource *a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdx
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = 0LL;
  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 928);
  Buffer[1] = a2;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 928), Buffer);
  v4 = (_QWORD *)*v3;
  *v4 = 0LL;
  v4[1] = 0LL;
  RtlDeleteElementGenericTable(v2, v3);
}
