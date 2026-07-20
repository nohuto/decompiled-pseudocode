/*
 * XREFs of sub_140001D7C @ 0x140001D7C
 * Callers:
 *     sub_140001E9C @ 0x140001E9C (sub_140001E9C.c)
 * Callees:
 *     sub_140001CB8 @ 0x140001CB8 (sub_140001CB8.c)
 *     sub_140002540 @ 0x140002540 (sub_140002540.c)
 *     memset @ 0x14000C48C (memset.c)
 */

__int64 __fastcall sub_140001D7C(PUNICODE_STRING ImageFileName, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  NTSTATUS v6; // ebx
  HANDLE UniqueProcess; // rcx
  int v8; // eax
  NTSTATUS v9; // eax
  _BYTE EventInformation[4]; // [rsp+38h] [rbp-41h] BYREF
  int v12; // [rsp+3Ch] [rbp-3Dh]
  HANDLE Object[3]; // [rsp+40h] [rbp-39h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v14; // [rsp+58h] [rbp-21h] BYREF

  v14.Size = 0;
  memset(&v14.ProcessHandle, 0, 0x60uLL);
  if ( (a5 & 0x10) != 0 )
    return 3221225524LL;
  v6 = sub_140002540(ImageFileName, a5 | 0x20u, &v14);
  if ( v6 >= 0 )
  {
    UniqueProcess = v14.ClientId.UniqueProcess;
    *((_QWORD *)qword_14001FBD0 + 1) = v14.ClientId.UniqueProcess;
    if ( v14.ImageInformation.SubSystemType == 1 )
      v8 = NtResumeThread(v14.ThreadHandle, 0LL);
    else
      v8 = sub_140001CB8((__int64)UniqueProcess, (__int128 *)&v14);
    v6 = v8;
    if ( v8 < 0
      || (Object[0] = qword_14001FBD8,
          Object[1] = v14.ProcessHandle,
          v9 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL),
          v6 = v9,
          v9 < 0) )
    {
      NtTerminateProcess(v14.ProcessHandle, v6);
    }
    else
    {
      if ( v9 != 1 || (NtQueryEvent(qword_14001FBD8, EventBasicInformation, EventInformation, 8u, 0LL), v12) )
      {
        *((_QWORD *)qword_14001FBD0 + 1) = 0LL;
        NtSetInformationProcess(v14.ProcessHandle, (PROCESSINFOCLASS)68, 0LL, 0);
        return 0LL;
      }
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v6;
}
