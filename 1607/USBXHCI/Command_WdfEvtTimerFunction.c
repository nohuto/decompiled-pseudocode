/*
 * XREFs of Command_WdfEvtTimerFunction @ 0x1C001C2A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C0005C54 (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C001BC70 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C001CB34 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qL @ 0x1C001CC74 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C001CEC4 (WPP_RECORDER_SF_qLd.c)
 *     WPP_RECORDER_SF_qdx @ 0x1C001D2F4 (WPP_RECORDER_SF_qdx.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E910 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F48C (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C001F5F0 (Controller_SetControllerGone.c)
 *     Etw_CommandCompleteError @ 0x1C0033BFC (Etw_CommandCompleteError.c)
 */

__int64 __fastcall Command_WdfEvtTimerFunction(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  char IsControllerAccessible; // r13
  char v4; // r15
  KIRQL v5; // al
  int v6; // r9d
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 *v9; // rdx
  char v10; // cl
  __int64 v11; // rbx
  int v12; // eax
  char v13; // bl
  char v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdx
  PWDF_DRIVER_GLOBALS v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // r8d
  unsigned __int16 v22; // r9
  unsigned __int8 v23; // dl
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rax
  _DWORD *v32; // rcx
  char v33; // dl
  __int64 v34; // rdx
  _QWORD *v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  int v38; // edx
  unsigned int v39; // edx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int128 v46; // xmm0
  _DWORD *v47; // rax
  __int64 v48; // rdx
  __int64 result; // rax
  __int64 *v50; // rbx
  __int64 *v51; // rax
  __int64 v52; // rcx
  __int64 **v53; // rcx
  __int64 *v54; // rax
  __int64 v55; // rdx
  __int64 **v56; // rdx
  __int64 **v57; // rcx
  __int64 *v58; // rax
  __int64 v59; // rdx
  __int64 **v60; // rdx
  signed __int32 v61[10]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v62; // [rsp+28h] [rbp-51h]
  __int64 v63; // [rsp+30h] [rbp-49h]
  __int64 v64; // [rsp+38h] [rbp-41h]
  __int64 v65; // [rsp+40h] [rbp-39h]
  __int64 *v66; // [rsp+48h] [rbp-31h] BYREF
  __int64 ***v67; // [rsp+50h] [rbp-29h]
  _QWORD *i; // [rsp+58h] [rbp-21h] BYREF
  _QWORD *v69; // [rsp+60h] [rbp-19h]
  __int128 v70; // [rsp+68h] [rbp-11h]
  __int128 v71; // [rsp+78h] [rbp-1h]
  __int128 v72; // [rsp+88h] [rbp+Fh]
  KIRQL NewIrql; // [rsp+F0h] [rbp+77h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2568))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C00431B0);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v2 + 8));
  v67 = (__int64 ***)&v66;
  v4 = 0;
  v66 = (__int64 *)&v66;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 128));
  NewIrql = v5;
  if ( !IsControllerAccessible )
  {
    v13 = 0;
    goto LABEL_69;
  }
  if ( *(_DWORD *)(v2 + 36) != 1 || (v7 = (_QWORD *)(v2 + 88), (_QWORD *)*v7 == v7) )
  {
    v13 = 0;
    goto LABEL_44;
  }
  v8 = (_QWORD *)*v7;
  v9 = *(__int64 **)(v2 + 40);
  v10 = *(_OWORD *)(*(_QWORD *)(v2 + 8) + 232LL) & 1;
  v70 = *(_OWORD *)(*(_QWORD *)(v2 + 8) + 232LL);
  if ( v10 )
  {
    v65 = *v9;
    v11 = v65;
  }
  else
  {
    v11 = *v9;
    v65 = *v9;
  }
  v12 = *((_DWORD *)v8 + 16);
  if ( v12 > 0 )
    WPP_RECORDER_SF_qdx(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
      (_DWORD)v9,
      6,
      27,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      (char)v8,
      v12,
      v11);
  if ( v11 == -1 )
  {
    IsControllerAccessible = 0;
    v13 = 1;
LABEL_69:
    if ( *(_BYTE *)(v2 + 144) )
    {
      v53 = (__int64 **)(v2 + 88);
      while ( *v53 != (__int64 *)v53 )
      {
        v54 = *v53;
        v55 = **v53;
        if ( (__int64 **)(*v53)[1] != v53 || *(__int64 **)(v55 + 8) != v54 )
          __fastfail(3u);
        *v53 = (__int64 *)v55;
        *(_QWORD *)(v55 + 8) = v53;
        v56 = (__int64 **)v67;
        if ( *v67 != &v66 )
          __fastfail(3u);
        v54[1] = (__int64)v67;
        *v54 = (__int64)&v66;
        *v56 = v54;
        v67 = (__int64 ***)v54;
      }
      v57 = (__int64 **)(v2 + 104);
      while ( *v57 != (__int64 *)v57 )
      {
        v58 = *v57;
        v59 = **v57;
        if ( (__int64 **)(*v57)[1] != v57 || *(__int64 **)(v59 + 8) != v58 )
          __fastfail(3u);
        *v57 = (__int64 *)v59;
        *(_QWORD *)(v59 + 8) = v57;
        v60 = (__int64 **)v67;
        if ( *v67 != &v66 )
          __fastfail(3u);
        v58[1] = (__int64)v67;
        *v58 = (__int64)&v66;
        *v60 = v58;
        v67 = (__int64 ***)v58;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 24),
      0LL);
    v15 = 0;
    goto LABEL_57;
  }
  if ( !*(_BYTE *)(v2 + 137) )
  {
    v38 = *((_DWORD *)v8 + 16) - 1;
    *((_DWORD *)v8 + 16) = v38;
    if ( v38 == 5 || !v38 )
    {
      if ( (v65 & 8) == 0 )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
          2u,
          6u,
          0x25u,
          (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(v2 + 24),
          0LL);
        v13 = 0;
        v15 = 1;
        *(_DWORD *)(v2 + 36) = 2;
        if ( (*((_BYTE *)v8 + 70) & 1) != 0 )
          v4 = 1;
        goto LABEL_57;
      }
      WPP_RECORDER_SF_qLd(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
        v38,
        0,
        v6,
        v61[8],
        (char)v8,
        (unsigned __int16)*((_DWORD *)v8 + 9) >> 10,
        v38);
      v39 = *((_DWORD *)v8 + 9);
      v40 = (unsigned __int8)HIBYTE(*((_WORD *)v8 + 18)) >> 2;
      if ( v40 != 11 || (v39 & 0x200) != 0 )
      {
        v41 = *(_QWORD *)(v2 + 8);
        LODWORD(v64) = (unsigned __int8)HIBYTE(*((_WORD *)v8 + 18)) >> 2;
        v42 = (v39 >> 9) & 1;
        v43 = *(_QWORD *)(v41 + 64);
        LOBYTE(v63) = v42;
        LOBYTE(v42) = 2;
        WPP_RECORDER_SF_ddL(v43, v42, 6, 36, (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids, 5, v63, v40);
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(v2 + 8),
          0,
          0,
          0x4000,
          (__int64)"A command timed out, aborting command next",
          (__int64)(v8 + 3),
          0LL);
      }
      v44 = *(_QWORD *)(v2 + 8);
      v45 = v11 | 4;
      *(_BYTE *)(v2 + 137) = 1;
      *(_DWORD *)(v2 + 140) = 5;
      v46 = *(_OWORD *)(v44 + 232);
      v47 = *(_DWORD **)(v2 + 40);
      v72 = v46;
      if ( (v46 & 1) != 0 )
      {
        *v47 = v45;
        _InterlockedOr(v61, 0);
        v47[1] = HIDWORD(v45);
      }
      else
      {
        *(_QWORD *)v47 = v45;
      }
      _InterlockedOr(v61, 0);
    }
    goto LABEL_55;
  }
  if ( (*(_DWORD *)(v2 + 140))-- != 1 )
  {
LABEL_55:
    v13 = 0;
    goto LABEL_56;
  }
  if ( (v65 & 8) == 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
      2u,
      6u,
      0x1Du,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
    v13 = 0;
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v2 + 8),
      0,
      0,
      0x2000,
      (__int64)"Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
      *(_QWORD *)(v2 + 80) + 16LL * *(unsigned int *)(v2 + 72),
      0LL);
    *(_BYTE *)(v2 + 137) = 0;
    v19 = *((_DWORD *)v8 + 16);
    if ( v19 )
    {
      if ( v19 == 5 )
      {
        v22 = 31;
        v23 = 2;
      }
      else
      {
        if ( v19 != 10 )
        {
          v20 = *(_QWORD *)(v2 + 8);
          LODWORD(v62) = *((_DWORD *)v8 + 16);
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v20 + 64),
            2u,
            6u,
            0x21u,
            (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
            v62);
          goto LABEL_31;
        }
        v22 = 30;
        v23 = 4;
      }
      v24 = *(_QWORD *)(v2 + 8);
      LODWORD(v62) = *((_DWORD *)v8 + 16);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v24 + 64),
        v23,
        6u,
        v22,
        (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
        v62);
      v8 = 0LL;
    }
    else
    {
      v25 = *(_QWORD *)(v2 + 8);
      LODWORD(v62) = 0;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v25 + 64),
        2u,
        6u,
        0x20u,
        (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
        v62);
      v26 = *v8;
      v27 = (_QWORD *)v8[1];
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v27 != v8 )
        __fastfail(3u);
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v28 = (unsigned int)++*(_DWORD *)(v2 + 72);
      v29 = *(_DWORD *)(v2 + 76);
      v30 = *(_QWORD *)(v2 + 120);
      if ( (_DWORD)v28 == *(_DWORD *)(v2 + 64) )
        v28 = 0LL;
      *(_DWORD *)(v2 + 72) = v28;
      v31 = (*(_QWORD *)(*(_QWORD *)(v2 + 120) + 24LL) + 16 * v28) ^ ((unsigned __int8)v29 ^ (unsigned __int8)*(_QWORD *)(v30 + 24)) & 1;
      v32 = *(_DWORD **)(v2 + 40);
      v33 = *(_OWORD *)(*(_QWORD *)(v2 + 8) + 232LL) & 1;
      v71 = *(_OWORD *)(*(_QWORD *)(v2 + 8) + 232LL);
      if ( v33 )
      {
        *v32 = v31;
        _InterlockedOr(v61, 0);
        v32[1] = HIDWORD(v31);
      }
      else
      {
        *(_QWORD *)v32 = v31;
      }
      _InterlockedOr(v61, 0);
    }
