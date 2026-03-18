/*
 * XREFs of SmProcessCreateNotification @ 0x14044F374
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SmpKeyedStoreCreate @ 0x1404D1574 (SmpKeyedStoreCreate.c)
 */

__int64 __fastcall SmProcessCreateNotification(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  $D4FCF91253F76F57393CBFE908971F67 v4; // [rsp+20h] [rbp-48h] BYREF

  if ( (dword_140304FB8 & 0xC) == 0 || *(_WORD *)(a1 + 1460) )
  {
    return (unsigned int)-1073741637;
  }
  else if ( a2 )
  {
    KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)&v4);
    v2 = SmpKeyedStoreCreate((ULONG_PTR)&qword_140304FC0);
    KiUnstackDetachProcess(&v4, 0LL);
  }
  else
  {
    return (unsigned int)-1073700352;
  }
  return v2;
}
