/*
 * XREFs of Command_WdfEvtTimerFunction @ 0x1C00185C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C000642C (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C0017F70 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0018E54 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0018F9C (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C00191FC (WPP_RECORDER_SF_qLd.c)
 *     WPP_RECORDER_SF_qdx @ 0x1C001963C (WPP_RECORDER_SF_qdx.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001ACD8 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001B890 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C001B9FC (Controller_SetControllerGone.c)
 *     Etw_CommandCompleteError @ 0x1C0030A9C (Etw_CommandCompleteError.c)
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
  __int64 v19; // rdx
  __int64 result; // rax
  __int64 *v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // r8d
  unsigned __int16 v27; // r9
  unsigned __int8 v28; // dl
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // rcx
  char v38; // dl
  __int64 v39; // rdx
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rcx
  int v43; // edx
  unsigned int v44; // edx
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int128 v50; // xmm0
  _DWORD *v51; // rax
  __int64 **v52; // rcx
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 **v55; // rdx
  __int64 **v56; // rcx
  __int64 *v57; // rax
  __int64 v58; // rdx
  __int64 **v59; // rdx
  signed __int32 v60[10]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v61; // [rsp+28h] [rbp-51h]
  __int64 v62; // [rsp+30h] [rbp-49h]
  __int64 v63; // [rsp+38h] [rbp-41h]
  __int64 v64; // [rsp+40h] [rbp-39h]
  __int64 *v65; // [rsp+48h] [rbp-31h] BYREF
  __int64 ***v66; // [rsp+50h] [rbp-29h]
  _QWORD *i; // [rsp+58h] [rbp-21h] BYREF
  _QWORD *v68; // [rsp+60h] [rbp-19h]
  __int128 v69; // [rsp+68h] [rbp-11h]
  __int128 v70; // [rsp+78h] [rbp-1h]
  __int128 v71; // [rsp+88h] [rbp+Fh]
  KIRQL NewIrql; // [rsp+F0h] [rbp+77h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2568))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C00451B0);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v2 + 8));
  v66 = (__int64 ***)&v65;
  v4 = 0;
  v65 = (__int64 *)&v65;
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
    goto LABEL_52;
  }
  v8 = (_QWORD *)*v7;
  v9 = *(__int64 **)(v2 + 40);
  v10 = *(_OWORD *)(*(_QWORD *)(v2 + 8) + 232LL) & 1;
  v69 = *(_OWORD *)(*(_QWORD *)(v2 + 8) + 232LL);
  if ( v10 )
  {
    v64 = *v9;
    v11 = v64;
  }
  else
  {
    v11 = *v9;
    v64 = *v9;
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
      v52 = (__int64 **)(v2 + 88);
      while ( *v52 != (__int64 *)v52 )
      {
        v53 = *v52;
        v54 = **v52;
        if ( (__int64 **)(*v52)[1] != v52 || *(__int64 **)(v54 + 8) != v53 )
          __fastfail(3u);
        *v52 = (__int64 *)v54;
        *(_QWORD *)(v54 + 8) = v52;
        v55 = (__int64 **)v66;
        if ( *v66 != &v65 )
          __fastfail(3u);
        v53[1] = (__int64)v66;
        *v53 = (__int64)&v65;
        *v55 = v53;
        v66 = (__int64 ***)v53;
      }
      v56 = (__int64 **)(v2 + 104);
      while ( *v56 != (__int64 *)v56 )
      {
        v57 = *v56;
        v58 = **v56;
        if ( (__int64 **)(*v56)[1] != v56 || *(__int64 **)(v58 + 8) != v57 )
          __fastfail(3u);
        *v56 = (__int64 *)v58;
        *(_QWORD *)(v58 + 8) = v56;
        v59 = (__int64 **)v66;
        if ( *v66 != &v65 )
          __fastfail(3u);
        v57[1] = (__int64)v66;
        *v57 = (__int64)&v65;
        *v59 = v57;
        v66 = (__int64 ***)v57;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 24),
      0LL);
    v15 = 0;
    goto LABEL_16;
  }
  if ( !*(_BYTE *)(v2 + 137) )
  {
    v43 = *((_DWORD *)v8 + 16) - 1;
    *((_DWORD *)v8 + 16) = v43;
    if ( v43 == 5 || !v43 )
    {
      if ( (v64 & 8) == 0 )
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
        *(_DWORD *)(v2 + 36) = 2;
        v15 = 1;
        if ( (*((_BYTE *)v8 + 70) & 1) != 0 )
          v4 = 1;
        goto LABEL_15;
      }
      WPP_RECORDER_SF_qLd(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
        v43,
        0,
        v6,
        v60[8],
        (char)v8,
        (unsigned __int16)*((_DWORD *)v8 + 9) >> 10,
        v43);
      v44 = *((_DWORD *)v8 + 9);
      if ( (v44 & 0xFC00) != 0x2C00 || (v44 & 0x200) != 0 )
      {
        v45 = *(_QWORD *)(v2 + 8);
        LODWORD(v63) = (unsigned __int16)v44 >> 10;
        v46 = (v44 >> 9) & 1;
        v47 = *(_QWORD *)(v45 + 64);
        LOBYTE(v62) = v46;
        LOBYTE(v46) = 2;
        WPP_RECORDER_SF_ddL(v47, v46, 6, 36, (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids, 5, v62, v63);
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(v2 + 8),
          0,
          0,
          0x4000,
          (__int64)"A command timed out, aborting command next",
          (__int64)(v8 + 3),
          0LL);
      }
      v48 = *(_QWORD *)(v2 + 8);
      v49 = v11 | 4;
      *(_BYTE *)(v2 + 137) = 1;
      *(_DWORD *)(v2 + 140) = 5;
      v50 = *(_OWORD *)(v48 + 232);
      v51 = *(_DWORD **)(v2 + 40);
      v71 = v50;
      if ( (v50 & 1) != 0 )
      {
        *v51 = v49;
        _InterlockedOr(v60, 0);
        v51[1] = HIDWORD(v49);
      }
      else
      {
        *(_QWORD *)v51 = v49;
      }
      _InterlockedOr(v60, 0);
    }
    goto LABEL_63;
  }
  if ( (*(_DWORD *)(v2 + 140))-- != 1 )
  {
LABEL_63:
    v13 = 0;
LABEL_64:
    v15 = 0;
    goto LABEL_16;
  }
  if ( (v64 & 8) != 0 )
  {
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
    *(_DWORD *)(v2 + 36) = 2;
    v4 = *((_BYTE *)v8 + 70) & 1;
LABEL_15:
    v13 = 0;
LABEL_16:
    v5 = NewIrql;
    goto LABEL_17;
  }
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
  v24 = *((_DWORD *)v8 + 16);
  if ( v24 )
  {
    if ( v24 == 5 )
    {
      v27 = 31;
      v28 = 2;
    }
    else
    {
      if ( v24 != 10 )
      {
        v25 = *(_QWORD *)(v2 + 8);
        LODWORD(v61) = *((_DWORD *)v8 + 16);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v25 + 64),
          2u,
          6u,
          0x21u,
          (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
          v61);
        goto LABEL_39;
      }
      v27 = 30;
      v28 = 4;
    }
    v29 = *(_QWORD *)(v2 + 8);
    LODWORD(v61) = *((_DWORD *)v8 + 16);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v29 + 64),
      v28,
      6u,
      v27,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      v61);
    v8 = 0LL;
  }
  else
  {
    v30 = *(_QWORD *)(v2 + 8);
    LODWORD(v61) = 0;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v30 + 64),
      2u,
      6u,
      0x20u,
      (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
      v61);
    v31 = *v8;
    v32 = (_QWORD *)v8[1];
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v32 != v8 )
      __fastfail(3u);
    *v32 = v31;
    *(_QWORD *)(v31 + 8) = v32;
    v33 = (unsigned int)++*(_DWORD *)(v2 + 72);
    v34 = *(_DWORD *)(v2 + 76);
    v35 = *(_QWORD *)(v2 + 120);
    if ( (_DWORD)v33 == *(_DWORD *)(v2 + 64) )
      v33 = 0LL;
    *(_DWORD *)(v2 + 72) = v33;
    v36 = (*(_QWORD *)(*(_QWORD *)(v2 + 120) + 24LL) + 16 * v33) ^ ((unsigned __int8)v34 ^ (unsigned __int8)*(_QWORD *)(v35 + 24)) & 1;
    v37 = *(_DWORD **)(v2 + 40);
    v38 = *(_OWORD *)(*(_QWORD *)(v2 + 8) + 232LL) & 1;
    v70 = *(_OWORD *)(*(_QWORD *)(v2 + 8) + 232LL);
    if ( v38 )
    {
      *v37 = v36;
      _InterlockedOr(v60, 0);
      v37[1] = HIDWORD(v36);
    }
    else
    {
      *(_QWORD *)v37 = v36;
    }
    _InterlockedOr(v60, 0);
  }
LABEL_39:
  if ( (_QWORD *)*v7 != v7 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(v2 + 16), 4u, 6u, 0x22u, (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids);
    **(_DWORD **)(v2 + 48) = 0;
    _InterlockedOr(v60, 0);
  }
  v39 = *(_QWORD *)(v2 + 104);
  if ( v39 != v2 + 104 )
  {
    i = *(_QWORD **)(v2 + 104);
    v68 = *(_QWORD **)(v2 + 112);
    *(_QWORD *)(v39 + 8) = &i;
    *v68 = &i;
    *(_QWORD *)(v2 + 112) = v2 + 104;
    *(_QWORD *)(v2 + 104) = v2 + 104;
    goto LABEL_44;
  }
  v40 = &i;
  v68 = &i;
  for ( i = &i; v40 != &i; v40 = i )
  {
    v41 = (_QWORD *)*v40;
    if ( (_QWORD **)v40[1] != &i || (_QWORD *)v41[1] != v40 )
      __fastfail(3u);
    i = (_QWORD *)*v40;
    v41[1] = &i;
    Command_InternalSendCommand(v2, (__int64)v40, v26);
LABEL_44:
    ;
  }
  if ( !v8 )
    goto LABEL_64;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 128), NewIrql);
  *((_BYTE *)v8 + 68) = 25;
  Etw_CommandCompleteError(v42, v2, v8, 2LL);
  ((void (__fastcall *)(_QWORD *, __int64))v8[6])(v8, 2LL);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 128));
LABEL_52:
  v15 = 0;
LABEL_17:
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 128), v5);
  result = 0LL;
  if ( !IsControllerAccessible )
  {
    if ( v13 == 1 )
    {
      LOBYTE(v19) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v2 + 8), v19);
    }
    while ( 1 )
    {
      v21 = v65;
      if ( v65 == (__int64 *)&v65 )
        break;
      v22 = (__int64 *)*v65;
      if ( (__int64 **)v65[1] != &v65 || (__int64 *)v22[1] != v65 )
        __fastfail(3u);
      v65 = (__int64 *)*v65;
      v22[1] = (__int64)&v65;
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
        v19,
        6,
        38,
        (__int64)&WPP_d70eb0a3d0963e3ced97f288f7a4c0c9_Traceguids,
        (char)v21,
        (unsigned __int8)HIBYTE(*((_WORD *)v21 + 18)) >> 2);
      Etw_CommandCompleteError(v23, v2, v21, 3LL);
      ((void (__fastcall *)(__int64 *, __int64))v21[6])(v21, 3LL);
    }
    result = 0LL;
  }
  if ( v15 == 1 )
    return Controller_ReportFatalError(*(_QWORD *)(v2 + 8), (unsigned int)(v4 != 1) + 1, 4105, 0, 0LL, 0LL);
  return result;
}
