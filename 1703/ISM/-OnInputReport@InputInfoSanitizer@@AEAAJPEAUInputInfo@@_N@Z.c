/*
 * XREFs of ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x18007E4D8
 * Callers:
 *     ?OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800737D0 (-OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z @ 0x180073FC0 (-OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074630 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x18007E4D8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z @ 0x1800092F0 (-GetPointerAtIndex@@YAJPEAUInputInfo@@KPEAPEAUPointer@@@Z.c)
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x18007E4D8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 *     ?SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z @ 0x18007EA94 (-SanitizePointerInput@InputInfoSanitizer@@AEAAJPEAUInputInfo@@PEAUPreviousState@1@@Z.c)
 *     ?GetValueForKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KPEAUPreviousState@InputInfoSanitizer@@@Z @ 0x18007F0AC (-GetValueForKey@-$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KPEAUPreviou.c)
 *     ?SetValueForKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviousState@InputInfoSanitizer@@@Z @ 0x18007F1D8 (-SetValueForKey@-$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviou.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputInfoSanitizer::OnInputReport(InputInfoSanitizer *this, struct InputInfo *a2, char a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  bool v7; // zf
  int v8; // edx
  __int64 v9; // r9
  unsigned int v10; // r8d
  int v11; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  struct InputInfo *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // ebx
  unsigned int v35; // eax
  int PointerAtIndex; // eax
  struct Pointer *v37; // rax
  InputInfoSanitizer *v38; // r9
  int v39; // eax
  int v40; // r9d
  unsigned int v41; // edx
  __int64 v42; // r10
  __int64 v43; // rcx
  int v44; // r9d
  unsigned int v46; // edx
  __int64 v47; // r8
  __int64 v48; // r10
  __int64 v49; // rcx
  __int64 v50; // rax
  char v52; // [rsp+31h] [rbp-9A7h]
  bool v53; // [rsp+32h] [rbp-9A6h]
  unsigned int v54; // [rsp+34h] [rbp-9A4h]
  int v55; // [rsp+34h] [rbp-9A4h]
  struct Pointer *v56; // [rsp+38h] [rbp-9A0h] BYREF
  InputInfoSanitizer *v57; // [rsp+40h] [rbp-998h]
  _BYTE v58[520]; // [rsp+50h] [rbp-988h] BYREF
  int v59; // [rsp+258h] [rbp-780h]
  int v60; // [rsp+25Ch] [rbp-77Ch]
  _BYTE v61[48]; // [rsp+260h] [rbp-778h] BYREF
  int v62; // [rsp+290h] [rbp-748h]
  int v63; // [rsp+478h] [rbp-560h]

  v59 = -1;
  v57 = this;
  memset(v58, 0, sizeof(v58));
  v5 = (__int64)v58;
  v6 = 10LL;
  do
  {
    *(_DWORD *)v5 = v59;
    v5 += 52LL;
    --v6;
  }
  while ( v6 );
  v7 = (*(_BYTE *)a2 & 0x3B) == 0;
  v8 = 0;
  v60 = 0;
  v52 = 0;
  if ( !v7 )
  {
    v9 = *((_QWORD *)a2 + 69);
    v56 = (InputInfoSanitizer *)((char *)this + 32);
    if ( v9 == *((_QWORD *)this + 6) )
      goto LABEL_10;
    v10 = 0;
    if ( !*((_DWORD *)this + 10) )
      goto LABEL_10;
    while ( 1 )
    {
      v5 = 536LL * v10;
      if ( *(_QWORD *)(v5 + *((_QWORD *)this + 4)) == v9 )
        break;
      if ( ++v10 >= *((_DWORD *)this + 10) )
        goto LABEL_10;
    }
    DynamicSizeMap<unsigned __int64,InputInfoSanitizer::PreviousState,1>::GetValueForKey(
      (char *)this + 32,
      (char *)a2 + 552,
      v58);
    v8 = v60;
    if ( !v60 )
    {
LABEL_10:
      if ( !*((_DWORD *)a2 + 134) )
        goto LABEL_18;
    }
    v11 = 0;
    if ( v8 )
    {
      v12 = v8 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( !v13 )
        {
          if ( (*((_DWORD *)a2 + 134) & 0xFFFFFFFD) == 0 )
          {
            v16 = 14LL;
            v17 = v61;
            v18 = a2;
            do
            {
              v19 = *((_OWORD *)v18 + 1);
              *v17 = *(_OWORD *)v18;
              v20 = *((_OWORD *)v18 + 2);
              v17[1] = v19;
              v21 = *((_OWORD *)v18 + 3);
              v17[2] = v20;
              v22 = *((_OWORD *)v18 + 4);
              v17[3] = v21;
              v23 = *((_OWORD *)v18 + 5);
              v17[4] = v22;
              v24 = *((_OWORD *)v18 + 6);
              v17[5] = v23;
              v25 = *((_OWORD *)v18 + 7);
              v18 = (struct InputInfo *)((char *)v18 + 128);
              v17[6] = v24;
              v17 += 8;
              *(v17 - 1) = v25;
              --v16;
            }
            while ( v16 );
            v26 = *((_OWORD *)v18 + 1);
            *v17 = *(_OWORD *)v18;
            v27 = *((_OWORD *)v18 + 2);
            v17[1] = v26;
            v28 = *((_OWORD *)v18 + 3);
            v17[2] = v27;
            v29 = *((_OWORD *)v18 + 4);
            v17[3] = v28;
            v30 = *((_OWORD *)v18 + 5);
            v17[4] = v29;
            v17[5] = v30;
            v63 = 4;
            v62 = 0;
            InputInfoSanitizer::OnInputReport(v57, (struct InputInfo *)v61, 0);
            if ( *((_DWORD *)a2 + 134) == 2 )
              *((_DWORD *)a2 + 12) = 0;
          }
          goto LABEL_18;
        }
        if ( v13 != 2 )
        {
          v11 = -2147418113;
          goto LABEL_32;
        }
        if ( ((*((_DWORD *)a2 + 134) - 2) & 0xFFFFFFFD) != 0 )
          goto LABEL_18;
      }
      else
      {
        v31 = *((_DWORD *)a2 + 134);
        if ( v31 != 4 )
        {
          if ( v31 == 1 )
            *((_DWORD *)a2 + 134) = 0;
          goto LABEL_18;
        }
        *((_DWORD *)a2 + 134) = 0;
      }
      *((_DWORD *)a2 + 12) = 0;
      goto LABEL_18;
    }
    if ( *((_DWORD *)a2 + 134) == 4 )
    {
      *((_DWORD *)a2 + 134) = 0;
      *((_DWORD *)a2 + 12) = 0;
    }
LABEL_32:
    if ( v11 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 56, v11);
      goto LABEL_71;
    }
LABEL_18:
    v14 = InputInfoSanitizer::SanitizePointerInput(
            (InputInfoSanitizer *)v5,
            a2,
            (struct InputInfoSanitizer::PreviousState *)v58);
    if ( v14 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 59, v14);
      goto LABEL_71;
    }
    v53 = *((_DWORD *)a2 + 12) != 0;
    v60 = *((_DWORD *)a2 + 134);
    v32 = DynamicSizeMap<unsigned __int64,InputInfoSanitizer::PreviousState,1>::SetValueForKey(
            v56,
            (char *)a2 + 552,
            v58);
    v34 = v32;
    if ( v32 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v33, &MinInput_Warning_CheckResult, 0, 70, v32);
LABEL_71:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    if ( a3 )
    {
      v56 = 0LL;
      if ( !*((_DWORD *)a2 + 134) )
      {
        v35 = 0;
        v54 = 0;
        if ( !*((_DWORD *)a2 + 12) )
        {
LABEL_50:
          v37 = (struct Pointer *)*((_QWORD *)a2 + 69);
          v52 = 1;
LABEL_52:
          v38 = v57;
          v56 = v37;
          if ( !v53 && !*((_BYTE *)v57 + 25) )
            goto LABEL_61;
          goto LABEL_56;
        }
        while ( 1 )
        {
          PointerAtIndex = GetPointerAtIndex(a2, v35, &v56);
          if ( PointerAtIndex < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              Template_qqq(v33, &MinInput_Warning_CheckResult, 0, 426, PointerAtIndex);
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          if ( (*((_BYTE *)v56 + 4) & 3) != 0 )
            break;
          v35 = v54 + 1;
          v54 = v35;
          if ( v35 >= *((_DWORD *)a2 + 12) )
            goto LABEL_50;
        }
      }
    }
    v37 = v56;
    goto LABEL_52;
  }
  v38 = this;
LABEL_56:
  v39 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)v38 + 2) + 24LL))(
          *((_QWORD *)v38 + 2),
          a2);
  v34 = v39;
  if ( v39 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v40 = 92;
      goto LABEL_59;
    }
    return v34;
  }
  v38 = v57;
LABEL_61:
  if ( !a3 || !v52 )
    return v34;
  v41 = 0;
  if ( !*((_DWORD *)v38 + 10) )
  {
LABEL_67:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_71;
    Template_qqq(v33, &MinInput_Warning_CheckResult, 0, 220, 5);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_71;
    v44 = 104;
    goto LABEL_70;
  }
  v42 = *((_QWORD *)v38 + 4);
  while ( 1 )
  {
    v33 = 536LL * v41;
    if ( *(struct Pointer **)(v33 + v42) == v56 )
      break;
    if ( ++v41 >= *((_DWORD *)v38 + 10) )
      goto LABEL_67;
  }
  v33 = 536LL * v41;
  *(_QWORD *)(v33 + v42) = *((_QWORD *)v38 + 6);
  v55 = --*((_DWORD *)v38 + 11);
  v34 = 0;
  if ( !v55 )
    return v34;
  while ( 1 )
  {
    v46 = 0;
    if ( !*((_DWORD *)v38 + 10) )
    {
LABEL_80:
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_71;
      Template_qqq(v33, &MinInput_Warning_CheckResult, 0, 283, 5);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_71;
      v44 = 109;
LABEL_70:
      Template_qqq(v43, &MinInput_Warning_CheckResult, 0, v44, 5);
      goto LABEL_71;
    }
    v47 = *((_QWORD *)v38 + 4);
    v48 = *((_QWORD *)v38 + 6);
    while ( 1 )
    {
      v33 = 536LL * v46;
      if ( *(_QWORD *)(v33 + v47) != v48 )
        break;
      if ( ++v46 >= *((_DWORD *)v38 + 10) )
        goto LABEL_80;
    }
    v49 = 536LL * v46;
    v50 = *(_QWORD *)(v49 + v47);
    *(_QWORD *)(v49 + v47) = v48;
    --*((_DWORD *)v38 + 11);
    *((_QWORD *)a2 + 69) = v50;
    *((_DWORD *)a2 + 12) = 0;
    v39 = InputInfoSanitizer::OnInputReport(v38, a2, 0);
    v34 = v39;
    if ( v39 < 0 )
      break;
    if ( !--v55 )
      return v34;
    v38 = v57;
  }
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v40 = 112;
LABEL_59:
    Template_qqq(v33, &MinInput_Warning_CheckResult, 0, v40, v39);
  }
  return v34;
}
