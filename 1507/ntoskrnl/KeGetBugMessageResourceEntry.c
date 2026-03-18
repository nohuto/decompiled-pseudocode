/*
 * XREFs of KeGetBugMessageResourceEntry @ 0x1402027E8
 * Callers:
 *     CmpCreateHwProfileFriendlyName @ 0x14065F708 (CmpCreateHwProfileFriendlyName.c)
 * Callees:
 *     RtlFindMessageInTable @ 0x14002A9C8 (RtlFindMessageInTable.c)
 */

__int64 __fastcall KeGetBugMessageResourceEntry(unsigned int a1)
{
  int MessageInTable; // eax
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  MessageInTable = RtlFindMessageInTable((int *)KiBugCodeMessages, a1, &v4);
  v2 = v4;
  if ( MessageInTable < 0 )
    return 0LL;
  return v2;
}
