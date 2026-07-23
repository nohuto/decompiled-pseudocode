/*
 * XREFs of sub_1800C550A @ 0x1800C550A
 * Callers:
 *     TppCritResetThread @ 0x180081BB0 (TppCritResetThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtSetInformationObject @ 0x1800A5C30 (NtSetInformationObject.c)
 */

NTSTATUS __fastcall sub_1800C550A(void *a1)
{
  HANDLE ThreadInformation; // [rsp+30h] [rbp+8h] BYREF
  __int16 ObjectInformation; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF

  ThreadInformation = a1;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  v4 = 0;
  NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBreakOnTermination, &v4, 4u);
  ObjectInformation = 0;
  NtSetInformationObject(ThreadInformation, ObjectHandleFlagInformation, &ObjectInformation, 2u);
  NtClose(ThreadInformation);
  ThreadInformation = 0LL;
  return NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
}
