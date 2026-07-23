/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18005A7B0
 * Callers:
 *     ResCOpenRegistryKey @ 0x180059EDC (ResCOpenRegistryKey.c)
 *     ResCKeGetBaseFolder @ 0x18005A648 (ResCKeGetBaseFolder.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18005A830 (StringCopyWorkerW.c)
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
        goto LABEL_9;
      }
    }
    v3 = -2147024809;
  }
  v7 = 0LL;
LABEL_9:
  if ( v3 >= 0 )
    return (unsigned int)StringCopyWorkerW(&a1[v7], a2 - v7, a3, (STRSAFE_PCNZWCH)a3, v9);
  return (unsigned int)v3;
}
