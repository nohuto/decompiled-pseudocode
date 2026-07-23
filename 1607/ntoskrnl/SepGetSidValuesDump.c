/*
 * XREFs of SepGetSidValuesDump @ 0x14021B060
 * Callers:
 *     SepLogTokenSidManagement @ 0x140695010 (SepLogTokenSidManagement.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x14041154C (RtlCopySid.c)
 */

PVOID __fastcall SepGetSidValuesDump(_DWORD *a1, _DWORD *a2)
{
  int v2; // edi
  char *PoolWithTag; // rax
  PVOID v6; // rbp
  unsigned __int8 *v7; // r15
  char *v8; // r12
  unsigned int i; // r13d
  ULONG v10; // ebx

  v2 = 0;
  *a2 = 0;
  if ( !a1 )
    return 0LL;
  if ( !a1[4] )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(*a1 - 24), 0x69536553u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v7 = (unsigned __int8 *)(a1 + 6);
  v8 = PoolWithTag;
  for ( i = 0; i < a1[4]; v7 += (4 * v7[1] + 11) & 0xFFFFFFFC )
  {
    v10 = 4 * v7[1] + 8;
    RtlCopySid(v10, v8, v7);
    v2 += v10;
    ++i;
    v8 += v10;
  }
  *a2 = v2;
  return v6;
}
