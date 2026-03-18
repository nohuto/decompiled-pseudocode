/*
 * XREFs of ?SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z @ 0x1C00909F0
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C0088B64 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005A00C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 */

void __fastcall VIDMM_PROCESS::SetMemoryBudgetOverride(VIDMM_PROCESS *this, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r10d
  VIDMM_GLOBAL **v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = 0;
  v5 = *(VIDMM_GLOBAL ***)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v5 )
  {
    if ( *((_DWORD *)*v5 + 1604) )
    {
      do
      {
        v6 = v4++;
        v7 = (__int64)v5[6] + 264 * v6;
        *(_QWORD *)(v7 + 40) = a3;
        *(_QWORD *)(v7 + 48) = a4;
      }
      while ( v4 < *((_DWORD *)*v5 + 1604) );
    }
    VIDMM_GLOBAL::RequestNewBudget(*v5, 0);
  }
}
