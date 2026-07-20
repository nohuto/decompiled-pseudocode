/*
 * XREFs of BaseSetLastNTError @ 0x14001603C
 * Callers:
 *     BasepGetFileNameInformation @ 0x140014008 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x140014110 (BasepGetObjectNTName.c)
 *     DeviceIoControl @ 0x14001455C (DeviceIoControl.c)
 *     GetFileAttributesW @ 0x140014AE0 (GetFileAttributesW.c)
 *     CreateFileInternal @ 0x140014BEC (CreateFileInternal.c)
 *     SetErrorMode @ 0x140015134 (SetErrorMode.c)
 *     CloseHandle @ 0x1400151C4 (CloseHandle.c)
 *     SetStdHandleEx @ 0x140015914 (SetStdHandleEx.c)
 *     FindClose @ 0x140015A94 (FindClose.c)
 *     FindFirstFileExW @ 0x140015BA0 (FindFirstFileExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BaseSetLastNTError(NTSTATUS a1)
{
  ULONG v1; // ebx

  v1 = RtlNtStatusToDosError(a1);
  RtlSetLastWin32Error(v1);
  return v1;
}
