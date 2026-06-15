/*
 * XREFs of ??_GCWindowsPolicyManager@@UEAAPEAXI@Z @ 0x180003FCC
 * Callers:
 *     ??_ECWindowsPolicyManager@@WBA@EAAPEAXI@Z @ 0x180005940 (--_ECWindowsPolicyManager@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CWindowsPolicyManager *__fastcall CWindowsPolicyManager::`scalar deleting destructor'(
        CWindowsPolicyManager *this,
        char a2)
{
  *(_QWORD *)this = &CWindowsPolicyManager::`vftable'{for `IAudioPolicyManager'};
  *((_QWORD *)this + 1) = &CWindowsPolicyManager::`vftable'{for `ISessionInternalEvents'};
  *((_QWORD *)this + 2) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
