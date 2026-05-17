/*
 * XREFs of LdrpFindLoadedDll @ 0x180012330
 * Callers:
 *     LdrGetDllHandleEx @ 0x180012220 (LdrGetDllHandleEx.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllInternal @ 0x1800123F8 (LdrpFindLoadedDllInternal.c)
 *     LdrpPreprocessDllName @ 0x180015890 (LdrpPreprocessDllName.c)
 *     LdrpDereferenceModule @ 0x180032238 (LdrpDereferenceModule.c)
 *     LdrpDropLastInProgressCount @ 0x18007A61C (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpFindLoadedDll(__int64 a1, int a2, _QWORD *a3)
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
    LoadedDllInternal = LdrpFindLoadedDllInternal((unsigned int)&v9, a2, (_DWORD)a3, (unsigned int)v8, v7);
    if ( LoadedDllInternal >= 0 && v8[0] < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0);
      LoadedDllInternal = LdrpFindLoadedDllInternal((unsigned int)&v9, a2, (_DWORD)a3, (unsigned int)v8, v7);
      LdrpDropLastInProgressCount();
    }
  }
  if ( v11 != v10 )
    NtdllpFreeStringRoutine((__int64)v10);
  return (unsigned int)LoadedDllInternal;
}
