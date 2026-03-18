/*
 * XREFs of EtwpAddDataSource @ 0x1404CE16C
 * Callers:
 *     EtwpQueueNotification @ 0x1404CDF90 (EtwpQueueNotification.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall EtwpAddDataSource(__int64 a1)
{
  signed __int64 v1; // rbx
  __int64 *result; // rax
  __int64 *v4; // rdi
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 1080);
  if ( v1 && (v1 & 1) == 0 )
    return *(__int64 **)(a1 + 1080);
  result = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x53777445u);
  v4 = result;
  if ( result )
  {
    memset(result, 0, 0x20uLL);
    if ( v1 )
      v5 = v1 ^ 1;
    else
      v5 = 0LL;
    *v4 = v5;
    v4[3] = (__int64)(v4 + 2);
    v4[2] = (__int64)(v4 + 2);
    v4[1] = 0LL;
    if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1080), (signed __int64)v4, v1) )
      ExFreePoolWithTag(v4, 0);
    return *(__int64 **)(a1 + 1080);
  }
  return result;
}
