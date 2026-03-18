/*
 * XREFs of xxxSetWindowStyle @ 0x1C00A1758
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000A1E0 (xxxSetModernAppWindow.c)
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     ?xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z @ 0x1C01DE290 (-xxxEnumTurnOffCompositing@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C0059F20 (xxxRedrawWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C0061A28 (ComposeWindowIfNeeded.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00725BC (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     DecVisWindows @ 0x1C009EA10 (DecVisWindows.c)
 *     IsTrayWindow @ 0x1C00A1E80 (IsTrayWindow.c)
 *     IncVisWindows @ 0x1C00A20E4 (IncVisWindows.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     UnsetRedirectedWindow @ 0x1C00D7B74 (UnsetRedirectedWindow.c)
 *     _IsWindowVisible @ 0x1C012641C (_IsWindowVisible.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ClrWFNoDwmNotify @ 0x1C01CE62C (ClrWFNoDwmNotify.c)
 *     xxxTurnOffCompositing @ 0x1C01DE97C (xxxTurnOffCompositing.c)
 *     VerifyChildMenu @ 0x1C02245FC (VerifyChildMenu.c)
 */

__int64 __fastcall xxxSetWindowStyle(__m128i *a1, int a2, unsigned int a3)
{
  int v4; // esi
  unsigned __int32 v5; // r9d
  int v6; // r15d
  int v7; // r14d
  __int64 v8; // r13
  bool v9; // zf
  unsigned int v10; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r12d
  __int64 CurrentProcessWin32Process; // rax
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int8 v23; // cl
  __int64 v24; // r10
  BOOL v25; // r11d
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __m128i *i; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // edi
  __m128i *j; // rcx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r9
  unsigned int v38; // edi
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // edi
  int v43; // esi
  unsigned int v44; // edx
  unsigned int v45; // eax
  unsigned int v46; // ecx
  __int32 v47; // ecx
  __int32 v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // esi
  __int64 v56; // r14
  void *v57; // rdi
  __int64 v58; // rdx
  _DWORD v59[28]; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v60; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v61; // [rsp+D4h] [rbp+6Bh]
  unsigned int v62; // [rsp+D8h] [rbp+6Fh]

  v4 = 0;
  v5 = (unsigned __int32)a1[3].m128i_i32[0] >> 25;
  v62 = 0;
  v6 = 0;
  v7 = 0;
  v8 = a2;
  v62 = (8 * (v5 & 1)) | (4 * (((unsigned __int32)a1[3].m128i_i32[1] >> 28) & 1));
  if ( a2 == -16 )
  {
    v9 = (a1[3].m128i_i32[0] & 0x800) == 0;
    v10 = a1[3].m128i_u32[1];
    v60 = v10;
    if ( v9 )
      goto LABEL_6;
    v10 |= 0x10000000u;
  }
  else
  {
    v10 = ~((a1[18].m128i_i8[0] & 0x20) << 14) & a1[3].m128i_i32[0] & 0xA7F77FF;
  }
  v60 = v10;
LABEL_6:
  v9 = (a1[2].m128i_i8[13] & 2) == 0;
  v61 = a3;
  if ( !v9 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((struct tagWND *)a1, 124LL, a2, (__int64)&v60, 0, 0, 0LL, 1, 1);
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1->m128i_i32[0] + gSharedInfo[1] + 17LL) & 1) != 0 )
      return v10;
    v60 = v10;
  }
  v16 = IsTrayWindow(a1);
  if ( (_DWORD)v8 == -16 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v12);
    v18 = v61;
    if ( CurrentProcessWin32Process != *(_QWORD *)(a1[1].m128i_i64[0] + 376)
      && *(_WORD *)(gpsi + 854LL) == *(_WORD *)(a1[9].m128i_i64[1] + 10)
      && (v60 & 0x20) != 0
      && (v61 & 0x20) == 0 )
    {
      v19 = 5LL;
LABEL_16:
      UserSetLastError(v19);
      return 0LL;
    }
    v20 = a1[1].m128i_i64[1];
    v21 = 0LL;
    if ( v20 )
    {
      v22 = *(_QWORD *)(v20 + 8);
      if ( v22 )
        v21 = *(_QWORD *)(v22 + 16);
    }
    if ( a1[5].m128i_i64[1] == v21 )
    {
      v18 = v61 | 0x4000000;
      v61 |= 0x4000000u;
    }
    if ( ((v60 ^ v18) & 0x6000000) != 0 )
    {
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
      v18 = v61;
    }
    v23 = a1[3].m128i_i8[7];
    if ( (v23 & 0x60) == 0x20 && (a1[2].m128i_i8[8] & 8) == 0 && (v18 & 0x20000000) == 0 )
    {
      v18 |= 0x20000000u;
      v61 = v18;
    }
    v24 = a1[5].m128i_i64[1];
    v25 = (v23 & 0xC0) == 64;
    if ( v24 )
    {
      v26 = a1[1].m128i_i64[1];
      v27 = 0LL;
      if ( v26 )
      {
        v28 = *(_QWORD *)(v26 + 8);
        if ( v28 )
          v27 = *(_QWORD *)(v28 + 16);
      }
      if ( v24 == v27 && (a1[3].m128i_i32[1] & 0x30000000) == 0x10000000 )
        v7 = 1;
    }
    if ( v16 )
    {
      for ( i = a1; (i[3].m128i_i8[7] & 0x10) != 0 || (i[3].m128i_i8[1] & 8) != 0; i = (__m128i *)i[5].m128i_i64[1] )
      {
        if ( (i[4].m128i_i16[1] & 0x3FFF) == 0x29D )
        {
          v4 = 1;
          break;
        }
      }
    }
    a1[3].m128i_i32[1] = v18;
    if ( (v18 & 0x10000000) != 0 )
      a1[3].m128i_i32[0] |= 0x800u;
    else
      a1[3].m128i_i32[0] &= ~0x800u;
    if ( !v24 )
      goto LABEL_52;
    v30 = a1[1].m128i_i64[1];
    v31 = 0LL;
    if ( v30 )
    {
      v32 = *(_QWORD *)(v30 + 8);
      if ( v32 )
        v31 = *(_QWORD *)(v32 + 16);
    }
    if ( v24 != v31 || (v33 = 1, (v18 & 0x30000000) != 0x10000000) )
