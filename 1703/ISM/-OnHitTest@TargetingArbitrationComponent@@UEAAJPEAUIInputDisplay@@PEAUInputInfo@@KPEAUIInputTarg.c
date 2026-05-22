/*
 * XREFs of ?OnHitTest@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18007F7E0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z @ 0x180080718 (-Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009DF10 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009E04C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TargetingArbitrationComponent::OnHitTest(
        TargetingArbitrationComponent *this,
        struct IInputDisplay *a2,
        struct InputInfo *a3,
        unsigned int a4,
        struct IInputTarget *a5,
        struct InputTargetingDecision *a6)
{
  unsigned int v7; // r13d
  int v8; // r15d
  struct IInputTarget *v9; // rdi
  int v10; // r14d
  unsigned int v11; // eax
  struct IInputTarget **v12; // rsi
  char *v13; // r12
  struct IInputTarget *v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct IInputTarget *v18; // rcx
  struct IInputTarget *v19; // rbx
  unsigned int v20; // r14d
  _BYTE *v21; // rbx
  __int64 v22; // rcx
  int v23; // esi
  struct IInputTarget *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  struct IInputTarget *v27; // rbx
  struct InputTargetingDecision *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rsi
  _QWORD *v31; // rbx
  char v33; // [rsp+40h] [rbp-C0h]
  int v34; // [rsp+44h] [rbp-BCh]
  struct IInputTarget *v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  struct IInputTarget *v37; // [rsp+58h] [rbp-A8h]
  int v38; // [rsp+60h] [rbp-A0h]
  unsigned int v39; // [rsp+68h] [rbp-98h]
  unsigned int v40; // [rsp+6Ch] [rbp-94h]
  int v41; // [rsp+70h] [rbp-90h]
  struct IInputTarget *v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  struct IInputTarget *v44; // [rsp+88h] [rbp-78h]
  struct InputInfo *v45; // [rsp+90h] [rbp-70h]
  struct IInputDisplay *v46; // [rsp+98h] [rbp-68h]
  struct InputTargetingDecision *v47; // [rsp+A0h] [rbp-60h]
  int v48; // [rsp+A8h] [rbp-58h]
  __int128 v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  char v51[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v52[120]; // [rsp+D8h] [rbp-28h] BYREF

  v50 = -2LL;
  v40 = a4;
  v45 = a3;
  v46 = a2;
  v44 = a5;
  v47 = a6;
  v7 = 0;
  v8 = 0;
  v41 = 0;
  v9 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v33 = 0;
  `eh vector constructor iterator'(
    v51,
    0x18uLL,
    5uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::BufferTarget,
    (void (*)(void *))BufferedInputTarget::BufferTarget::~BufferTarget);
  v10 = 0;
  v34 = 0;
  v11 = 0;
  v39 = 0;
  v12 = (struct IInputTarget **)v52;
  v13 = v51;
  v14 = (TargetingArbitrationComponent *)((char *)this + 24);
  v35 = v14;
  do
  {
    v15 = *(_QWORD *)v14;
    if ( !*(_QWORD *)v14 )
      goto LABEL_26;
    v37 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, struct IInputDisplay *, struct InputInfo *, _QWORD, struct IInputTarget *, int *))(*(_QWORD *)v15 + 24LL))(
            v15,
            v46,
            v45,
            v40,
            v44,
            &v36);
    v7 = v16;
    if ( v16 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v17, &MinInput_Warning_CheckResult, 0, 118, v16);
      v24 = v37;
      v37 = 0LL;
      goto LABEL_35;
    }
    if ( v36 == 1 )
    {
      v18 = v37;
      v19 = v37;
      if ( !v33 )
      {
        v8 = 1;
        v41 = 1;
        if ( v37 )
        {
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v37 + 8LL))(v37);
          v18 = v37;
        }
        v9 = v19;
        v42 = v19;
        v23 = v38;
        LODWORD(v43) = v38;
        v37 = 0LL;
        if ( v18 )
        {
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
          goto LABEL_38;
        }
        goto LABEL_49;
      }
      *(_DWORD *)v13 = 1;
      goto LABEL_7;
    }
    if ( v36 == 2 )
    {
      if ( !v33 )
      {
        v33 = 1;
        v20 = 0;
        v21 = v52;
        do
        {
          v48 = 0;
          v49 = 0LL;
          *((_DWORD *)v21 - 2) = 0;
          v22 = *(_QWORD *)v21;
          *(_QWORD *)v21 = 0LL;
          if ( v22 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          *(_QWORD *)v21 = v49;
          *((_DWORD *)v21 + 2) = DWORD2(v49);
          ++v20;
          v21 += 24;
        }
        while ( v20 < 5 );
        v10 = v34;
      }
      *(_DWORD *)v13 = 2;
      v18 = v37;
      v19 = v37;
LABEL_7:
      if ( v18 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 8LL))(v18);
        v18 = v37;
      }
      if ( *v12 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)*v12 + 16LL))(*v12);
        v18 = v37;
      }
      *v12 = v19;
      v34 = ++v10;
      v13 += 24;
      v12 += 3;
      v14 = v35;
      goto LABEL_21;
    }
    v18 = v37;
LABEL_21:
    if ( v36 )
      LODWORD(v43) = v38 | v43;
    if ( v18 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
    v11 = v39;
LABEL_26:
    v39 = ++v11;
    v14 = (struct IInputTarget *)((char *)v14 + 8);
    v35 = v14;
  }
  while ( v11 < 5 );
  v23 = v43;
LABEL_38:
  if ( v33 )
  {
    v35 = 0LL;
    v25 = BufferedInputTarget::Create(v44, (struct InputTargetingDecision *)v51, v10, &v35);
    v7 = v25;
    if ( v25 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v26, &MinInput_Warning_CheckResult, 0, 195, v25);
      v24 = v35;
LABEL_35:
      if ( v24 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v24 + 16LL))(v24);
      goto LABEL_60;
    }
    v8 = 1;
    v41 = 1;
    v27 = v35;
    if ( v35 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v35 + 8LL))(v35);
    if ( v9 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
    v9 = v27;
    v42 = v27;
    if ( v27 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v27 + 16LL))(v27);
  }
LABEL_49:
  v28 = v47;
  *(_DWORD *)v47 = v8;
  if ( v9 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v9 + 8LL))(v9);
  v29 = *((_QWORD *)v28 + 1);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  *((_QWORD *)v28 + 1) = v9;
  *((_DWORD *)v28 + 4) = v23;
  if ( v9 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
  v9 = 0LL;
  v42 = 0LL;
  v30 = v10;
  if ( v10 > 0 )
  {
    v31 = v52;
    do
    {
      if ( *v31 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v31 + 16LL))(*v31);
      *v31 = 0LL;
      v31 += 3;
      --v30;
    }
    while ( v30 );
  }
LABEL_60:
  `eh vector destructor iterator'(
    v51,
    0x18uLL,
    5uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::~BufferTarget);
  if ( v9 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v9 + 16LL))(v9);
  return v7;
}
