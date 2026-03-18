/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C0083DBC
 * Callers:
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 * Callees:
 *     DoExplorerHangDetection @ 0x1C000C19C (DoExplorerHangDetection.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     IsMouseInPointerActive @ 0x1C006440C (IsMouseInPointerActive.c)
 *     _PostThreadMessageEx @ 0x1C0065470 (_PostThreadMessageEx.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     HasRawInputForegroundTarget @ 0x1C0082FA4 (HasRawInputForegroundTarget.c)
 *     IsUninterceptable @ 0x1C00830CC (IsUninterceptable.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C008421C (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C00842A4 (IsHotKey.c)
 *     IsSAS @ 0x1C008438C (IsSAS.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     _SetMagnificationInputTransform @ 0x1C00D3DDC (_SetMagnificationInputTransform.c)
 *     zzzCancelJournalling @ 0x1C010A868 (zzzCancelJournalling.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EA160 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01EA2A8 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C023957C (xxxActivateDebugger.c)
 */

__int64 __fastcall xxxDoHotKeyStuff(struct tagHOTKEY *a1, int a2, int a3, DWORD *a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // esi
  unsigned int v10; // edi
  int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v15; // eax
  __int16 v16; // r14
  int v17; // edx
  unsigned int v18; // r14d
  unsigned int v19; // edx
  __int16 v20; // r8
  __int64 v21; // rsi
  void (__fastcall *v22)(__int64, __int64); // r10
  __int64 v23; // rax
  __int64 v24; // r9
  DWORD *v25; // rbp
  unsigned __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r9
  unsigned __int64 v31; // r8
  __int64 v32; // rsi
  bool v33; // zf
  bool v34; // zf
  __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // [rsp+28h] [rbp-70h]
  _BYTE v41[8]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v42[12]; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp+8h]

  v4 = (unsigned int)a1;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v41);
  v8 = 0;
  v43 = 0;
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
      v43 = gfsModOnlyCandidate;
      gfsModOnlyCandidate = 0;
    }
    if ( qword_1C03234F8 )
      qword_1C03234F8 = 0LL;
  }
  else
  {
    v15 = v9 | gfsModifiers;
    gfsModifiers |= v9;
    if ( v9 )
      gfsModOnlyCandidate = v15;
  }
  LOBYTE(v7) = v4;
  v11 = IsSAS(v7, &gfsModifiers);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v41);
  if ( v4 == 174 )
  {
    if ( a2 )
    {
LABEL_81:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_78:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( v4 == 175 )
  {
    if ( !a2 )
    {
      if ( !gbVolumeDownPressed )
      {
        gbVolumeUpPressed = 1;
        goto LABEL_13;
      }
      xxxHandleVolumeUpDownCombo();
      goto LABEL_81;
    }
    goto LABEL_78;
  }
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
    v40);
  if ( !v12 )
    return 0LL;
  v16 = *(_WORD *)(v12 + 26);
  if ( v16 < 0 && !v11 )
    return 0LL;
  if ( (v16 & 0x8800) == 0
    && (unsigned int)HasRawInputForegroundTarget(v42)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v42[1] + 376LL) + 784LL) + 100LL) & 0x200) != 0 )
  {
    return 0LL;
  }
  v17 = *(_DWORD *)(v12 + 32);
  if ( v17 == -7 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 160LL);
    if ( v21 )
    {
      v18 = v43;
      gfsModOnlyCandidate = 0;
      goto LABEL_56;
    }
  }
  if ( (unsigned int)(v17 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger(*(unsigned __int16 *)(v12 + 24));
    return v8;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 32LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v12 + 408LL) != grpdeskLogon
    && !*(_QWORD *)(v12 + 8)
    && gbLockScreenActive
    && (v16 & 0x2000) == 0 )
  {
    return 0LL;
  }
  v18 = v43;
  if ( !v43 )
  {
    if ( a2 )
      return 0LL;
  }
  if ( v11 )
    goto LABEL_96;
  if ( v4 != 27 )
  {
LABEL_41:
    v19 = gfsModifiers;
    goto LABEL_42;
  }
  v19 = gfsModifiers;
  if ( gfsModifiers == 2 )
  {
LABEL_96:
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 208LL) )
    {
      memset(v42, 0, 36);
      LODWORD(v42[4]) = 3;
      SetMagnificationInputTransform(v42);
    }
    if ( gspwndMouseOwner )
    {
      v32 = *((_QWORD *)gspwndMouseOwner + 2);
      if ( IsMouseInPointerActive(v32, 0LL) )
        *(_QWORD *)(*(_QWORD *)(v32 + 384) + 384LL) = 0LL;
    }
    goto LABEL_41;
  }
