/*
 * XREFs of RmpMemoryMonitorInitialize @ 0x180020F7C
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180020C08 (RmpInitializeGlobalModules.c)
 * Callees:
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpMemoryMonitorInitialize(_DWORD *a1)
{
  _OWORD *v1; // r14
  NTSTATUS v3; // edi
  unsigned int v4; // ebx
  void **v5; // rdi
  HANDLE EventW; // rax
  int v7; // eax
  __int128 v8; // xmm1
  int v9; // eax
  __int128 v10; // xmm0
  int v11; // eax
  __int128 v12; // xmm1
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  void **v16; // rsi
  void *v17; // rcx
  void *EventHandle[2]; // [rsp+28h] [rbp-59h] BYREF
  __int128 v20; // [rsp+38h] [rbp-49h]
  __int128 v21; // [rsp+48h] [rbp-39h]
  HANDLE hObject[2]; // [rsp+58h] [rbp-29h] BYREF
  __int128 v23; // [rsp+68h] [rbp-19h]
  __int128 v24; // [rsp+78h] [rbp-9h]
  __int64 v25; // [rsp+88h] [rbp+7h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+17h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp+47h] BYREF

  v1 = RmSvcGlobals;
  memset_0(EventHandle, 0, 0x68uLL);
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\HighCommitCondition");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = NtOpenEvent(EventHandle, 0x100001u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    v4 = 1;
    v5 = &EventHandle[1];
    do
    {
      EventW = CreateEventW(0LL, 0, 0, 0LL);
      *v5 = EventW;
      if ( !EventW )
      {
        v3 = -1073741823;
        goto LABEL_7;
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 6 );
    v3 = TpAllocTimer(&hObject[1], RmpMemoryMonitorTimerCallback, v1 + 100, 0LL);
    if ( v3 >= 0 )
    {
      v7 = a1[28];
      v8 = v20;
      v1[100] = *(_OWORD *)EventHandle;
      LODWORD(v23) = v7;
      v9 = a1[30];
      v10 = v21;
      v1[101] = v8;
      DWORD1(v23) = v9;
      v11 = a1[31];
      v12 = *(_OWORD *)hObject;
      v1[102] = v10;
      DWORD2(v23) = v11;
      v13 = a1[32];
      v1[103] = v12;
      HIDWORD(v23) = v13;
      v14 = a1[33];
      v1[104] = v23;
      LODWORD(v24) = v14;
      DWORD2(v24) = a1[34];
      HIDWORD(v25) = 3;
      *(_QWORD *)&v10 = v25;
      v1[105] = v24;
      *((_QWORD *)v1 + 212) = v10;
      memset_0(EventHandle, 0, 0x68uLL);
      v3 = 0;
    }
  }
LABEL_7:
  v15 = 0;
  v16 = EventHandle;
  do
  {
    v17 = *v16;
    if ( *v16 )
    {
      if ( v15 )
        CloseHandle(v17);
      else
        NtClose(v17);
    }
    ++v15;
    ++v16;
  }
  while ( v15 < 6 );
  if ( hObject[0] )
    CloseHandle(hObject[0]);
  if ( hObject[1] )
    TpReleaseTimer();
  return (unsigned int)v3;
}
