/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0058204
 * Callers:
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0033278 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C0058198 (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 *     ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0058EC8 (-ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0059730 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 * Callees:
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C005828C (-GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(
        struct VIDMM_GLOBAL **this,
        unsigned __int64 *a2,
        bool a3,
        bool a4)
{
  unsigned int v4; // ebx
  struct VIDMM_GLOBAL *i; // r10
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a2 = 0LL;
  for ( i = *this; v4 < *((_DWORD *)*this + 1604); i = *this )
  {
    VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
      (struct VIDMM_GLOBAL *)((char *)this[6] + 240 * v4),
      &v11,
      a3,
      a4,
      i,
      v4);
    v10 = v11;
    if ( *a2 > v11 )
      v10 = *a2;
    ++v4;
    *a2 = v10;
  }
}
