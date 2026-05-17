/*
 * XREFs of LdrAddRefDll @ 0x180039C20
 * Callers:
 *     TppAlpcpExecuteCallback @ 0x18001D460 (TppAlpcpExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180020650 (TppWorkpExecuteCallback.c)
 *     RtlQueueWorkItem @ 0x180039CF0 (RtlQueueWorkItem.c)
 *     TppExecuteWaitCallback @ 0x18003AD54 (TppExecuteWaitCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFD0 (TppWorkCallbackPrologRelease.c)
 *     TppIopExecuteCallback @ 0x18003B1A0 (TppIopExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180084260 (TppJobpExecuteCallback.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180031C50 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C90 (LdrpIncrementModuleLoadCount.c)
 *     LdrpPinModule @ 0x18007E418 (LdrpPinModule.c)
 */

__int64 __fastcall LdrAddRefDll(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  int LoadedDllByHandle; // ebx
  bool v6; // zf
  __int64 v7; // rdi
  int Count; // eax
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a2, (char *)&v14, &v13, a4);
    if ( LoadedDllByHandle >= 0 )
    {
      v6 = (v4 & 1) == 0;
      v7 = v14;
      if ( v6 )
        Count = LdrpIncrementModuleLoadCount(v14);
      else
        Count = LdrpPinModule(v14);
      LoadedDllByHandle = Count;
      LdrpDereferenceModule(v7, v9, v10, v11);
    }
  }
  return (unsigned int)LoadedDllByHandle;
}
