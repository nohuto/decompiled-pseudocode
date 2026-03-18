/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C0078810
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00725BC (IsTopLevelOrLayeredChildWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     GetWindowEffectiveCloakState @ 0x1C0078CC8 (GetWindowEffectiveCloakState.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C014A140 (DwmSyncGetCompositionAttribute.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, __m128i *a2)
{
  NTSTATUS CompositionAttribute; // edi
  __int64 v4; // rbx
  __int8 *v5; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v7; // ecx
  void *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rcx
  int v18; // r13d
  int v19; // eax
  __int64 v21; // rax
  bool v22; // zf
  __m256i *v23; // rax
  BOOL v24; // eax
  __int64 v25; // rcx
  bool v26; // sf
  int WindowEffectiveCloakState; // eax
  ULONG v29; // eax
  __int64 TopLevelWindow; // rax
  _QWORD Src[4]; // [rsp+28h] [rbp-140h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-110h]
  void *v33[2]; // [rsp+60h] [rbp-108h]
  SIZE_T v34; // [rsp+70h] [rbp-F8h]
  void *v35; // [rsp+78h] [rbp-F0h]
  __m256i v36; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-C8h]
  __int128 v38; // [rsp+B0h] [rbp-B8h]
  __int64 v39; // [rsp+C8h] [rbp-A0h]
  __m128i v40; // [rsp+E0h] [rbp-88h]
  SIZE_T Length; // [rsp+F0h] [rbp-78h]
  int v42[10]; // [rsp+F8h] [rbp-70h] BYREF
  unsigned __int64 Size; // [rsp+188h] [rbp+20h]

  CompositionAttribute = -1073741811;
  v33[0] = 0LL;
  v33[1] = 0LL;
  v34 = 0LL;
  v4 = 0LL;
  Size = 0LL;
  v32 = 0LL;
  memset(Src, 0, 24);
  v5 = &a2[1].m128i_i8[8];
  if ( &a2[1].m128i_u64[1] < (unsigned __int64 *)a2 || (unsigned __int64)v5 > W32UserProbeAddress )
    a2 = (__m128i *)W32UserProbeAddress;
  v40 = *a2;
  Length = a2[1].m128i_u64[0];
  *(__m128i *)v33 = v40;
  v34 = Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
  ProbeForWrite(
    (volatile void *)_mm_srli_si128(v40, 8).m128i_i64[0],
    (unsigned int)Length,
    CurrentProcessWow64Process != 0 ? 1 : 4);
  v7 = _mm_cvtsi128_si32(v40);
  if ( (unsigned int)(v7 - 1) <= 0x15 )
  {
    Size = qword_1C02E8588[2 * v7];
    v32 = Size;
    CompositionAttribute = (unsigned int)Length < Size ? 0xC0000023 : 0;
  }
  if ( CompositionAttribute < 0 )
    goto LABEL_61;
  v8 = 0LL;
  v35 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v14 = v9;
  if ( v9 )
  {
    if ( LODWORD(v33[0]) == 18 )
    {
      WindowEffectiveCloakState = GetWindowEffectiveCloakState(v9);
    }
    else if ( LODWORD(v33[0]) == 21 )
    {
      WindowEffectiveCloakState = *(_BYTE *)(v9 + 290) & 0x20;
    }
    else
    {
      v15 = 0;
      v16 = *(_QWORD *)(v14 + 88);
      if ( v16 )
      {
        v12 = 0LL;
        v17 = *(_QWORD *)(v14 + 24);
        if ( v17 )
        {
          v10 = *(_QWORD *)(v17 + 8);
          if ( v10 )
            v12 = *(_QWORD *)(v10 + 16);
        }
        v11 = 1LL;
        if ( v16 == v12 )
          v15 = 1;
      }
      if ( !v15 && (LODWORD(v33[0]) != 20 || !IsTopLevelOrLayeredChildWindow(v14)) )
      {
        CompositionAttribute = -1073741816;
        goto LABEL_49;
      }
      if ( LODWORD(v33[0]) == 1 )
      {
        v18 = 0;
        v13 = 0LL;
        v19 = 0;
        if ( v16 )
        {
          v12 = 0LL;
          v11 = *(_QWORD *)(v14 + 24);
          if ( v11 )
          {
            v10 = *(_QWORD *)(v11 + 8);
            if ( v10 )
              v12 = *(_QWORD *)(v10 + 16);
          }
          if ( v16 == v12 )
            v19 = 1;
        }
        if ( v19
          || (*(_BYTE *)(v14 + 50) & 8) != 0 && (TopLevelWindow = GetTopLevelWindow(v14), v13 = 0LL, TopLevelWindow) )
        {
          v21 = *(_QWORD *)(v14 + 168);
          if ( !v21 )
            goto LABEL_62;
          v12 = (unsigned __int16)atomDWMProp;
          if ( !atomDWMProp )
            goto LABEL_62;
          v11 = v21 + 8;
          v10 = *(unsigned int *)(v21 + 4);
          if ( (_DWORD)v10 )
          {
            while ( *(_WORD *)(v11 + 8) != atomDWMProp || (*(_BYTE *)(v11 + 10) & 1) == 0 )
            {
              v11 += 16LL;
              v22 = (_DWORD)v10 == 1;
              v10 = (unsigned int)(v10 - 1);
              if ( v22 )
                goto LABEL_32;
            }
          }
          else
          {
LABEL_32:
            v11 = 0LL;
          }
          if ( v11 && (v23 = *(__m256i **)v11) != 0LL )
          {
            v36 = *v23;
            v37 = v23[1].m256i_i64[0];
          }
          else
          {
LABEL_62:
            v36.m256i_i64[0] = v36.m256i_i32[0] & 0xFFFFE000;
            v38 = 0uLL;
            memset(&v36.m256i_u64[1], 0, 24);
            v39 = 0LL;
            v37 = 0LL;
          }
          v13 = 1LL;
        }
        if ( (_DWORD)v13 )
        {
          v24 = 0;
          v11 = *(unsigned int *)(v14 + 48);
          if ( (v11 & 0x80000) != 0 )
            v24 = (v11 & 0x20000000) == 0;
          if ( !v24 && (v36.m256i_i8[0] & 1) == 0 )
          {
            if ( v36.m256i_i32[1] )
            {
              if ( v36.m256i_i32[1] == 2 )
                v18 = 1;
            }
            else
            {
              LOBYTE(v11) = ~(*(_BYTE *)(v14 + 54) >> 2);
              if ( ((unsigned __int8)v11 & ((*(_BYTE *)(v14 + 54) & 0xC0) != 0xC0)) == 0 )
                v18 = 1;
            }
          }
        }
        LODWORD(Src[0]) = v18;
        goto LABEL_47;
      }
      if ( LODWORD(v33[0]) != 20 )
      {
        if ( (unsigned int)IsWindowDesktopComposed(v14) )
          goto LABEL_47;
        goto LABEL_87;
      }
      if ( !(unsigned int)GetWindowCompositionInfo(v14, (__int64)v42) || (v42[0] & 0x1000) == 0 )
      {
        LODWORD(Src[0]) = 0;
        goto LABEL_47;
      }
      WindowEffectiveCloakState = 1;
    }
    LODWORD(Src[0]) = WindowEffectiveCloakState;
    goto LABEL_47;
  }
LABEL_87:
  CompositionAttribute = -1073741816;
LABEL_47:
  if ( CompositionAttribute >= 0 )
  {
    v8 = (void *)ReferenceDwmApiPort(v11, v10, v12, v13);
    v35 = v8;
  }
LABEL_49:
  UserSessionSwitchLeaveCrit(v11, v10);
  if ( CompositionAttribute < 0 || LODWORD(v33[0]) == 1 )
    goto LABEL_51;
  switch ( LODWORD(v33[0]) )
  {
    case 5:
      goto LABEL_66;
    case 0x12:
      goto LABEL_51;
    case 8:
LABEL_66:
      CompositionAttribute = DwmSyncGetCompositionAttribute(v8);
      v8 = 0LL;
      goto LABEL_51;
    case 0xC:
      if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v25) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & (unsigned __int64)v33[1]) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)v33[1] + 4 > W32UserProbeAddress || (char *)v33[1] + 4 < v33[1] )
        *W32UserProbeAddress = 0;
      LODWORD(Src[0]) = *(_DWORD *)v33[1];
      goto LABEL_66;
  }
  if ( SLODWORD(v33[0]) <= 19 || SLODWORD(v33[0]) > 21 )
    CompositionAttribute = -1073741811;
LABEL_51:
  DereferenceDwmApiPort(v8);
  if ( CompositionAttribute < 0 )
  {
LABEL_61:
    v29 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v29);
    v26 = CompositionAttribute < 0;
    goto LABEL_53;
  }
  memmove(v33[1], Src, Size);
  v26 = CompositionAttribute < 0;
LABEL_53:
  LOBYTE(v4) = !v26;
  return v4;
}
