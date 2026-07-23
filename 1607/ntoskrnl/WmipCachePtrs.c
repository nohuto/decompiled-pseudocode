/*
 * XREFs of WmipCachePtrs @ 0x140537D68
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x140537C90 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall WmipCachePtrs(__int64 a1, __int64 a2, unsigned int *a3, int *a4, const void **a5)
{
  int v9; // edx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 result; // rax
  const void *v13; // rbp
  int v14; // ebx
  void *v15; // r15

  if ( *a3 != *a4 )
  {
LABEL_2:
    v9 = *a3;
    v10 = *a5;
    v11 = 2LL * *a3;
    v10[v11] = a1;
    v10[v11 + 1] = a2;
    result = (unsigned int)(v9 + 1);
    *a3 = result;
    return result;
  }
  result = (unsigned __int64)ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)(*a4 + 64), 0x70696D57u);
  v13 = (const void *)result;
  if ( result )
  {
    v14 = *a4;
    v15 = (void *)*a5;
    memmove((void *)result, *a5, 16LL * (unsigned int)*a4);
    *a4 = v14 + 64;
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    *a5 = v13;
    goto LABEL_2;
  }
  return result;
}
