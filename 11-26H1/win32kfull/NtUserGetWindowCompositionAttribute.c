/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1401E07E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x1400A8060 (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1400A8164 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1400A8258 (IsTopLevelOrLayeredChildWindow.c)
 *     DwmSyncGetCompositionAttribute @ 0x14014BF4C (DwmSyncGetCompositionAttribute.c)
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEAUtagWND@@@Z @ 0x1401E0F08 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEAUtagWND@@@Z.c)
 *     ?GetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x140234F70 (-GetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, void *a2)
{
  NTSTATUS WindowCompositionCornerStyle; // esi
  __int64 v4; // rdi
  __m128i v5; // xmm6
  size_t v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v10; // ebx
  ULONG v11; // eax
  bool v12; // sf
  void *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagRECT *v21; // rax
  __int64 v22; // rcx
  struct tagWND *v23; // r8
  bool v24; // zf
  int v25; // ebx
  int v26; // r8d
  __int64 v27; // rax
  _DWORD *v28; // rbx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  bool v34; // zf
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  int v40; // ebx
  __int128 Src; // [rsp+20h] [rbp-118h] BYREF
  __int64 v42; // [rsp+30h] [rbp-108h]
  __int64 v43; // [rsp+38h] [rbp-100h] BYREF
  NTSTATUS v44; // [rsp+4Ch] [rbp-ECh]
  void *v45; // [rsp+60h] [rbp-D8h]
  size_t Size; // [rsp+68h] [rbp-D0h]
  _QWORD v47[2]; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v48; // [rsp+80h] [rbp-B8h] BYREF
  SIZE_T Length; // [rsp+90h] [rbp-A8h]
  volatile void *Address[2]; // [rsp+98h] [rbp-A0h]
  SIZE_T v51; // [rsp+A8h] [rbp-90h]
  __int128 v52; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v53; // [rsp+C8h] [rbp-70h]
  __int128 v54; // [rsp+D8h] [rbp-60h]
  __int64 v55; // [rsp+E8h] [rbp-50h]

  v47[0] = a1;
  WindowCompositionCornerStyle = -1073741811;
  *(_OWORD *)Address = 0LL;
  v4 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v42 = 0LL;
  v48 = 0LL;
  Length = 0LL;
  RtlCopyFromUser(&v48, a2, 0x18uLL);
  v5 = v48;
  *(__m128i *)Address = v48;
  v51 = Length;
  v6 = (unsigned int)Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8, v7);
  ProbeForWrite(
    (volatile void *)_mm_srli_si128(v5, 8).m128i_i64[0],
    (unsigned int)v6,
    CurrentProcessWow64Process != 0 ? 1 : 4);
  v10 = _mm_cvtsi128_si32(v5);
  if ( (unsigned int)(v10 - 1) <= 0x24 )
  {
    Size = *(_QWORD *)&word_140361958[8 * v48.m128i_i32[0]];
    WindowCompositionCornerStyle = v6 < Size ? 0xC0000023 : 0;
    v44 = WindowCompositionCornerStyle;
  }
  if ( WindowCompositionCornerStyle < 0 )
    goto LABEL_4;
  v14 = 0LL;
  v45 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v43, 1LL);
  v17 = ValidateHwnd(a1);
  if ( !v17 )
    goto LABEL_62;
  if ( v10 == 18 )
  {
    LODWORD(v43) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 19033LL);
  }
  if ( v10 == 21 )
  {
    v18 = (*(_DWORD *)(v17 + 384) >> 2) & 1;
    goto LABEL_13;
  }
  if ( !IsTopLevelWindow(v17) && (v10 != 20 || !(unsigned int)IsTopLevelOrLayeredChildWindow((_QWORD *)v17)) )
  {
    WindowCompositionCornerStyle = -1073741816;
    goto LABEL_16;
  }
  switch ( v10 )
  {
    case 1:
      v18 = (unsigned __int8)IsWindowNCRenderingEnabled((const struct tagWND *)v17);
LABEL_13:
      LODWORD(Src) = v18;
      goto LABEL_14;
    case 20:
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( !_GetWindowCompositionInfo((const struct tagWND *)v17, (struct WINDOWCOMPOSITIONINFO *)&v52) )
        goto LABEL_14;
      v24 = (v52 & 0x1000) == 0;
      goto LABEL_54;
    case 24:
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( !_GetWindowCompositionInfo((const struct tagWND *)v17, (struct WINDOWCOMPOSITIONINFO *)&v52) )
        goto LABEL_14;
      v24 = (v52 & 0x4000) == 0;
      goto LABEL_54;
    case 25:
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( !_GetWindowCompositionInfo((const struct tagWND *)v17, (struct WINDOWCOMPOSITIONINFO *)&v52) )
        goto LABEL_14;
      v24 = (v52 & 0x8000) == 0;
      goto LABEL_54;
    case 26:
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( !_GetWindowCompositionInfo((const struct tagWND *)v17, (struct WINDOWCOMPOSITIONINFO *)&v52) )
        goto LABEL_14;
      v24 = (v52 & 0x10000) == 0;
      goto LABEL_54;
    case 27:
      WindowCompositionCornerStyle = GetWindowCompositionCornerStyle((struct tagWND *)v17, (enum CORNER_STYLE *)&Src);
      goto LABEL_14;
    case 29:
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( !_GetWindowCompositionInfo((const struct tagWND *)v17, (struct WINDOWCOMPOSITIONINFO *)&v52) )
        goto LABEL_14;
      v24 = (v52 & 0x20000) == 0;
      goto LABEL_54;
    case 34:
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( !_GetWindowCompositionInfo((const struct tagWND *)v17, (struct WINDOWCOMPOSITIONINFO *)&v52) )
        goto LABEL_14;
      v24 = DWORD2(v52) == 0;
LABEL_54:
      if ( !v24 )
        LODWORD(Src) = 1;
      goto LABEL_14;
    case 35:
LABEL_29:
      WindowCompositionCornerStyle = -1073741811;
      goto LABEL_16;
    case 30:
      v52 = 0LL;
      v53 = 0LL;
      v54 = 0LL;
      v55 = 0LL;
      if ( _GetWindowCompositionInfo((const struct tagWND *)v17, (struct WINDOWCOMPOSITIONINFO *)&v52) )
      {
        v18 = v55;
        goto LABEL_13;
      }
      goto LABEL_14;
  }
  if ( (unsigned int)(v10 - 31) <= 1 )
  {
    WindowCompositionCornerStyle = -1073741811;
    goto LABEL_14;
  }
  if ( v10 == 37 )
    goto LABEL_29;
  if ( !(unsigned int)IsWindowDesktopComposed(v17) )
