/*
 * XREFs of ?HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z @ 0x1C01E7E90
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01E6C7C (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 * Callees:
 *     PointerSpeedHitTest @ 0x1C02233A0 (PointerSpeedHitTest.c)
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
    HMAssignmentLock((char *)a2 + 1672, v4);
    if ( v6 )
    {
      v5 = v7;
      *((_DWORD *)a2 + 480) |= 0x1000000u;
      *((_DWORD *)a2 + 481) = v5;
    }
  }
  *((_QWORD *)a2 + 212) = *((_QWORD *)a1 + 17);
}
