/*
 * XREFs of ?DoConvergedTargeting@DWMInputRouter@@UEAAHPEAUtagINPUTDEST@@PEAUInputInfo@@@Z @ 0x180015660
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x18001B2DC (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::DoConvergedTargeting(DWMInputRouter *this, struct tagINPUTDEST *a2, HMONITOR *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  struct IInputDisplay *v8; // rbx
  int v9; // r9d
  unsigned int v10; // edi
  int v12; // [rsp+70h] [rbp+18h] BYREF
  struct IInputDisplay *v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0;
  v6 = DWMInputDisplay::Create(a3[4], &v13);
  v8 = v13;
  if ( v6 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_8;
    v9 = 1558;
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct tagINPUTDEST *, struct IInputDisplay *, HMONITOR *, int *))(**((_QWORD **)this + 27) + 40LL))(
         *((_QWORD *)this + 27),
         a2,
         v13,
         a3,
         &v12);
  if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v9 = 1565;
LABEL_7:
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, v9, v6);
  }
LABEL_8:
  if ( v12 == 2 )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    if ( v12 == 3 )
      v10 = -1;
  }
  if ( v8 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v8 + 16LL))(v8);
  return v10;
}
