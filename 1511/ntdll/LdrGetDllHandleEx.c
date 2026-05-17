/*
 * XREFs of LdrGetDllHandleEx @ 0x180011130
 * Callers:
 *     LdrGetDllHandle @ 0x1800110A0 (LdrGetDllHandle.c)
 * Callees:
 *     LdrpPinModule @ 0x18000813C (LdrpPinModule.c)
 *     LdrpInitializeDllPath @ 0x1800110C8 (LdrpInitializeDllPath.c)
 *     LdrpReleaseDllPath @ 0x1800112AC (LdrpReleaseDllPath.c)
 *     LdrpFindLoadedDll @ 0x1800112C4 (LdrpFindLoadedDll.c)
 *     LdrpIncrementModuleLoadCount @ 0x180011798 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int LoadedDll; // ebx
  __int64 v9; // rdi
  int Count; // eax
  __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v13[16]; // [rsp+40h] [rbp-A8h] BYREF

  v12 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      830,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      (__int64)"DLL name: %wZ\n");
  LdrpInitializeDllPath(*(_QWORD *)(a4 + 8), a2, v13);
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 3) == 3 || !a5 && (a1 & 2) == 0 )
  {
    LoadedDll = -1073741811;
    goto LABEL_18;
  }
  LoadedDll = LdrpFindLoadedDll(a4, v13, &v12);
  if ( LoadedDll >= 0 )
  {
    v9 = v12;
    if ( (a1 & 2) != 0 )
    {
      Count = LdrpPinModule(v12);
    }
    else
    {
      if ( (a1 & 1) != 0 )
        goto LABEL_14;
      Count = LdrpIncrementModuleLoadCount(v12);
    }
    LoadedDll = Count;
LABEL_14:
    if ( LoadedDll >= 0 && a5 )
      *a5 = *(_QWORD *)(v9 + 48);
    LdrpDereferenceModule(v9);
  }
LABEL_18:
  LdrpReleaseDllPath(v13);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      880,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      (__int64)"Status: 0x%08lx\n");
  return (unsigned int)LoadedDll;
}
