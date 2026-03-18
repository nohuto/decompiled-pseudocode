/*
 * XREFs of rimObsAddInputObserver @ 0x1C00D1204
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C00C0CD0 (NtRIMAddInputObserver.c)
 *     RIMAddInputObserver @ 0x1C00C1250 (RIMAddInputObserver.c)
 * Callees:
 *     rimConvertUserToKernelEventHandle @ 0x1C0013988 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C00C48AC (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerInputObserverObjectResolveHandle @ 0x1C00C49C0 (RawInputManagerInputObserverObjectResolveHandle.c)
 *     rimObsCheckForRegistrationConflicts @ 0x1C00D1550 (rimObsCheckForRegistrationConflicts.c)
 */

__int64 __fastcall rimObsAddInputObserver(
        __int64 a1,
        unsigned int a2,
        void *a3,
        KPROCESSOR_MODE a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        HANDLE *a8)
{
  __int64 v11; // rcx
  int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  PVOID v19; // rbx
  HANDLE *v20; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-48h] BYREF
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xBu,
    (__int64)&WPP_a391bf47b3dad452e3102517377cfdcf_Traceguids);
  if ( a2 < 0x30 )
    return 3221225507LL;
  if ( !a1 || !a6 || !a5 )
    return 3221225485LL;
  LOBYTE(v11) = a7 & 1;
  v13 = rimObsCheckForRegistrationConflicts(v11, a5, a6);
  if ( v13 >= 0 )
  {
    RIMLockExclusive((__int64)&gInputObserverLock);
    Handle = (HANDLE)-1LL;
    KeEnterCriticalRegion();
    LOBYTE(v14) = a4;
    LOBYTE(v15) = a4;
    v13 = RawInputManagerInputObserverObjectCreate(v15, v16, v17, v14, &Handle);
    KeLeaveCriticalRegion();
    if ( v13 < 0 )
      goto LABEL_17;
    v13 = RawInputManagerInputObserverObjectResolveHandle(Handle, v18, a4, &Object);
    if ( v13 >= 0 )
    {
      v19 = Object;
      *((_BYTE *)Object + 64) = a4;
      *((_QWORD *)v19 + 11) = a1;
      *((_DWORD *)v19 + 24) = a2;
      *((_DWORD *)v19 + 25) = a5;
      *((_DWORD *)v19 + 26) = a6;
      *((_DWORD *)v19 + 27) = a7;
      v13 = rimConvertUserToKernelEventHandle(a3, (void **)v19 + 9);
      ObfDereferenceObject(v19);
    }
    if ( v13 < 0 )
    {
LABEL_17:
      if ( Handle != (HANDLE)-1LL )
        ObCloseHandle(Handle, a4);
    }
    else if ( a4 )
    {
      v20 = a8;
      if ( a8 >= W32UserProbeAddress )
        v20 = (HANDLE *)W32UserProbeAddress;
      *v20 = Handle;
    }
    else
    {
      *a8 = Handle;
    }
    RIMUnlockExclusive((__int64)&gInputObserverLock);
  }
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xCu,
    (__int64)&WPP_a391bf47b3dad452e3102517377cfdcf_Traceguids,
    v13);
  return (unsigned int)v13;
}
