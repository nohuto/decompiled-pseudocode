/*
 * XREFs of RtlUserThreadStart @ 0x180009F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180009FA0 (RtlExitUserThread.c)
 *     RtlDecodePointer @ 0x180066340 (RtlDecodePointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E3F90 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall RtlUserThreadStart(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  unsigned int v3; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v3 = a1(a2);
    RtlExitUserThread(v3);
  }
  return Kernel32ThreadInitThunkFunction(0LL, a1, a2);
}
