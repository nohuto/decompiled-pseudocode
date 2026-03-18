/*
 * XREFs of ??1CTokenBase@@UEAA@XZ @ 0x1C001F104
 * Callers:
 *     ??1CToken@@UEAA@XZ @ 0x1C001EE38 (--1CToken@@UEAA@XZ.c)
 *     ??_ECCompositionToken@@UEAAPEAXI@Z @ 0x1C00F4BE4 (--_ECCompositionToken@@UEAAPEAXI@Z.c)
 *     ??_GCTokenBase@@UEAAPEAXI@Z @ 0x1C00F4EA0 (--_GCTokenBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenBase::~CTokenBase(CTokenBase *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 6) == 6;
  *(_QWORD *)this = &CTokenBase::`vftable';
  if ( !v1 )
    *((_DWORD *)this + 6) = 6;
}
