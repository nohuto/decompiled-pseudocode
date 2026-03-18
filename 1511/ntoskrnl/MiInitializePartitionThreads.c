/*
 * XREFs of MiInitializePartitionThreads @ 0x14062473C
 * Callers:
 *     MiCreatePartition @ 0x140624224 (MiCreatePartition.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 */

NTSTATUS __fastcall MiInitializePartitionThreads(_BYTE *StartContext)
{
  int v1; // edi
  PKSTART_ROUTINE *v2; // rbx
  signed __int64 v4; // rsi
  NTSTATUS result; // eax
  HANDLE ThreadHandle; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+48h] [rbp-30h] BYREF

  v1 = 0;
  v7[0] = MiModifiedPageWriter;
  v2 = (PKSTART_ROUTINE *)v7;
  v7[1] = MiDereferenceSegmentThread;
  v7[2] = MiZeroPageThread;
  v7[3] = MiPartitionWorkingSetManager;
  v4 = StartContext - (_BYTE *)v7;
  while ( 1 )
  {
    result = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, *v2, StartContext);
    if ( result < 0 )
      break;
    ++v1;
    *(PKSTART_ROUTINE *)((char *)v2++ + v4 + 160) = (PKSTART_ROUTINE)ThreadHandle;
    if ( (unsigned __int64)v1 >= 4 )
      return 0;
  }
  return result;
}
