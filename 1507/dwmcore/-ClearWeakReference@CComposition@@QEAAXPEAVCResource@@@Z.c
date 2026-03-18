/*
 * XREFs of ?ClearWeakReference@CComposition@@QEAAXPEAVCResource@@@Z @ 0x180067E54
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x1800482F8 (--1CResource@@MEAA@XZ.c)
 *     ?ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z @ 0x180067F90 (-ReleaseWeakReference@CComposition@@QEAAXPEAVCWeakReferenceBase@@@Z.c)
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
  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 960);
  Buffer[1] = a2;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 960), Buffer);
  v4 = (_QWORD *)*v3;
  *v4 = 0LL;
  v4[1] = 0LL;
  RtlDeleteElementGenericTable(v2, v3);
}
