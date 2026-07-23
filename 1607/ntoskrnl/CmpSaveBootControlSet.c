/*
 * XREFs of CmpSaveBootControlSet @ 0x1405F9148
 * Callers:
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x1403FC920 (CmpRebuildKcbCache.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     NtCreateKey @ 0x140462F98 (NtCreateKey.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     NtQuerySecurityObject @ 0x140504310 (NtQuerySecurityObject.c)
 *     CmpCopySyncTree @ 0x140608258 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  __int64 result; // rax
  PVOID PoolWithTag; // rdi
  NTSTATUS v4; // esi
  NTSTATUS v5; // edi
  PVOID v6; // rcx
  _QWORD *v7; // rsi
  _QWORD *v8; // r15
  __int64 v9; // rcx
  char v10; // di
  __int64 v11; // rax
  __int16 v12; // r12
  __int64 v13; // r13
  ULONG Length[2]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v17; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  wchar_t Dst[128]; // [rsp+B0h] [rbp-50h] BYREF

  ObjectAttributes.Length = 48;
  Length[0] = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = CmOpenKey(&Handle, 131097, (__int64)&ObjectAttributes, 0, 0LL);
  if ( (int)result < 0 )
    return result;
  if ( NtQuerySecurityObject(Handle, 4u, 0LL, 0, Length) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length[0], 0x20204D43u);
    if ( !PoolWithTag || NtQuerySecurityObject(Handle, 4u, PoolWithTag, Length[0], Length) >= 0 )
      goto LABEL_7;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  PoolWithTag = 0LL;
LABEL_7:
  swprintf_s(Dst, 0x80uLL, L"\\Registry\\Machine\\System\\ControlSet%03d", a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = PoolWithTag;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v4 = NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, Length);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v4 >= 0 )
  {
    v5 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v5 = ObReferenceObjectByHandle(KeyHandle, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &v17, 0LL);
      if ( v5 >= 0 )
      {
        CmpLockRegistryExclusive();
        v7 = v17;
        v8 = Object;
        v9 = *((_QWORD *)Object + 1);
        if ( Length[0] == 1 )
        {
          Length[0] = -1;
          Length[1] = 0;
          v10 = CmpCopySyncTree(*(_QWORD *)(v9 + 24), 2, 0);
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG *))(*(_QWORD *)(v8[1] + 24LL) + 8LL))(
                  *(_QWORD *)(v8[1] + 24LL),
                  *(unsigned int *)(v8[1] + 32LL),
                  Length);
          if ( v11 )
          {
            v12 = *(_DWORD *)(v11 + 52);
            (*(void (__fastcall **)(_QWORD, ULONG *))(*(_QWORD *)(v8[1] + 24LL) + 16LL))(
              *(_QWORD *)(v8[1] + 24LL),
              Length);
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG *))(*(_QWORD *)(v7[1] + 24LL) + 8LL))(
                    *(_QWORD *)(v7[1] + 24LL),
                    *(unsigned int *)(v7[1] + 32LL),
                    Length);
            if ( v13 )
            {
              if ( HvpMarkCellDirty(*(_QWORD *)(v7[1] + 24LL), *(unsigned int *)(v7[1] + 32LL), 0) )
                *(_WORD *)(v13 + 52) = v12;
              (*(void (__fastcall **)(_QWORD, ULONG *))(*(_QWORD *)(v7[1] + 24LL) + 16LL))(
                *(_QWORD *)(v7[1] + 24LL),
                Length);
            }
          }
        }
        else
        {
          v10 = CmpCopySyncTree(*(_QWORD *)(v9 + 24), 2, 1);
        }
        CmpRebuildKcbCache(v7[1]);
        v5 = v10 == 0 ? 0xC000014C : 0;
        CmpUnlockRegistry();
        ObfDereferenceObject(v8);
        v6 = v7;
      }
      else
      {
        v6 = Object;
      }
      ObfDereferenceObject(v6);
    }
    NtClose(Handle);
    NtClose(KeyHandle);
    return (unsigned int)v5;
  }
  else
  {
    NtClose(Handle);
    return (unsigned int)v4;
  }
}
