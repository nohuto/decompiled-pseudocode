/*
 * XREFs of LdrpTouchThreadStack @ 0x180083BB4
 * Callers:
 *     _LdrpInitialize @ 0x180076DB4 (_LdrpInitialize.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpTouchThreadStack(unsigned __int64 a1)
{
  struct _TEB *v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp-48h]
  _QWORD v7[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = NtCurrentTeb();
  result = ZwQueryVirtualMemory(-1LL, v2->NtTib.StackLimit, 0LL, v7);
  if ( (int)result >= 0 )
  {
    v4 = v7[1] + 12288LL;
    v5 = (unsigned __int64)v2->NtTib.StackBase - 4096;
    v6 = v5;
    if ( v5 > a1 && v5 - a1 > v4 )
      v4 = v5 - a1;
    while ( v5 >= v4 )
    {
      v5 = v6 - 4096;
      v6 -= 4096LL;
    }
    return 0LL;
  }
  return result;
}
