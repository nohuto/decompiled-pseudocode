/*
 * XREFs of ?WriteDwordToParticularRegValue@@YAJAEBU_UNICODE_STRING@@00QEBGK@Z @ 0x1C0165318
 * Callers:
 *     ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C005DAA8 (-ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0165104 (-WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0165198 (-WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z.c)
 *     ?WriteSimulatedMonitorCache@@YAJPEAU_DPI_INFORMATION@@@Z @ 0x1C0165490 (-WriteSimulatedMonitorCache@@YAJPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x1C005DA94 (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C005DDD0 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 WriteDwordToParticularRegValue(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        PCWSTR ValueName,
        ...)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  void *v11; // r8
  __int64 v12; // rax
  NTSTATUS v13; // eax
  void *v14; // rdx
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rax
  unsigned int v21; // [rsp+30h] [rbp-20h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-18h] BYREF
  void *v23; // [rsp+40h] [rbp-10h] BYREF
  PCWSTR Path; // [rsp+48h] [rbp-8h] BYREF
  va_list va; // [rsp+90h] [rbp+40h] BYREF

  va_start(va, ValueName);
  KeyHandle = 0LL;
  v23 = 0LL;
  Path = 0LL;
  v7 = OpenRegistrySubkey(&KeyHandle, (__int64)a2, 0LL, a1, 0LL);
  v10 = v7;
  if ( v7 < 0 )
    goto LABEL_12;
  v11 = KeyHandle;
  if ( !KeyHandle )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v12 + 24) = 715LL;
    WdLogEvent5_WdAssertion(v12);
    v11 = KeyHandle;
  }
  v13 = OpenRegistrySubkey(&v23, v8, v11, a2, &v21);
  v10 = v13;
  if ( v13 < 0 )
    goto LABEL_12;
  v14 = v23;
  if ( !v23 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v15 + 24) = 730LL;
    WdLogEvent5_WdAssertion(v15);
    v14 = v23;
  }
  if ( a3->Length )
  {
    v16 = OpenRegistrySubkey((PHANDLE)&Path, (__int64)v14, v14, a3, &v21);
    v10 = v16;
    if ( v16 < 0 )
    {
LABEL_12:
      v19 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v19 + 24) = v10;
      WdLogEvent5_WdError(v19);
      goto LABEL_13;
    }
    v14 = (void *)Path;
    if ( !Path )
    {
      v17 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v17 + 24) = 747LL;
      WdLogEvent5_WdAssertion(v17);
      v14 = (void *)Path;
    }
  }
  v18 = RtlWriteRegistryValue(0x40000000u, (PCWSTR)v14, ValueName, 4u, va, 4u);
  v10 = v18;
  if ( v18 < 0 )
    goto LABEL_12;
LABEL_13:
  CloseRegistrySubkey(KeyHandle);
  CloseRegistrySubkey(v23);
  CloseRegistrySubkey((void *)Path);
  return (unsigned int)v10;
}
