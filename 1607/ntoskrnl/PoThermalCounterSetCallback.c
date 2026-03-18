/*
 * XREFs of PoThermalCounterSetCallback @ 0x1406701F4
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400FB62C (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     wcspbrk @ 0x14014F864 (wcspbrk.c)
 *     PcwAddInstance @ 0x1404F1B90 (PcwAddInstance.c)
 *     PopThermalReadCounters @ 0x14067044C (PopThermalReadCounters.c)
 */

__int64 __fastcall PoThermalCounterSetCallback(int a1, _QWORD *a2)
{
  NTSTATUS v4; // ebp
  char v5; // r15
  struct _PCW_BUFFER *v6; // r13
  __int64 i; // rbx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v9; // rdi
  char *DeviceNode; // rsi
  unsigned __int16 *v11; // rcx
  __int64 v12; // r8
  int v13; // edx
  int v14; // eax
  ULONG v15; // r8d
  struct _PCW_DATA Data; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h] BYREF
  int v19; // [rsp+48h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  if ( a1 == 2 )
  {
    v6 = (struct _PCW_BUFFER *)a2[3];
LABEL_6:
    v5 = 1;
    goto LABEL_7;
  }
  if ( a1 != 3 )
    goto LABEL_27;
  v6 = (struct _PCW_BUFFER *)a2[3];
  if ( wcspbrk(*(const wchar_t **)(a2[1] + 8LL), L"*?") )
    goto LABEL_6;
LABEL_7:
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    if ( (*(_BYTE *)(i + 65) & 2) != 0 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(i + 48));
      v9 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceNode = (char *)DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      if ( DeviceNode )
      {
        if ( v5 )
          goto LABEL_19;
        v11 = *(unsigned __int16 **)(a2[1] + 8LL);
        v12 = *((_QWORD *)DeviceNode + 36) - (_QWORD)v11;
        do
        {
          v13 = *(unsigned __int16 *)((char *)v11 + v12);
          v14 = *v11 - v13;
          if ( v14 )
            break;
          ++v11;
        }
        while ( v13 );
        if ( !v14 )
        {
LABEL_19:
          v18 = 0LL;
          v19 = 0;
          if ( a1 == 3 )
          {
            v4 = PopThermalReadCounters(i, *a2, &v18);
            if ( v4 < 0 )
            {
              ObfDereferenceObject(v9);
              break;
            }
          }
          v15 = *(_DWORD *)(i + 480);
          Data.Data = &v18;
          Data.Size = 12;
          v4 = PcwAddInstance(v6, (PCUNICODE_STRING)(DeviceNode + 280), v15, 1u, &Data);
        }
        ObfDereferenceObject(v9);
        if ( v4 < 0 )
          break;
      }
      else
      {
        ObfDereferenceObject(DeviceAttachmentBaseRef);
      }
    }
  }
LABEL_27:
  PopReleaseRwLock(&PopPolicyDeviceLock);
  return (unsigned int)v4;
}
