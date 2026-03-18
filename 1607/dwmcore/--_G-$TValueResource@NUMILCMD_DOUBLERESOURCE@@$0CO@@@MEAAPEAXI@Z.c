/*
 * XREFs of ??_G?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@MEAAPEAXI@Z @ 0x18012B400
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008DF34 (--1CResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CResource *__fastcall TValueResource<double,MILCMD_DOUBLERESOURCE,46>::`scalar deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<double,MILCMD_DOUBLERESOURCE,46>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
