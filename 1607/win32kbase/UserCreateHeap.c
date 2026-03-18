/*
 * XREFs of UserCreateHeap @ 0x1C0053B40
 * Callers:
 *     InitCreateSharedSection @ 0x1C0155458 (InitCreateSharedSection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

PVOID __fastcall UserCreateHeap(
        __int64 a1,
        int a2,
        void *a3,
        unsigned int a4,
        NTSTATUS (__stdcall *a5)(PVOID Base, PVOID *CommitAddress, PSIZE_T CommitSize))
{
  SIZE_T v6; // r15
  __int64 CurrentProcess; // rsi
  _DWORD v11[2]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v12; // [rsp+58h] [rbp-69h] BYREF
  __int64 v13; // [rsp+60h] [rbp-61h] BYREF
  struct _RTL_HEAP_PARAMETERS Parameters; // [rsp+70h] [rbp-51h] BYREF

  v6 = a4;
  v13 = 0LL;
  v11[1] = 0;
  CurrentProcess = PsGetCurrentProcess(a1);
  v12 = 0LL;
  v11[0] = a2;
  if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64 *, _QWORD, __int64, _DWORD *, __int64 *, int, int, int))MmMapViewOfSection)(
              a1,
              CurrentProcess,
              &v12,
              0LL,
              0x2000LL,
              v11,
              &v13,
              2,
              0x400000,
              2) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess);
  memset(&Parameters, 0, sizeof(Parameters));
  Parameters.Length = 96;
  Parameters.InitialCommit = 0x2000LL;
  Parameters.InitialReserve = v6;
  Parameters.CommitRoutine = a5;
  return RtlCreateHeap(9u, a3, (unsigned int)v6, 0x2000uLL, 0LL, &Parameters);
}
