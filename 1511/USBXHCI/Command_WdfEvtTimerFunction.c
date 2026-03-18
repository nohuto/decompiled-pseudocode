/*
 * XREFs of Command_WdfEvtTimerFunction @ 0x1C001BE40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C00073DC (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C001B808 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C001C6D0 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qL @ 0x1C001C810 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C001CA60 (WPP_RECORDER_SF_qLd.c)
 *     WPP_RECORDER_SF_qdx @ 0x1C001CE90 (WPP_RECORDER_SF_qdx.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C001E4B0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001F02C (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C001F190 (Controller_SetControllerGone.c)
 *     Etw_CommandCompleteError @ 0x1C003351C (Etw_CommandCompleteError.c)
 */

__int64 __fastcall Command_WdfEvtTimerFunction(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  char IsControllerAccessible; // r12
  char v4; // r13
  char v5; // r15
  KIRQL v6; // al
  int v7; // r9d
  _QWORD *v8; // r14
  _QWORD *v9; // rsi
  __int64 *v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  __int64 **v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 **v16; // rdx
  char v18; // r14
  __int64 v19; // rax
  __int64 v20; // rdx
  PWDF_DRIVER_GLOBALS v21; // rcx
  KSPIN_LOCK *v22; // rbx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r8d
  unsigned __int16 v26; // r9
  unsigned __int8 v27; // dl
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  int v41; // edx
  unsigned int v42; // edx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rbx
  char v49; // cl
  _DWORD *v50; // rax
  __int64 v51; // rdx
  __int64 result; // rax
  __int64 *v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rcx
  __int64 **v56; // rcx
  __int64 *v57; // rax
  __int64 v58; // rdx
  __int64 **v59; // rdx
  signed __int32 v60[10]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+28h] [rbp-38h]
  __int64 v62; // [rsp+30h] [rbp-30h]
  __int64 v63; // [rsp+38h] [rbp-28h]
  __int64 *v64; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v65; // [rsp+48h] [rbp-18h]
  _QWORD *i; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v67; // [rsp+58h] [rbp-8h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+48h]
  __int64 v69; // [rsp+B8h] [rbp+58h]

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2568))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C00410C0);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v2 + 8));
  v65 = &v64;
  v4 = 0;
  v5 = 0;
  v64 = (__int64 *)&v64;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 128));
  NewIrql = v6;
  if ( !IsControllerAccessible )
    goto LABEL_11;
  if ( *(_DWORD *)(v2 + 36) != 1 || (v8 = (_QWORD *)(v2 + 88), (_QWORD *)*v8 == v8) )
  {
    v22 = (KSPIN_LOCK *)(v2 + 128);
    v18 = 0;
    goto LABEL_64;
  }
  v9 = (_QWORD *)*v8;
  v10 = *(__int64 **)(v2 + 40);
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 8) + 232LL) & 1) != 0 )
  {
    v69 = *v10;
    v11 = *v10;
  }
  else
  {
    v11 = *v10;
    v69 = *v10;
  }
  v12 = *((_DWORD *)v9 + 16);
  if ( v12 > 0 )
    WPP_RECORDER_SF_qdx(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
      (_DWORD)v10,
      6,
      27,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      (char)v9,
      v12,
      v11);
  if ( v11 == -1 )
  {
    IsControllerAccessible = 0;
    v4 = 1;
LABEL_11:
    if ( *(_BYTE *)(v2 + 144) )
    {
      v13 = (__int64 **)(v2 + 88);
      while ( *v13 != (__int64 *)v13 )
      {
        v14 = *v13;
        v15 = **v13;
        if ( (__int64 **)(*v13)[1] != v13 || *(__int64 **)(v15 + 8) != v14 )
          __fastfail(3u);
        *v13 = (__int64 *)v15;
        *(_QWORD *)(v15 + 8) = v13;
        v16 = v65;
        *v14 = (__int64)&v64;
        v14[1] = (__int64)v16;
        if ( *v16 != (__int64 *)&v64 )
          __fastfail(3u);
        *v16 = v14;
        v65 = (__int64 **)v14;
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
        v59 = v65;
        *v57 = (__int64)&v64;
        v57[1] = (__int64)v59;
        if ( *v59 != (__int64 *)&v64 )
          __fastfail(3u);
        *v59 = v57;
        v65 = (__int64 **)v57;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
      WdfDriverGlobals,
      *(_QWORD *)(v2 + 24),
      0LL);
    goto LABEL_61;
  }
  if ( !*(_BYTE *)(v2 + 137) )
  {
    v41 = *((_DWORD *)v9 + 16) - 1;
    *((_DWORD *)v9 + 16) = v41;
    if ( v41 == 5 || !v41 )
    {
      if ( (v69 & 8) == 0 )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
          2u,
          6u,
          0x25u,
          (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(v2 + 24),
          0LL);
        *(_DWORD *)(v2 + 36) = 2;
        v18 = 1;
        if ( (*((_BYTE *)v9 + 70) & 1) != 0 )
          v5 = 1;
        goto LABEL_62;
      }
      WPP_RECORDER_SF_qLd(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
        v41,
        0,
        v7,
        v60[8],
        (char)v9,
        (unsigned __int16)*((_DWORD *)v9 + 9) >> 10,
        v41);
      v42 = *((_DWORD *)v9 + 9);
      v43 = (unsigned __int8)HIBYTE(*((_WORD *)v9 + 18)) >> 2;
      if ( v43 != 11 || (v42 & 0x200) != 0 )
      {
        v44 = *(_QWORD *)(v2 + 8);
        LODWORD(v63) = (unsigned __int8)HIBYTE(*((_WORD *)v9 + 18)) >> 2;
        v45 = (v42 >> 9) & 1;
        v46 = *(_QWORD *)(v44 + 64);
        LOBYTE(v62) = v45;
        LOBYTE(v45) = 2;
        WPP_RECORDER_SF_ddL(v46, v45, 6, 36, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids, 5, v62, v43);
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(v2 + 8),
          0,
          0,
          0x4000,
          (__int64)"A command timed out, aborting command next",
          (__int64)(v9 + 3),
          0LL);
      }
      v47 = *(_QWORD *)(v2 + 8);
      v48 = v11 | 4;
      *(_BYTE *)(v2 + 137) = 1;
      *(_DWORD *)(v2 + 140) = 5;
      v49 = *(_QWORD *)(v47 + 232);
      v50 = *(_DWORD **)(v2 + 40);
      if ( (v49 & 1) != 0 )
      {
        *v50 = v48;
        _InterlockedOr(v60, 0);
        v50[1] = HIDWORD(v48);
      }
      else
      {
        *(_QWORD *)v50 = v48;
      }
      _InterlockedOr(v60, 0);
    }
