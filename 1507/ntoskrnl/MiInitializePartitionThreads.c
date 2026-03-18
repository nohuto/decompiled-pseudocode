/*
 * XREFs of MiInitializePartitionThreads @ 0x1406A3F98
 * Callers:
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PsCreateSystemThread @ 0x1404F923C (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall MiInitializePartitionThreads(_BYTE *StartContext)
{
  unsigned int v1; // edi
  PKSTART_ROUTINE *v2; // rbx
  signed __int64 v4; // rsi
  NTSTATUS result; // eax
  HANDLE ThreadHandle; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v7[5]; // [rsp+48h] [rbp-40h] BYREF

  v1 = 0;
  v7[0] = MiModifiedPageWriter;
  v2 = (PKSTART_ROUTINE *)v7;
  v7[1] = MiMappedPageWriter;
  v7[2] = MiDereferenceSegmentThread;
  v7[3] = MiZeroPageThread;
  v7[4] = MiPartitionWorkingSetManager;
  v4 = StartContext - (_BYTE *)v7;
  while ( 1 )
  {
    result = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *v2, StartContext);
    if ( result < 0 )
      break;
    ++v1;
    *(PKSTART_ROUTINE *)((char *)v2++ + v4 + 176) = (PKSTART_ROUTINE)ThreadHandle;
    if ( v1 >= 5 )
      return 0;
  }
  return result;
}
