/*
 * XREFs of RtlUserThreadStart @ 0x18005C580
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18005C5F0 (RtlExitUserThread.c)
 *     RtlDecodePointer @ 0x18005C980 (RtlDecodePointer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800E8AF0 (RtlUnhandledExceptionFilter2.c)
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
