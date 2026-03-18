/*
 * XREFs of ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C0068908
 * Callers:
 *     ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C006887C (-CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z.c)
 *     ?CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00E5DC0 (-CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?CitIsBufferSmallStatus@@YAEJ@Z @ 0x1C00689DC (-CitIsBufferSmallStatus@@YAEJ@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C00E42A8 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpRegistryGetValue(
        HANDLE KeyHandle,
        const unsigned __int16 *a2,
        struct _KEY_VALUE_PARTIAL_INFORMATION **a3)
{
  struct _KEY_VALUE_PARTIAL_INFORMATION *v5; // rdi
  unsigned int v6; // ebx
  struct _KEY_VALUE_PARTIAL_INFORMATION *v8; // rax
  const char *v9; // rdx
  NTSTATUS v10; // eax
  const char *v11; // rdx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  ResultLength = 0;
  v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( CitIsBufferSmallStatus(v6) && ResultLength )
  {
    v8 = (struct _KEY_VALUE_PARTIAL_INFORMATION *)Win32AllocPool();
    v5 = v8;
    if ( !v8 )
    {
      v6 = -1073741670;
      CitpLogFailureWorker(-1073741670, v9, 0xC13u);
      return v6;
    }
    v10 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v8, ResultLength, &ResultLength);
    v6 = v10;
    if ( v10 >= 0 )
    {
      *a3 = v5;
      return 0;
    }
    CitpLogFailureWorker(v10, v11, 0xC1Fu);
  }
  else
  {
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    v6 = -1073741823;
  }
  if ( v5 )
    Win32FreePool();
  return v6;
}
