/*
 * XREFs of ?OnGetTargetWithFocus@TargetingArbitrationComponent@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18007FC50
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
__int64 __fastcall TargetingArbitrationComponent::OnGetTargetWithFocus(
        TargetingArbitrationComponent *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct InputTargetingDecision *a5)
{
  unsigned int v6; // r13d
  int v7; // r12d
  struct IInputTarget *v8; // rdi
  int v9; // r14d
  unsigned int v10; // eax
  struct IInputTarget **v11; // rsi
  char *v12; // r15
  struct IInputTarget *v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct IInputTarget *v17; // rcx
  struct IInputTarget *v18; // rbx
  unsigned int v19; // r14d
  _BYTE *v20; // rbx
  __int64 v21; // rcx
  struct IInputTarget *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  struct IInputTarget *v25; // rbx
  struct InputTargetingDecision *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rsi
  _QWORD *v29; // rbx
  char v31; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+34h] [rbp-CCh]
  struct IInputTarget *v33; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  struct IInputTarget *v36; // [rsp+50h] [rbp-B0h]
  struct IInputTarget *v37; // [rsp+60h] [rbp-A0h]
  int v38; // [rsp+68h] [rbp-98h]
  struct IInputTarget *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  struct DeviceInfo *v41; // [rsp+80h] [rbp-80h]
  struct IInputDisplay *v42; // [rsp+88h] [rbp-78h]
  struct InputTargetingDecision *v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+98h] [rbp-68h]
  __int128 v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  char v47[8]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v48[120]; // [rsp+C8h] [rbp-38h] BYREF

  v46 = -2LL;
  v37 = a4;
  v41 = a3;
  v42 = a2;
  v43 = a5;
  v6 = 0;
  v7 = 0;
  v38 = 0;
  v8 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v31 = 0;
  `eh vector constructor iterator'(
    v47,
    0x18uLL,
    5uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::BufferTarget,
    (void (*)(void *))BufferedInputTarget::BufferTarget::~BufferTarget);
  v9 = 0;
  v32 = 0;
  v10 = 0;
  v34 = 0;
  v11 = (struct IInputTarget **)v48;
  v12 = v47;
  v13 = (TargetingArbitrationComponent *)((char *)this + 24);
  v33 = v13;
  while ( 1 )
  {
    v14 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 )
      break;
LABEL_24:
    v34 = ++v10;
    v13 = (struct IInputTarget *)((char *)v13 + 8);
    v33 = v13;
    if ( v10 >= 5 )
      goto LABEL_35;
  }
  v36 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, struct IInputDisplay *, struct DeviceInfo *, struct IInputTarget *, int *))(*(_QWORD *)v14 + 32LL))(
          v14,
          v42,
          v41,
          v37,
          &v35);
  v6 = v15;
  if ( v15 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v16, &MinInput_Warning_CheckResult, 0, 248, v15);
    v22 = v36;
    v36 = 0LL;
    goto LABEL_33;
  }
  if ( v35 != 1 )
  {
    if ( v35 != 2 )
    {
      v17 = v36;
LABEL_21:
      if ( v17 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 16LL))(v17);
      v10 = v34;
      goto LABEL_24;
    }
    if ( !v31 )
    {
      v31 = 1;
      v19 = 0;
      v20 = v48;
      do
      {
        v44 = 0;
        v45 = 0LL;
        *((_DWORD *)v20 - 2) = 0;
        v21 = *(_QWORD *)v20;
        *(_QWORD *)v20 = 0LL;
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        *(_QWORD *)v20 = v45;
        *((_DWORD *)v20 + 2) = DWORD2(v45);
        ++v19;
        v20 += 24;
      }
      while ( v19 < 5 );
      v9 = v32;
    }
    *(_DWORD *)v12 = 2;
    v17 = v36;
    v18 = v36;
LABEL_7:
    if ( v17 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 8LL))(v17);
      v17 = v36;
    }
    if ( *v11 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)*v11 + 16LL))(*v11);
      v17 = v36;
    }
    *v11 = v18;
    v32 = ++v9;
    v12 += 24;
    v11 += 3;
    v13 = v33;
    goto LABEL_21;
  }
  v17 = v36;
  v18 = v36;
  if ( v31 )
  {
    *(_DWORD *)v12 = 1;
    goto LABEL_7;
  }
  v7 = 1;
  v38 = 1;
  if ( v36 )
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v36 + 8LL))(v36);
    v17 = v36;
  }
  v8 = v18;
  v39 = v18;
  v36 = 0LL;
  if ( v17 )
  {
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 16LL))(v17);
LABEL_35:
    if ( v31 )
    {
      v33 = 0LL;
      v23 = BufferedInputTarget::Create(v37, (struct InputTargetingDecision *)v47, v9, &v33);
      v6 = v23;
      if ( v23 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v24, &MinInput_Warning_CheckResult, 0, 319, v23);
        v22 = v33;
LABEL_33:
        if ( v22 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v22 + 16LL))(v22);
        goto LABEL_57;
      }
      v7 = 1;
      v38 = 1;
      v25 = v33;
      if ( v33 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v33 + 8LL))(v33);
      if ( v8 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
      v8 = v25;
      v39 = v25;
      if ( v25 )
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v25 + 16LL))(v25);
    }
  }
  v26 = v43;
  *(_DWORD *)v43 = v7;
  if ( v8 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 8LL))(v8);
  v27 = *((_QWORD *)v26 + 1);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  *((_QWORD *)v26 + 1) = v8;
  if ( v8 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  v8 = 0LL;
  v39 = 0LL;
  v28 = v9;
  if ( v9 > 0 )
  {
    v29 = v48;
    do
    {
      if ( *v29 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v29 + 16LL))(*v29);
      *v29 = 0LL;
      v29 += 3;
      --v28;
    }
    while ( v28 );
  }
LABEL_57:
  `eh vector destructor iterator'(
    v47,
    0x18uLL,
    5uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::~BufferTarget);
  if ( v8 )
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  return v6;
}
