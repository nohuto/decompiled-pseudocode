/*
 * XREFs of RaidUnitRegisterInterfaces @ 0x1C000A35C
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C004D4DC (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortMapBuildLunEntry @ 0x1C000A800 (PortMapBuildLunEntry.c)
 *     PortRegistryCreateKeyEx @ 0x1C000D8C0 (PortRegistryCreateKeyEx.c)
 *     PortGetDeviceType @ 0x1C004FABC (PortGetDeviceType.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C0054650 (RaidUnitAddAclToVmDevices.c)
 */

__int64 __fastcall RaidUnitRegisterInterfaces(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  __int64 v4; // rdx
  NTSTATUS v5; // ebx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rcx
  ULONG v9; // r8d
  __int64 v10; // r10
  int v11; // r11d
  __int64 v12; // rax
  void *v13; // [rsp+40h] [rbp-28h]
  unsigned __int8 v14; // [rsp+72h] [rbp+Ah]
  HANDLE Handle; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  v14 = BYTE2(v1);
  result = PortRegistryCreateKeyEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * (unsigned __int8)v1 + 2160),
             1LL,
             &Handle,
             L"Target Id %d",
             BYTE1(v1));
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 128);
    if ( v6 )
    {
      v7 = (*(unsigned __int8 *)(v6 + 3) | (*(unsigned __int8 *)(v6 + 2) << 8)) + 4;
      if ( (int)v7 > 0xFFFF )
        v7 = 0xFFFFLL;
    }
    else
    {
      v7 = 0LL;
    }
    v8 = *(_QWORD *)(PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F, v4, v7) + 16);
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v8 + 2 * v12) );
    PortMapBuildLunEntry((int)Handle, v14, v11, a1 + 104, v10, v9, v8, v12, v13);
    ZwClose(Handle);
    if ( (*(_DWORD *)(a1 + 1520) & 1) != 0 )
    {
      v5 = RaidUnitAddAclToVmDevices(a1);
      if ( v5 >= 0 )
      {
        v5 = IoRegisterDeviceInterface(
               *(PDEVICE_OBJECT *)(a1 + 8),
               &GUID_DEVINTERFACE_VMLUN,
               0LL,
               (PUNICODE_STRING)(a1 + 1528));
        if ( v5 >= 0 )
        {
          v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1528), 1u);
          if ( v5 < 0 )
            RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1528));
        }
      }
    }
    if ( (**(_BYTE **)(a1 + 96) & 0x1F) == 0xD )
    {
      v5 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &GUID_DEVINTERFACE_SES,
             0LL,
             (PUNICODE_STRING)(a1 + 1648));
      if ( v5 >= 0 )
      {
        v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1648), 1u);
        if ( v5 < 0 )
          RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1648));
      }
    }
    return (unsigned int)v5;
  }
  return result;
}
