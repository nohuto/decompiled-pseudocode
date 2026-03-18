/*
 * XREFs of ?CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00E5DC0
 * Callers:
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C00E51B4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?CitpBytesToString@@YAXPEBXIPEAG@Z @ 0x1C0066688 (-CitpBytesToString@@YAXPEBXIPEAG@Z.c)
 *     ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C00666F4 (-CitpEnsureDataKey@@YAJPEAPEAX@Z.c)
 *     ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C0068908 (-CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall CitpSavedDataRead(
        void *a1,
        const struct _CIT_SAVE_KEY *a2,
        struct _KEY_VALUE_PARTIAL_INFORMATION **a3)
{
  struct _KEY_VALUE_PARTIAL_INFORMATION *v3; // rbx
  HANDLE v6; // rbp
  int Value; // edi
  HANDLE KeyHandle; // [rsp+20h] [rbp-88h] BYREF
  struct _KEY_VALUE_PARTIAL_INFORMATION *v10; // [rsp+28h] [rbp-80h] BYREF
  unsigned __int16 v11[40]; // [rsp+30h] [rbp-78h] BYREF

  v3 = 0LL;
  KeyHandle = 0LL;
  v10 = 0LL;
  v6 = 0LL;
  Value = CitpEnsureDataKey(&KeyHandle);
  if ( Value >= 0 )
  {
    v6 = KeyHandle;
    CitpBytesToString((unsigned __int8 *)a2, 0x10u, v11);
    Value = CitpRegistryGetValue(v6, v11, &v10);
    if ( Value < 0 )
    {
      v3 = v10;
    }
    else
    {
      Value = 0;
      *a3 = v10;
    }
  }
  if ( KeyHandle )
    ZwClose(v6);
  if ( v3 )
    Win32FreePool();
  return (unsigned int)Value;
}
