/*
 * XREFs of ?SetPrelaunchActivated@CActivatedEventArgsWithPrelaunchAndViewIdBase@@UEAAJE@Z @ 0x18002D350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsWithPrelaunchAndViewIdBase::SetPrelaunchActivated(
        CActivatedEventArgsWithPrelaunchAndViewIdBase *this,
        char a2)
{
  *((_BYTE *)this + 8) = a2;
  return 0LL;
}