LABEL_42:
  if ( !a3 )
    goto LABEL_43;
  switch ( v4 )
  {
    case 9u:
      v34 = (a3 & 1) == 0;
      goto LABEL_116;
    case 0xDu:
      v34 = (a3 & 8) == 0;
      goto LABEL_116;
    case 0x1Bu:
      if ( (a3 & 2) != 0 && (v19 & 3) == 1 )
        return 0LL;
      if ( (a3 & 0x40) == 0 )
        break;
      v33 = (v19 & 3) == 2;
      goto LABEL_118;
    case 0x20u:
      v34 = (a3 & 4) == 0;
LABEL_116:
      if ( v34 )
        break;
      v33 = (v19 & 3) == 1;
      goto LABEL_118;
    case 0x2Cu:
      if ( (v19 & 3) == 0 && (a3 & 0x20) != 0 )
        return 0LL;
      if ( (a3 & 0x10) != 0 )
      {
        v33 = (v19 & 3) == 1;
LABEL_118:
        if ( v33 )
          return 0LL;
      }
      break;
  }
LABEL_43:
  if ( v19 == 2 && v4 == 27 && !a2 && ghwndSwitch )
  {
    v35 = HMValidateHandleNoSecure(ghwndSwitch, 1);
    if ( v35 )
    {
      v42[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v42;
      v42[1] = v35;
      ++*(_DWORD *)(v35 + 8);
      xxxSetForegroundWindow2((struct tagWND *)v35);
      ThreadUnlock1(v37, v36);
    }
    LOWORD(v19) = gfsModifiers;
  }
  v20 = *(_WORD *)(v12 + 26);
  if ( (v20 & 0x1000) == 0 )
  {
    v21 = *(_QWORD *)(v12 + 16);
    if ( !v21 )
    {
      v22 = *(void (__fastcall **)(__int64, __int64))(v12 + 8);
      v23 = qword_1C03234F8;
      v24 = (unsigned __int16)v19 | ((unsigned __int16)v4 << 16);
      if ( v22 )
      {
        if ( (v20 & 0x4000) == 0 || v24 != qword_1C03234F8 )
        {
          v38 = *(int *)(v12 + 32);
          v39 = (unsigned __int16)v19 | ((unsigned __int16)v4 << 16);
          if ( qword_1C03234F8 != v24 )
            v23 = v24;
          qword_1C03234F8 = v23;
          v22(v38, v39);
        }
        goto LABEL_60;
      }
      if ( (v20 & 0x4000) != 0 && v24 == qword_1C03234F8 )
      {
        v25 = a4;
      }
      else
      {
        v25 = a4;
        v26 = *(int *)(v12 + 32);
        v27 = *(_QWORD *)v12;
        if ( qword_1C03234F8 != v24 )
          v23 = v24;
        qword_1C03234F8 = v23;
        PostThreadMessageEx(v27, 0x312u, v26, v24, a4);
      }
      v28 = *(_QWORD *)v12;
      goto LABEL_59;
    }
    if ( v21 != 1 )
    {
LABEL_65:
      if ( !v21 )
        goto LABEL_60;
      if ( v21 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 24) + 8LL) + 160LL) || *(_DWORD *)(v12 + 32) != 61744 )
      {
        v29 = qword_1C03234F8;
        v30 = (unsigned __int16)v19 | ((unsigned __int16)v4 << 16);
        if ( (v20 & 0x4000) != 0 && v30 == qword_1C03234F8 )
        {
          v25 = a4;
        }
        else
        {
          v25 = a4;
          v31 = *(int *)(v12 + 32);
          if ( qword_1C03234F8 != v30 )
            v29 = v30;
          qword_1C03234F8 = v29;
          _PostTransformableMessageExtended(v21, 786LL, v31, v30, (struct tagINPUT_MESSAGE_SOURCE *)a4, 1);
        }
        goto LABEL_58;
      }
LABEL_56:
      DoExplorerHangDetection(*(struct tagDESKTOP **)(v21 + 24));
      PostMessage(v21, 274LL, 0xF130uLL, 0LL);
      v25 = a4;
      if ( qword_1C03234F8 )
        qword_1C03234F8 = 0LL;
LABEL_58:
      v28 = *(_QWORD *)(v21 + 16);
LABEL_59:
      SetLastInputWoken(v28, v25[1] == 1);
LABEL_60:
      LOBYTE(v8) = v18 == 0;
      return v8;
    }
    if ( gpqForeground )
    {
      v21 = *(_QWORD *)(gpqForeground + 72LL);
      goto LABEL_65;
    }
    return 0LL;
  }
  return HandleIAMHotKey((const struct tagHOTKEY *const)v12);
}
