/*
 * XREFs of UserCreateHeap @ 0x1C006D550
 * Callers:
 *     InitCreateSharedSection @ 0x1C013C56C (InitCreateSharedSection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

PVOID __fastcall UserCreateHeap(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        NTSTATUS (__stdcall *a5)(PVOID Base, PVOID *CommitAddress, PSIZE_T CommitSize))
{
  SIZE_T v6; // r15
  int v7; // ebx
  __int64 CurrentProcess; // rsi
  __int64 v11; // [rsp+50h] [rbp-71h] BYREF
  _DWORD v12[2]; // [rsp+58h] [rbp-69h] BYREF
  __int64 v13; // [rsp+60h] [rbp-61h] BYREF
  struct _RTL_HEAP_PARAMETERS Parameters; // [rsp+70h] [rbp-51h] BYREF

  v6 = a4;
  v7 = a2;
  v13 = 0LL;
  v12[1] = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  v11 = 0LL;
  v12[0] = v7;
  if ( (int)MmMapViewOfSection(a1, CurrentProcess, &v11, 0LL, 0x2000LL, v12, &v13, 2, 0x400000, 2) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess, v11);
  memset(&Parameters, 0, sizeof(Parameters));
  Parameters.Length = 96;
  Parameters.InitialCommit = 0x2000LL;
  Parameters.InitialReserve = v6;
  Parameters.CommitRoutine = a5;
  return RtlCreateHeap(9u, a3, (unsigned int)v6, 0x2000uLL, 0LL, &Parameters);
}
