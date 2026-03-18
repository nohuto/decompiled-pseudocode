/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_BUDGET_STATE@@QEAAXPEA_K_N1PEAVVIDMM_GLOBAL@@K@Z @ 0x1C005D38C
 * Callers:
 *     ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C005C2C0 (-ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C005D6EC (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PROCESS_BUDGET_STATE::GetNumBytesToTrim(
        VIDMM_PROCESS_BUDGET_STATE *this,
        unsigned __int64 *a2,
        char a3,
        char a4,
        struct VIDMM_GLOBAL *a5,
        unsigned int a6)
{
  bool v7; // zf
  VIDMM_PROCESS_BUDGET_STATE *v8; // r9
  __int64 v9; // rbx
  char *v10; // r10
  signed __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r11
  __int64 v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+8h] [rbp-10h]

  *a2 = 0LL;
  v7 = a4 == 0;
  v8 = (VIDMM_PROCESS_BUDGET_STATE *)((char *)this + 72);
  if ( v7 )
    v8 = (VIDMM_PROCESS_BUDGET_STATE *)((char *)this + 104);
  v9 = 0LL;
  v10 = (char *)(this - v8);
  v11 = v8 - (VIDMM_PROCESS_BUDGET_STATE *)&v18;
  v12 = 2LL;
  do
  {
    if ( a3 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)a5 + 5150) + 8 * (v9 + 33LL * a6) + 32);
      v13 = 8 * v9;
    }
    else
    {
      v13 = 8 * v9;
      v14 = *(__int64 *)((char *)&v18 + (_QWORD)&v10[8 * v9 + 24 + v11]);
    }
    *(__int64 *)((char *)&v18 + v13) = v14;
    v15 = *(__int64 *)((char *)&v18 + v11 + v13);
    if ( v15 > v14 )
    {
      v17 = v15 - *(__int64 *)((char *)&v18 + v13);
      if ( *a2 > v17 )
        v17 = *a2;
      *a2 = v17;
    }
    else
    {
      *(__int64 *)((char *)&v18 + v13) = v14 - v15;
    }
    ++v9;
    --v12;
  }
  while ( v12 );
  if ( !*a2 )
  {
    v16 = *((_QWORD *)v8 + 2);
    if ( v16 > v19 + v18 )
      *a2 = v16 - (v19 + v18);
  }
}
