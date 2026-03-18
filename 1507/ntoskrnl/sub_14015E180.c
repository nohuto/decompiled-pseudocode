/*
 * XREFs of sub_14015E180 @ 0x14015E180
 * Callers:
 *     RtlpMuiRegCreateLanguages @ 0x140591654 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x1405916A8 (RtlpMuiRegCreateLanguageConfigList.c)
 *     RtlpMuiRegCreateStringPool @ 0x140591708 (RtlpMuiRegCreateStringPool.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_14015E180(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v7; // rcx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx
  unsigned int v10; // eax
  unsigned int v11; // edi
  PVOID PoolWithTag; // rax
  PVOID v13; // rbx

  v7 = a3 * (unsigned __int64)a2;
  if ( v7 > 0xFFFFFFFF )
    return 0LL;
  v8 = a1 + v7;
  if ( v8 < a1 )
    return 0LL;
  v9 = a5 * (unsigned __int64)a4;
  if ( v9 > 0xFFFFFFFF )
    return 0LL;
  v10 = v9 + v8;
  if ( (unsigned int)v9 + v8 < v8 )
    return 0LL;
  if ( a6 )
    *a6 = v10;
  if ( !v10 )
    return 0LL;
  v11 = v9 + v8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x72746C6Du);
  v13 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, v11);
  return v13;
}
