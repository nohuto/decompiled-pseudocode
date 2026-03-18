/*
 * XREFs of sub_140272EFC @ 0x140272EFC
 * Callers:
 *     RtlpMuiRegResizeLanguageConfigList @ 0x1407200E4 (RtlpMuiRegResizeLanguageConfigList.c)
 *     RtlpMuiRegResizeLanguages @ 0x140720144 (RtlpMuiRegResizeLanguages.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void *__fastcall sub_140272EFC(
        unsigned int *P,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7)
{
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // esi
  PVOID PoolWithTag; // rax
  void *v12; // rbx

  if ( !P )
    return 0LL;
  v8 = a4 * (unsigned __int64)a3;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v8 + a2;
  if ( (unsigned int)v8 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v9;
  if ( v9 )
  {
    v10 = v8 + a2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x72746C6Du);
    v12 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v10);
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
    return 0LL;
  memmove(v12, P, *P);
  ExFreePoolWithTag(P, 0);
  return v12;
}
