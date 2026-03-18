/*
 * XREFs of ?GetSectionInfo@CSectionBitmapRealization@@UEBAJPEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1800C27E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSectionBitmapRealization::GetSectionInfo(
        CSectionBitmapRealization *this,
        struct CSM_SYSMEM_SECTION_INFO *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *((_OWORD *)this + 26);
  *((_QWORD *)a2 + 2) = *((_QWORD *)this + 54);
  return result;
}
