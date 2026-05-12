/*
 * XREFs of PortRegistryReadWithHandle @ 0x1C0051F3C
 * Callers:
 *     PortRegistryReadDeviceKey @ 0x1C0051E90 (PortRegistryReadDeviceKey.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 */

__int64 __fastcall PortRegistryReadWithHandle(
        void *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // r12
  void *v9; // r14
  NTSTATUS v10; // eax
  int v11; // esi
  _QWORD *v12; // rdi
  _DWORD *v13; // rbx
  PVOID SystemRoutineAddress; // rax
  __int64 v16; // [rsp+48h] [rbp-99h] BYREF
  int v17; // [rsp+50h] [rbp-91h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-89h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-79h] BYREF
  _QWORD v20[14]; // [rsp+98h] [rbp-49h] BYREF
  void *KeyHandle; // [rsp+140h] [rbp+5Fh] BYREF

  v6 = a4;
  v9 = a1;
  if ( a2 )
  {
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v10 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v9 = KeyHandle;
    v11 = v10;
  }
  else
  {
    KeyHandle = a1;
    v11 = 0;
  }
  if ( v11 >= 0 )
  {
    v12 = a5;
    v13 = a6;
    v16 = *a5;
    v17 = *a6;
    memset(v20, 0, sizeof(v20));
    LODWORD(v20[1]) = 20;
    v20[0] = &PortpRegQueryRoutine;
    v20[2] = *(_QWORD *)(a3 + 8);
    LODWORD(v20[4]) = 0;
    v20[3] = &v16;
    v20[5] = 0LL;
    LODWORD(v20[6]) = 0;
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v11 = ((__int64 (__fastcall *)(__int64, void *, _QWORD *, __int64, _QWORD))SystemRoutineAddress)(
            0x40000000LL,
            v9,
            v20,
            v6,
            0LL);
    *v12 = v16;
    *v13 = v17;
    if ( a2 )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v11;
}
