/*
 * XREFs of SmProcessCreateNotification @ 0x140469E2C
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SmpKeyedStoreCreate @ 0x1404F9F74 (SmpKeyedStoreCreate.c)
 */

__int64 __fastcall SmProcessCreateNotification(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  if ( (dword_140352D28 & 0xC) == 0 || *(_WORD *)(a1 + 1452) )
  {
    return (unsigned int)-1073741637;
  }
  else if ( a2 )
  {
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v4);
    v2 = SmpKeyedStoreCreate((ULONG_PTR)&qword_140352D30);
    KiUnstackDetachProcess((struct _KTHREAD *)v4, 0);
  }
  else
  {
    return (unsigned int)-1073700352;
  }
  return v2;
}
