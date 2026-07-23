/*
 * XREFs of ObpInitObjectTypeSD @ 0x140552BD4
 * Callers:
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140552C6C (ObpCreateDefaultObjectTypeSD.c)
 */

__int64 __fastcall ObpInitObjectTypeSD(__int64 a1, void *a2)
{
  PVOID v4; // rbx
  int v5; // eax
  int v6; // edi
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = a2;
  v4 = a2;
  if ( a2 || (v5 = ObpCreateDefaultObjectTypeSD(&P), v4 = P, v6 = v5, v5 >= 0) )
  {
    v6 = ObLogSecurityDescriptor(v4, &P, 0x10u);
    if ( v6 >= 0 )
    {
      if ( P )
        *(_QWORD *)(a1 - 8) = (char *)P + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
  }
  if ( v4 && !a2 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
