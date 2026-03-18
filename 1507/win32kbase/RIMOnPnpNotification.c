/*
 * XREFs of RIMOnPnpNotification @ 0x1C00C22E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     rimSignalReadComplete @ 0x1C006EEB4 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C006F030 (rimStackAttachAndProcessInput.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0075724 (RIMStartDeviceSpecificRead.c)
 *     RIMFreeDev @ 0x1C00759DC (RIMFreeDev.c)
 *     RIMDoOnPnpNotification @ 0x1C0076038 (RIMDoOnPnpNotification.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00761AC (WPP_RECORDER_SF_qq.c)
 *     rimDoRimDevChangeCallback @ 0x1C0076588 (rimDoRimDevChangeCallback.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00854E4 (rimProcessAnyQueuedCompleteFrames.c)
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
  __int64 v10; // r8
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 k; // rbx
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-40h]
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x31u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
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
        0x35u,
        (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v3 + 89));
      for ( i = v3[64]; i; i = *(_QWORD *)(i + 40) )
      {
        v5 = *(_DWORD *)(i + 184);
        if ( (v5 & 0x800) == 0 && *(_BYTE *)(i + 204) && (v5 & 0x40) == 0 )
          RIMStartDeviceSpecificRead((__int64)v3, i);
      }
      RIMUnlockExclusive((__int64)(v3 + 89));
LABEL_12:
      for ( j = v3[64]; j; j = *(_QWORD *)(j + 40) )
      {
        if ( v3[95] )
        {
          v8 = *(_DWORD *)(j + 184);
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
                     (PHANDLE)(j + 352));
              if ( v9 < 0 )
              {
                *(_DWORD *)AccessMode = v9;
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  3u,
                  0x32u,
                  (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
                  *(_QWORD *)AccessMode);
              }
              else
              {
                rimDoRimDevChangeCallback((__int64)v3, j, 2);
                *(_DWORD *)(j + 184) &= ~0x8000u;
                RIMLockExclusive((__int64)(v3 + 89));
                if ( *(_DWORD *)(j + 316) )
                {
                  rimProcessAnyQueuedCompleteFrames((__int64)v3);
                }
                else if ( *((_BYTE *)v3 + 728) && *(_BYTE *)(j + 48) <= 1u )
                {
                  *((_BYTE *)v3 + 728) = 0;
                  v10 = j + 436;
                  if ( *(_BYTE *)(j + 48) != 1 )
                    v10 = j + 412;
                  rimStackAttachAndProcessInput((__int64)v3, j, v10, j + 256, 0);
                  rimSignalReadComplete((__int64)v3, j);
                }
                RIMUnlockExclusive((__int64)(v3 + 89));
              }
            }
            if ( (*(_DWORD *)(j + 184) & 0x10000) != 0 )
            {
              if ( *(_QWORD *)(j + 352) )
              {
                rimDoRimDevChangeCallback((__int64)v3, j, 3);
                v11 = *(void **)(j + 352);
                *(_DWORD *)(j + 184) &= ~0x10000u;
                ZwClose(v11);
                v12 = *(_QWORD *)(j + 32);
                *(_QWORD *)(j + 352) = 0LL;
                if ( v12 )
                  v12 += 64LL;
                RIMFreeDev((__int64)v3, v12);
                goto LABEL_12;
              }
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                3u,
                0x33u,
                (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
            }
          }
        }
      }
      for ( k = v3[64]; k; k = *(_QWORD *)(k + 40) )
      {
        if ( (*(_DWORD *)(k + 184) & 0x10) != 0 )
        {
          WPP_RECORDER_SF_qq(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v6,
            4u,
            0x34u,
            (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
            v3,
            k);
          *(_DWORD *)(k + 184) &= ~0x10u;
          RIMDoOnPnpNotification((__int64)v3, k);
          KeSetEvent(*(PRKEVENT *)(k + 360), 1, 0);
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
    0x36u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    *(_QWORD *)AccessMode);
  return (unsigned int)v2;
}
