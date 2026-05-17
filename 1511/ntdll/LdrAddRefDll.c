/*
 * XREFs of LdrAddRefDll @ 0x180008BF0
 * Callers:
 *     TppExecuteWaitCallback @ 0x180009874 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x180009AF0 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180009D94 (TppWorkCallbackPrologRelease.c)
 *     RtlQueueWorkItem @ 0x18000BBE0 (RtlQueueWorkItem.c)
 *     TppWorkpExecuteCallback @ 0x18002D420 (TppWorkpExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18002E130 (TppAlpcpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180083F20 (TppJobpExecuteCallback.c)
 * Callees:
 *     LdrpPinModule @ 0x18000813C (LdrpPinModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180011798 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 */

__int64 __fastcall LdrAddRefDll(int a1, __int64 a2)
{
  char v2; // di
  int LoadedDllByHandle; // ebx
  bool v4; // zf
  __int64 v5; // rdi
  int Count; // eax
  char v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a2, &v9, &v8);
    if ( LoadedDllByHandle >= 0 )
    {
      v4 = (v2 & 1) == 0;
      v5 = v9;
      if ( v4 )
        Count = LdrpIncrementModuleLoadCount(v9);
      else
        Count = LdrpPinModule(v9);
      LoadedDllByHandle = Count;
      LdrpDereferenceModule(v5);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
