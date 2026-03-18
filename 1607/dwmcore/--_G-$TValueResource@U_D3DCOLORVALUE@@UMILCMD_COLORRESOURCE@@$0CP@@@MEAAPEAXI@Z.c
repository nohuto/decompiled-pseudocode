/*
 * XREFs of ??_G?$TValueResource@U_D3DCOLORVALUE@@UMILCMD_COLORRESOURCE@@$0CP@@@MEAAPEAXI@Z @ 0x18012B540
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008DF34 (--1CResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CResource *__fastcall TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,47>::`scalar deleting destructor'(
        CResource *a1,
        char a2)
{
  *(_QWORD *)a1 = &TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,47>::`vftable';
  CResource::~CResource(a1);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CResource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
