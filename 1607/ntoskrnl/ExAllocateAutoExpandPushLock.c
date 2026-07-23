/*
 * XREFs of ExAllocateAutoExpandPushLock @ 0x14013559C
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall ExAllocateAutoExpandPushLock(char a1)
{
  int v1; // ebx
  _QWORD *result; // rax

  v1 = a1 & 1;
  result = ExAllocatePoolWithTag((POOL_TYPE)(v1 != 0 ? NonPagedPoolNx : PagedPool), 0x10uLL, 0x6C706541u);
  if ( result )
  {
    *result = 0LL;
    result[1] = 0LL;
    if ( !v1 )
      *((_DWORD *)result + 2) |= 4u;
    *result = 0LL;
  }
  return result;
}
