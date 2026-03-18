/*
 * XREFs of ??_E?$TValueResource@UMilRectF@@UMILCMD_RECTRESOURCE@@$0DC@@@MEAAPEAXI@Z @ 0x18001D910
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008DF34 (--1CResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CResource *__fastcall TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilRectF,MILCMD_RECTRESOURCE,50>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
