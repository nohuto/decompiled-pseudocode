/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1C0064940
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C00633C4 (_GetWindowCompositionInfo.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C0063AFC (IsTopLevelOrLayeredChildWindow.c)
 *     GetWindowEffectiveCloakState @ 0x1C0064DD0 (GetWindowEffectiveCloakState.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C0118714 (DwmSyncGetCompositionAttribute.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, unsigned __int64 a2)
{
  NTSTATUS CompositionAttribute; // ebx
  unsigned int v4; // esi
  size_t v5; // r12
  ULONG v6; // eax
  void *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  __m256i *v20; // rcx
  int v21; // eax
  bool v22; // al
  __int64 v23; // rcx
  bool v24; // sf
  ULONG v26; // eax
  bool v27; // zf
  __int64 v28; // rax
  _QWORD Src[3]; // [rsp+28h] [rbp-120h] BYREF
  size_t v30; // [rsp+40h] [rbp-108h]
  void *v31[2]; // [rsp+60h] [rbp-E8h]
  SIZE_T v32; // [rsp+70h] [rbp-D8h]
  __m256i v33; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+98h] [rbp-B0h]
  volatile void *Address[2]; // [rsp+A8h] [rbp-A0h]
  SIZE_T Length; // [rsp+B8h] [rbp-90h]
  __int128 v37; // [rsp+C0h] [rbp-88h]
  int v38[24]; // [rsp+E8h] [rbp-60h] BYREF

  CompositionAttribute = -1073741811;
  v31[0] = 0LL;
  v31[1] = 0LL;
  v32 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v30 = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( a2 + 24 < a2 || a2 + 24 > W32UserProbeAddress )
    a2 = W32UserProbeAddress;
  *(_OWORD *)Address = *(_OWORD *)a2;
  Length = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v31 = *(_OWORD *)Address;
  v32 = Length;
  if ( PsGetCurrentProcessWow64Process(W32UserProbeAddress) )
    v6 = 1;
  else
    v6 = 4;
  ProbeForWrite(Address[1], (unsigned int)Length, v6);
  if ( (unsigned int)(LODWORD(Address[0]) - 1) <= 0x15 )
  {
    v5 = qword_1C02E2368[2 * SLODWORD(Address[0])];
    v30 = v5;
    if ( (unsigned int)Length < v5 )
      CompositionAttribute = -1073741789;
    else
      CompositionAttribute = 0;
  }
  if ( CompositionAttribute < 0 )
    goto LABEL_54;
  v7 = 0LL;
  EnterSharedCrit(1LL);
  v8 = ValidateHwnd(a1);
  v13 = v8;
  if ( !v8 )
    goto LABEL_53;
  if ( LODWORD(v31[0]) == 18 )
  {
    LODWORD(Src[0]) = GetWindowEffectiveCloakState(v8);
  }
  else if ( LODWORD(v31[0]) == 21 )
  {
    LODWORD(Src[0]) = *(_BYTE *)(v8 + 290) & 0x20;
  }
  else
  {
    v14 = *(_QWORD *)(v8 + 88);
    if ( !v14 )
      goto LABEL_82;
    v15 = 0LL;
    v10 = *(_QWORD *)(v13 + 24);
    if ( v10 )
    {
      v9 = *(_QWORD *)(v10 + 8);
      if ( v9 )
        v15 = *(_QWORD *)(v9 + 16);
    }
    if ( v14 != v15 )
    {
LABEL_82:
      if ( LODWORD(v31[0]) != 20 || !IsTopLevelOrLayeredChildWindow(v13) )
        goto LABEL_53;
    }
    if ( LODWORD(v31[0]) == 1 )
    {
      if ( v14 )
      {
        v16 = 0LL;
        v10 = *(_QWORD *)(v13 + 24);
        if ( v10 )
        {
          v9 = *(_QWORD *)(v10 + 8);
          if ( v9 )
            v16 = *(_QWORD *)(v9 + 16);
        }
        if ( v14 == v16 )
          goto LABEL_26;
      }
      if ( (*(_BYTE *)(v13 + 50) & 8) != 0 && GetTopLevelWindow(v13) )
      {
LABEL_26:
        v17 = *(_QWORD *)(v13 + 168);
        if ( !v17 )
          goto LABEL_31;
        v11 = (unsigned __int16)atomDWMProp;
        if ( !atomDWMProp )
          goto LABEL_31;
        v18 = v17 + 8;
        v19 = *(_DWORD *)(v17 + 4);
        if ( !v19 )
          goto LABEL_31;
        while ( *(_WORD *)(v18 + 8) != atomDWMProp || (*(_BYTE *)(v18 + 10) & 1) == 0 )
        {
          v18 += 16LL;
          if ( !--v19 )
            goto LABEL_31;
        }
        v20 = *(__m256i **)v18;
        if ( *(_QWORD *)v18 )
        {
          v33 = *v20;
          v34 = v20[1].m256i_i64[0];
          v9 = v33.m256i_u32[1];
          v10 = v33.m256i_u32[0];
        }
        else
        {
LABEL_31:
          v10 = v33.m256i_i32[0] & 0xFFFFE000;
          v33.m256i_i64[0] = v10;
          v9 = 0LL;
          v37 = 0uLL;
          memset(&v33.m256i_u64[1], 0, 24);
          v34 = 0LL;
        }
        v21 = *(_DWORD *)(v13 + 48);
        if ( ((v21 & 0x80000) == 0 || (v21 & 0x20000000) != 0) && (v10 & 1) == 0 )
        {
          if ( (_DWORD)v9 )
          {
            if ( (_DWORD)v9 == 2 )
              LODWORD(v7) = 1;
          }
          else
          {
            v10 = *(unsigned __int8 *)(v13 + 54);
            v22 = (v10 & 0xC0) != 0xC0;
            LOBYTE(v10) = ~((unsigned __int8)v10 >> 2);
            if ( ((unsigned __int8)v10 & v22 & 1) == 0 )
              LODWORD(v7) = 1;
          }
        }
      }
      LODWORD(Src[0]) = (_DWORD)v7;
    }
    else if ( LODWORD(v31[0]) == 20 )
    {
      LODWORD(Src[0]) = (unsigned int)GetWindowCompositionInfo(v13, (__int64)v38) && (v38[0] & 0x1000) != 0;
    }
    else if ( !(unsigned int)IsWindowDesktopComposed(v13) )
    {
LABEL_53:
      CompositionAttribute = -1073741816;
      goto LABEL_43;
    }
  }
  v7 = (void *)ReferenceDwmApiPort(v10, v9, v11, v12);
LABEL_43:
  UserSessionSwitchLeaveCrit(v10, v9);
  if ( CompositionAttribute >= 0 && LODWORD(v31[0]) != 1 )
  {
    switch ( LODWORD(v31[0]) )
    {
      case 5:
      case 8:
        goto LABEL_49;
      case 0xC:
        v27 = PsGetCurrentProcessWow64Process(v23) == 0;
        v28 = 4LL;
        if ( !v27 )
          v28 = 1LL;
        if ( ((v28 - 1) & (__int64)v31[1]) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)v31[1] + 4 > W32UserProbeAddress || (char *)v31[1] + 4 < v31[1] )
          *W32UserProbeAddress = 0;
        LODWORD(Src[0]) = *(_DWORD *)v31[1];
LABEL_49:
        CompositionAttribute = DwmSyncGetCompositionAttribute(v7);
        v7 = 0LL;
        break;
      case 0x12:
      case 0x14:
      case 0x15:
        break;
      default:
        CompositionAttribute = -1073741811;
        break;
    }
  }
  DereferenceDwmApiPort(v7);
  if ( CompositionAttribute < 0 )
  {
LABEL_54:
    v26 = RtlNtStatusToDosError(CompositionAttribute);
    UserSetLastError(v26);
    v24 = CompositionAttribute < 0;
    goto LABEL_47;
  }
  memmove(v31[1], Src, v5);
  v24 = CompositionAttribute < 0;
LABEL_47:
  LOBYTE(v4) = !v24;
  return v4;
}
