/*
 * XREFs of KeSecureProcess @ 0x1401FF820
 * Callers:
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall KeSecureProcess(_KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // ebx
  unsigned __int8 v12[8]; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 SecurePid; // [rsp+28h] [rbp-D0h]
  __int64 v14; // [rsp+30h] [rbp-C8h]
  __int64 v15; // [rsp+38h] [rbp-C0h]
  __int64 v16; // [rsp+40h] [rbp-B8h]
  __int64 v17; // [rsp+48h] [rbp-B0h]
  __int64 v18; // [rsp+50h] [rbp-A8h]
  _BYTE v19[48]; // [rsp+90h] [rbp-68h] BYREF

  KiStackAttachProcess(a1, 0, (__int64)v19);
  SecurePid = a1->SecurePid;
  v17 = a5;
  v15 = a2;
  v16 = a3;
  v14 = a4;
  v18 = a6;
  v10 = HvlpEnterIumSecureMode(1u, 6, 0, v12);
  KiUnstackDetachProcess((struct _KTHREAD *)v19, 0);
  return v10;
}
