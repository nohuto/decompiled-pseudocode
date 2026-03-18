/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C00837D0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int16 *a4,
        _DWORD *a5,
        __int64 a6)
{
  int v7; // ebx
  unsigned int v8; // r13d
  int v9; // r14d
  int v10; // edi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // r14
  unsigned int v18; // edi
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r14
  unsigned int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  int v27; // edi
  int v28; // eax
  _DWORD *v29; // rbx
  _WORD *v30; // rbx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-60h] BYREF
  int v35; // [rsp+24h] [rbp-5Ch]
  int v36; // [rsp+28h] [rbp-58h] BYREF
  int v37; // [rsp+2Ch] [rbp-54h]
  int v38; // [rsp+30h] [rbp-50h]
  _QWORD *v39; // [rsp+38h] [rbp-48h]
  int v40; // [rsp+40h] [rbp-40h] BYREF
  int v41; // [rsp+44h] [rbp-3Ch]
  _DWORD v42[2]; // [rsp+48h] [rbp-38h] BYREF
  int v43; // [rsp+50h] [rbp-30h] BYREF
  int v44; // [rsp+54h] [rbp-2Ch]
  int v45; // [rsp+58h] [rbp-28h]
  int v46; // [rsp+5Ch] [rbp-24h]
  int v47; // [rsp+60h] [rbp-20h] BYREF
  int v48; // [rsp+64h] [rbp-1Ch]
  int v49; // [rsp+68h] [rbp-18h]
  int v50; // [rsp+6Ch] [rbp-14h]

  v7 = a2;
  v39 = a3;
  v8 = a1;
  v38 = a2;
  if ( a5 )
    v9 = a5[88];
  else
    LOBYTE(v9) = W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3);
  if ( a6 )
  {
    v10 = *(_DWORD *)(a6 + 352);
    goto LABEL_11;
  }
  LOBYTE(v10) = 18;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
  {
    v14 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v14 + 352) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( !*(_DWORD *)(v14 + 340) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v12);
        v7 = v38;
        if ( CurrentProcessWin32Process )
          v10 = *(_DWORD *)(CurrentProcessWin32Process + 280);
        goto LABEL_11;
      }
      LOBYTE(v10) = *(_DWORD *)(v14 + 340);
    }
    v7 = v38;
  }
LABEL_11:
  if ( (((unsigned __int8)v9 ^ (unsigned __int8)v10) & 0xF) == 0 )
    return 0LL;
  v17 = *(_QWORD *)a4;
  if ( v8 > 0x342 || v8 < 0x53 && v8 >= 4 )
    return 0LL;
  if ( v8 > 0x20E )
  {
    if ( v8 <= 0x313 )
    {
      if ( v8 != 787 )
      {
        switch ( v8 )
        {
          case 0x210u:
          case 0x220u:
          case 0x241u:
          case 0x242u:
          case 0x243u:
          case 0x245u:
          case 0x246u:
          case 0x247u:
          case 0x249u:
          case 0x24Au:
          case 0x24Eu:
          case 0x24Fu:
          case 0x251u:
          case 0x252u:
          case 0x283u:
          case 0x2A0u:
          case 0x2A1u:
          case 0x2F2u:
          case 0x2F3u:
          case 0x2F4u:
            break;
          default:
            return 0LL;
        }
      }
    }
    else if ( v8 <= 0x340 && v8 != 831 )
    {
      return 0LL;
    }
  }
  else
  {
    if ( v8 >= 0x200 )
      goto LABEL_29;
    if ( v8 > 0x84 )
    {
      if ( v8 >= 0xA0 && (v8 <= 0xA9 || v8 > 0xAA && (v8 <= 0xAD || v8 == 274 && (unsigned int)WORD1(v17) + 1 > 1)) )
        goto LABEL_29;
      return 0LL;
    }
    if ( v8 < 0x83 && v8 != 3 && v8 != 83 && v8 != 123 )
      return 0LL;
  }
