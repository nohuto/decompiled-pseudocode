/*
 * XREFs of LdrAddRefDll @ 0x18007CCA0
 * Callers:
 *     TppExecuteWaitCallback @ 0x18000B324 (TppExecuteWaitCallback.c)
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 *     TppAlpcpExecuteCallback @ 0x18003B9F0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003C020 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003C414 (TppWorkCallbackPrologRelease.c)
 *     TppJobpExecuteCallback @ 0x1800782D0 (TppJobpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x18007C3C0 (RtlQueueWorkItem.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180015F14 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180020924 (LdrpIncrementModuleLoadCount.c)
 *     LdrpPinModule @ 0x18007CDF4 (LdrpPinModule.c)
 */

__int64 __fastcall LdrAddRefDll(int a1, __int64 a2)
{
  char v2; // di
  int LoadedDllByHandle; // ebx
  bool v4; // zf
  __int64 v5; // rdi
  int Count; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF
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
