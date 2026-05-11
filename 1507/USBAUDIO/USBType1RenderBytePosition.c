/*
 * XREFs of USBType1RenderBytePosition @ 0x1C0003240
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetCurrentFrame @ 0x1C00028D0 (USBHwGetCurrentFrame.c)
 *     USBMidiInGetCurrentTime @ 0x1C0002920 (USBMidiInGetCurrentTime.c)
 *     USBHwGetClockRatio @ 0x1C0002AAC (USBHwGetClockRatio.c)
 *     WPP_RECORDER_SF_di @ 0x1C0002DF4 (WPP_RECORDER_SF_di.c)
 *     WPP_RECORDER_SF_id @ 0x1C0002EBC (WPP_RECORDER_SF_id.c)
 *     USBType1AdjustPositionWithin1Ms @ 0x1C000317C (USBType1AdjustPositionWithin1Ms.c)
 */

__int64 __fastcall USBType1RenderBytePosition(__int64 a1, union _LARGE_INTEGER *a2)
{
  int CurrentFrame; // r15d
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  KIRQL v9; // al
  KIRQL v10; // r13
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // esi
  __int64 *i; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  union _LARGE_INTEGER v21; // rax
  union _LARGE_INTEGER v22; // rcx
  union _LARGE_INTEGER v23; // rdx
  int v24; // [rsp+20h] [rbp-58h]
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+80h] [rbp+8h] BYREF

  v26 = 0LL;
  CurrentFrame = 0;
  v4 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 )
    return 3221225860LL;
  v7 = *(_QWORD *)(v5 + 16);
  if ( !v7 )
    return 3221225860LL;
  v8 = *(_QWORD *)(v5 + 136);
  if ( !v8 )
    return 3221225860LL;
  a2[2].QuadPart = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  v10 = v9;
  if ( !*(_BYTE *)(v8 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v9);
    USBHwGetClockRatio(v5, &v25, &v26);
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
    v4 = v26;
    v10 = v11;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  if ( *(_BYTE *)(v5 + 37) )
  {
    CurrentFrame = USBHwGetCurrentFrame(v7, &v26);
    if ( CurrentFrame >= 0 )
    {
      USBMidiInGetCurrentTime();
      v15 = v26;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_di((__int64)WPP_GLOBAL_Control->DeviceExtension, v12, v13, v14, v24);
      for ( i = *(__int64 **)(v5 + 48); i != (__int64 *)(v5 + 48); i = (__int64 *)*i )
      {
        v17 = i[3];
        v18 = *(unsigned int *)(v17 + 128);
        if ( (_DWORD)v18 )
        {
          if ( (unsigned int)(v15 - v18) < *(_DWORD *)(v17 + 132) )
          {
            a2[2].QuadPart += *(unsigned int *)(v17 + 12LL * (unsigned int)(v15 - v18) + 140);
            if ( v4 )
              v19 = USBType1AdjustPositionWithin1Ms(v5, v4, (__int64)&v25, v15);
            else
              v19 = 0LL;
            v20 = v19 + a2[2].QuadPart;
            a2[2].QuadPart = v20;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_id((__int64)WPP_GLOBAL_Control->DeviceExtension, v20, v17, v18, v24);
            break;
          }
          if ( (unsigned int)(v15 - v18) < 0x7FFFFFFF )
            a2[2].QuadPart += *((unsigned int *)i + 9);
        }
      }
      v21.QuadPart = a2[2].QuadPart + *(_QWORD *)(v5 + 72);
      a2[2] = v21;
      v22 = *(union _LARGE_INTEGER *)(v5 + 64);
      if ( v21.QuadPart > (unsigned __int64)v22.QuadPart
        || (v22 = *(union _LARGE_INTEGER *)(v5 + 80), v21.QuadPart < (unsigned __int64)v22.QuadPart) )
      {
        a2[2] = v22;
      }
    }
  }
  else
  {
    v23 = *(union _LARGE_INTEGER *)(v5 + 80);
    if ( *(_QWORD *)(v5 + 72) > v23.QuadPart )
      v23 = *(union _LARGE_INTEGER *)(v5 + 72);
    a2[2] = v23;
  }
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(v5 + 80) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v10);
  return (unsigned int)CurrentFrame;
}
