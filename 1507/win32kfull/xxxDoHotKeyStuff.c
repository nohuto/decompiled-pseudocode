/*
 * XREFs of xxxDoHotKeyStuff @ 0x1C0049418
 * Callers:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 * Callees:
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C000462C (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 *     DoExplorerHangDetection @ 0x1C00092E0 (DoExplorerHangDetection.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C0049878 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     IsHotKey @ 0x1C0049900 (IsHotKey.c)
 *     IsSAS @ 0x1C00499E8 (IsSAS.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
 *     _PostThreadMessageEx @ 0x1C0090C10 (_PostThreadMessageEx.c)
 *     IsMouseInPointerActive @ 0x1C00E1D04 (IsMouseInPointerActive.c)
 *     zzzCancelJournalling @ 0x1C00FEE88 (zzzCancelJournalling.c)
 *     _SetMagnificationInputTransform @ 0x1C012C34C (_SetMagnificationInputTransform.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01E9B40 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 *     xxxActivateDebugger @ 0x1C0239168 (xxxActivateDebugger.c)
 */

__int64 __fastcall xxxDoHotKeyStuff(struct tagHOTKEY *a1, int a2, int a3, struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  unsigned int v8; // esi
  int v9; // r15d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned int v14; // eax
  __int16 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  unsigned int v19; // r14d
  __int64 v20; // rdx
  __int16 v21; // r8
  __int64 v22; // rdi
  void (__fastcall *v23)(__int64, __int64); // r10
  __int64 v24; // rax
  __int64 v25; // r9
  struct tagINPUT_MESSAGE_SOURCE *v26; // rbp
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r9
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  bool v36; // zf
  bool v37; // zf
  __int64 v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // [rsp+28h] [rbp-70h]
  _QWORD v44[13]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v45; // [rsp+A0h] [rbp+8h]

  v4 = 0;
  v45 = 0;
  v6 = (unsigned int)a1;
  v7 = 0;
  v8 = 0;
  switch ( (_DWORD)a1 )
  {
    case 0x10:
      v7 = 4;
      break;
    case 0x12:
      v7 = 1;
      break;
    case 0x11:
      v7 = 2;
      break;
    default:
      if ( (unsigned int)a1 <= 0x5A || (unsigned int)a1 > 0x5C )
        gfsModOnlyCandidate = 0;
      else
        v7 = 8;
      break;
  }
  if ( a2 )
  {
    gfsModifiers &= ~v7;
    if ( v7 )
    {
      v8 = gfsModOnlyCandidate;
      v45 = gfsModOnlyCandidate;
      gfsModOnlyCandidate = 0;
    }
    if ( qword_1C0322C08 )
      qword_1C0322C08 = 0LL;
  }
  else
  {
    v14 = v7 | gfsModifiers;
    gfsModifiers |= v7;
    if ( v7 )
      gfsModOnlyCandidate = v14;
  }
  if ( (_DWORD)a1 == 174 )
  {
    if ( a2 )
    {
LABEL_82:
      gbVolumeDownPressed = 0;
      goto LABEL_13;
    }
    if ( !gbVolumeUpPressed )
    {
      gbVolumeDownPressed = 1;
      goto LABEL_13;
    }
    xxxHandleVolumeUpDownCombo();
LABEL_79:
    gbVolumeUpPressed = 0;
    goto LABEL_13;
  }
  if ( (_DWORD)a1 == 175 )
  {
    if ( !a2 )
    {
      if ( !gbVolumeDownPressed )
      {
        gbVolumeUpPressed = 1;
        goto LABEL_13;
      }
      xxxHandleVolumeUpDownCombo();
      goto LABEL_82;
    }
    goto LABEL_79;
  }
LABEL_13:
  LOBYTE(a1) = v6;
  v9 = IsSAS(a1, &gfsModifiers);
  if ( !v9 && (gfInNumpadHexInput & 1) != 0 )
    return 0LL;
  if ( v8 && a2 )
  {
    v11 = 0LL;
    v10 = v8;
  }
  else
  {
    v10 = gfsModifiers;
    v11 = v6;
  }
  v12 = IsHotKey(v10, v11);
  if ( v12 )
  {
    if ( gbLockScreenActive && !v9 && (*(_WORD *)(v12 + 26) & 0x2000) == 0 )
      return 0LL;
  }
  WindowArrangementSequence::TestSequence(
    (WindowArrangementSequence *)v12,
    (const struct tagHOTKEY *const)v6,
    v7,
    gfsModifiers,
    a2 == 0,
    v43);
  if ( !v12 )
    return 0LL;
  v15 = *(_WORD *)(v12 + 26);
  if ( v15 < 0 && !v9 )
    return 0LL;
  if ( gpqForeground )
  {
    v16 = *(_QWORD *)(gpqForeground + 80LL);
    v17 = v16 ? *(_QWORD *)(v16 + 16) : *(_QWORD *)(gpqForeground + 56LL);
    if ( (unsigned int)HasHidTable(v17) )
    {
      v33 = *(_QWORD *)(gpqForeground + 80LL);
      v34 = v33 ? *(_QWORD *)(v33 + 16) : *(_QWORD *)(gpqForeground + 56LL);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 384) + 784LL) + 100LL) & 0x200) != 0 && (v15 & 0x8000) == 0 )
        return 0LL;
    }
  }
  v18 = *(_DWORD *)(v12 + 32);
  if ( v18 == -7 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 160LL);
    if ( v22 )
    {
      v19 = v45;
      gfsModOnlyCandidate = 0;
      goto LABEL_73;
    }
  }
  if ( (unsigned int)(v18 + 6) <= 1 )
  {
    if ( !a2 )
      return (unsigned int)xxxActivateDebugger(*(unsigned __int16 *)(v12 + 24));
    return v4;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 32LL) & 1) != 0
    && *(PVOID *)(*(_QWORD *)v12 + 416LL) != grpdeskLogon
    && !*(_QWORD *)(v12 + 8)
    && gbLockScreenActive
    && (v15 & 0x2000) == 0 )
  {
    return 0LL;
  }
  v19 = v45;
  if ( !v45 )
  {
    if ( a2 )
      return 0LL;
  }
  if ( v9 || (v20 = gfsModifiers, v6 == 27) && gfsModifiers == 2 )
  {
    zzzCancelJournalling();
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 208LL) )
    {
      memset(v44, 0, 36);
      LODWORD(v44[4]) = 3;
      SetMagnificationInputTransform(v44);
    }
    if ( gspwndMouseOwner )
    {
      v35 = *((_QWORD *)gspwndMouseOwner + 2);
      if ( (unsigned int)IsMouseInPointerActive(v35, 0LL) )
        *(_QWORD *)(*(_QWORD *)(v35 + 392) + 384LL) = 0LL;
    }
    v20 = gfsModifiers;
  }
  if ( !a3 )
    goto LABEL_42;
  switch ( v6 )
  {
    case 9u:
      v37 = (a3 & 1) == 0;
      goto LABEL_120;
    case 0xDu:
      v37 = (a3 & 8) == 0;
      goto LABEL_120;
    case 0x1Bu:
      if ( (a3 & 2) != 0 && (v20 & 3) == 1 )
        return 0LL;
      if ( (a3 & 0x40) == 0 )
        break;
      v36 = (v20 & 3) == 2;
      goto LABEL_122;
    case 0x20u:
      v37 = (a3 & 4) == 0;
LABEL_120:
      if ( v37 )
        break;
      v36 = (v20 & 3) == 1;
      goto LABEL_122;
    case 0x2Cu:
      if ( (v20 & 3) == 0 && (a3 & 0x20) != 0 )
        return 0LL;
      if ( (a3 & 0x10) != 0 )
      {
        v36 = (v20 & 3) == 1;
LABEL_122:
        if ( v36 )
          return 0LL;
      }
      break;
  }
