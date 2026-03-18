/*
 * XREFs of ??_E?$TValueResource@UMilRectD@@UMILCMD_RECTDRESOURCE@@$0CM@@@MEAAPEAXI@Z @ 0x1800F8EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x1800482F8 (--1CResource@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CResource *__fastcall TValueResource<MilRectD,MILCMD_RECTDRESOURCE,44>::`vector deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilRectD,MILCMD_RECTDRESOURCE,44>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
