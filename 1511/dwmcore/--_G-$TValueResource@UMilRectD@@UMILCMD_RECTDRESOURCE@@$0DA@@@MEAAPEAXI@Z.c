/*
 * XREFs of ??_G?$TValueResource@UMilRectD@@UMILCMD_RECTDRESOURCE@@$0DA@@@MEAAPEAXI@Z @ 0x180112FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x180085834 (--1CResource@@MEAA@XZ.c)
 */

CResource *__fastcall TValueResource<MilRectD,MILCMD_RECTDRESOURCE,48>::`scalar deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<MilRectD,MILCMD_RECTDRESOURCE,48>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
