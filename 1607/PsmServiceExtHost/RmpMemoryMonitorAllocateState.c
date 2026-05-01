/*
 * XREFs of RmpMemoryMonitorAllocateState @ 0x18001CF74
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001B17C (-RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVIC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpMemoryMonitorAllocateState(__int64 a1)
{
  void **v1; // rsi
  NTSTATUS result; // eax
  unsigned int v3; // ebx
  _QWORD *v4; // rdi
  HANDLE EventW; // rax
  struct _UNICODE_STRING v6; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF

  v1 = (void **)(a1 + 328);
  RtlInitUnicodeString(&v6, L"\\KernelObjects\\HighCommitCondition");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v6;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenEvent(v1, 0x100001u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v3 = 1;
    v4 = v1 + 1;
    do
    {
      EventW = CreateEventW(0LL, 0, 0, 0LL);
      *v4 = EventW;
      if ( !EventW )
        return -1073741823;
      ++v3;
      ++v4;
    }
    while ( v3 < 6 );
    result = TpAllocTimer(v1 + 7, RmpMemoryMonitorTimerCallback, v1, 0LL);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
