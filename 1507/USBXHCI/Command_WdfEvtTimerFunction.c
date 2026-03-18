/*
 * XREFs of Command_WdfEvtTimerFunction @ 0x1C00128A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     Controller_IsControllerAccessible @ 0x1C00042C8 (Controller_IsControllerAccessible.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Command_InternalSendCommand @ 0x1C0012270 (Command_InternalSendCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0013130 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0013270 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLd @ 0x1C00134C0 (WPP_RECORDER_SF_qLd.c)
 *     WPP_RECORDER_SF_qdx @ 0x1C00138F0 (WPP_RECORDER_SF_qdx.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0014F6C (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C001595C (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x1C0015AC0 (Controller_SetControllerGone.c)
 *     Etw_CommandCompleteError @ 0x1C003272C (Etw_CommandCompleteError.c)
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
  __int64 v19; // rdx
  KSPIN_LOCK *v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r8d
  unsigned __int16 v24; // r9
  unsigned __int8 v25; // dl
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  int v39; // edx
  unsigned int v40; // edx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rbx
  char v47; // cl
  _DWORD *v48; // rax
  __int64 v49; // rdx
  __int64 result; // rax
  __int64 *v51; // rbx
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 **v54; // rcx
  __int64 *v55; // rax
  __int64 v56; // rdx
  __int64 **v57; // rdx
  signed __int32 v58[10]; // [rsp+0h] [rbp-60h] BYREF
  __int64 v59; // [rsp+28h] [rbp-38h]
  __int64 v60; // [rsp+30h] [rbp-30h]
  __int64 v61; // [rsp+38h] [rbp-28h]
  __int64 *v62; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v63; // [rsp+48h] [rbp-18h]
  _QWORD *i; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v65; // [rsp+58h] [rbp-8h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+48h]
  __int64 v67; // [rsp+B8h] [rbp+58h]

  v1 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64))(WdfFunctions_01015 + 2568))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1);
  v2 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         v1,
         off_1C0040090);
  IsControllerAccessible = Controller_IsControllerAccessible(*(_QWORD *)(v2 + 8));
  v63 = &v62;
  v4 = 0;
  v5 = 0;
  v62 = (__int64 *)&v62;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 128));
  NewIrql = v6;
  if ( !IsControllerAccessible )
    goto LABEL_11;
  if ( *(_DWORD *)(v2 + 36) != 1 || (v8 = (_QWORD *)(v2 + 88), (_QWORD *)*v8 == v8) )
  {
    v20 = (KSPIN_LOCK *)(v2 + 128);
    v18 = 0;
    goto LABEL_64;
  }
  v9 = (_QWORD *)*v8;
  v10 = *(__int64 **)(v2 + 40);
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 8) + 232LL) & 1) != 0 )
  {
    v67 = *v10;
    v11 = *v10;
  }
  else
  {
    v11 = *v10;
    v67 = *v10;
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
        v16 = v63;
        *v14 = (__int64)&v62;
        v14[1] = (__int64)v16;
        if ( *v16 != (__int64 *)&v62 )
          __fastfail(3u);
        *v16 = v14;
        v63 = (__int64 **)v14;
      }
      v54 = (__int64 **)(v2 + 104);
      while ( *v54 != (__int64 *)v54 )
      {
        v55 = *v54;
        v56 = **v54;
        if ( (__int64 **)(*v54)[1] != v54 || *(__int64 **)(v56 + 8) != v55 )
          __fastfail(3u);
        *v54 = (__int64 *)v56;
        *(_QWORD *)(v56 + 8) = v54;
        v57 = v63;
        *v55 = (__int64)&v62;
        v55[1] = (__int64)v57;
        if ( *v57 != (__int64 *)&v62 )
          __fastfail(3u);
        *v57 = v55;
        v63 = (__int64 **)v55;
      }
    }
    (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
      *(_QWORD *)(v2 + 24),
      0LL);
    goto LABEL_61;
  }
  if ( !*(_BYTE *)(v2 + 137) )
  {
    v39 = *((_DWORD *)v9 + 16) - 1;
    *((_DWORD *)v9 + 16) = v39;
    if ( v39 == 5 || !v39 )
    {
      if ( (v67 & 8) == 0 )
      {
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
          2u,
          6u,
          0x25u,
          (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids);
        (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
          WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
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
        v39,
        0,
        v7,
        v58[8],
        (char)v9,
        (unsigned __int16)*((_DWORD *)v9 + 9) >> 10,
        v39);
      v40 = *((_DWORD *)v9 + 9);
      v41 = (unsigned __int8)HIBYTE(*((_WORD *)v9 + 18)) >> 2;
      if ( v41 != 11 || (v40 & 0x200) != 0 )
      {
        v42 = *(_QWORD *)(v2 + 8);
        LODWORD(v61) = (unsigned __int8)HIBYTE(*((_WORD *)v9 + 18)) >> 2;
        v43 = (v40 >> 9) & 1;
        v44 = *(_QWORD *)(v42 + 64);
        LOBYTE(v60) = v43;
        LOBYTE(v43) = 2;
        WPP_RECORDER_SF_ddL(v44, v43, 6, 36, (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids, 5, v60, v41);
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)(v2 + 8),
          0,
          0,
          0x4000,
          (__int64)"A command timed out, aborting command next",
          (__int64)(v9 + 3),
          0LL);
      }
      v45 = *(_QWORD *)(v2 + 8);
      v46 = v11 | 4;
      *(_BYTE *)(v2 + 137) = 1;
      *(_DWORD *)(v2 + 140) = 5;
      v47 = *(_QWORD *)(v45 + 232);
      v48 = *(_DWORD **)(v2 + 40);
      if ( (v47 & 1) != 0 )
      {
        *v48 = v46;
        _InterlockedOr(v58, 0);
        v48[1] = HIDWORD(v46);
      }
      else
      {
        *(_QWORD *)v48 = v46;
      }
      _InterlockedOr(v58, 0);
    }
LABEL_61:
    v18 = 0;
LABEL_62:
    v20 = (KSPIN_LOCK *)(v2 + 128);
LABEL_63:
    v6 = NewIrql;
    goto LABEL_64;
  }
  if ( (*(_DWORD *)(v2 + 140))-- != 1 )
    goto LABEL_61;
  if ( (v67 & 8) == 0 )
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
    v21 = *((_DWORD *)v9 + 16);
    switch ( v21 )
    {
      case 0:
        v27 = *(_QWORD *)(v2 + 8);
        LODWORD(v59) = 0;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v27 + 64),
          2u,
          6u,
          0x20u,
          (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
          v59);
        v28 = *v9;
        v29 = (_QWORD *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v29 != v9 )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        v30 = (unsigned int)++*(_DWORD *)(v2 + 72);
        v31 = *(_DWORD *)(v2 + 76);
        v32 = *(_QWORD *)(v2 + 120);
        if ( (_DWORD)v30 == *(_DWORD *)(v2 + 64) )
          v30 = 0LL;
        *(_DWORD *)(v2 + 72) = v30;
        v33 = (*(_QWORD *)(*(_QWORD *)(v2 + 120) + 24LL) + 16 * v30) ^ ((unsigned __int8)v31 ^ (unsigned __int8)*(_QWORD *)(v32 + 24)) & 1;
        v34 = *(_DWORD **)(v2 + 40);
        if ( (*(_BYTE *)(*(_QWORD *)(v2 + 8) + 232LL) & 1) != 0 )
        {
          *v34 = v33;
          _InterlockedOr(v58, 0);
          v34[1] = HIDWORD(v33);
        }
        else
        {
          *(_QWORD *)v34 = v33;
        }
        _InterlockedOr(v58, 0);
        goto LABEL_38;
      case 5:
        v24 = 31;
        v25 = 2;
        break;
      case 10:
        v24 = 30;
        v25 = 4;
        break;
      default:
        v22 = *(_QWORD *)(v2 + 8);
        LODWORD(v59) = *((_DWORD *)v9 + 16);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v22 + 64),
          2u,
          6u,
          0x21u,
          (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
          v59);
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
          _InterlockedOr(v58, 0);
        }
        v35 = *(_QWORD *)(v2 + 104);
        if ( v35 != v2 + 104 )
        {
          i = *(_QWORD **)(v2 + 104);
          v65 = *(_QWORD **)(v2 + 112);
          *(_QWORD *)(v35 + 8) = &i;
          *v65 = &i;
          *(_QWORD *)(v2 + 112) = v2 + 104;
          *(_QWORD *)(v2 + 104) = v2 + 104;
          goto LABEL_43;
        }
        v36 = &i;
        v65 = &i;
        for ( i = &i; v36 != &i; v36 = i )
        {
          v37 = (_QWORD *)*v36;
          if ( (_QWORD **)v36[1] != &i || (_QWORD *)v37[1] != v36 )
            __fastfail(3u);
          i = (_QWORD *)*v36;
          v37[1] = &i;
          Command_InternalSendCommand(v2, (__int64)v36, v23);
LABEL_43:
          ;
        }
        v20 = (KSPIN_LOCK *)(v2 + 128);
        if ( v9 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 128), NewIrql);
          *((_BYTE *)v9 + 68) = 25;
          Etw_CommandCompleteError(v38, v2, v9, 2LL);
          ((void (__fastcall *)(_QWORD *, __int64))v9[6])(v9, 2LL);
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 128));
          v18 = 0;
          goto LABEL_64;
        }
        v18 = 0;
        goto LABEL_63;
    }
    v26 = *(_QWORD *)(v2 + 8);
    LODWORD(v59) = *((_DWORD *)v9 + 16);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v26 + 64),
      v25,
      6u,
      v24,
      (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
      v59);
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
  v19 = *(_QWORD *)(v2 + 24);
  *(_BYTE *)(v2 + 137) = 0;
  (*(void (__fastcall **)(_LIST_ENTRY *, __int64, _QWORD))(WdfFunctions_01015 + 2560))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    v19,
    0LL);
  *(_DWORD *)(v2 + 36) = 2;
  v20 = (KSPIN_LOCK *)(v2 + 128);
  v6 = NewIrql;
  if ( (*((_BYTE *)v9 + 70) & 1) != 0 )
    v5 = 1;
LABEL_64:
  KeReleaseSpinLock(v20, v6);
  result = 0LL;
  if ( !IsControllerAccessible )
  {
    if ( v4 == 1 )
    {
      LOBYTE(v49) = 1;
      Controller_SetControllerGone(*(_QWORD *)(v2 + 8), v49);
    }
    while ( 1 )
    {
      v51 = v62;
      if ( v62 == (__int64 *)&v62 )
        break;
      v52 = (__int64 *)*v62;
      if ( (__int64 **)v62[1] != &v62 || (__int64 *)v52[1] != v62 )
        __fastfail(3u);
      v62 = (__int64 *)*v62;
      v52[1] = (__int64)&v62;
      LOBYTE(v49) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 64LL),
        v49,
        6,
        38,
        (__int64)&WPP_be6c4619643cf94ea76a620ed4da3593_Traceguids,
        (char)v51,
        (unsigned __int8)HIBYTE(*((_WORD *)v51 + 18)) >> 2);
      Etw_CommandCompleteError(v53, v2, v51, 3LL);
      ((void (__fastcall *)(__int64 *, __int64))v51[6])(v51, 3LL);
    }
    result = 0LL;
  }
  if ( v18 == 1 )
    return Controller_ReportFatalError(*(_QWORD *)(v2 + 8), (unsigned int)(v5 != 1) + 1, 4105, 0, 0LL, 0LL);
  return result;
}
