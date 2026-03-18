/*
 * XREFs of ?RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01E8420
 * Callers:
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01E7B6C (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 * Callees:
 *     SpeedHitTestWithoutTargeting @ 0x1C02234F0 (SpeedHitTestWithoutTargeting.c)
 */

void __fastcall RevalidateHitTestResult(struct tagTPSTATE *a1)
{
  char *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char *)a1 + 1672;
  v3 = *((_QWORD *)a1 + 209);
  if ( v3 && (*(char *)(v3 + 44) < 0 || *(char *)(v3 + 43) < 0) )
  {
    HMAssignmentUnlock(v1);
    v6 = 0;
    v7 = 0;
    v4 = SpeedHitTestWithoutTargeting(
           *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
           5,
           *((_QWORD *)a1 + 212),
           *((_QWORD *)a1 + 210),
           (__int64)&v6,
           (__int64)&v7);
    if ( v4 )
    {
      HMAssignmentLock(v1, v4);
      if ( v6 )
      {
        v5 = v7;
        *((_DWORD *)a1 + 480) |= 0x1000000u;
        *((_DWORD *)a1 + 481) = v5;
      }
    }
  }
}
