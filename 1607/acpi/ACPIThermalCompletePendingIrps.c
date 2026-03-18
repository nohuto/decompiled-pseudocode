/*
 * XREFs of ACPIThermalCompletePendingIrps @ 0x1C0009194
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0008DA4 (ACPIThermalLoopEx.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0057384 (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x1C0008658 (WPP_RECORDER_SF_qqssdddd.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 */

char __fastcall ACPIThermalCompletePendingIrps(__int64 a1)
{
  __int64 v1; // r14
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // r12
  KIRQL v6; // r13
  __int64 *v7; // rbx
  __int64 v8; // r15
  int v9; // eax
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  IRP *v16; // rdi
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  __int64 *v19; // r15
  __int64 *v20; // r14
  __int64 v21; // rax
  void *DeviceExtension; // rcx
  __int64 v23; // rax
  __int64 v24; // r15
  PVOID PoolWithTag; // rax
  int v26; // [rsp+28h] [rbp-49h]
  IRP *v27; // [rsp+30h] [rbp-41h]
  __int64 v28; // [rsp+38h] [rbp-39h]
  __int64 *v29; // [rsp+40h] [rbp-31h]
  __int64 *v30; // [rsp+48h] [rbp-29h]
  int Hour; // [rsp+50h] [rbp-21h]
  int Minute; // [rsp+58h] [rbp-19h]
  int Second; // [rsp+60h] [rbp-11h]
  int Milliseconds; // [rsp+68h] [rbp-9h]
  _QWORD *v35; // [rsp+78h] [rbp+7h] BYREF
  _QWORD **v36; // [rsp+80h] [rbp+Fh]
  union _LARGE_INTEGER Time; // [rsp+88h] [rbp+17h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+90h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  v36 = &v35;
  v3 = 0;
  v35 = &v35;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  v5 = (__int64 *)AcpiThermalList;
  v6 = v4;
  while ( v5 != &AcpiThermalList )
  {
    v7 = v5 - 21;
    v5 = (__int64 *)*v5;
    v8 = v7[23];
    if ( ACPIInternalGetDeviceExtension(*(_QWORD *)(v8 + 40)) == a1 )
    {
      v9 = *(_DWORD *)(v8 + 24);
      if ( v9 == 2703488 )
      {
        if ( _InterlockedExchange64(v7 + 13, 0LL) )
        {
          *(_DWORD *)(a1 + 192) |= 0x20000000u;
          v23 = v7[3];
          *(_OWORD *)v23 = *(_OWORD *)v1;
          *(_OWORD *)(v23 + 16) = *(_OWORD *)(v1 + 16);
          *(_OWORD *)(v23 + 32) = *(_OWORD *)(v1 + 32);
          *(_OWORD *)(v23 + 48) = *(_OWORD *)(v1 + 48);
          *(_OWORD *)(v23 + 64) = *(_OWORD *)(v1 + 64);
          *(_QWORD *)(v23 + 80) = *(_QWORD *)(v1 + 80);
          v7[7] = 88LL;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v9 == 2703512 )
        {
          v24 = v7[3];
          *(_QWORD *)v24 = 0LL;
          *(_QWORD *)(v24 + 8) = 0LL;
          if ( *(_QWORD *)(v1 + 312) )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)(v1 + 306), 0x54706341u);
            *(_QWORD *)(v24 + 8) = PoolWithTag;
            if ( PoolWithTag )
            {
              *(_WORD *)v24 = *(_WORD *)(v1 + 304);
              *(_WORD *)(v24 + 2) = *(_WORD *)(v1 + 306);
              memmove(PoolWithTag, *(const void **)(v1 + 312), *(unsigned __int16 *)(v1 + 306));
            }
          }
          v7[7] = 16LL;
        }
        else
        {
          v7[7] = 0LL;
        }
LABEL_7:
        *((_DWORD *)v7 + 12) = 0;
        v10 = v7 + 21;
        v11 = *v10;
        v12 = (_QWORD *)v10[1];
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        v13 = v36;
        if ( *v36 != &v35 )
          __fastfail(3u);
        v10[1] = v36;
        *v10 = &v35;
        *v13 = v10;
        v36 = (_QWORD **)v10;
      }
    }
  }
  KeReleaseSpinLock(&AcpiThermalLock, v6);
  v14 = v35;
  while ( v14 != &v35 )
  {
    v16 = (IRP *)(v14 - 21);
    v14 = (_QWORD *)*v14;
    Flink = v16->Tail.Overlay.ListEntry.Flink;
    Blink = v16->Tail.Overlay.ListEntry.Blink;
    if ( (void **)Flink->Blink != &v16->Tail.CompletionKey + 6 || (void **)Blink->Flink != &v16->Tail.CompletionKey + 6 )
      __fastfail(3u);
    Blink->Flink = Flink;
    v19 = qword_1C002C340;
    Flink->Blink = Blink;
    v20 = qword_1C002C340;
    Time.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&Time, &TimeFields);
    v21 = *(_QWORD *)(a1 + 8);
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v19 = *(__int64 **)(a1 + 560);
      if ( (v21 & 0x400000000000LL) != 0 )
        v20 = *(__int64 **)(a1 + 568);
    }
    Milliseconds = TimeFields.Milliseconds;
    Second = TimeFields.Second;
    Minute = TimeFields.Minute;
    DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
    Hour = TimeFields.Hour;
    v30 = v20;
    v29 = v19;
    v28 = a1;
    v27 = v16;
    WPP_RECORDER_SF_qqssdddd(
      (__int64)DeviceExtension,
      (unsigned int)TimeFields.Second,
      (unsigned int)TimeFields.Minute,
      0xBu,
      v26);
    IofCompleteRequest(v16, 0);
    v3 = 1;
  }
  return v3;
}
