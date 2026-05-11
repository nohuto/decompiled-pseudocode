/*
 * XREFs of USBHwGetClockRatio @ 0x1C000286C
 * Callers:
 *     USBType1RenderBytePosition @ 0x1C0003000 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x1C00054E0 (USBCaptureBytePosition.c)
 * Callees:
 *     WPP_RECORDER_SF_did @ 0x1C00023DC (WPP_RECORDER_SF_did.c)
 *     USBMidiInGetCurrentTime @ 0x1C00026E0 (USBMidiInGetCurrentTime.c)
 *     UsbHwFrameCountTimestamp @ 0x1C0002728 (UsbHwFrameCountTimestamp.c)
 */

__int64 __fastcall USBHwGetClockRatio(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v3; // rdi
  int v5; // r14d
  unsigned __int64 v6; // r15
  int v7; // esi
  KSPIN_LOCK *v8; // r12
  KIRQL v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ebx
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-38h]
  unsigned __int64 v24[3]; // [rsp+40h] [rbp-18h] BYREF
  int v28; // [rsp+B8h] [rbp+60h] BYREF

  v3 = *(_QWORD *)(a1 + 136);
  v5 = 0;
  v28 = 0;
  v6 = 0LL;
  v24[0] = 0LL;
  v7 = 0;
  *a3 = 0LL;
  v8 = (KSPIN_LOCK *)(a1 + 96);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_BYTE *)(v3 + 12) = 1;
  if ( *(_DWORD *)(v3 + 24) )
  {
    if ( !*(_DWORD *)(v3 + 40) )
    {
      v18 = USBMidiInGetCurrentTime() - *(_QWORD *)(v3 + 32);
      v7 = -1073741275;
      KeReleaseSpinLock(v8, v9);
      if ( v18 > 0x7A120 )
      {
        v7 = UsbHwFrameCountTimestamp(a1, &v28, v24);
        v6 = v24[0];
        v5 = v28;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_did((__int64)WPP_GLOBAL_Control->DeviceExtension, v19, v20, 0xDu, v23);
      }
      v9 = KeAcquireSpinLockRaiseToDpc(v8);
      if ( v7 >= 0 && v5 != *(_DWORD *)(v3 + 24) )
      {
        v21 = (v6 - *(_QWORD *)(v3 + 32)) / (unsigned int)(v5 - *(_DWORD *)(v3 + 24));
        if ( v21 - 9500 <= 0x3E8 )
        {
          v22 = *(_QWORD *)(v3 + 16);
          *(_DWORD *)(v3 + 40) = v5;
          *(_QWORD *)(v3 + 48) = v6;
          if ( v22 )
            v21 = (v22 + v21) >> 1;
          *(_QWORD *)(v3 + 16) = v21;
        }
      }
    }
  }
  else
  {
    KeReleaseSpinLock(v8, v9);
    v7 = UsbHwFrameCountTimestamp(a1, &v28, v24);
    v12 = v28;
    v13 = v24[0];
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_did((__int64)WPP_GLOBAL_Control->DeviceExtension, v10, v11, 0xCu, v23);
    v9 = KeAcquireSpinLockRaiseToDpc(v8);
    if ( v7 >= 0 )
    {
      *(_DWORD *)(v3 + 24) = v12;
      *(_QWORD *)(v3 + 32) = v13;
    }
  }
  v14 = *(_QWORD *)(v3 + 16);
  if ( v14 )
  {
    if ( *(_DWORD *)(v3 + 24) )
    {
      v15 = *(_OWORD *)(v3 + 24);
      *a3 = v14;
      *a2 = v15;
      if ( *(_QWORD *)(v3 + 48) )
      {
        if ( USBMidiInGetCurrentTime() - *(_QWORD *)(v3 + 48) > 0xF4240 )
        {
          v16 = *(_OWORD *)(v3 + 40);
          *(_DWORD *)(v3 + 40) = 0;
          *(_QWORD *)(v3 + 48) = 0LL;
          *(_OWORD *)(v3 + 24) = v16;
        }
      }
    }
  }
  *(_BYTE *)(v3 + 12) = 0;
  KeReleaseSpinLock(v8, v9);
  return (unsigned int)v7;
}