LABEL_61:
    v18 = 0;
LABEL_62:
    v22 = (KSPIN_LOCK *)(v2 + 128);
LABEL_63:
    v6 = NewIrql;
    goto LABEL_64;
  }
  if ( (*(_DWORD *)(v2 + 140))-- != 1 )
    goto LABEL_61;
  if ( (v69 & 8) == 0 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
      2u,
      6u,
      0x1Du,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)(v2 + 8),
      0,
      0,
      0x2000,
      (__int64)"Command abort timed out; stopped event not received, but command ring is stopped; Assuming abort finished.",
      *(_QWORD *)(v2 + 80) + 16LL * *(unsigned int *)(v2 + 72),
      0LL);
    *(_BYTE *)(v2 + 137) = 0;
    v23 = *((_DWORD *)v9 + 16);
    switch ( v23 )
    {
      case 0:
        v29 = *(_QWORD *)(v2 + 8);
        LODWORD(v61) = 0;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v29 + 64),
          2u,
          6u,
          0x20u,
          (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
          v61);
        v30 = *v9;
        v31 = (_QWORD *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v31 != v9 )
          __fastfail(3u);
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        v32 = (unsigned int)++*(_DWORD *)(v2 + 72);
        v33 = *(_DWORD *)(v2 + 76);
        v34 = *(_QWORD *)(v2 + 120);
        if ( (_DWORD)v32 == *(_DWORD *)(v2 + 64) )
          v32 = 0LL;
        *(_DWORD *)(v2 + 72) = v32;
        v35 = (*(_QWORD *)(*(_QWORD *)(v2 + 120) + 24LL) + 16 * v32) ^ ((unsigned __int8)v33 ^ (unsigned __int8)*(_QWORD *)(v34 + 24)) & 1;
        v36 = *(_DWORD **)(v2 + 40);
        if ( (*(_BYTE *)(*(_QWORD *)(v2 + 8) + 232LL) & 1) != 0 )
        {
          *v36 = v35;
          _InterlockedOr(v60, 0);
          v36[1] = HIDWORD(v35);
        }
        else
        {
          *(_QWORD *)v36 = v35;
        }
        _InterlockedOr(v60, 0);
        goto LABEL_38;
      case 5:
        v26 = 31;
        v27 = 2;
        break;
      case 10:
        v26 = 30;
        v27 = 4;
        break;
      default:
        v24 = *(_QWORD *)(v2 + 8);
        LODWORD(v61) = *((_DWORD *)v9 + 16);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v24 + 64),
          2u,
          6u,
          0x21u,
          (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
          v61);