LABEL_31:
    if ( (_QWORD *)*v7 != v7 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(v2 + 16), 4u, 6u, 0x22u, (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
      **(_DWORD **)(v2 + 48) = 0;
      _InterlockedOr(v61, 0);
    }
    v34 = *(_QWORD *)(v2 + 104);
    if ( v34 != v2 + 104 )
    {
      i = *(_QWORD **)(v2 + 104);
      v69 = *(_QWORD **)(v2 + 112);
      *(_QWORD *)(v34 + 8) = &i;
      *v69 = &i;
      *(_QWORD *)(v2 + 112) = v2 + 104;
      *(_QWORD *)(v2 + 104) = v2 + 104;
      goto LABEL_36;
    }
    v35 = &i;
    v69 = &i;
    for ( i = &i; v35 != &i; v35 = i )
    {
      v36 = (_QWORD *)*v35;
      if ( (_QWORD **)v35[1] != &i || (_QWORD *)v36[1] != v35 )
        __fastfail(3u);
      i = (_QWORD *)*v35;
      v36[1] = &i;
      Command_InternalSendCommand(v2, (__int64)v35, v21);
LABEL_36:
      ;
    }
    if ( v8 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 128), NewIrql);
      *((_BYTE *)v8 + 68) = 25;
      Etw_CommandCompleteError(v37, v2, v8, 2LL);
      ((void (__fastcall *)(_QWORD *, __int64))v8[6])(v8, 2LL);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 128));