LABEL_52:
      v33 = 0;
    v62 = ((v18 & 0x10000000) != 0) | v62 & 0xFFFFFFFC | (2 * (((unsigned __int32)a1[3].m128i_i32[0] >> 25) & 1));
    VerifyChildMenu(a1, v25);
    ((void (__fastcall *)(__m128i *))(&grpVisCompStyleChangeAction)[v62])(a1);
    if ( v7 != v33 )
    {
      if ( v7 )
      {
        DecVisWindows((__int64)a1);
      }
      else
      {
        IncVisWindows(a1);
        if ( (a1[3].m128i_i8[2] & 8) == 0 )
          ComposeWindowIfNeeded((struct tagWND *)a1);
      }
    }
    if ( (unsigned int)IsTrayWindow(a1) )
    {
      for ( j = a1; ; j = (__m128i *)j[5].m128i_i64[1] )
      {
        if ( (j[3].m128i_i8[7] & 0x10) == 0 && (j[3].m128i_i8[1] & 8) == 0 )
        {
          v35 = 0;
          goto LABEL_66;
        }
        if ( (j[4].m128i_i16[1] & 0x3FFF) == 0x29D )
          break;
      }
      v35 = 1;
LABEL_66:
      if ( v4 != v35 )
      {
        v36 = 22LL;
        if ( !v4 )
          v36 = 17LL;
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v36, a1->m128i_i64[0]);
      }
    }
    goto LABEL_103;
  }
  if ( (GetAppCompatFlags2(0x400u, v12, v14, v15) & 4) != 0 )
    v38 = v61 & 0x777FF;
  else
    v38 = v61 & 0xA7F77FF;
  v39 = v60 & 8;
  v61 = v38;
  if ( v39 != (v38 & 8) && ((a1[2].m128i_i8[13] & 2) != 0 || !HIWORD(v38)) )
  {
    v38 = v39 | v38 & 0xFFFFFFF7;
    v61 = v38;
  }
  v40 = v38 & 0x80000;
  if ( (a1[3].m128i_i32[0] & ~((a1[18].m128i_i8[0] & 0x20) << 14) & 0x80000) != 0 )
  {
    if ( v40 )
      goto LABEL_86;
    if ( IsTopLevelOrLayeredChildWindow((__int64)a1) && !(unsigned int)IsTopLevelWindow((__int64)a1) )
      LOBYTE(v7) = 1;
    UnsetLayeredWindow((struct tagWND *)a1, v7);
  }
  else
  {
    if ( !v40 )
      goto LABEL_86;
    if ( (int)xxxSetLayeredWindow(a1, 1LL, 0LL, v37) < 0 )
      return 0LL;
  }
  v38 = v61;
