/*
 * XREFs of RtlpWow64OpenThreadProcess @ 0x1800D05E8
 * Callers:
 *     RtlWow64SuspendThreadEx @ 0x1800D0350 (RtlWow64SuspendThreadEx.c)
 * Callees:
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A5580 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 */

__int64 __fastcall RtlpWow64OpenThreadProcess(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, _OWORD *a5)
{
  __int64 result; // rax
  int InformationThread; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-21h]
  __int64 v10; // [rsp+88h] [rbp+1Fh]
  __int128 v11; // [rsp+90h] [rbp+27h]

  result = ZwDuplicateObject();
  if ( (int)result >= 0 )
  {
    InformationThread = ZwQueryInformationThread();
    NtClose(Handle);
    if ( InformationThread >= 0 )
    {
      if ( a5 )
        *a5 = v11;
      if ( a3 )
        *a3 = v10;
      if ( a4 )
      {
        if ( (void *)v11 == NtCurrentTeb()->ClientId.UniqueProcess )
          *a4 = -1LL;
        else
          return (unsigned int)NtOpenProcess();
      }
    }
    return (unsigned int)InformationThread;
  }
  return result;
}
