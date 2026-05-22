/*
 * XREFs of ?OnHitTest@MagnifierComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800811A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@MagnifierTarget@@SAJPEAVMagnifierComponent@@PEAPEAV1@@Z @ 0x180081C7C (-Create@MagnifierTarget@@SAJPEAVMagnifierComponent@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MagnifierComponent::OnHitTest(
        MagnifierComponent *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        __int64 a4,
        struct IInputTarget *a5,
        struct InputTargetingDecision *a6)
{
  unsigned int v8; // ebp
  __int64 v9; // rbx
  HMODULE LibraryA; // rax
  _QWORD *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v18; // [rsp+48h] [rbp-10h]

  v8 = 0;
  v9 = 0LL;
  if ( *((_BYTE *)this + 57) && !*((_QWORD *)this + 8) )
  {
    LibraryA = LoadLibraryA("MobileUIRes.dll");
    *((_QWORD *)this + 8) = LibraryA;
    if ( LibraryA )
      *((_QWORD *)this + 9) = GetProcAddress(LibraryA, "MagnifierSetRect");
    else
      *((_QWORD *)this + 9) = 0LL;
    *((_BYTE *)this + 57) = 0;
  }
  if ( *((_QWORD *)this + 9) && (((*(_DWORD *)a3 & 0x88) == 8) & *((_BYTE *)this + 56)) != 0 )
  {
    v11 = (_QWORD *)((char *)this + 80);
    if ( !*((_QWORD *)this + 10) )
    {
      v12 = MagnifierTarget::Create(this, (struct MagnifierTarget **)this + 10);
      v8 = v12;
      if ( v12 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 192, v12);
        goto LABEL_21;
      }
    }
    v14 = 2;
    v15 = *v11 + 8LL;
    v9 = v15 & -(__int64)(*v11 != 0LL);
    if ( v9 )
      (*(void (__fastcall **)(__int64, struct IInputDisplay *))(*(_QWORD *)v9 + 8LL))(v15 & -(__int64)(*v11 != 0LL), a2);
  }
  else
  {
    v14 = 0;
    v9 = 0LL;
  }
  *(_DWORD *)a6 = v14;
  if ( v9 )
    (*(void (__fastcall **)(__int64, struct IInputDisplay *))(*(_QWORD *)v9 + 8LL))(v9, a2);
  v16 = *((_QWORD *)a6 + 1);
  if ( v16 )
    (*(void (__fastcall **)(__int64, struct IInputDisplay *))(*(_QWORD *)v16 + 16LL))(v16, a2);
  *((_QWORD *)a6 + 1) = v9;
  *((_DWORD *)a6 + 4) = v18;
LABEL_21:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v8;
}