LABEL_38:
        if ( (_QWORD *)*v8 != v8 )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(v2 + 16),
            4u,
            6u,
            0x22u,
            (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
          **(_DWORD **)(v2 + 48) = 0;
          _InterlockedOr(v60, 0);
        }
        v37 = *(_QWORD *)(v2 + 104);
        if ( v37 != v2 + 104 )
        {
          i = *(_QWORD **)(v2 + 104);
          v67 = *(_QWORD **)(v2 + 112);
          *(_QWORD *)(v37 + 8) = &i;
          *v67 = &i;
          *(_QWORD *)(v2 + 112) = v2 + 104;
          *(_QWORD *)(v2 + 104) = v2 + 104;
          goto LABEL_43;
        }
        v38 = &i;
        v67 = &i;
        for ( i = &i; v38 != &i; v38 = i )
        {
          v39 = (_QWORD *)*v38;
          if ( (_QWORD **)v38[1] != &i || (_QWORD *)v39[1] != v38 )
            __fastfail(3u);
          i = (_QWORD *)*v38;
          v39[1] = &i;
          Command_InternalSendCommand(v2, (__int64)v38, v25);
LABEL_43:
          ;
        }
        v22 = (KSPIN_LOCK *)(v2 + 128);
        if ( v9 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 128), NewIrql);
          *((_BYTE *)v9 + 68) = 25;
          Etw_CommandCompleteError(v40, v2, v9, 2LL);
          ((void (__fastcall *)(_QWORD *, __int64))v9[6])(v9, 2LL);
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 128));
          v18 = 0;
          goto LABEL_64;
        }
        v18 = 0;
        goto LABEL_63;
    }
    v28 = *(_QWORD *)(v2 + 8);
    LODWORD(v61) = *((_DWORD *)v9 + 16);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v28 + 64),
      v27,
      6u,
      v26,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      v61);
    v9 = 0LL;
    goto LABEL_38;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
    2u,
    6u,
    0x1Cu,
    (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
  v18 = 1;
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD *)(v2 + 8),
    0,
    0,
    4096,
    (__int64)"Command abort timed out, command ring still running, resetting the controller",
    *(_QWORD *)(v2 + 80) + 16LL * *(unsigned int *)(v2 + 72),
    0LL);
  v19 = WdfFunctions_01015;
  v20 = *(_QWORD *)(v2 + 24);
  v21 = WdfDriverGlobals;
  *(_BYTE *)(v2 + 137) = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v19 + 2560))(v21, v20, 0LL);
  *(_DWORD *)(v2 + 36) = 2;
  v22 = (KSPIN_LOCK *)(v2 + 128);
  v6 = NewIrql;
  if ( (*((_BYTE *)v9 + 70) & 1) != 0 )
    v5 = 1;
LABEL_64:
  KeReleaseSpinLock(v22, v6);
  result = 0LL;
  if ( !IsControllerAccessible )
  {
    if ( v4 == 1 )
    {
      LOBYTE(v51) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v2 + 8), v51);
    }
    while ( 1 )
    {
      v53 = v64;
      if ( v64 == (__int64 *)&v64 )
        break;
      v54 = (__int64 *)*v64;
      if ( (__int64 **)v64[1] != &v64 || (__int64 *)v54[1] != v64 )
        __fastfail(3u);
      v64 = (__int64 *)*v64;
      v54[1] = (__int64)&v64;
      LOBYTE(v51) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
        v51,
        6,
        38,
        (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
        (char)v53,
        (unsigned __int8)HIBYTE(*((_WORD *)v53 + 18)) >> 2);
      Etw_CommandCompleteError(v55, v2, v53, 3LL);
      ((void (__fastcall *)(__int64 *, __int64))v53[6])(v53, 3LL);
    }
    result = 0LL;
  }
  if ( v18 == 1 )
    return Controller_ReportFatalError(*(_QWORD *)(v2 + 8), (unsigned int)(v5 != 1) + 1, 4105, 0, 0LL, 0LL);
  return result;
}
