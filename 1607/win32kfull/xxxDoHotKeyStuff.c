/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C00A3680
 * Callers:
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C000D200 (DoExplorerHangDetection.c)
 *     _PostThreadMessageEx @ 0x1C0057D1C (_PostThreadMessageEx.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     IsUninterceptable @ 0x1C00A2484 (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00A3AC0 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C00A3B48 (IsHotKey.c)
 *     IsSAS @ 0x1C00A3C30 (IsSAS.c)
 *     HasRawInputForegroundTarget @ 0x1C00A431C (HasRawInputForegroundTarget.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     _SetMagnificationInputTransform @ 0x1C00EFCE8 (_SetMagnificationInputTransform.c)
 *     IsMouseInPointerActive @ 0x1C01054A0 (IsMouseInPointerActive.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01E09E0 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01E0B2C (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C02315D8 (xxxActivateDebugger.c)
 */

__int64 __fastcall xxxDoHotKeyStuff(struct tagHOTKEY *a1, int a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned int v10; // edi
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v17; // eax
  __int16 v18; // r14
  int v19; // edx
  unsigned int v20; // r14d
  __int64 v21; // rdx
  __int16 v22; // r8
  __int64 v23; // rsi
  void (__fastcall *v24)(__int64, __int64); // r10
  __int64 v25; // rax
  __int64 v26; // r9
  struct tagINPUT_MESSAGE_SOURCE *v27; // rbp
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rsi
  bool v35; // zf
  bool v36; // zf
  LARGE_INTEGER *v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // [rsp+28h] [rbp-70h]
  _BYTE v43[8]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v44[12]; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v45; // [rsp+A0h] [rbp+8h]

  v4 = (unsigned int)a1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v43);
  v8 = 0;
  v45 = 0;
  v9 = 0;
  v10 = 0;
  switch ( v4 )
  {
    case 0x10u:
      v9 = 4;
      break;
    case 0x11u:
      v9 = 2;
      break;
    case 0x12u:
      v9 = 1;
      break;
    default:
      if ( v4 <= 0x5A || v4 > 0x5C )
        gfsModOnlyCandidate = 0;
      else
        v9 = 8;
      break;
  }
  if ( a2 )
  {
    gfsModifiers &= ~v9;
    if ( v9 )
    {
      v10 = gfsModOnlyCandidate;
      v45 = gfsModOnlyCandidate;
      gfsModOnlyCandidate = 0;
    }
    if ( qword_1C0328BA0 )
      qword_1C0328BA0 = 0LL;
  }
  else
  {
    v17 = v9 | gfsModifiers;
    gfsModifiers |= v9;
    if ( v9 )
      gfsModOnlyCandidate = v17;
  }
  LOBYTE(v7) = v4;
  v11 = IsSAS(v7, &gfsModifiers);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v43);
  if ( v4 == 174 )
  {
    if ( a2 )
    {
LABEL_79:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_76:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( v4 != 175 )
    goto LABEL_13;
  if ( a2 )
    goto LABEL_76;
  if ( gbVolumeDownPressed )
  {
    xxxHandleVolumeUpDownCombo();
    goto LABEL_79;
  }
  gbVolumeUpPressed = 1;
LABEL_13:
  if ( !v11 && (gfInNumpadHexInput & 1) != 0 )
    return 0LL;
  if ( v10 && a2 )
  {
    v12 = IsHotKey(v10);
  }
  else
  {
    v12 = IsHotKey(gfsModifiers);
    if ( !v12 || !v11 )
    {
      v13 = IsUninterceptable();
      if ( v13 )
        v12 = v13;
    }
  }
  if ( v12 && gbLockScreenActive && !v11 && (*(_WORD *)(v12 + 26) & 0x2000) == 0 )
    return 0LL;
  WindowArrangementSequence::TestSequence(
    (WindowArrangementSequence *)v12,
    (const struct tagHOTKEY *const)v4,
    v9,
    gfsModifiers,
    a2 == 0,
    v42);
  if ( !v12 )
    return 0LL;
  v18 = *(_WORD *)(v12 + 26);
  if ( v18 < 0 && !v11 )
    return 0LL;
  if ( (v18 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(v44)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v44[1] + 376LL) + 776LL) + 100LL) & 0x200) != 0 )
  {
    return 0LL;
  }
  v19 = *(_DWORD *)(v12 + 32);
  if ( v19 == -7 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 160LL);
    if ( v23 )
    {
      v20 = v45;
      gfsModOnlyCandidate = 0;
      goto LABEL_61;
    }
  }
  if ( (unsigned int)(v19 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger(*(unsigned __int16 *)(v12 + 24));
    return v8;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 32LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v12 + 408LL) != grpdeskLogon
    && !*(_QWORD *)(v12 + 8)
    && gbLockScreenActive
    && (v18 & 0x2000) == 0 )
  {
    return 0LL;
  }
  v20 = v45;
  if ( !v45 )
  {
    if ( a2 )
      return 0LL;
  }
  if ( v11 )
    goto LABEL_96;
  if ( v4 != 27 )
  {
LABEL_41:
    v21 = gfsModifiers;
    goto LABEL_42;
  }
  v21 = gfsModifiers;
  if ( gfsModifiers == 2 )
  {
LABEL_96:
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 208LL) )
    {
      memset(v44, 0, 0x24uLL);
      LODWORD(v44[4]) = 3;
      SetMagnificationInputTransform(v44);
    }
    if ( gspwndMouseOwner )
    {
      v34 = *((_QWORD *)gspwndMouseOwner + 2);
      if ( (unsigned int)IsMouseInPointerActive(v34, 0LL) )
        *(_QWORD *)(*(_QWORD *)(v34 + 384) + 392LL) = 0LL;
    }
    goto LABEL_41;
  }
