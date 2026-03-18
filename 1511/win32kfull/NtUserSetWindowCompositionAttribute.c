/*
 * XREFs of NtUserSetWindowCompositionAttribute @ 0x1C0078590
 * Callers:
 *     <none>
 * Callees:
 *     SetWindowCompositionFreezeSWR @ 0x1C0008C08 (SetWindowCompositionFreezeSWR.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C0055FC4 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     ValidateHwndIAM @ 0x1C007896C (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1C00789B0 (IAMThreadAccessGranted.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0078A00 (SetWindowCompositionNCRenderingExiled.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0078AAC (DwmAsyncSetCompositionAttribute.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C0078F8C (SetWindowExtendedBoundsMargin.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C0103784 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C01071D0 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C0107980 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C010B884 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C010C214 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C0223C74 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C0223D24 (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C0223DD4 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C0223E60 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionTransitions @ 0x1C0223F10 (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVisualOwner @ 0x1C0224070 (SetWindowCompositionVisualOwner.c)
 */

__int64 __fastcall NtUserSetWindowCompositionAttribute(__int64 a1, unsigned __int64 a2)
{
  NTSTATUS v3; // edi
  unsigned int v4; // r14d
  unsigned __int64 v5; // rcx
  __int64 v6; // xmm1_8
  size_t v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // ebx
  int v13; // ebx
  NTSTATUS HasIconicBitmap; // eax
  bool v15; // sf
  ULONG v17; // eax
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  unsigned int v24; // r15d
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  __int64 v32; // r8
  __int64 v33; // r9
  void *v34; // rax
  _DWORD v35[8]; // [rsp+28h] [rbp-80h] BYREF
  void *Src[2]; // [rsp+48h] [rbp-60h]
  __int64 v37; // [rsp+58h] [rbp-50h]
  __int128 v38; // [rsp+68h] [rbp-40h]
  __int64 v39; // [rsp+78h] [rbp-30h]

  v3 = -1073741811;
  v38 = 0uLL;
  v39 = 0LL;
  v4 = 0;
  memset(v35, 0, 24);
  v5 = a2 + 24;
  if ( a2 + 24 < a2 || v5 > W32UserProbeAddress )
    a2 = W32UserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)a2;
  v6 = *(_QWORD *)(a2 + 16);
  v37 = v6;
  v38 = *(_OWORD *)Src;
  v39 = v6;
  if ( (_DWORD)v6 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v5) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & (unsigned __int64)Src[1]) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (char *)Src[1] + (unsigned int)v6 > (void *)W32UserProbeAddress || (char *)Src[1] + (unsigned int)v6 < Src[1] )
      *W32UserProbeAddress = 0;
  }
  if ( (unsigned int)(LODWORD(Src[0]) - 1) <= 0x15 )
  {
    v7 = qword_1C02E1A88[2 * SLODWORD(Src[0])];
    if ( (unsigned int)v6 < v7 )
    {
      v3 = -1073741789;
    }
    else
    {
      memmove(v35, Src[1], v7);
      v3 = 0;
    }
  }
  if ( v3 < 0 )
    goto LABEL_26;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwndIAM(a1);
  v11 = v8;
  if ( !v8 )
    goto LABEL_25;
  v12 = v38;
  if ( (_DWORD)v38 != 17 || !IsTopLevelOrLayeredChildWindow(v8) || *(_DWORD *)(v11 + 304) == 15 )
  {
    if ( (unsigned int)IsTopLevelWindow(v11) || v12 == 20 && IsTopLevelOrLayeredChildWindow(v11) )
    {
      if ( v12 <= 10 )
      {
        if ( v12 == 10 )
        {
          if ( !(unsigned int)IsWindowDesktopComposed(v11) )
            goto LABEL_22;
          v34 = (void *)ReferenceDwmApiPort(v10, v9, v32, v33);
          HasIconicBitmap = DwmAsyncSetCompositionAttribute(v34);
          goto LABEL_21;
        }
        v18 = v12 - 2;
        if ( !v18 )
        {
          HasIconicBitmap = SetWindowCompositionNCRenderPolicy((struct tagWND *)v11);
          goto LABEL_21;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          HasIconicBitmap = SetWindowCompositionTransitions((struct tagWND *)v11);
          goto LABEL_21;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          HasIconicBitmap = SetWindowCompositionAllowNCPaint((struct tagWND *)v11);
          goto LABEL_21;
        }
        v21 = v20 - 2;
        if ( !v21 )
        {
          HasIconicBitmap = SetWindowCompositionNonClientRTLLayout((struct tagWND *)v11);
          goto LABEL_21;
        }
        v22 = v21 - 1;
        if ( !v22 )
        {
          HasIconicBitmap = SetWindowCompositionForceIconicSWR((struct tagWND *)v11);
          goto LABEL_21;
        }
        v23 = v22 - 1;
        if ( !v23 )
        {
          HasIconicBitmap = SetWindowExtendedBoundsMargin((struct tagWND *)v11);
          goto LABEL_21;
        }
        if ( v23 == 1 )
        {
LABEL_50:
          HasIconicBitmap = SetWindowCompositionHasIconicBitmap((struct tagWND *)v11);
          goto LABEL_21;
        }
      }
      else
      {
        v13 = v12 - 11;
        if ( !v13 )
        {
          HasIconicBitmap = SetWindowCompositionNCRenderingExiled((struct tagWND *)v11);
          goto LABEL_21;
        }
        v27 = v13 - 2;
        if ( !v27 )
        {
          HasIconicBitmap = SetWindowCompositionExcludeFromLivePreview((struct tagWND *)v11);
          goto LABEL_21;
        }
        v28 = v27 - 2;
        if ( !v28 )
        {
          HasIconicBitmap = SetWindowCompositionForceActiveWindowAppearance((struct tagWND *)v11);
          goto LABEL_21;
        }
        v29 = v28 - 1;
        if ( !v29 )
        {
          HasIconicBitmap = SetWindowCompositionDisallowPeek((struct tagWND *)v11);
          goto LABEL_21;
        }
        v30 = v29 - 3;
        if ( !v30 )
        {
          HasIconicBitmap = SetWindowCompositionAccentPolicy((struct tagWND *)v11);
          goto LABEL_21;
        }
        v31 = v30 - 1;
        if ( !v31 )
        {
          SetWindowCompositionFreezeSWR((struct tagWND *)v11, v35);
          goto LABEL_50;
        }
        if ( v31 == 2 )
        {
          HasIconicBitmap = SetWindowCompositionVisualOwner((struct tagWND *)v11);
          goto LABEL_21;
        }
      }
LABEL_62:
      v3 = -1073741811;
      goto LABEL_22;
    }
LABEL_25:
    v3 = -1073741816;
    goto LABEL_22;
  }
  v24 = 0;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
    v24 = 2;
  }
  else
  {
    v10 = *(_QWORD *)(v25 + 376);
    if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 376LL) != v10
      || (*(_DWORD *)(v10 + 776) & 0x30) == 0x10 && (unsigned int)IsTopLevelWindow(v11) )
    {
      v3 = -1073741790;
    }
    else
    {
      v24 = 1;
    }
  }
  if ( v3 >= 0 )
  {
    if ( !v35[0] )
    {
      v26 = *(_QWORD *)(v11 + 104);
      if ( v26 )
      {
        if ( ((unsigned int)GetWindowCloakState(v26) & v24) != 0 )
          goto LABEL_62;
      }
    }
    HasIconicBitmap = zzzSetWindowCompositionCloak(v11, v35, v24);
LABEL_21:
    v3 = HasIconicBitmap;
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v10, v9);
  v15 = v3 < 0;
  if ( v3 < 0 )
  {
LABEL_26:
    v17 = RtlNtStatusToDosError(v3);
    UserSetLastError(v17);
    v15 = v3 < 0;
  }
  LOBYTE(v4) = !v15;
  return v4;
}
