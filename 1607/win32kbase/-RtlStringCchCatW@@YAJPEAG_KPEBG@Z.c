/*
 * XREFs of ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0087764
 * Callers:
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C0087494 (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00B3C1C (-GetSpriteFillColor@@YAKXZ.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00B3E48 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCatW(unsigned __int16 *a1, __int64 a2, size_t *a3)
{
  int v3; // r9d
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  __int64 v7; // rax
  size_t v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
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
    v3 = -1073741811;
  }
  v7 = 0LL;
LABEL_11:
  if ( v3 >= 0 )
    return (unsigned int)RtlStringCopyWorkerW(&a1[v7], a2 - v7, a3, (STRSAFE_PCNZWCH)a3, v9);
  return (unsigned int)v3;
}
