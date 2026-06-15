/*
 * XREFs of ??_GCAPOProcessNode@@UEAAPEAXI@Z @ 0x1400096F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x140018AD0 (--_V@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

CAPOProcessNode *__fastcall CAPOProcessNode::`scalar deleting destructor'(CAPOProcessNode *this, char a2)
{
  _QWORD *v2; // rsi
  __int64 v5; // r14
  volatile signed __int32 *v6; // rdi
  __int64 (__fastcall *v7)(CAudioMediaType *); // rsi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(CAudioMediaType *); // rsi
  void *v11; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 4);
  *(_QWORD *)this = &CAPOProcessNode::`vftable';
  if ( v2 )
  {
    v5 = v2[5];
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(v2[5]);
    operator delete(v2);
  }
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CProcessNode::`vftable';
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == CAudioMediaType::Release )
    {
      if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        v11 = (void *)*((_QWORD *)v6 + 2);
        *(_QWORD *)v6 = &CAudioMediaType::`vftable';
        operator delete[](v11);
        *((_QWORD *)v6 + 2) = 0LL;
        operator delete((void *)v6);
      }
    }
    else
    {
      v7(*((CAudioMediaType **)this + 2));
    }
  }
  v8 = *((_QWORD *)this + 1);
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v8 + 16LL);
    if ( v9 == CAudioMediaType::Release )
      CAudioMediaType::Release(*((CAudioMediaType **)this + 1));
    else
      v9(*((CAudioMediaType **)this + 1));
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
