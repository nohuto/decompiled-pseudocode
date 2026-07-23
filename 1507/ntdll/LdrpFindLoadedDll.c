/*
 * XREFs of LdrpFindLoadedDll @ 0x18001870C
 * Callers:
 *     LdrGetDllHandleEx @ 0x1800185D0 (LdrGetDllHandleEx.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllInternal @ 0x1800187EC (LdrpFindLoadedDllInternal.c)
 *     LdrpPreprocessDllName @ 0x180020EEC (LdrpPreprocessDllName.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18003815C (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpFindLoadedDll(__int64 a1, __int64 a2, char **a3)
{
  __int64 v5; // rdx
  int LoadedDllInternal; // ebx
  __int64 v7; // r8
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v12; // [rsp+48h] [rbp-B8h]
  _WORD v13[128]; // [rsp+50h] [rbp-B0h] BYREF

  v11 = 0x1000000;
  *a3 = 0LL;
  v9 = 0;
  v12 = v13;
  v13[0] = 0;
  LoadedDllInternal = LdrpPreprocessDllName(a1, &v11, 0LL, &v9);
  if ( LoadedDllInternal >= 0 )
  {
    LoadedDllInternal = LdrpFindLoadedDllInternal(&v11, a2, a3, v10, v9);
    if ( LoadedDllInternal >= 0 && v10[0] < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllInternal = LdrpFindLoadedDllInternal(&v11, a2, a3, v10, v9);
      LdrpDropLastInProgressCount();
    }
  }
  if ( v13 != v12 )
    NtdllpFreeStringRoutine(v12, v5, v7);
  return (unsigned int)LoadedDllInternal;
}
