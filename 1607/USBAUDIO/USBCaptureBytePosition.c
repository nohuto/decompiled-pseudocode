/*
 * XREFs of USBCaptureBytePosition @ 0x1C00058C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C0002334 (WPP_RECORDER_SF_ii.c)
 *     USBHwGetCurrentFrame @ 0x1C0002A10 (USBHwGetCurrentFrame.c)
 *     USBMidiInGetCurrentTime @ 0x1C0002A60 (USBMidiInGetCurrentTime.c)
 *     USBHwGetClockRatio @ 0x1C0002BEC (USBHwGetClockRatio.c)
 */

__int64 __fastcall USBCaptureBytePosition(struct _KSPIN *a1, union _LARGE_INTEGER *a2)
{
  __int64 Context; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  int AvailableByteCount; // r15d
  KIRQL v7; // al
  KIRQL v8; // r13
  KIRQL v9; // al
  union _LARGE_INTEGER v10; // rcx
  union _LARGE_INTEGER v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 CurrentTime; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  union _LARGE_INTEGER v19; // rax
  __int128 v21; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+48h] BYREF
  LONG OutputBufferBytes; // [rsp+A8h] [rbp+50h] BYREF
  LONG InputDataBytes; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+60h] BYREF

  Context = (__int64)a1->Context;
  v22 = 0;
  v4 = 0LL;
  v25 = 0LL;
  v5 = *(_QWORD *)(Context + 136);
  AvailableByteCount = KsPinGetAvailableByteCount(a1, &InputDataBytes, &OutputBufferBytes);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 96));
  v8 = v7;
  if ( !*(_BYTE *)(v5 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(Context + 96), v7);
    USBHwGetClockRatio(Context, &v21, &v25);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 96));
    v4 = v25;
    v8 = v9;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  v10 = *(union _LARGE_INTEGER *)(Context + 64);
  a2[3] = v10;
  a2[2] = v10;
  if ( !*(_BYTE *)(Context + 37) )
  {
    v19 = v10;
    if ( *(_QWORD *)(Context + 80) > v10.QuadPart )
      v19 = *(union _LARGE_INTEGER *)(Context + 80);
    goto LABEL_20;
  }
  AvailableByteCount = USBHwGetCurrentFrame(*(_QWORD *)(Context + 16), &v22);
  if ( AvailableByteCount >= 0 )
  {
    v11 = *(union _LARGE_INTEGER *)(Context + 72);
    v12 = v22;
    a2[2] = v11;
    v13 = *(unsigned int *)(v5 + 88);
    if ( v12 - v13 >= 0 )
    {
      if ( v4 )
      {
        v22 = *(_DWORD *)(v5 + 84);
        if ( (unsigned int)v13 <= (unsigned int)v21 )
          v14 = *((_QWORD *)&v21 + 1) - v4 * (unsigned int)(v21 - v13);
        else
          v14 = *((_QWORD *)&v21 + 1) + v4 * (unsigned int)(v13 - v21);
        CurrentTime = USBMidiInGetCurrentTime();
        if ( v14 > CurrentTime )
          v14 = CurrentTime;
        v16 = CurrentTime - v14;
        v17 = ((CurrentTime - v14) * v22 * (unsigned __int128)0xD6BF94D5E57A42BDuLL) >> 64;
        v18 = (CurrentTime - v14) * v22 / 0x989680;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_ii(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v17,
            v16,
            0x1Bu,
            (__int64)&WPP_cd889c5661493256fd20720ba3c49600_Traceguids,
            v18,
            v16);
        a2[2].QuadPart += v18;
      }
      else
      {
        a2[2].QuadPart = v11.QuadPart + *(_DWORD *)(v5 + 84) * ((int)v12 - (int)v13) / 0x3E8u;
      }
    }
    v19 = *(union _LARGE_INTEGER *)(Context + 80);
    if ( v19.QuadPart > (unsigned __int64)a2[2].QuadPart )
LABEL_20:
      a2[2] = v19;
  }
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(Context + 80) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(Context + 96), v8);
  return (unsigned int)AvailableByteCount;
}
