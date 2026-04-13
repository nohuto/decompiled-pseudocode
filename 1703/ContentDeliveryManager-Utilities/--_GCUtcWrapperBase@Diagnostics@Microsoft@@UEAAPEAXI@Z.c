/*
 * XREFs of ??_GCUtcWrapperBase@Diagnostics@Microsoft@@UEAAPEAXI@Z @ 0x180017290
 * Callers:
 *     <none>
 * Callees:
 *     ??1CUtcWrapperBase@Diagnostics@Microsoft@@UEAA@XZ @ 0x1800678E8 (--1CUtcWrapperBase@Diagnostics@Microsoft@@UEAA@XZ.c)
 */

Microsoft::Diagnostics::CUtcWrapperBase *__fastcall Microsoft::Diagnostics::CUtcWrapperBase::`scalar deleting destructor'(
        Microsoft::Diagnostics::CUtcWrapperBase *this,
        char a2)
{
  Microsoft::Diagnostics::CUtcWrapperBase::~CUtcWrapperBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