LABEL_42:
  if ( !a3 )
    goto LABEL_43;
  switch ( v4 )
  {
    case 9u:
      v36 = (a3 & 1) == 0;
      goto LABEL_116;
    case 0xDu:
      v36 = (a3 & 8) == 0;
      goto LABEL_116;
    case 0x1Bu:
      if ( (a3 & 2) != 0 && (v21 & 3) == 1 )
        return 0LL;
      if ( (a3 & 0x40) == 0 )
        break;
      v35 = (v21 & 3) == 2;
      goto LABEL_118;
    case 0x20u:
      v36 = (a3 & 4) == 0;
LABEL_116:
      if ( v36 )
        break;
      v35 = (v21 & 3) == 1;
      goto LABEL_118;
    case 0x2Cu:
      v14 = v21 & 3;
      if ( (v21 & 3) == 0 && (a3 & 0x20) != 0 )
        return 0LL;
      if ( (a3 & 0x10) != 0 )
      {
        v35 = (_DWORD)v14 == 1;
LABEL_118:
        if ( v35 )
          return 0LL;
      }
      break;
  }
LABEL_43:
  if ( (_DWORD)v21 == 2 && v4 == 27 && !a2 && ghwndSwitch )
  {
    LOBYTE(v21) = 1;
    v37 = (LARGE_INTEGER *)HMValidateHandleNoSecure(ghwndSwitch, v21, v14, v15);
    if ( v37 )
    {
      v44[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v44;
      v44[1] = v37;
      ++v37[1].LowPart;
      xxxSetForegroundWindow2(v37, 0LL, 0, 0);
      ThreadUnlock1(v39, v38);
    }
    LOWORD(v21) = gfsModifiers;
  }
  v22 = *(_WORD *)(v12 + 26);
  if ( (v22 & 0x1000) == 0 )
  {
    v23 = *(_QWORD *)(v12 + 16);
    if ( !v23 )
    {
      v24 = *(void (__fastcall **)(__int64, __int64))(v12 + 8);
      v25 = qword_1C0328BA0;
      v26 = (unsigned __int16)v21 | ((unsigned __int16)v4 << 16);
      if ( v24 )
      {
        if ( (v22 & 0x4000) == 0 || v26 != qword_1C0328BA0 )
        {
          v40 = *(int *)(v12 + 32);
          v41 = (unsigned __int16)v21 | ((unsigned __int16)v4 << 16);
          if ( qword_1C0328BA0 != v26 )
            v25 = v26;
          qword_1C0328BA0 = v25;
          v24(v40, v41);
        }
        goto LABEL_53;
      }
      if ( (v22 & 0x4000) != 0 && v26 == qword_1C0328BA0 )
      {
        v27 = a4;
      }
      else
      {
        v27 = a4;
        v28 = *(int *)(v12 + 32);
        v29 = *(_QWORD *)v12;
        if ( qword_1C0328BA0 != v26 )
          v25 = v26;
        qword_1C0328BA0 = v25;
        PostThreadMessageEx(v29, 0x312u, v28, v26, (__int64)a4);
      }
      v30 = *(_QWORD *)v12;
      goto LABEL_52;
    }
    if ( v23 != 1 )
    {
LABEL_65:
      if ( !v23 )
        goto LABEL_53;
      if ( v23 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 24) + 8LL) + 160LL) || *(_DWORD *)(v12 + 32) != 61744 )
      {
        v31 = qword_1C0328BA0;
        v32 = (unsigned __int16)v21 | ((unsigned __int16)v4 << 16);
        if ( (v22 & 0x4000) != 0 && v32 == qword_1C0328BA0 )
        {
          v27 = a4;
        }
        else
        {
          v27 = a4;
          v33 = *(int *)(v12 + 32);
          if ( qword_1C0328BA0 != v32 )
            v31 = v32;
          qword_1C0328BA0 = v31;
          _PostTransformableMessageExtended(v23, 786LL, v33, v32, a4, 1);
        }
        goto LABEL_63;
      }
LABEL_61:
      DoExplorerHangDetection(*(struct tagDESKTOP **)(v23 + 24));
      PostMessage(v23, 274LL, 61744LL);
      v27 = a4;
      if ( qword_1C0328BA0 )
        qword_1C0328BA0 = 0LL;
LABEL_63:
      v30 = *(_QWORD *)(v23 + 16);
LABEL_52:
      SetLastInputWoken(v30, *((_DWORD *)v27 + 1) == 1);
LABEL_53:
      LOBYTE(v8) = v20 == 0;
      return v8;
    }
    if ( gpqForeground )
    {
      v23 = *(_QWORD *)(gpqForeground + 80LL);
      goto LABEL_65;
    }
    return 0LL;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v12);
}
