/*
 * XREFs of NtUserGetPointerInfoList @ 0x1C0007430
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     GetPointerFrameInfoInternal @ 0x1C01E1254 (GetPointerFrameInfoInternal.c)
 *     GetPointerInfoHistoryInternal @ 0x1C01E1304 (GetPointerInfoHistoryInternal.c)
 *     GetPointerInfoInternal @ 0x1C01E1384 (GetPointerInfoInternal.c)
 */

__int64 __fastcall NtUserGetPointerInfoList(
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        _OWORD *Address)
{
  int v8; // esi
  unsigned int v11; // ebx
  __int64 v12; // r10
  int v13; // eax
  _DWORD *v14; // r15
  _DWORD *v15; // r12
  int v16; // r9d
  _OWORD *v17; // rdi
  int *v18; // rax
  __int64 v19; // r8
  int *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  __int64 CurrentProcessWow64Process; // rax
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rcx
  unsigned int PointerFrameInfoInternal; // eax
  int v31; // [rsp+40h] [rbp-A8h]
  unsigned int v32; // [rsp+44h] [rbp-A4h]
  __int64 v33; // [rsp+60h] [rbp-88h]
  int v34; // [rsp+F0h] [rbp+8h] BYREF
  int v35; // [rsp+100h] [rbp+18h]
  int v36; // [rsp+108h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v8 = a4;
  v32 = 0;
  v11 = 1;
  v12 = EnterSharedCrit(0LL, 1LL);
  v33 = v12;
  if ( !a1 || HIWORD(a1) || !a5 )
    goto LABEL_53;
  switch ( a2 )
  {
    case 1u:
      v13 = 96;
      break;
    case 2u:
      goto LABEL_44;
    case 3u:
      v13 = 120;
      break;
    case 5u:
LABEL_44:
      v13 = 144;
      break;
    default:
      v13 = 0;
      break;
  }
  if ( a5 != v13 )
    goto LABEL_53;
  v14 = (_DWORD *)a6;
  if ( !a6 )
    goto LABEL_53;
  v15 = (_DWORD *)a7;
  if ( !a7 )
    goto LABEL_53;
  v16 = v35;
  if ( v35 || v8 )
  {
    v17 = Address;
  }
  else
  {
    v17 = Address;
    if ( !Address )
      goto LABEL_53;
  }
  if ( v8 && (*(_DWORD *)(v12 + 1072) & 0x100) != 0 )
  {
    v29 = 5LL;
LABEL_54:
    v11 = 0;
    goto LABEL_55;
  }
  v18 = (int *)a6;
  if ( a6 >= W32UserProbeAddress )
    v18 = (int *)W32UserProbeAddress;
  v19 = (unsigned int)*v18;
  v34 = *v18;
  v20 = (int *)a7;
  if ( a7 >= W32UserProbeAddress )
    v20 = (int *)W32UserProbeAddress;
  v21 = (unsigned int)*v20;
  v31 = *v20;
  if ( v17 )
  {
    if ( (_DWORD)v19 )
    {
      if ( (_DWORD)v21 )
      {
        v22 = v19 * v21;
        if ( v22 <= 0xFFFFFFFF )
        {
          v23 = a5 * (unsigned __int64)(unsigned int)v22;
          if ( v23 <= 0xFFFFFFFF )
          {
            v32 = a5 * v22;
            CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
            ProbeForWrite(v17, (unsigned int)v23, CurrentProcessWow64Process != 0 ? 1 : 4);
            v8 = v36;
            v16 = v35;
            goto LABEL_23;
          }
        }
      }
    }
LABEL_53:
    v29 = 87LL;
    goto LABEL_54;
  }
LABEL_23:
  if ( a1 == 1 )
  {
    v25 = *(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1112);
    v26 = 0LL;
    if ( !v25 || (*v25 & 1) == 0 )
    {
      v11 = 0;
      v29 = 87LL;
LABEL_55:
      UserSetLastError(v29);
      goto LABEL_35;
    }
    v34 = 1;
    v31 = 1;
    if ( v17 )
    {
      v26 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1112);
      if ( (unsigned __int64)v17 >= W32UserProbeAddress )
        v17 = (_OWORD *)W32UserProbeAddress;
      *v17 = *(_OWORD *)(v26 + 24);
      v17[1] = *(_OWORD *)(v26 + 40);
      v17[2] = *(_OWORD *)(v26 + 56);
      v17[3] = *(_OWORD *)(v26 + 72);
      v17[4] = *(_OWORD *)(v26 + 88);
      v17[5] = *(_OWORD *)(v26 + 104);
    }
  }
  else
  {
    if ( v8 )
    {
      PointerFrameInfoInternal = GetPointerFrameInfoInternal(v33, (unsigned __int16)a1, a2);
    }
    else
    {
      v31 = 1;
      if ( v16 )
      {
        PointerFrameInfoInternal = GetPointerInfoHistoryInternal(v33, (unsigned __int16)a1, a2, v32, &v34, v17);
      }
      else
      {
        v34 = 1;
        PointerFrameInfoInternal = GetPointerInfoInternal(v33, (unsigned __int16)a1, a2, v32, v17);
      }
    }
    v11 = PointerFrameInfoInternal;
    if ( !PointerFrameInfoInternal )
      goto LABEL_35;
  }
  v27 = W32UserProbeAddress;
  if ( (unsigned __int64)v14 >= W32UserProbeAddress )
    v14 = (_DWORD *)W32UserProbeAddress;
  *v14 = v34;
  if ( (unsigned __int64)v15 >= W32UserProbeAddress )
    v15 = (_DWORD *)W32UserProbeAddress;
  *v15 = v31;
LABEL_35:
  UserSessionSwitchLeaveCrit(v27, v26);
  return v11;
}
