/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x1403EFDC8
 * Callers:
 *     KeVerifyContextRecord @ 0x14002B21C (KeVerifyContextRecord.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(unsigned __int64 a1)
{
  bool IsAttachedProcess; // al
  _QWORD *Teb; // rdx

  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
  {
    Teb = 0LL;
  }
  else
  {
    IsAttachedProcess = KeIsAttachedProcess();
    Teb = 0LL;
    if ( !IsAttachedProcess )
      Teb = KeGetCurrentThread()->Teb;
  }
  return a1 >= Teb[2] && a1 <= Teb[1];
}