LABEL_44:
      v15 = 0;
      goto LABEL_58;
    }
LABEL_56:
    v15 = 0;
LABEL_57:
    v5 = NewIrql;
    goto LABEL_58;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
    2u,
    6u,
    0x1Cu,
    (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
  v15 = 1;
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD *)(v2 + 8),
    0,
    0,
    4096,
    (__int64)"Command abort timed out, command ring still running, resetting the controller",
    *(_QWORD *)(v2 + 80) + 16LL * *(unsigned int *)(v2 + 72),
    0LL);
  v16 = WdfFunctions_01015;
  v17 = *(_QWORD *)(v2 + 24);
  v18 = WdfDriverGlobals;
  *(_BYTE *)(v2 + 137) = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v16 + 2560))(v18, v17, 0LL);
  v13 = 0;
  *(_DWORD *)(v2 + 36) = 2;
  v5 = NewIrql;
  if ( (*((_BYTE *)v8 + 70) & 1) != 0 )
    v4 = 1;
LABEL_58:
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 128), v5);
  result = 0LL;
  if ( !IsControllerAccessible )
  {
    if ( v13 == 1 )
    {
      LOBYTE(v48) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v2 + 8), v48);
    }
    while ( 1 )
    {
      v50 = v66;
      if ( v66 == (__int64 *)&v66 )
        break;
      v51 = (__int64 *)*v66;
      if ( (__int64 **)v66[1] != &v66 || (__int64 *)v51[1] != v66 )
        __fastfail(3u);
      v66 = (__int64 *)*v66;
      v51[1] = (__int64)&v66;
      LOBYTE(v48) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
        v48,
        6,
        38,
        (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
        (char)v50,
        (unsigned __int8)HIBYTE(*((_WORD *)v50 + 18)) >> 2);
      Etw_CommandCompleteError(v52, v2, v50, 3LL);
      ((void (__fastcall *)(__int64 *, __int64))v50[6])(v50, 3LL);
    }
    result = 0LL;
  }
  if ( v15 == 1 )
    return Controller_ReportFatalError(*(_QWORD *)(v2 + 8), (unsigned int)(v4 != 1) + 1, 4105, 0, 0LL, 0LL);
  return result;
}
