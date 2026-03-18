/*
 * XREFs of ??1CComposeTop@@UEAA@XZ @ 0x18011CCF8
 * Callers:
 *     ??_GCComposeTop@@UEAAPEAXI@Z @ 0x18011CEA0 (--_GCComposeTop@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CComposeTop::~CComposeTop(CComposeTop *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CComposeTop::`vftable';
  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v2 )
    (**v2)(v2, 1LL);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 20);
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
}