LABEL_29:
  if ( !v7 || v8 < 0x220 && v8 >= 0x84 )
    goto LABEL_32;
  if ( v8 <= 0x220 )
  {
    if ( v8 == 544 )
    {
      v47 = *(_DWORD *)(v17 + 24);
      v48 = *(_DWORD *)(v17 + 28);
      v49 = *(_DWORD *)(v17 + 32) + *(_DWORD *)(v17 + 24);
      v50 = *(_DWORD *)(v17 + 36) + *(_DWORD *)(v17 + 28);
      v18 = TransformRectBetweenCoordinateSpaces(&v43, &v47, a5, a6);
      *(_DWORD *)(v17 + 24) = v43;
      *(_DWORD *)(v17 + 28) = v44;
      *(_DWORD *)(v17 + 32) = v45 - v43;
      *(_DWORD *)(v17 + 36) = v46 - v44;
LABEL_70:
      v30 = v39;
      goto LABEL_71;
    }
    if ( v8 >= 0x46 )
    {
      if ( v8 == 83 )
        return (unsigned int)TransformPointBetweenCoordinateSpaces(v17 + 32, v17 + 32, a5, a6);
      if ( v8 == 131 )
      {
        v24 = *(_QWORD *)a4;
        v25 = *(_QWORD *)a4;
        if ( *v39 )
        {
          v26 = TransformRectBetweenCoordinateSpaces(v25, v24, a5, a6);
          v27 = TransformRectBetweenCoordinateSpaces(v17 + 16, v17 + 16, a5, a6) | v26;
          v28 = TransformRectBetweenCoordinateSpaces(v17 + 32, v17 + 32, a5, a6);
          v29 = *(_DWORD **)(v17 + 48);
          v47 = v29[4];
          v48 = v29[5];
          v49 = v29[6] + v29[4];
          v50 = v29[7] + v29[5];
          v18 = TransformRectBetweenCoordinateSpaces(&v43, &v47, a5, a6) | v28 | v27;
          v29[4] = v43;
          v29[5] = v44;
          v29[6] = v45 - v43;
          v29[7] = v46 - v44;
        }
        else
        {
          return (unsigned int)TransformRectBetweenCoordinateSpaces(v25, v24, a5, a6);
        }
        return v18;
      }
    }
    goto LABEL_32;
  }
  if ( v8 == 643 )
  {
    v30 = v39;
    v31 = *v39;
    if ( (unsigned __int64)(*v39 - 7LL) <= 1 )
    {
      v32 = TransformPointBetweenCoordinateSpaces(v17 + 8, v17 + 8, a5, a6);
      v33 = v17 + 16;
    }
    else
    {
      if ( (unsigned __int64)(v31 - 11) > 1 )
      {
        if ( v31 == 16 )
        {
          v34 = (__int16)v17;
          v35 = a4[1];
          v18 = TransformPointBetweenCoordinateSpaces(&v36, &v34, a5, a6);
          *a4 = v36;
          a4[1] = v37;
        }
        else
        {
          v18 = 0;
        }
LABEL_71:
        switch ( v8 )
        {
          case 0x20Au:
          case 0x20Eu:
          case 0x241u:
          case 0x242u:
          case 0x243u:
          case 0x245u:
          case 0x246u:
          case 0x247u:
          case 0x249u:
          case 0x24Au:
          case 0x24Eu:
          case 0x24Fu:
          case 0x251u:
          case 0x252u:
          case 0x2A0u:
          case 0x2F2u:
          case 0x2F3u:
          case 0x2F4u:
            goto LABEL_34;
          case 0x20Bu:
          case 0x20Cu:
          case 0x20Du:
          case 0x2A1u:
            goto LABEL_95;
          case 0x210u:
            if ( v8 != 528 || *v30 != 582 )
              goto LABEL_34;
            break;
          default:
            return v18;
        }
        return v18;
      }
      v32 = TransformPointBetweenCoordinateSpaces(v17 + 4, v17 + 4, a5, a6);
      v33 = v17 + 12;
    }
    v18 = TransformRectBetweenCoordinateSpaces(v33, v33, a5, a6) | v32;
    goto LABEL_71;
  }
  if ( v8 - 833 > 1 )
  {
LABEL_32:
    v18 = 0;
    goto LABEL_33;
  }
  v18 = 1;
LABEL_33:
  if ( v8 == 132 )
    goto LABEL_34;
  if ( v8 <= 0x209 )
  {
    if ( v8 < 0x200 )
    {
      if ( v8 > 0xA9 )
      {
        if ( v8 > 0xAD && (unsigned int)(unsigned __int16)a4[1] + 1 <= 1 )
          return v18;
        goto LABEL_34;
      }
      if ( v8 >= 0xA0 )
      {
LABEL_34:
        v34 = *a4;
        v35 = (__int16)HIWORD(*(_DWORD *)a4);
        v18 = TransformPointBetweenCoordinateSpaces(&v36, &v34, a5, a6);
LABEL_35:
        *(_QWORD *)a4 = ((unsigned __int16)v37 << 16) | (unsigned __int16)v36;
        return v18;
      }
      if ( v8 != 3 )
      {
        if ( v8 != 123 )
          return v18;
        goto LABEL_34;
      }
    }
LABEL_95:
    if ( !a5 )
      return v18;
    v34 = *a4;
    v35 = (__int16)HIWORD(*(_DWORD *)a4);
    v40 = a5[32];
    v41 = a5[33];
    TransformPointBetweenCoordinateSpaces(v42, &v40, a6, a5);
    v34 += v42[0];
    v35 += v42[1];
    v18 = TransformPointBetweenCoordinateSpaces(&v36, &v34, a5, a6);
    v36 -= v40;
    v37 -= v41;
    goto LABEL_35;
  }
  if ( v8 <= 0x313 )
  {
    if ( v8 == 787 )
    {
      if ( *(_QWORD *)a4 == 0xFFFFFFFFLL )
        return v18;
      goto LABEL_34;
    }
    goto LABEL_70;
  }
  if ( v8 != 831 )
    return v18;
  if ( !a6 )
    return v18;
  v19 = *(_QWORD *)a4;
  if ( !*(_QWORD *)a4 )
    return v18;
  v20 = TransformRectBetweenCoordinateSpaces(v19 + 4, v19 + 4, a5, a6);
  v21 = v19 + 44;
  v22 = 6LL;
  v23 = v20;
  do
  {
    v23 |= TransformRectBetweenCoordinateSpaces(v21, v21, a5, a6);
    v21 += 16LL;
    --v22;
  }
  while ( v22 );
  return v23;
}
