/*
 * XREFs of CmpInitializeSystemBiosInformation @ 0x1407CD76C
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateKey @ 0x14015A590 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpBuildRegMultiSz @ 0x1407CD700 (CmpBuildRegMultiSz.c)
 */

void __fastcall CmpInitializeSystemBiosInformation(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  unsigned int v3; // r14d
  unsigned int v4; // r15d
  char *PoolWithTag; // rax
  __int64 v6; // rdx
  char *v7; // rbx
  const void *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+A0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  KeyHandle = (HANDLE)-1LL;
  v2 = *(unsigned __int16 *)(v1 + 2368);
  v3 = *(unsigned __int16 *)(v1 + 2384);
  v4 = *(unsigned __int16 *)(v1 + 2400);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v4 + v3 + v2 + 8, 0x20204D43u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = *(const void **)(v1 + 2376);
    v13 = 0;
    CmpBuildRegMultiSz((__int64)PoolWithTag, v6, &v13, v8, v2);
    CmpBuildRegMultiSz((__int64)v7, v9, &v13, *(const void **)(v1 + 2392), v3);
    CmpBuildRegMultiSz((__int64)v7, v10, &v13, *(const void **)(v1 + 2408), v4);
    v11 = v13;
    *(_WORD *)&v7[v13] = 0;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = &CmRegistryMachineHardwareDescriptionSystemName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpSystemBiosVersionString, 0, 7u, v7, v11 + 2);
    ExFreePoolWithTag(v7, 0);
  }
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
}
