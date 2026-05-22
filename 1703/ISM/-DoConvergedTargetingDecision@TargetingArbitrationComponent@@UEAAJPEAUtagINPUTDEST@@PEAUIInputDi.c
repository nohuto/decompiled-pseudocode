/*
 * XREFs of ?DoConvergedTargetingDecision@TargetingArbitrationComponent@@UEAAJPEAUtagINPUTDEST@@PEAUIInputDisplay@@PEAUInputInfo@@PEAW4InputTargetingResult@@@Z @ 0x180080090
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009DF10 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009E04C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TargetingArbitrationComponent::DoConvergedTargetingDecision(
        TargetingArbitrationComponent *this,
        struct tagINPUTDEST *a2,
        struct IInputDisplay *a3,
        struct InputInfo *a4,
        enum InputTargetingResult *a5)
{
  unsigned int v6; // r12d
  int v7; // esi
  char v8; // r14
  unsigned int v9; // r15d
  _DWORD *v10; // rdi
  _QWORD *v11; // r13
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r15d
  char *v15; // rbx
  __int64 v16; // rcx
  unsigned int v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  struct InputInfo *v20; // [rsp+38h] [rbp-C8h]
  struct IInputDisplay *v21; // [rsp+40h] [rbp-C0h]
  struct tagINPUTDEST *v22; // [rsp+48h] [rbp-B8h]
  enum InputTargetingResult *v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+58h] [rbp-A8h]
  __int128 v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  _BYTE v27[8]; // [rsp+80h] [rbp-80h] BYREF
  char v28; // [rsp+88h] [rbp-78h] BYREF

  v26 = -2LL;
  v20 = a4;
  v21 = a3;
  v22 = a2;
  v23 = a5;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  `eh vector constructor iterator'(
    v27,
    0x18uLL,
    5uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::BufferTarget,
    (void (*)(void *))BufferedInputTarget::BufferTarget::~BufferTarget);
  v9 = 0;
  v18 = 0;
  v10 = v27;
  v11 = (_QWORD *)((char *)this + 24);
  while ( 1 )
  {
    if ( !*v11 )
      goto LABEL_19;
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct tagINPUTDEST *, struct IInputDisplay *, struct InputInfo *, int *))(*(_QWORD *)*v11 + 40LL))(
            *v11,
            v22,
            v21,
            v20,
            &v19);
    v6 = v12;
    if ( v12 < 0 )
      break;
    switch ( v19 )
    {
      case 1:
        if ( !v8 )
        {
          v7 = 1;
          goto LABEL_27;
        }
        *v10 = 1;
        goto LABEL_18;
      case 2:
        if ( !v8 )
        {
          v8 = 1;
          v14 = 0;
          v15 = &v28;
          do
          {
            v24 = 0;
            v25 = 0LL;
            *((_DWORD *)v15 - 2) = 0;
            v16 = *(_QWORD *)v15;
            *(_QWORD *)v15 = 0LL;
            if ( v16 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            *(_QWORD *)v15 = v25;
            *((_DWORD *)v15 + 2) = DWORD2(v25);
            ++v14;
            v15 += 24;
          }
          while ( v14 < 5 );
          v9 = v18;
        }
        *v10 = 2;
LABEL_18:
        v10 += 6;
        break;
      case 3:
        if ( !v8 )
        {
          v7 = 3;
LABEL_25:
          if ( v8 )
            v7 = 2;
          goto LABEL_27;
        }
        *v10 = 3;
        goto LABEL_18;
    }
LABEL_19:
    v18 = ++v9;
    ++v11;
    if ( v9 >= 5 )
      goto LABEL_25;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v13, &MinInput_Warning_CheckResult, 0, 368, v12);
LABEL_27:
  *(_DWORD *)v23 = v7;
  `eh vector destructor iterator'(
    v27,
    0x18uLL,
    5uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::~BufferTarget);
  return v6;
}
