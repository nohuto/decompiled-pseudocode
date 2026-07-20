/*
 * XREFs of SetErrorMode @ 0x140015134
 * Callers:
 *     GetLongPathNameW @ 0x1400153F4 (GetLongPathNameW.c)
 * Callees:
 *     BaseSetLastNTError @ 0x14001603C (BaseSetLastNTError.c)
 */

__int64 __fastcall SetErrorMode(int a1)
{
  unsigned int v1; // edi
  NTSTATUS v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // ebx
  int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessDefaultHardErrorMode,
         &ProcessInformation,
         4u,
         0LL);
  if ( v3 >= 0 )
  {
    if ( (ProcessInformation & 1) != 0 )
      v4 = ProcessInformation & 0xFFFFFFFE;
    else
      v4 = ProcessInformation | 1;
    v1 = v4;
  }
  else
  {
    BaseSetLastNTError((unsigned int)v3);
  }
  if ( (a1 & 1) != 0 )
    v5 = a1 & 0xFFFFFFFE;
  else
    v5 = a1 | 1;
  v8 = v1 & 4 | v5;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &v8, 4u);
  return v1;
}
