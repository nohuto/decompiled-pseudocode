/*
 * XREFs of ?CheckForMemoryBudgetThresholdChanges@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C0035C4C
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall VIDMM_GLOBAL::CheckForMemoryBudgetThresholdChanges(VIDMM_GLOBAL *this)
{
  char v1; // bl
  unsigned int i; // r8d
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r11
  _BYTE *v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  char v10; // al

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 1604); ++i )
  {
    v4 = 2LL;
    v5 = 264LL * i;
    v6 = 232LL;
    v7 = (_BYTE *)(v5 + *((_QWORD *)this + 5104) + 256LL);
    do
    {
      v8 = v5 + *((_QWORD *)this + 5104);
      v9 = *(_QWORD *)(v6 + v8 - 216);
      if ( v9 )
        v10 = (__int64)(100 - 100LL * *(_QWORD *)(v6 + v8) / v9) < (unsigned int)dword_1C0027350;
      else
        v10 = 0;
      if ( v10 != *v7 )
      {
        v1 = 1;
        *v7 = v10;
      }
      v6 += 8LL;
      ++v7;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
