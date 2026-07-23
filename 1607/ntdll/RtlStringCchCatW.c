/*
 * XREFs of RtlStringCchCatW @ 0x1800E5FFC
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800EF630 (RtlpOpenAndMapCustomCultureFile.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x1800E60C4 (RtlStringCopyWorkerW_1.c)
 */

__int64 __fastcall RtlStringCchCatW(_WORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v5; // rcx
  _WORD *v6; // rax
  __int64 v7; // rax

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
    return (unsigned int)RtlStringCopyWorkerW_1(&a1[v7], a2 - v7, a3, a3);
  return (unsigned int)v3;
}
