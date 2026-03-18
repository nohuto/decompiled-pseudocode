/*
 * XREFs of ??_G?$TValueResource@U_MilMatrix3x2D@@UMILCMD_MATRIXRESOURCE@@$0CP@@@MEAAPEAXI@Z @ 0x1800F8F70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x1800482F8 (--1CResource@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CResource *__fastcall TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,47>::`scalar deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,47>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
