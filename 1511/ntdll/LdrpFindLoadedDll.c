/*
 * XREFs of LdrpFindLoadedDll @ 0x1800112C4
 * Callers:
 *     LdrGetDllHandleEx @ 0x180011130 (LdrGetDllHandleEx.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x1800052EC (LdrpDropLastInProgressCount.c)
 *     LdrpFindLoadedDllInternal @ 0x18001138C (LdrpFindLoadedDllInternal.c)
 *     LdrpPreprocessDllName @ 0x1800121A0 (LdrpPreprocessDllName.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpFindLoadedDll(__int64 a1, __int64 a2, PVOID *a3)
{
  int LoadedDllInternal; // ebx
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v8[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v10; // [rsp+48h] [rbp-B8h]
  _WORD v11[128]; // [rsp+50h] [rbp-B0h] BYREF

  v9 = 0x1000000;
  *a3 = 0LL;
  v7 = 0;
  v10 = v11;
  v11[0] = 0;
  LoadedDllInternal = LdrpPreprocessDllName(a1, &v9, 0LL, &v7);
  if ( LoadedDllInternal >= 0 )
  {
    LoadedDllInternal = LdrpFindLoadedDllInternal(&v9, a2, a3, v8, v7);
    if ( LoadedDllInternal >= 0 && v8[0] < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllInternal = LdrpFindLoadedDllInternal(&v9, a2, a3, v8, v7);
      LdrpDropLastInProgressCount();
    }
  }
  if ( v11 != v10 )
    NtdllpFreeStringRoutine();
  return (unsigned int)LoadedDllInternal;
}
