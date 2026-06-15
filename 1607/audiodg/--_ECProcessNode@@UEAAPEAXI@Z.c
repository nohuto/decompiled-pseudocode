/*
 * XREFs of ??_ECProcessNode@@UEAAPEAXI@Z @ 0x14000C120
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009F60 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

CProcessNode *__fastcall CProcessNode::`vector deleting destructor'(CProcessNode *this, char a2)
{
  CAudioMediaType *v3; // rcx
  void (*v5)(void); // rax
  CAudioMediaType *v6; // rcx
  void (*v7)(void); // rax

  *(_QWORD *)this = &CProcessNode::`vftable';
  v3 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    v5 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v5 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v3);
    else
      v5();
  }
  v6 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v7();
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
