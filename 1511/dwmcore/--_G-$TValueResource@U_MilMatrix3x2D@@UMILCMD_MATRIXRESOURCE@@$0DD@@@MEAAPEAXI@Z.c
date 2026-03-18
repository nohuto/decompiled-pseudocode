/*
 * XREFs of ??_G?$TValueResource@U_MilMatrix3x2D@@UMILCMD_MATRIXRESOURCE@@$0DD@@@MEAAPEAXI@Z @ 0x180113080
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x180085834 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,51>::`scalar deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,51>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
