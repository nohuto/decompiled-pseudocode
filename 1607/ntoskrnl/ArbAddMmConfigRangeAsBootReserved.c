/*
 * XREFs of ArbAddMmConfigRangeAsBootReserved @ 0x14055B3D0
 * Callers:
 *     IopMemInitialize @ 0x14055B5C0 (IopMemInitialize.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14015A430 (ZwOpenKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlAddRange @ 0x14055A080 (RtlAddRange.c)
 *     ArbpGetRegistryValue @ 0x14055ABBC (ArbpGetRegistryValue.c)
 */

NTSTATUS __fastcall ArbAddMmConfigRangeAsBootReserved(__int64 a1, struct _RTL_RANGE_LIST *a2)
{
  void *v2; // rbx
  NTSTATUS v3; // edi
  unsigned int *v4; // rsi
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  int RegistryValue; // eax
  unsigned int v10; // eax
  SIZE_T v11; // r14
  PVOID PoolWithTag; // rax
  unsigned int *i; // r14
  int v14; // eax
  int v15; // ecx
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  int v17; // [rsp+48h] [rbp-21h] BYREF
  const wchar_t *v18; // [rsp+50h] [rbp-19h]
  int v19; // [rsp+58h] [rbp-11h] BYREF
  const wchar_t *v20; // [rsp+60h] [rbp-9h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  _DWORD *v22; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v2 = 0LL;
  Handle = 0LL;
  v3 = 0;
  v4 = (unsigned int *)ArbMmConfigRange;
  if ( ArbMmConfigRange )
  {
LABEL_9:
    for ( i = v4 + 2; i < &v4[8 * v4[1] + 2]; i += 8 )
    {
      v14 = *((unsigned __int8 *)i + 1);
      v15 = *(_DWORD *)(a1 + 32);
      if ( v14 == v15 || (_BYTE)v14 == 7 && v15 == 3 )
      {
        v3 = RtlAddRange(a2, *((_QWORD *)i + 2), *((_QWORD *)i + 3), 1u, 1u, 0LL, 0LL);
        if ( v3 < 0 )
          break;
      }
    }
    goto LABEL_14;
  }
  ObjectAttributes.RootDirectory = 0LL;
  v18 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Arbiters";
  v17 = 7733366;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v17;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    return result;
  v19 = 2228258;
  v20 = L"ReservedResources";
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&Handle, 0x2001Fu, &ObjectAttributes);
  if ( v8 < 0 )
  {
    ZwClose(KeyHandle);
    return v8;
  }
  v22 = 0LL;
  RegistryValue = ArbpGetRegistryValue(Handle, L"MmConfigRange", &v22);
  v2 = v22;
  v3 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741670 )
      v3 = 0;
    goto LABEL_14;
  }
  if ( v22[1] == 10 )
  {
    v4 = (_DWORD *)((char *)v22 + (unsigned int)v22[2] + 32);
    v10 = v4[1];
    if ( v10 )
    {
      v11 = 32 * (v10 - 1) + 40;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x4E627241u);
      ArbMmConfigRange = (__int64)PoolWithTag;
      if ( PoolWithTag )
        memmove(PoolWithTag, v4, (unsigned int)v11);
    }
    goto LABEL_9;
  }
  v3 = -1073741811;
LABEL_14:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ZwClose(Handle);
  ZwClose(KeyHandle);
  return v3;
}
