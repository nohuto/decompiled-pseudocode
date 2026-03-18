/*
 * XREFs of AuthzBasepAllocateSecurityAttribute @ 0x140015930
 * Callers:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttribute @ 0x14002BC7C (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall AuthzBasepAllocateSecurityAttribute(unsigned __int16 *a1)
{
  SIZE_T v2; // rdx
  POOL_TYPE v3; // ecx
  _WORD *result; // rax
  _WORD *v5; // rbx
  unsigned int v6; // eax
  unsigned __int16 v7; // cx
  const void *v8; // rdx
  unsigned __int64 v9; // rdi

  v2 = *a1 + 112LL;
  v3 = PagedPool;
  if ( KeGetCurrentIrql() >= 2u )
    v3 = NonPagedPoolNx;
  result = ExAllocatePoolWithTag(v3, v2, 0x74416553u);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0x70uLL);
    v5[16] = 0;
    v5[17] = *a1;
    *((_QWORD *)v5 + 5) = v5 + 56;
    v6 = *a1;
    v7 = v5[17];
    v8 = (const void *)*((_QWORD *)a1 + 1);
    if ( (unsigned __int16)v6 > v7 )
      v6 = v7;
    v5[16] = v6;
    v9 = v6;
    memmove(v5 + 56, v8, v6);
    if ( (unsigned __int64)(unsigned __int16)v5[16] + 2 <= (unsigned __int16)v5[17] )
      v5[(v9 >> 1) + 56] = 0;
    *((_QWORD *)v5 + 10) = v5 + 36;
    *((_QWORD *)v5 + 9) = v5 + 36;
    *((_QWORD *)v5 + 13) = v5 + 48;
    *((_QWORD *)v5 + 12) = v5 + 48;
    return v5;
  }
  return result;
}
