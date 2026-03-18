/*
 * XREFs of PspWaitForUsermodeExit @ 0x1406C3EC4
 * Callers:
 *     PspTerminateServerSiloDeferred @ 0x1406C2DDC (PspTerminateServerSiloDeferred.c)
 *     PsShutdownSystem @ 0x1406C39F0 (PsShutdownSystem.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspWaitForUsermodeExit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *i; // rdx
  _QWORD *NextProcessThread; // rax
  void *v7; // rbx

LABEL_1:
  for ( i = 0LL; ; i = NextProcessThread )
  {
    NextProcessThread = PsGetNextProcessThread(a1, i, a3, a4);
    v7 = NextProcessThread;
    if ( !NextProcessThread )
      break;
    if ( (*((_DWORD *)NextProcessThread + 29) & 0x400) == 0 && !*((_BYTE *)NextProcessThread + 4) )
    {
      ObfReferenceObject(NextProcessThread);
      ObfDereferenceObjectWithTag(v7, 0x6E457350u);
      KeWaitForSingleObject(v7, Executive, 0, 0, 0LL);
      ObfDereferenceObject(v7);
      goto LABEL_1;
    }
  }
  return 0LL;
}
