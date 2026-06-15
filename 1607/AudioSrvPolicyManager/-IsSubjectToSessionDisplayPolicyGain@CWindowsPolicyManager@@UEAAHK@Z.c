/*
 * XREFs of ?IsSubjectToSessionDisplayPolicyGain@CWindowsPolicyManager@@UEAAHK@Z @ 0x180004830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CWindowsPolicyManager::IsSubjectToSessionDisplayPolicyGain(
        CWindowsPolicyManager *this,
        unsigned int a2)
{
  int v2; // eax
  _BOOL8 result; // rax

  result = 1;
  if ( a2 <= 0x11 )
  {
    v2 = 147504;
    if ( _bittest(&v2, a2) )
      return 0;
  }
  return result;
}
