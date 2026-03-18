/*
 * XREFs of ??1CTokenBase@@UEAA@XZ @ 0x1C00A8D08
 * Callers:
 *     ??_ECCompositionToken@@UEAAPEAXI@Z @ 0x1C00E2A14 (--_ECCompositionToken@@UEAAPEAXI@Z.c)
 *     ??_GCTokenBase@@UEAAPEAXI@Z @ 0x1C00E2FA0 (--_GCTokenBase@@UEAAPEAXI@Z.c)
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
