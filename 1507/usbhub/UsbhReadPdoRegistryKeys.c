/*
 * XREFs of UsbhReadPdoRegistryKeys @ 0x1C0005E80
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhGetD3Policy @ 0x1C00060F4 (UsbhGetD3Policy.c)
 *     UsbhGetPdoRegistryParameter @ 0x1C0006624 (UsbhGetPdoRegistryParameter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0029E80 (memmove.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 */

__int64 __fastcall UsbhReadPdoRegistryKeys(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  char *v3; // rbx
  int v4; // edi
  int v5; // esi
  const WCHAR *v6; // rbp
  ULONG v7; // edx
  _QWORD *v8; // rax
  _DWORD *v9; // r14
  NTSTATUS v10; // eax
  int v11; // ebp
  unsigned int i; // esi
  PVOID PoolWithTag; // rax
  void *v15; // rdi
  unsigned int v16; // eax
  unsigned int v17; // ebp
  int v18; // [rsp+30h] [rbp-68h]
  ULONG ResultLength; // [rsp+40h] [rbp-58h] BYREF
  void *DeviceRegKey; // [rsp+48h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-48h] BYREF
  int v22; // [rsp+A0h] [rbp+8h] BYREF
  int v23; // [rsp+A4h] [rbp+Ch]
  int v24; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+20h] BYREF

  v23 = HIDWORD(a1);
  v22 = 0;
  if ( PdoKeyValues )
  {
    v3 = (char *)&unk_1C005969C;
    while ( 1 )
    {
      v5 = 0;
      v24 = *((_DWORD *)v3 - 1);
      v4 = v24;
      v25 = 0;
      if ( v24 == 1 )
      {
        for ( i = 8; ; i = v17 )
        {
          PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, i, 0x42554855u);
          v15 = PoolWithTag;
          if ( !PoolWithTag )
            break;
          memset(PoolWithTag, 0, i);
          LOBYTE(v18) = *v3;
          if ( (UsbhGetPdoRegistryParameter(a2, *(_QWORD *)(v3 - 12), v15, i, &v24, &v25, v18) & 0xC0000000) == 0xC0000000 )
            goto LABEL_18;
          if ( v24 != 1 )
            goto LABEL_18;
          v17 = v25;
          if ( !v25 )
            goto LABEL_18;
          if ( v25 <= i )
          {
            (*(void (__fastcall **)(struct _DEVICE_OBJECT *, _QWORD, void *, _QWORD))(v3 + 12))(
              a2,
              *(_QWORD *)(v3 - 12),
              v15,
              v25);
LABEL_18:
            ExFreePoolWithTag(v15, 0);
            goto LABEL_13;
          }
          ExFreePoolWithTag(v15, 0);
        }
        goto LABEL_13;
      }
      if ( v24 == 4 )
      {
        v6 = *(const WCHAR **)(v3 - 12);
        v7 = 2;
        if ( *v3 )
          v7 = 1;
        if ( IoOpenDeviceRegistryKey(a2, v7, 0x1F0000u, &DeviceRegKey) >= 0 )
          break;
      }
LABEL_13:
      v3 += 32;
      if ( !*(_QWORD *)(v3 - 12) )
        goto LABEL_14;
    }
    RtlInitUnicodeString(&DestinationString, v6);
    v8 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x42554855u);
    v9 = v8;
    if ( !v8 )
    {
      v11 = -1073741670;
      goto LABEL_12;
    }
    *v8 = 0LL;
    v8[1] = 0LL;
    v10 = ZwQueryValueKey(DeviceRegKey, &DestinationString, KeyValuePartialInformation, v8, 0x10u, &ResultLength);
    v11 = v10;
    if ( v10 == -2147483643 )
    {
      v11 = 0;
    }
    else if ( v10 < 0 )
    {
LABEL_11:
      ExFreePoolWithTag(v9, 0);
LABEL_12:
      ZwClose(DeviceRegKey);
      if ( v11 >= 0 && v5 == 4 && v4 == 4 && v22 )
        (*(void (__fastcall **)(struct _DEVICE_OBJECT *, _QWORD, int *, __int64))(v3 + 12))(
          a2,
          *(_QWORD *)(v3 - 12),
          &v22,
          4LL);
      goto LABEL_13;
    }
    v16 = v9[2];
    if ( v16 > 4 )
      v16 = 4;
    memmove(&v22, v9 + 3, v16);
    v4 = v9[1];
    v5 = v9[2];
    goto LABEL_11;
  }
LABEL_14:
  UsbhGetD3Policy(a2);
  return 0LL;
}
