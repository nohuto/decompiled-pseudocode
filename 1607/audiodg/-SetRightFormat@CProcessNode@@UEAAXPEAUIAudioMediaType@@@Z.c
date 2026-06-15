/*
 * XREFs of ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000BEC0
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x140017050 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessNode::SetRightFormat(CProcessNode *this, struct IAudioMediaType *a2)
{
  CAudioMediaType *v3; // rcx
  void (*v5)(void); // rax
  CAudioMediaType *v6; // rcx
  void (*v7)(void); // rax
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rax
  __int64 v9; // rcx
  ULONG (__stdcall *v10)(IAudioMediaType *); // rax
  __int64 v11; // rcx

  v3 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    *((_QWORD *)this + 1) = 0LL;
    v5 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v5 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v3);
    else
      v5();
  }
  v6 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v7();
  }
  if ( *((struct IAudioMediaType **)this + 1) != a2 )
  {
    if ( a2 )
    {
      AddRef = a2->lpVtbl->AddRef;
      if ( (char *)AddRef == (char *)CAudioMediaType::AddRef )
        CAudioMediaType::AddRef((CAudioMediaType *)a2);
      else
        ((void (__fastcall *)(struct IAudioMediaType *))AddRef)(a2);
    }
    v9 = *((_QWORD *)this + 1);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 1) = a2;
  }
  if ( *((struct IAudioMediaType **)this + 2) != a2 )
  {
    if ( a2 )
    {
      v10 = a2->lpVtbl->AddRef;
      if ( (char *)v10 == (char *)CAudioMediaType::AddRef )
        CAudioMediaType::AddRef((CAudioMediaType *)a2);
      else
        ((void (__fastcall *)(struct IAudioMediaType *))v10)(a2);
    }
    v11 = *((_QWORD *)this + 2);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    *((_QWORD *)this + 2) = a2;
  }
}
