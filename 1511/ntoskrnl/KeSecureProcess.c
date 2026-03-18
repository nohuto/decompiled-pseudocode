/*
 * XREFs of KeSecureProcess @ 0x1401C38F4
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KeSecureProcess(
        _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v12; // ebx
  unsigned __int8 v14[8]; // [rsp+20h] [rbp-A9h] BYREF
  unsigned __int64 SecurePid; // [rsp+28h] [rbp-A1h]
  __int64 v16; // [rsp+30h] [rbp-99h]
  __int64 v17; // [rsp+38h] [rbp-91h]
  __int64 v18; // [rsp+40h] [rbp-89h]
  __int64 v19; // [rsp+48h] [rbp-81h]
  __int64 v20; // [rsp+50h] [rbp-79h]
  __int64 v21; // [rsp+58h] [rbp-71h]
  __int64 v22; // [rsp+60h] [rbp-69h]
  $D4FCF91253F76F57393CBFE908971F67 v23; // [rsp+90h] [rbp-39h] BYREF

  KiStackAttachProcess(a1, 0LL, (__int64)&v23);
  SecurePid = a1->SecurePid;
  v19 = a5;
  v22 = a8;
  v17 = a2;
  v18 = a3;
  v16 = a4;
  v20 = a6;
  v21 = a7;
  v12 = HvlpEnterIumSecureMode(1u, 6, 0, v14);
  KiUnstackDetachProcess(&v23, 0LL);
  return v12;
}
