/*
 * XREFs of ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C00517A4
 * Callers:
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C0050808 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0051240 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C000E848 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C0051830 (-CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 */

__int64 __fastcall CitpParameterGetString(void *a1, const unsigned __int16 *a2, unsigned __int16 **a3)
{
  int Value; // eax
  struct _KEY_VALUE_PARTIAL_INFORMATION *v5; // rdi
  int v6; // ebx
  unsigned __int16 *v7; // rcx
  struct _KEY_VALUE_PARTIAL_INFORMATION *v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int16 *v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  Value = CitpRegistryGetValue(a1, a2, &v9);
  v5 = v9;
  v6 = Value;
  if ( Value >= 0 )
  {
    v6 = CitpStringDuplicate(&v10, (const unsigned __int16 *)v9->Data, (unsigned __int64)v9->DataLength >> 1);
    if ( v6 < 0 )
    {
      v7 = v10;
    }
    else
    {
      v7 = 0LL;
      *a3 = v10;
      v6 = 0;
    }
    if ( v7 )
      Win32FreePool();
  }
  if ( v5 )
    Win32FreePool();
  return (unsigned int)v6;
}
