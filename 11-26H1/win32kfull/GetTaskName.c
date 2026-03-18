/*
 * XREFs of GetTaskName @ 0x1402A6E4C
 * Callers:
 *     xxxQueryInformationThread @ 0x1401535CC (xxxQueryInformationThread.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GetTaskName(__int64 a1, _WORD *a2, unsigned int a3)
{
  unsigned __int16 *v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  const void *v8; // rdx
  unsigned __int64 v9; // rcx
  PEPROCESS ThreadProcess; // rax
  const char *ProcessImageFileName; // rax
  struct _UNICODE_STRING v13; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = *(unsigned __int16 **)(a1 + 528);
  v6 = 0;
  DestinationString = 0LL;
  v13 = 0LL;
  if ( v5 )
  {
    v7 = *v5;
    v6 = a3;
    v8 = (const void *)*((_QWORD *)v5 + 1);
    v9 = v7 + 2;
    if ( v9 < a3 )
      v6 = v9;
    memmove(a2, v8, v6);
  }
  else
  {
    ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(ThreadProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( a3 < 2 )
      return 2 * (unsigned int)DestinationString.Length + 2;
    v13.Buffer = a2;
    v13.MaximumLength = a3 - 2;
    if ( RtlAnsiStringToUnicodeString(&v13, &DestinationString, 0) < 0 )
    {
      *a2 = 0;
      return v6;
    }
    v6 = v13.Length + 2;
  }
  if ( v6 > a3 )
    v6 = a3;
  a2[((unsigned __int64)v6 >> 1) - 1] = 0;
  return v6;
}
