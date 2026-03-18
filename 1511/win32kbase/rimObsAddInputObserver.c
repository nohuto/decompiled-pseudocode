/*
 * XREFs of rimObsAddInputObserver @ 0x1C00D2D04
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C00C1860 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C00C1D90 (RIMAddInputObserver.c)
 * Callees:
 *     rimConvertUserToKernelEventHandle @ 0x1C0006310 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C00C5744 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C00C58BC (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C00D3100 (rimObsCheckForRegistrationConflicts.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        unsigned int a2,
        void *a3,
        KPROCESSOR_MODE a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        HANDLE *a9)
{
  __int64 v12; // rcx
  unsigned int v14; // esi
  int v15; // edi
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  PVOID v21; // rbx
  HANDLE *v22; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xCu,
    (__int64)&WPP_1b612acf6235cfc5ca6869ab8dd4f677_Traceguids);
  if ( a2 < 0x30 )
    return 3221225507LL;
  if ( !a1 || a5 > 2 )
    return 3221225485LL;
  if ( a5 == 2 )
  {
    if ( !a7 )
      return 3221225485LL;
    v14 = a6;
    if ( !a6 || a6 == 7 || a6 == 1 && (a7 == 6 || a7 == 2) )
      return 3221225485LL;
  }
  else
  {
    v14 = a6;
  }
  LOBYTE(v12) = (a8 & 2) != 0;
  v15 = rimObsCheckForRegistrationConflicts(v12, a5, v14, a7);
  if ( v15 >= 0 )
  {
    RIMLockExclusive((__int64)&gInputObserverLock);
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    LOBYTE(v16) = a4;
    LOBYTE(v17) = a4;
    v15 = RawInputManagerInputObserverObjectCreate(v17, v18, v19, v16, &Handle);
    KeLeaveCriticalRegion();
    if ( v15 < 0 )
      goto LABEL_25;
    v15 = RawInputManagerInputObserverObjectResolveHandle(Handle, v20, a4, &Object);
    if ( v15 >= 0 )
    {
      v21 = Object;
      *((_BYTE *)Object + 64) = a4;
      *((_QWORD *)v21 + 11) = a1;
      *((_DWORD *)v21 + 24) = a2;
      *((_DWORD *)v21 + 25) = a5;
      *((_DWORD *)v21 + 26) = v14;
      *((_DWORD *)v21 + 27) = a7;
      *((_DWORD *)v21 + 28) = a8;
      v15 = rimConvertUserToKernelEventHandle(a3, (void **)v21 + 9);
      ObfDereferenceObject(v21);
    }
    if ( v15 < 0 )
    {
LABEL_25:
      if ( Handle != (HANDLE)-1LL )
        ObCloseHandle(Handle, a4);
    }
    else if ( a4 )
    {
      v22 = a9;
      if ( a9 >= W32UserProbeAddress )
        v22 = (HANDLE *)W32UserProbeAddress;
      *v22 = Handle;
    }
    else
    {
      *a9 = Handle;
    }
    RIMUnlockExclusive((__int64)&gInputObserverLock);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xDu,
    (__int64)&WPP_1b612acf6235cfc5ca6869ab8dd4f677_Traceguids,
    v15);
  return (unsigned int)v15;
}
