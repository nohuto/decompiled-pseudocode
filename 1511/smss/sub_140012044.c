/*
 * XREFs of sub_140012044 @ 0x140012044
 * Callers:
 *     sub_140001E9C @ 0x140001E9C (sub_140001E9C.c)
 * Callees:
 *     sub_140002540 @ 0x140002540 (sub_140002540.c)
 *     sub_1400031FC @ 0x1400031FC (sub_1400031FC.c)
 *     sub_1400037AC @ 0x1400037AC (sub_1400037AC.c)
 *     sub_14000436C @ 0x14000436C (sub_14000436C.c)
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 *     sub_14000474C @ 0x14000474C (sub_14000474C.c)
 *     sub_140004984 @ 0x140004984 (sub_140004984.c)
 *     sub_1400049C4 @ 0x1400049C4 (sub_1400049C4.c)
 *     memset @ 0x14000C48C (memset.c)
 *     sub_140012D18 @ 0x140012D18 (sub_140012D18.c)
 */

__int64 __fastcall sub_140012044(
        PUNICODE_STRING ImageFileName,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6)
{
  _DWORD *v11; // rax
  __int64 v12; // rdi
  int v13; // r9d
  NTSTATUS v14; // ebx
  __int64 v15; // r9
  _BYTE v16[16]; // [rsp+38h] [rbp-49h] BYREF
  struct _RTL_USER_PROCESS_INFORMATION v17; // [rsp+48h] [rbp-39h] BYREF

  v17.Size = 0;
  memset(&v17.ProcessHandle, 0, 0x60uLL);
  if ( (a6 & 0x10) != 0 )
    return 3221225524LL;
  v11 = sub_1400049C4(0);
  v12 = (__int64)v11;
  if ( !v11 )
    return 3221225495LL;
  v11[16] = a4;
  sub_1400037AC(a4, 0, 0LL, (__int64)v16);
  sub_140004984((__int64)v16, (_DWORD *)v12);
  sub_14000436C((__int64)v16);
  v14 = sub_140002540(ImageFileName, a2, a3, v13, a6 | 0x20u, (struct _RTL_USER_PROCESS_PARAMETERS *)&v17);
  if ( v14 >= 0 )
  {
    if ( (*(_QWORD *)(v12 + 32) = v17.ProcessHandle,
          *(CLIENT_ID *)(v12 + 48) = v17.ClientId,
          v17.ImageInformation.SubSystemType != 1)
      && (v14 = sub_1400031FC(a4, (void *)0xFFFFFFFFFFFFFFFFLL, (__int128 *)&v17, v15, 0LL), v14 < 0)
      || (v14 = NtResumeThread(v17.ThreadHandle, 0LL), v14 < 0)
      || (NtClose(v17.ThreadHandle), v14 = sub_14000474C(v12), v14 >= 0) )
    {
      NtTerminateProcess(v17.ProcessHandle, v14);
      NtClose(v17.ThreadHandle);
    }
  }
  sub_140012D18((PVOID)v12);
  sub_1400046B4((_BYTE *)v12);
  return (unsigned int)v14;
}