LABEL_42:
  if ( (_DWORD)v20 == 2 && v6 == 27 && !a2 && ghwndSwitch )
  {
    LOBYTE(v20) = 1;
    v38 = HMValidateHandleNoSecure(ghwndSwitch, v20);
    if ( v38 )
    {
      v44[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v44;
      v44[1] = v38;
      ++*(_DWORD *)(v38 + 8);
      xxxSetForegroundWindow2((struct tagWND *)v38, 0LL, 0LL, 0);
      ThreadUnlock1(v40, v39);
    }
    LOWORD(v20) = gfsModifiers;
  }
  v21 = *(_WORD *)(v12 + 26);
  if ( (v21 & 0x1000) != 0 )
    return HandleIAMHotKey((const struct tagHOTKEY *const)v12);
  v22 = *(_QWORD *)(v12 + 16);
  if ( !v22 )
  {
    v23 = *(void (__fastcall **)(__int64, __int64))(v12 + 8);
    v24 = qword_1C0322C08;
    v25 = (unsigned __int16)v20 | ((unsigned __int16)v6 << 16);
    if ( v23 )
    {
      if ( (v21 & 0x4000) == 0 || v25 != qword_1C0322C08 )
      {
        v41 = *(int *)(v12 + 32);
        v42 = (unsigned __int16)v20 | ((unsigned __int16)v6 << 16);
        if ( qword_1C0322C08 != v25 )
          v24 = v25;
        qword_1C0322C08 = v24;
        v23(v41, v42);
      }
      goto LABEL_63;
    }
    if ( (v21 & 0x4000) != 0 && v25 == qword_1C0322C08 )
    {
      v26 = a4;
    }
    else
    {
      v26 = a4;
      v27 = *(int *)(v12 + 32);
      v28 = *(_QWORD *)v12;
      if ( qword_1C0322C08 != v25 )
        v24 = v25;
      qword_1C0322C08 = v24;
      PostThreadMessageEx(v28, 786LL, v27);
    }
    v29 = *(_QWORD *)v12;
    goto LABEL_62;
  }
  if ( v22 == 1 )
  {
    if ( gpqForeground )
    {
      v22 = *(_QWORD *)(gpqForeground + 72LL);
      goto LABEL_54;
    }
    return 0LL;
  }
LABEL_54:
  if ( v22 )
  {
    if ( v22 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 24) + 8LL) + 160LL) || *(_DWORD *)(v12 + 32) != 61744 )
    {
      v30 = qword_1C0322C08;
      v31 = (unsigned __int16)v20 | ((unsigned __int16)v6 << 16);
      if ( (v21 & 0x4000) != 0 && v31 == qword_1C0322C08 )
      {
        v26 = a4;
      }
      else
      {
        v26 = a4;
        v32 = *(int *)(v12 + 32);
        if ( qword_1C0322C08 != v31 )
          v30 = v31;
        qword_1C0322C08 = v30;
        _PostTransformableMessageExtended((struct tagWND *)v22, 0x312u, v32, v31, a4, 1);
      }
      goto LABEL_61;
    }
LABEL_73:
    DoExplorerHangDetection(*(struct tagTHREADINFO ***)(v22 + 24));
    PostMessage(v22, 274LL);
    v26 = a4;
    if ( qword_1C0322C08 )
      qword_1C0322C08 = 0LL;
LABEL_61:
    v29 = *(_QWORD *)(v22 + 16);
LABEL_62:
    SetLastInputWoken(v29, *((_DWORD *)v26 + 1) == 1);
  }
LABEL_63:
  LOBYTE(v4) = v19 == 0;
  return v4;
}
