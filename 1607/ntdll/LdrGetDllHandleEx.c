/*
 * XREFs of LdrGetDllHandleEx @ 0x180012220
 * Callers:
 *     LdrGetDllHandle @ 0x180012190 (LdrGetDllHandle.c)
 * Callees:
 *     LdrpReleaseDllPath @ 0x18001216C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121B8 (LdrpInitializeDllPath.c)
 *     LdrpFindLoadedDll @ 0x180012330 (LdrpFindLoadedDll.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpIncrementModuleLoadCount @ 0x180039C90 (LdrpIncrementModuleLoadCount.c)
 *     LdrpPinModule @ 0x18007E418 (LdrpPinModule.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int LoadedDll; // ebx
  __int64 v10; // rdi
  int Count; // eax
  __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v13[16]; // [rsp+40h] [rbp-A8h] BYREF

  v12 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      830,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      (__int64)"DLL name: %wZ\n",
      a4);
  LdrpInitializeDllPath(*(void **)(a4 + 8), a2, v13);
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 3) == 3 || !a5 && (a1 & 2) == 0 )
  {
    LoadedDll = -1073741811;
    goto LABEL_6;
  }
  LoadedDll = LdrpFindLoadedDll(a4, v13, &v12);
  if ( LoadedDll >= 0 )
  {
    v10 = v12;
    if ( (a1 & 2) != 0 )
    {
      Count = LdrpPinModule(v12);
    }
    else
    {
      if ( (a1 & 1) != 0 )
        goto LABEL_13;
      Count = LdrpIncrementModuleLoadCount(v12);
    }
    LoadedDll = Count;
LABEL_13:
    if ( LoadedDll >= 0 && a5 )
      *a5 = *(_QWORD *)(v10 + 48);
    LdrpDereferenceModule(v10);
  }
LABEL_6:
  LdrpReleaseDllPath((__int64)v13);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      880,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      (__int64)"Status: 0x%08lx\n",
      LoadedDll);
  return (unsigned int)LoadedDll;
}
