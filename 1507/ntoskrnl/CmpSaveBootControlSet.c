/*
 * XREFs of CmpSaveBootControlSet @ 0x140584D98
 * Callers:
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpRebuildKcbCache @ 0x1404484A8 (CmpRebuildKcbCache.c)
 *     NtQuerySecurityObject @ 0x140466FC0 (NtQuerySecurityObject.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     NtCreateKey @ 0x1404F4810 (NtCreateKey.c)
 *     CmOpenKey @ 0x1404F5560 (CmOpenKey.c)
 *     CmpCopySyncTree @ 0x140585040 (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  __int64 result; // rax
  PVOID PoolWithTag; // rbx
  NTSTATUS v4; // edi
  NTSTATUS v5; // ebx
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // rcx
  char v9; // bl
  PVOID v10; // rcx
  __int64 v11; // rax
  __int16 v12; // r12
  __int64 v13; // r15
  ULONG Length[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v17; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  wchar_t Dst[128]; // [rsp+B8h] [rbp-50h] BYREF

  Length[0] = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
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
      goto LABEL_5;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  PoolWithTag = 0LL;
LABEL_5:
  swprintf_s(Dst, 0x80uLL, L"\\Registry\\Machine\\System\\ControlSet%03d", a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = PoolWithTag;
  v4 = NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, Length);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v4 < 0 )
  {
    NtClose(Handle);
    return (unsigned int)v4;
  }
  else
  {
    v5 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v5 = ObReferenceObjectByHandle(KeyHandle, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &v17, 0LL);
      if ( v5 < 0 )
      {
        v10 = Object;
      }
      else
      {
        CmpLockRegistryExclusive();
        v6 = v17;
        v7 = Object;
        v8 = *((_QWORD *)Object + 1);
        if ( Length[0] == 1 )
        {
          Length[0] = -1;
          v9 = CmpCopySyncTree(*(_QWORD *)(v8 + 32), 2, 0);
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG *))(*(_QWORD *)(v7[1] + 32LL) + 8LL))(
                  *(_QWORD *)(v7[1] + 32LL),
                  *(unsigned int *)(v7[1] + 40LL),
                  Length);
          if ( v11 )
          {
            v12 = *(_DWORD *)(v11 + 52);
            (*(void (__fastcall **)(_QWORD, ULONG *))(*(_QWORD *)(v7[1] + 32LL) + 16LL))(
              *(_QWORD *)(v7[1] + 32LL),
              Length);
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG *))(*(_QWORD *)(v6[1] + 32LL) + 8LL))(
                    *(_QWORD *)(v6[1] + 32LL),
                    *(unsigned int *)(v6[1] + 40LL),
                    Length);
            if ( v13 )
            {
              if ( HvpMarkCellDirty(*(_QWORD *)(v6[1] + 32LL), *(unsigned int *)(v6[1] + 40LL), 0, 0LL) )
                *(_WORD *)(v13 + 52) = v12;
              (*(void (__fastcall **)(_QWORD, ULONG *))(*(_QWORD *)(v6[1] + 32LL) + 16LL))(
                *(_QWORD *)(v6[1] + 32LL),
                Length);
            }
          }
        }
        else
        {
          v9 = CmpCopySyncTree(*(_QWORD *)(v8 + 32), 2, 1);
        }
        CmpRebuildKcbCache(v6[1]);
        v5 = v9 == 0 ? 0xC000014C : 0;
        CmpUnlockRegistry();
        ObfDereferenceObject(v7);
        v10 = v6;
      }
      ObfDereferenceObject(v10);
    }
    NtClose(Handle);
    NtClose(KeyHandle);
    return (unsigned int)v5;
  }
}
