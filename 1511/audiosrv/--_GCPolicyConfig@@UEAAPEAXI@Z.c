/*
 * XREFs of ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x180067A18
 * Callers:
 *     ??_ECPolicyConfig@@W7EAAPEAXI@Z @ 0x180048D20 (--_ECPolicyConfig@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x18007F23C (--1CPolicyConfig@@UEAA@XZ.c)
 */

CPolicyConfig *__fastcall CPolicyConfig::`scalar deleting destructor'(CPolicyConfig *this, char a2)
{
  CPolicyConfig::~CPolicyConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
