/*
 * XREFs of ?CitpEnsureDataKey@@YAJPEAPEAX@Z @ 0x1C0050C80
 * Callers:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C004EC88 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z @ 0x1C0050A38 (-CitpUpdateActiveBootId@@YAJIEPEAG0PEAX@Z.c)
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C005100C (-CitpInitialize@@YAJPEBG@Z.c)
 *     ?CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00F7CD8 (-CitpSavedDataRead@@YAJPEAXPEBU_CIT_SAVE_KEY@@PEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 * Callees:
 *     ?CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z @ 0x1C0050CE8 (-CitpEnsureKey@@YAJPEAPEAXPEBG_N@Z.c)
 */

int __fastcall CitpEnsureDataKey(void **a1)
{
  int result; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  result = CitpEnsureKey(
             &Handle,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags",
             0);
  if ( result >= 0 )
  {
    ZwClose(Handle);
    result = CitpEnsureKey(
               &Handle,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT",
               0);
    if ( result >= 0 )
    {
      ZwClose(Handle);
      return CitpEnsureKey(
               a1,
               L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\CIT\\System",
               1);
    }
  }
  return result;
}
