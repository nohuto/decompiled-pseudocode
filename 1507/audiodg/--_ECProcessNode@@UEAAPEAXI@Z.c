/*
 * XREFs of ??_ECProcessNode@@UEAAPEAXI@Z @ 0x140009340
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006C70 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

CProcessNode *__fastcall CProcessNode::`vector deleting destructor'(CProcessNode *this, char a2)
{
  CAudioMediaType *v4; // rdi
  __int64 (__fastcall *v5)(CAudioMediaType *); // rsi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(CAudioMediaType *); // rsi

  *(_QWORD *)this = &CProcessNode::`vftable';
  v4 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CAudioMediaType::Release )
      CAudioMediaType::Release(v4);
    else
      v5(v4);
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
