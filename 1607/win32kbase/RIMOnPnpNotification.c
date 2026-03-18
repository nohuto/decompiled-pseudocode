/*
 * XREFs of RIMOnPnpNotification @ 0x1C00CFB10
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     RIMDoOnPnpNotification @ 0x1C000C538 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChange @ 0x1C000FAC0 (rimDoRimDevChange.c)
 *     rimStackAttachAndProcessInput @ 0x1C000FEEC (rimStackAttachAndProcessInput.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     rimSignalReadComplete @ 0x1C00104A4 (rimSignalReadComplete.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00107E0 (RawInputManagerObjectResolveHandle.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0010A8C (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0081960 (rimProcessAnyQueuedCompleteFrames.c)
 *     WPP_RECORDER_SF_qqSd @ 0x1C00D07F8 (WPP_RECORDER_SF_qqSd.c)
 */

__int64 __fastcall RIMOnPnpNotification(void *a1)
{
  int v2; // ebp
  _QWORD *v3; // rdi
  __int64 i; // rbx
  int v5; // eax
  __int64 j; // rbx
  int v7; // eax
  int v8; // r8d
  __int64 v9; // r8
  void *v10; // rcx
  __int64 v11; // rdx
  __int64 k; // rbx
  char v13; // al
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  int ObjectType; // [rsp+20h] [rbp-58h]
  KPROCESSOR_MODE AccessMode[8]; // [rsp+28h] [rbp-50h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    4,
    52,
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 >= 0 )
  {
    v3 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v3 + 73) || *((_BYTE *)v3 + 74) )
    {
      v2 = -1073741637;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        3,
        56,
        (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
    }
    else
    {
      RIMLockExclusive((__int64)(v3 + 87));
      for ( i = v3[69]; i; i = *(_QWORD *)(i + 40) )
      {
        v5 = *(_DWORD *)(i + 184);
        if ( (v5 & 0x800) == 0 && *(_BYTE *)(i + 204) && (v5 & 0x40) == 0 )
          RIMStartDeviceSpecificRead((__int64)v3, i);
      }
      RIMUnlockExclusive((__int64)(v3 + 87));
LABEL_12:
      for ( j = v3[69]; j; j = *(_QWORD *)(j + 40) )
      {
        if ( v3[95] )
        {
          v7 = *(_DWORD *)(j + 184);
          if ( (v7 & 0x800) != 0 )
          {
            if ( (v7 & 0x8000) != 0 )
            {
              if ( ObOpenObjectByPointer(
                     *(PVOID *)(j + 32),
                     0,
                     0LL,
                     3u,
                     ExRawInputManagerObjectType,
                     0,
                     (PHANDLE)(j + 360)) < 0 )
              {
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  3u,
                  3u,
                  0x35u,
                  (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
              }
              else
              {
                rimDoRimDevChange((__int64)v3, j, 2);
                *(_DWORD *)(j + 184) &= ~0x8000u;
                RIMLockExclusive((__int64)(v3 + 87));
                if ( *(_DWORD *)(j + 316) )
                {
                  rimProcessAnyQueuedCompleteFrames((__int64)v3, j, v8);
                }
                else if ( *((_BYTE *)v3 + 712) && *(_BYTE *)(j + 48) <= 1u )
                {
                  *((_BYTE *)v3 + 712) = 0;
                  v9 = j + 500;
                  if ( *(_BYTE *)(j + 48) != 1 )
                    v9 = j + 476;
                  rimStackAttachAndProcessInput((__int64)v3, j, v9, j + 256, 0);
                  rimSignalReadComplete((__int64)v3, j);
                }
                RIMUnlockExclusive((__int64)(v3 + 87));
              }
            }
            if ( (*(_DWORD *)(j + 184) & 0x10000) != 0 )
            {
              if ( *(_QWORD *)(j + 360) )
              {
                rimDoRimDevChange((__int64)v3, j, 3);
                v10 = *(void **)(j + 360);
                *(_DWORD *)(j + 184) &= ~0x10000u;
                ZwClose(v10);
                v11 = *(_QWORD *)(j + 32);
                *(_QWORD *)(j + 360) = 0LL;
                if ( v11 )
                  v11 += 64LL;
                RIMFreeDev((__int64)v3, v11);
                goto LABEL_12;
              }
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                3,
                3,
                54,
                (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids);
            }
          }
        }
      }
      for ( k = v3[69]; k; k = *(_QWORD *)(k + 40) )
      {
        if ( (*(_DWORD *)(k + 184) & 0x10) != 0 )
        {
          v13 = RimDeviceTypeToRimInputType(k, *(unsigned __int8 *)(k + 48));
          WPP_RECORDER_SF_qqSd(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            v15,
            v16,
            ObjectType,
            (char)v3,
            k,
            *(_QWORD *)(k + 216),
            v13);
          *(_DWORD *)(k + 184) &= ~0x10u;
          RIMDoOnPnpNotification((__int64)v3, k);
          KeSetEvent(*(PRKEVENT *)(k + 368), 1, 0);
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
    (__int64)&WPP_8442d383dc1b397dafeae95a129ca68e_Traceguids,
    *(_QWORD *)AccessMode);
  return (unsigned int)v2;
}
