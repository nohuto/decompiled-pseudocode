/*
 * XREFs of ?DxgkRetrieveValueFromRegistry@@YAJPEAXPEAU_UNICODE_STRING@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00CA5D8
 * Callers:
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C00C932C (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C018443C (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkRetrieveValueFromRegistry(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        struct _KEY_VALUE_PARTIAL_INFORMATION **a3)
{
  struct _KEY_VALUE_PARTIAL_INFORMATION *v3; // rbx
  ULONG Length; // ebp
  __int64 v8; // rcx
  NTSTATUS v9; // eax
  int v10; // edi
  __int64 v12; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  Length = 1024;
  if ( !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  do
  {
    if ( v3 )
      operator delete(v3);
    v3 = (struct _KEY_VALUE_PARTIAL_INFORMATION *)operator new[](Length, 0x4D677844u, PagedPool);
    if ( v3 )
    {
      ResultLength = 0;
      v9 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v3, Length, &ResultLength);
      Length = ResultLength;
      v10 = v9;
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v8);
      WdLogEvent5_WdError(v12);
      v10 = -1073741801;
    }
  }
  while ( v10 == -2147483643 || v10 == -1073741789 );
  if ( v10 >= 0 )
  {
    *a3 = v3;
  }
  else
  {
    if ( v3 )
      operator delete(v3);
    *a3 = 0LL;
  }
  return (unsigned int)v10;
}
