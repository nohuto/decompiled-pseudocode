/*
 * XREFs of RtlGuardIsValidWow64StackPointer @ 0x14051B93C
 * Callers:
 *     PspWow64SetContextThread @ 0x140518F20 (PspWow64SetContextThread.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400E7E80 (KeIsAttachedProcess.c)
 */

_BOOL8 __fastcall RtlGuardIsValidWow64StackPointer(unsigned int a1)
{
  bool IsAttachedProcess; // al
  char *v3; // rdx
  char *Teb; // r8

  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
  {
    v3 = 0LL;
  }
  else
  {
    IsAttachedProcess = KeIsAttachedProcess();
    v3 = 0LL;
    if ( !IsAttachedProcess )
    {
      Teb = (char *)KeGetCurrentThread()->Teb;
      goto LABEL_4;
    }
  }
  Teb = 0LL;
LABEL_4:
  if ( Teb )
    v3 = Teb + 0x2000;
  return a1 >= *((_DWORD *)v3 + 2) && a1 <= *((_DWORD *)v3 + 1);
}
