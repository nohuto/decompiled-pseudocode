/*
 * XREFs of ??_ECProcessNode@@UEAAPEAXI@Z @ 0x1400113C0
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

CProcessNode *__fastcall CProcessNode::`vector deleting destructor'(CProcessNode *this, char a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v5)(CAudioMediaType *); // rsi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(CAudioMediaType *); // rsi

  *(_QWORD *)this = &CProcessNode::`vftable';
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v3 + 16LL);
    if ( v5 == CAudioMediaType::Release )
      CAudioMediaType::Release(*((CAudioMediaType **)this + 2));
    else
      v5(*((CAudioMediaType **)this + 2));
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == CAudioMediaType::Release )
      CAudioMediaType::Release(*((CAudioMediaType **)this + 1));
    else
      v7(*((CAudioMediaType **)this + 1));
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
