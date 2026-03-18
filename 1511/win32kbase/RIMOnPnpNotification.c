/*
 * XREFs of RIMOnPnpNotification @ 0x1C00C2F90
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0010BF0 (WPP_RECORDER_SF_qq.c)
 *     rimDoRimDevChangeCallback @ 0x1C0011374 (rimDoRimDevChangeCallback.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RIMStartDeviceSpecificRead @ 0x1C007AAF0 (RIMStartDeviceSpecificRead.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C007DF30 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C0086B48 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C0086D80 (rimStackAttachAndProcessInput.c)
 */

__int64 __fastcall RIMOnPnpNotification(void *a1)
{
  int v2; // ebp
  _QWORD *v3; // rdi
  __int64 i; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 j; // rbx
  int v8; // eax
  NTSTATUS v9; // eax
  int v10; // r8d
  __int64 v11; // r8
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 k; // rbx
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-40h]
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x34u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 >= 0 )
  {
    v3 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v3 + 73) || *((_BYTE *)v3 + 74) )
    {
      v2 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x38u,
        (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v3 + 93));
      for ( i = v3[68]; i; i = *(_QWORD *)(i + 40) )
      {
        v5 = *(_DWORD *)(i + 176);
        if ( (v5 & 0x800) == 0 && *(_BYTE *)(i + 196) && (v5 & 0x40) == 0 )
          RIMStartDeviceSpecificRead((__int64)v3, i);
      }
      RIMUnlockExclusive((__int64)(v3 + 93));
LABEL_12:
      for ( j = v3[68]; j; j = *(_QWORD *)(j + 40) )
      {
        if ( v3[101] )
        {
          v8 = *(_DWORD *)(j + 176);
          if ( (v8 & 0x800) != 0 )
          {
            if ( (v8 & 0x8000) != 0 )
            {
              v9 = ObOpenObjectByPointer(
                     *(PVOID *)(j + 32),
                     0,
                     0LL,
                     3u,
                     ExRawInputManagerObjectType,
                     0,
                     (PHANDLE)(j + 344));
              if ( v9 < 0 )
              {
                *(_DWORD *)AccessMode = v9;
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  3u,
                  0x35u,
                  (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
                  *(_QWORD *)AccessMode);
              }
              else
              {
                rimDoRimDevChangeCallback((__int64)v3, j, 2);
                *(_DWORD *)(j + 176) &= ~0x8000u;
                RIMLockExclusive((__int64)(v3 + 93));
                if ( *(_DWORD *)(j + 308) )
                {
                  rimProcessAnyQueuedCompleteFrames((__int64)v3, j, v10);
                }
                else if ( *((_BYTE *)v3 + 760) && *(_BYTE *)(j + 48) <= 1u )
                {
                  *((_BYTE *)v3 + 760) = 0;
                  v11 = j + 436;
                  if ( *(_BYTE *)(j + 48) != 1 )
                    v11 = j + 412;
                  rimStackAttachAndProcessInput((__int64)v3, j, v11, j + 248, 0);
                  rimSignalReadComplete((__int64)v3, j);
                }
                RIMUnlockExclusive((__int64)(v3 + 93));
              }
            }
            if ( (*(_DWORD *)(j + 176) & 0x10000) != 0 )
            {
              if ( *(_QWORD *)(j + 344) )
              {
                rimDoRimDevChangeCallback((__int64)v3, j, 3);
                v12 = *(void **)(j + 344);
                *(_DWORD *)(j + 176) &= ~0x10000u;
                ZwClose(v12);
                v13 = *(_QWORD *)(j + 32);
                *(_QWORD *)(j + 344) = 0LL;
                if ( v13 )
                  v13 += 64LL;
                RIMFreeDev((__int64)v3, v13);
                goto LABEL_12;
              }
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                3u,
                0x36u,
                (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
            }
          }
        }
      }
      for ( k = v3[68]; k; k = *(_QWORD *)(k + 40) )
      {
        if ( (*(_DWORD *)(k + 176) & 0x10) != 0 )
        {
          WPP_RECORDER_SF_qq(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v6,
            4u,
            0x37u,
            (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
            v3,
            k);
          *(_DWORD *)(k + 176) &= ~0x10u;
          RIMDoOnPnpNotification((__int64)v3, k);
          KeSetEvent(*(PRKEVENT *)(k + 352), 1, 0);
        }
      }
    }
    RIMUnlockExclusive((__int64)(v3 + 12));
    ObfDereferenceObject(v3);
  }
  *(_DWORD *)AccessMode = v2;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x39u,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
    *(_QWORD *)AccessMode);
  return (unsigned int)v2;
}
