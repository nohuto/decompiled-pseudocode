/*
 * XREFs of ??1CAce@CAcl@ATL@@UEAA@XZ @ 0x180066318
 * Callers:
 *     ??1CAccessAce@CDacl@ATL@@UEAA@XZ @ 0x180066290 (--1CAccessAce@CDacl@ATL@@UEAA@XZ.c)
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x180069FD0 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18007F460 (--_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAcl::CAce::~CAce(void **this)
{
  *this = &ATL::CAcl::CAce::`vftable';
  free(this[17]);
  ATL::CSid::~CSid((ATL::CSid *)(this + 1));
}
