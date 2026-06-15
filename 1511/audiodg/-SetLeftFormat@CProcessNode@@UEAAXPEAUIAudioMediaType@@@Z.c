/*
 * XREFs of ?SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x140011200
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x140017A60 (-AddRef@CAudioMediaType@@UEAAKXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

void __fastcall CProcessNode::SetLeftFormat(CProcessNode *this, struct IAudioMediaType *a2)
{
  CAudioMediaType *v2; // rdi
  __int64 (__fastcall *v5)(CAudioMediaType *); // rbp
  CAudioMediaType *v6; // rdi
  __int64 (__fastcall *v7)(CAudioMediaType *); // rbp
  ULONG (__stdcall *AddRef)(IAudioMediaType *); // rdi
  __int64 v9; // r14
  ULONG (__stdcall *v10)(IAudioMediaType *); // rdi
  __int64 v11; // r14

  v2 = (CAudioMediaType *)*((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    v5 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v2 + 16LL);
    if ( v5 == CAudioMediaType::Release )
      CAudioMediaType::Release(v2);
    else
      v5(v2);
  }
  v6 = (CAudioMediaType *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    v7 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v6 + 16LL);
    if ( v7 == CAudioMediaType::Release )
      CAudioMediaType::Release(v6);
    else
      v7(v6);
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
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 1));
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
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 16LL))(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = a2;
  }
}
