/*
 * XREFs of ?WriteDpiToParticularRegKey@@YAJAEBU_UNICODE_STRING@@00K@Z @ 0x1C009F47C
 * Callers:
 *     ?ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z @ 0x1C009F5A8 (-ReadDpiFromRegistry@@YAJAEAU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0160D2C (-WriteDpiToHKLMRegistry@@YAJAEAU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z @ 0x1C0160DB8 (-WriteDpiToRegistry@@YAJAEAU_LUID@@IK@Z.c)
 * Callees:
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C009F3E8 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall WriteDpiToParticularRegKey(
        struct _UNICODE_STRING *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        int a4)
{
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rbx
  HANDLE v11; // r8
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  HANDLE v15; // r8
  NTSTATUS v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  const WCHAR *v19; // rdx
  NTSTATUS v20; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-10h] BYREF
  PCWSTR Path; // [rsp+48h] [rbp-8h] BYREF
  int ValueData; // [rsp+78h] [rbp+28h] BYREF

  ValueData = a4;
  Handle = 0LL;
  KeyHandle = 0LL;
  Path = 0LL;
  v6 = OpenRegistrySubkey(&Handle, (__int64)a2, 0LL, a1, 0LL);
  v10 = v6;
  if ( v6 < 0 )
    goto LABEL_18;
  v11 = Handle;
  if ( !Handle )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8, v7, 0LL, v9);
    *(_QWORD *)(v22 + 24) = 690LL;
    WdLogEvent5_WdAssertion(v22);
    v11 = Handle;
  }
  v12 = OpenRegistrySubkey(&KeyHandle, v7, v11, a2, &v26);
  v10 = v12;
  if ( v12 < 0 )
    goto LABEL_18;
  v15 = KeyHandle;
  if ( !KeyHandle )
  {
    v23 = WdLogNewEntry5_WdAssertion(v8, v13, 0LL, v14);
    *(_QWORD *)(v23 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v23);
    v15 = KeyHandle;
  }
  v16 = OpenRegistrySubkey((PHANDLE)&Path, v13, v15, a3, &v26);
  v10 = v16;
  if ( v16 < 0 )
    goto LABEL_18;
  v19 = Path;
  if ( !Path )
  {
    v24 = WdLogNewEntry5_WdAssertion(v8, 0LL, v17, v18);
    *(_QWORD *)(v24 + 24) = 720LL;
    WdLogEvent5_WdAssertion(v24);
    v19 = Path;
  }
  v20 = RtlWriteRegistryValue(0x40000000u, v19, L"DpiValue", 4u, &ValueData, 4u);
  v10 = v20;
  if ( v20 < 0 )
  {
LABEL_18:
    v25 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v25 + 24) = v10;
    WdLogEvent5_WdError(v25);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Path )
    ZwClose((HANDLE)Path);
  return (unsigned int)v10;
}
