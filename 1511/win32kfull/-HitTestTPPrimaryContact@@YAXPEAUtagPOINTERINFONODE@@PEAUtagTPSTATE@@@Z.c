/*
 * XREFs of ?HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z @ 0x1C01F19CC
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01F0D44 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 * Callees:
 *     PointerSpeedHitTest @ 0x1C022D63C (PointerSpeedHitTest.c)
 */

void __fastcall HitTestTPPrimaryContact(struct tagPOINTERINFONODE *a1, struct tagTPSTATE *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v7 = 0;
  v4 = PointerSpeedHitTest(
         *(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL),
         (struct tagPOINTERINFONODE *)((char *)a1 + 48),
         &v6,
         &v7);
  if ( v4 )
  {
    HMAssignmentLock((char *)a2 + 1328, v4);
    if ( v6 )
    {
      v5 = v7;
      *((_DWORD *)a2 + 386) |= 0x4000000u;
      *((_DWORD *)a2 + 388) = v5;
    }
  }
  *((_QWORD *)a2 + 169) = *((_QWORD *)a1 + 17);
}
