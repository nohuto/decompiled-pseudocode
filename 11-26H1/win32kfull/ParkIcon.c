/*
 * XREFs of ParkIcon @ 0x1401E63DC
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserGetWindowMinimizeRect @ 0x1402B55B0 (NtUserGetWindowMinimizeRect.c)
 * Callees:
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     InternalGetRealClientRect @ 0x1401E675C (InternalGetRealClientRect.c)
 */

__int64 __fastcall ParkIcon(const struct tagWND *a1, int *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  int v16; // r12d
  int v17; // r12d
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // r15d
  __int64 result; // rax
  const struct tagWND *v27; // rsi
  int v28; // r13d
  int v29; // r12d
  __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // [rsp+30h] [rbp-39h]
  int v37; // [rsp+34h] [rbp-35h]
  int v38; // [rsp+38h] [rbp-31h]
  int v39; // [rsp+3Ch] [rbp-2Dh]
  __int128 v40; // [rsp+40h] [rbp-29h] BYREF
  __int64 v41; // [rsp+50h] [rbp-19h] BYREF
  int v42; // [rsp+58h] [rbp-11h]
  int v43; // [rsp+5Ch] [rbp-Dh]
  int v44; // [rsp+60h] [rbp-9h]
  int v45; // [rsp+64h] [rbp-5h]
  int v46; // [rsp+68h] [rbp-1h]
  int v47; // [rsp+6Ch] [rbp+3h]
  __int64 v48; // [rsp+78h] [rbp+Fh]
  int v51; // [rsp+E0h] [rbp+77h]
  int v52; // [rsp+E8h] [rbp+7Fh]

  v41 = 0LL;
  v40 = 0LL;
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 2084LL);
  v39 = v4;
  v7 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 19904) + 2088LL);
  v44 = v7;
  if ( !IsTrayWindow(a1, 1LL) )
  {
    v48 = *((_QWORD *)a1 + 13);
    InternalGetRealClientRect(v48, (unsigned int)&v40, 1, 0, 1);
    v11 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904);
    if ( (*(_DWORD *)(v11 + 2120) & 1) != 0 )
    {
      v17 = DWORD2(v40) - v4;
      v46 = -v4;
    }
    else
    {
      v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19904);
      UserSessionState = W32GetUserSessionState(v14, v13);
      v16 = *(_DWORD *)(v12 + 2084);
      v46 = v4;
      v11 = *(_QWORD *)(UserSessionState + 19904);
      v17 = v40 + v16 - *(_DWORD *)(v11 + 2124);
    }
    LODWORD(v41) = v17;
    v18 = v17;
    v45 = v17;
    v20 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19904);
    if ( (*(_DWORD *)(v20 + 2120) & 2) != 0 )
    {
      v33 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19904);
      v37 = v7;
      v20 = (unsigned int)(*(_DWORD *)(v33 + 2088)
                         - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v35, v34) + 19904) + 2128LL));
      v52 = v20 + DWORD1(v40);
      v21 = v20 + DWORD1(v40);
      HIDWORD(v41) = v20 + DWORD1(v40);
    }
    else
    {
      v52 = HIDWORD(v40) - v7;
      v21 = HIDWORD(v40) - v7;
      v37 = -v7;
      HIDWORD(v41) = HIDWORD(v40) - v7;
    }
    v22 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19904);
    if ( (*(_DWORD *)(v22 + 2120) & 4) != 0 )
    {
      v24 = (unsigned int)(SHIDWORD(v40) >> 31);
      v36 = 0;
      LODWORD(v24) = SHIDWORD(v40) % v7;
      v23 = SHIDWORD(v40) / v7;
    }
    else
    {
      v24 = (unsigned int)(SDWORD2(v40) >> 31);
      v36 = 1;
      LODWORD(v24) = SDWORD2(v40) % v4;
      v23 = SDWORD2(v40) / v4;
    }
    v25 = v23;
    if ( v23 < 1 )
      v25 = 1;
    v38 = 0;
    v47 = v25;
    v51 = v25;
    while ( 1 )
    {
      v42 = v18 + v4;
      v43 = v21 + v44;
      result = v48;
      v27 = *(const struct tagWND **)(v48 + 112);
      if ( !v27 )
        goto LABEL_16;
      v28 = v44;
      v29 = v38;
      do
      {
        result = *((_QWORD *)v27 + 5);
        LOBYTE(v22) = *(_BYTE *)(result + 31);
        if ( (v22 & 0x10) == 0 || v27 == a1 )
          goto LABEL_14;
        if ( (v22 & 0x20) != 0 )
        {
          GetRect(v27, (__int64)&v40, 66);
        }
        else
        {
          v30 = W32GetUserSessionState(v22, v24);
          result = GetProp((__int64)v27, *(unsigned __int16 *)(v30 + 41374), 1u);
          if ( !result )
            goto LABEL_14;
          v22 = *(_DWORD *)(result + 16) & 0x11;
          if ( (*(_BYTE *)(result + 16) & 0x11) != 0x11 )
            goto LABEL_14;
          v31 = *(_DWORD *)result;
          v32 = *(_DWORD *)(result + 4);
          *(_QWORD *)&v40 = __PAIR64__(v32, v31);
          HIDWORD(v40) = v28 + v32;
          DWORD2(v40) = v39 + v31;
        }
        ++v29;
        result = IntersectRect(&v40, (int *)&v40, (int *)&v41);
        if ( (_DWORD)result )
          break;
LABEL_14:
        v27 = (const struct tagWND *)*((_QWORD *)v27 + 11);
      }
      while ( v27 );
      v38 = v29;
      if ( !v27 )
        goto LABEL_16;
      if ( --v51 )
      {
        if ( !v36 )
        {
LABEL_32:
          v21 += v37;
          goto LABEL_33;
        }
        v18 += v46;
        LODWORD(v41) = v18;
      }
      else
      {
        v51 = v47;
        if ( v36 )
        {
          v18 = v45;
          LODWORD(v41) = v45;
          goto LABEL_32;
        }
        v18 += v46;
        v21 = v52;
        LODWORD(v41) = v18;
LABEL_33:
        HIDWORD(v41) = v21;
      }
      v4 = v39;
      if ( v29 >= 5000 )
      {
LABEL_16:
        *a2 = v18;
        a2[1] = v21;
        return result;
      }
    }
  }
  result = 4294935296LL;
  *a2 = -32000;
  a2[1] = -32000;
  return result;
}
