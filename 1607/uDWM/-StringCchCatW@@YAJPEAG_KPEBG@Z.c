/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800725B4
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800710A4 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800726A0 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x180085CA4 (-BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180015610 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, size_t *a3)
{
  int v3; // r9d
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  __int64 v7; // rax
  size_t v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 >= 0 )
  {
    v5 = a2;
    v6 = a1;
    v3 = 0;
    if ( a2 )
    {
      do
      {
        if ( !*v6 )
          break;
        ++v6;
        --v5;
      }
      while ( v5 );
      if ( v5 )
      {
        v7 = a2 - v5;
        goto LABEL_11;
      }
    }
    v3 = -2147024809;
  }
  v7 = 0LL;
LABEL_11:
  if ( v3 >= 0 )
    return (unsigned int)StringCopyWorkerW(&a1[v7], a2 - v7, a3, (STRSAFE_PCNZWCH)a3, v9);
  return (unsigned int)v3;
}