LABEL_86:
  v41 = ((unsigned __int32)a1[3].m128i_i32[0] >> 21) & 1;
  if ( v41 != ((v38 >> 21) & 1) || v41 && (v38 & 0x2000000) != 0 )
  {
    v19 = 87LL;
    goto LABEL_16;
  }
  v42 = (v38 >> 25) & 1;
  v43 = a1[3].m128i_i32[0] & 0x2000000;
  if ( !v43 && v42 && GetStyleWindow(a1[5].m128i_i64[1], 2818) )
    return 0LL;
  v62 = ((unsigned __int32)a1[3].m128i_i32[1] >> 28) & 1 | v62 & 0xFFFFFFFE;
  v62 = v62 & 0xFFFFFFFD | (2 * (v42 & 1));
  if ( v43 )
  {
    if ( !v42 )
    {
      UnsetRedirectedWindow((struct tagWND *)a1);
      ClrWFNoDwmNotify(a1, 2818LL);
    }
  }
  else if ( v42 )
  {
    if ( (int)SetRedirectedWindow((struct tagWND *)a1, 2) < 0 )
      return 0LL;
    SetOrClrWF(1, a1, 0xB02u, 0);
    v6 = 1;
  }
  ((void (__fastcall *)(__m128i *))(&grpVisCompStyleChangeAction)[v62])(a1);
  if ( v6 )
    xxxTurnOffCompositing(a1, 1LL);
  v44 = v61;
  v45 = v61;
  a1[3].m128i_i32[0] = v61 & 0xFDF7FFFF | a1[3].m128i_i32[0] & 0xF7888800;
  v46 = v60;
  if ( ((v60 ^ v45) & 0x407000) != 0 )
  {
    xxxSetWindowPosAndBand((struct tagWND *)a1, 0, 0, 55, 0);
    v44 = v61;
    v46 = v60;
  }
  if ( ((v46 ^ v44) & 0x80000) != 0 && (v7 & 1) != 0 )
    xxxRedrawWindow((struct tagWND *)a1, 0LL, 0LL, 1157);
LABEL_103:
  v47 = a1[3].m128i_i32[0];
  v48 = a1[3].m128i_i32[1];
  if ( (v47 & 1) != 0 )
    goto LABEL_115;
  if ( (v47 & 0x20000) == 0 )
  {
    if ( (v48 & 0x40000) != 0 )
      goto LABEL_115;
    v49 = v48 & 0xC00000;
    if ( v49 == 0x400000 )
    {
      v50 = 1;
LABEL_113:
      if ( !v50 )
        goto LABEL_114;
LABEL_115:
      a1[3].m128i_i8[1] |= 1u;
      goto LABEL_116;
    }
    if ( v49 == 12582912 )
    {
      v50 = a1[2].m128i_i8[13] & 2;
      goto LABEL_113;
    }
  }
LABEL_114:
  ClrWFNoDwmNotify(a1, 2305LL);
LABEL_116:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v55 = v61;
    v56 = a1->m128i_i64[0];
    v57 = (void *)ReferenceDwmApiPort(v52, v51, v53, v54);
    if ( v57 )
    {
      memset((char *)v59 + 2, 0, 0x3AuLL);
      v59[0] = 3932180;
      LOWORD(v59[1]) = 0x8000;
      v59[10] = 1073741846;
      *(_QWORD *)&v59[11] = v56;
      v59[13] = v8;
      v59[14] = v55;
      LpcRequestPort(v57, v59);
      ObfDereferenceObject(v57);
    }
  }
  if ( v16 == (unsigned int)IsTrayWindow(a1) )
    goto LABEL_125;
  if ( v16 )
  {
    v58 = 18LL;
LABEL_124:
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), v58, a1->m128i_i64[0]);
    goto LABEL_125;
  }
  if ( (unsigned int)IsWindowVisible(a1) )
  {
    v58 = 17LL;
    goto LABEL_124;
  }
LABEL_125:
  if ( (a1[2].m128i_i8[13] & 2) != 0 )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((struct tagWND *)a1, 125LL, v8, (__int64)&v60, 0, 0, 0LL, 1, 1);
  }
  return v60;
}