LABEL_62:
    WindowCompositionCornerStyle = -1073741816;
LABEL_14:
  if ( WindowCompositionCornerStyle >= 0 )
  {
    v14 = (void *)ReferenceDwmApiPort(v16, v15);
    v45 = v14;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v16);
  if ( WindowCompositionCornerStyle < 0 )
    goto LABEL_17;
  if ( v10 > 16 )
  {
    if ( v10 > 26 )
    {
      v36 = v10 - 27;
      if ( !v36 )
        goto LABEL_17;
      v37 = v36 - 1;
      if ( !v37 )
        goto LABEL_86;
      v38 = v37 - 1;
      if ( !v38 )
        goto LABEL_17;
      v39 = v38 - 1;
      if ( !v39 )
        goto LABEL_17;
      v40 = v39 - 3;
      if ( !v40 )
        goto LABEL_86;
      v35 = v40 - 1;
      v34 = v35 == 0;
    }
    else
    {
      if ( v10 == 26 )
        goto LABEL_17;
      v29 = v10 - 17;
      if ( !v29 )
        goto LABEL_86;
      v30 = v29 - 1;
      if ( !v30 )
        goto LABEL_17;
      v31 = v30 - 1;
      if ( !v31 )
        goto LABEL_86;
      v32 = v31 - 1;
      if ( !v32 )
        goto LABEL_17;
      v33 = v32 - 1;
      if ( !v33 )
        goto LABEL_17;
      v35 = v33 - 3;
      v34 = v35 == 0;
    }
    if ( v34 || v35 == 1 )
      goto LABEL_17;
    goto LABEL_86;
  }
  if ( v10 == 16 )
    goto LABEL_86;
  if ( v10 > 8 )
  {
    if ( v10 == 12 )
    {
      v27 = PsGetCurrentProcessWow64Process(v20, v19);
      v28 = Address[1];
      ProbeForRead(Address[1], 4uLL, v27 != 0 ? 1 : 4);
      LODWORD(Src) = *v28;
      v26 = 12;
      goto LABEL_67;
    }
LABEL_86:
    WindowCompositionCornerStyle = -1073741811;
    goto LABEL_17;
  }
  if ( v10 != 8 )
  {
    v25 = v10 - 1;
    if ( !v25 )
      goto LABEL_17;
    if ( v25 == 4 )
    {
      v26 = 5;
LABEL_67:
      WindowCompositionCornerStyle = DwmSyncGetCompositionAttribute(v14, a1, v26, &Src);
      v14 = 0LL;
      goto LABEL_17;
    }
    goto LABEL_86;
  }
  EnterLeaveCritShared::EnterLeaveCritShared(v47, 1LL);
  v21 = (struct tagRECT *)ValidateHwnd(a1);
  if ( v21 )
  {
    Src = (__int128)*WindowMargins::GetPhysicalFrameBounds((WindowMargins *)v47, v21, v23);
    WindowCompositionCornerStyle = 0;
  }
  else
  {
    WindowCompositionCornerStyle = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v22);
LABEL_17:
  DereferenceDwmApiPort(v14);
  if ( WindowCompositionCornerStyle >= 0 )
  {
    memmove((void *)Address[1], &Src, Size);
    v12 = WindowCompositionCornerStyle < 0;
    goto LABEL_5;
  }
LABEL_4:
  v11 = RtlNtStatusToDosError(WindowCompositionCornerStyle);
  UserSetLastError(v11);
  v12 = WindowCompositionCornerStyle < 0;
LABEL_5:
  LOBYTE(v4) = !v12;
  return v4;
}
