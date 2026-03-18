/*
 * XREFs of ?RevalidateHitTestResult@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01F1F5C
 * Callers:
 *     ?GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HHKPEAH@Z @ 0x1C01F15A8 (-GestureContactProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@.c)
 * Callees:
 *     SpeedHitTestWithoutTargeting @ 0x1C022D488 (SpeedHitTestWithoutTargeting.c)
 */

void __fastcall RevalidateHitTestResult(struct tagTPSTATE *a1)
{
  char *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = (char *)a1 + 1088;
  v3 = *((_QWORD *)a1 + 136);
  if ( v3 && (*(char *)(v3 + 44) < 0 || *(char *)(v3 + 43) < 0) )
  {
    HMAssignmentUnlock(v1);
    v6 = 0;
    v7 = 0;
    v4 = SpeedHitTestWithoutTargeting(
           *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
           5,
           *((_QWORD *)a1 + 139),
           *((_QWORD *)a1 + 137),
           (__int64)&v6,
           (__int64)&v7);
    if ( v4 )
    {
      HMAssignmentLock(v1, v4);
      if ( v6 )
      {
        v5 = v7;
        *((_DWORD *)a1 + 316) |= 0x8000000u;
        *((_DWORD *)a1 + 317) = v5;
      }
    }
  }
}
