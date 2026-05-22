/*
 * XREFs of ?DoConvergedTargetingDecision@MagnifierComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PEAUInputInfo@@PEAW4InputTargetingResult@@@Z @ 0x180081390
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@MagnifierTarget@@SAJPEAVMagnifierComponent@@PEAPEAV1@@Z @ 0x180081C7C (-Create@MagnifierTarget@@SAJPEAVMagnifierComponent@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierComponent::DoConvergedTargetingDecision(
        MagnifierComponent *this,
        struct tagINPUTDEST *a2,
        struct IInputDisplay *a3,
        struct InputInfo *a4,
        enum InputTargetingResult *a5)
{
  int v5; // ebx
  unsigned int v8; // esi
  HMODULE LibraryA; // rax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  int v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v8 = 0;
  v14 = 0;
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
  if ( !*((_QWORD *)this + 9) || (((*(_DWORD *)a4 & 0x88) == 8) & *((_BYTE *)this + 56)) == 0 )
    goto LABEL_25;
  if ( *((_QWORD *)this + 10)
    || (v10 = MagnifierTarget::Create(this, (struct MagnifierTarget **)this + 10), v8 = v10, v10 >= 0) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *, int *))(**((_QWORD **)this + 10) + 32LL))(
            *((_QWORD *)this + 10),
            a4,
            &v14);
    v8 = v10;
    if ( v10 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v8;
      v12 = 309;
      goto LABEL_13;
    }
    if ( v14 )
    {
      if ( v14 == 1 || v14 == 2 )
      {
        v5 = 2;
LABEL_25:
        *(_DWORD *)a5 = v5;
        return v8;
      }
      if ( v14 != 3 )
      {
        if ( v14 == 5 )
          v5 = 3;
        goto LABEL_25;
      }
    }
    v5 = 1;
    goto LABEL_25;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v12 = 300;
LABEL_13:
    Template_qqq(v11, &MinInput_Warning_CheckResult, 0, v12, v10);
  }
  return v8;
}
