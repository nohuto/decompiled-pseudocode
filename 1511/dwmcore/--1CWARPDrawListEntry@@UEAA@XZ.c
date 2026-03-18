/*
 * XREFs of ??1CWARPDrawListEntry@@UEAA@XZ @ 0x180117E74
 * Callers:
 *     ??_GCWARPDrawListEntry@@UEAAPEAXI@Z @ 0x180117EB0 (--_GCWARPDrawListEntry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CWARPDrawListEntry::~CWARPDrawListEntry(CWARPDrawListEntry *this)
{
  CMILCOMBase *v2; // rcx

  *(_QWORD *)this = &CWARPDrawListEntry::`vftable';
  v2 = (CMILCOMBase *)*((_QWORD *)this + 14);
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
