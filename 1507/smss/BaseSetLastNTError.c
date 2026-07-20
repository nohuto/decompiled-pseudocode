/*
 * XREFs of BaseSetLastNTError @ 0x14001578C
 * Callers:
 *     BasepGetFileNameInformation @ 0x140013730 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x140013838 (BasepGetObjectNTName.c)
 *     DeviceIoControl @ 0x140013C84 (DeviceIoControl.c)
 *     GetFileAttributesW @ 0x140014208 (GetFileAttributesW.c)
 *     CreateFileInternal @ 0x140014314 (CreateFileInternal.c)
 *     SetErrorMode @ 0x140014860 (SetErrorMode.c)
 *     CloseHandle @ 0x1400148F0 (CloseHandle.c)
 *     SetStdHandleEx @ 0x140015054 (SetStdHandleEx.c)
 *     FindClose @ 0x1400151D4 (FindClose.c)
 *     FindFirstFileExW @ 0x1400152E0 (FindFirstFileExW.c)
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
