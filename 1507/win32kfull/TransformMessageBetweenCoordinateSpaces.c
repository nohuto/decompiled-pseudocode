/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C0070A00
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        int a2,
        _QWORD *a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // r15d
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v9; // rbx
  unsigned int v10; // r13d
  int v11; // eax
  int v12; // edx
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned int v18; // r13d
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r13d
  int v24; // r13d
  int v25; // eax
  _DWORD *v26; // rbx
  _WORD *v27; // rbx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // [rsp+20h] [rbp-50h] BYREF
  int v32; // [rsp+24h] [rbp-4Ch]
  int v33; // [rsp+28h] [rbp-48h] BYREF
  int v34; // [rsp+2Ch] [rbp-44h]
  _QWORD *v35; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v36[2]; // [rsp+38h] [rbp-38h] BYREF
  int v37; // [rsp+40h] [rbp-30h] BYREF
  int v38; // [rsp+44h] [rbp-2Ch]
  int v39; // [rsp+48h] [rbp-28h]
  int v40; // [rsp+4Ch] [rbp-24h]
  int v41; // [rsp+50h] [rbp-20h] BYREF
  int v42; // [rsp+54h] [rbp-1Ch]
  int v43; // [rsp+58h] [rbp-18h]
  int v44; // [rsp+5Ch] [rbp-14h]

  v7 = a1;
  v35 = a3;
  v36[0] = a2;
  if ( a5 )
    CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(a5 + 16) + 384LL);
  else
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( a6 )
    v9 = *(_QWORD *)(*(_QWORD *)(a6 + 16) + 384LL);
  else
    v9 = PsGetCurrentProcessWin32Process(a1);
  v10 = 0;
  if ( !CurrentProcessWin32Process )
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( !v9 )
    v9 = PsGetCurrentProcessWin32Process(a1);
  v11 = *(_DWORD *)(v9 + 776);
  v12 = *(_DWORD *)(CurrentProcessWin32Process + 776);
  if ( ((v12 ^ v11) & 0x4000) == 0 && (((unsigned __int16)v12 ^ (unsigned __int16)v11) & 0x2000) == 0 )
    return 0LL;
  v14 = *(_QWORD *)a4;
  if ( v7 > 0x342 || v7 < 0x53 && v7 >= 4 )
    return 0LL;
  if ( v7 > 0x20E )
  {
    if ( v7 > 0x252 )
    {
      switch ( v7 )
      {
        case 0x283u:
        case 0x2A0u:
        case 0x2A1u:
        case 0x313u:
        case 0x33Fu:
        case 0x341u:
        case 0x342u:
          goto LABEL_26;
        default:
          return 0LL;
      }
    }
    if ( v7 < 0x251 )
    {
      switch ( v7 )
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
          break;
        default:
          return 0LL;
      }
    }
  }
  else
  {
    if ( v7 >= 0x200 )
      goto LABEL_26;
    if ( v7 > 0x84 )
    {
      if ( v7 >= 0xA0 && (v7 <= 0xA9 || v7 > 0xAA && (v7 <= 0xAD || v7 == 274 && (unsigned int)WORD1(v14) + 1 > 1)) )
        goto LABEL_26;
      return 0LL;
    }
    if ( v7 < 0x83 && v7 != 3 && v7 != 83 && v7 != 123 )
      return 0LL;
  }
LABEL_26:
  if ( !v36[0] || v7 < 0x220 && v7 >= 0x84 )
    goto LABEL_29;
  if ( v7 > 0x220 )
  {
    if ( v7 == 643 )
    {
      v27 = v35;
      v28 = *v35;
      if ( (unsigned __int64)(*v35 - 7LL) <= 1 )
      {
        v29 = TransformPointBetweenCoordinateSpaces(v14 + 8, v14 + 8, a5, a6);
        v30 = v14 + 16;
      }
      else
      {
        if ( (unsigned __int64)(v28 - 11) > 1 )
        {
          if ( v28 == 16 )
          {
            v33 = (__int16)v14;
            v34 = a4[1];
            v10 = TransformPointBetweenCoordinateSpaces(&v31, &v33, a5, a6);
            *a4 = v31;
            a4[1] = v32;
          }
          goto LABEL_85;
        }
        v29 = TransformPointBetweenCoordinateSpaces(v14 + 4, v14 + 4, a5, a6);
        v30 = v14 + 12;
      }
      v10 = TransformRectBetweenCoordinateSpaces(v30, v30, a5, a6) | v29;
LABEL_85:
      switch ( v7 )
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
          goto LABEL_30;
        case 0x20Bu:
        case 0x20Cu:
        case 0x20Du:
        case 0x2A1u:
          goto LABEL_89;
        case 0x210u:
          if ( v7 != 528 || *v27 != 582 )
            goto LABEL_30;
          break;
        default:
          return v10;
      }
      return v10;
    }
    if ( v7 == 833 )
      return 1;
    if ( v7 != 834 )
      goto LABEL_29;
    if ( *(_DWORD *)(v14 + 8) )
      return 1;
    v22 = v14 + 24;
    v19 = a6;
    v21 = v14 + 24;
    v20 = a5;
    return (unsigned int)TransformRectBetweenCoordinateSpaces(v22, v21, v20, v19);
  }
  switch ( v7 )
  {
    case 0x220u:
      v41 = *(_DWORD *)(v14 + 24);
      v42 = *(_DWORD *)(v14 + 28);
      v43 = *(_DWORD *)(v14 + 24) + *(_DWORD *)(v14 + 32);
      v44 = *(_DWORD *)(v14 + 36) + *(_DWORD *)(v14 + 28);
      v10 = TransformRectBetweenCoordinateSpaces(&v37, &v41, a5, a6);
      *(_DWORD *)(v14 + 24) = v37;
      *(_DWORD *)(v14 + 28) = v38;
      *(_DWORD *)(v14 + 32) = v39 - v37;
      *(_DWORD *)(v14 + 36) = v40 - v38;
LABEL_84:
      v27 = v35;
      goto LABEL_85;
    case 0x53u:
      return (unsigned int)TransformPointBetweenCoordinateSpaces(v14 + 32, v14 + 32, a5, a6);
    case 0x83u:
      v19 = a6;
      v20 = a5;
      v21 = *(_QWORD *)a4;
      v22 = *(_QWORD *)a4;
      if ( *v35 )
      {
        v23 = TransformRectBetweenCoordinateSpaces(v22, v21, a5, a6);
        v24 = TransformRectBetweenCoordinateSpaces(v14 + 16, v14 + 16, a5, a6) | v23;
        v25 = TransformRectBetweenCoordinateSpaces(v14 + 32, v14 + 32, a5, a6);
        v26 = *(_DWORD **)(v14 + 48);
        v41 = v26[4];
        v42 = v26[5];
        v43 = v26[4] + v26[6];
        v44 = v26[7] + v26[5];
        v10 = TransformRectBetweenCoordinateSpaces(&v37, &v41, a5, a6) | v25 | v24;
        v26[4] = v37;
        v26[5] = v38;
        v26[6] = v39 - v37;
        v26[7] = v40 - v38;
        return v10;
      }
      return (unsigned int)TransformRectBetweenCoordinateSpaces(v22, v21, v20, v19);
  }
LABEL_29:
  if ( v7 == 132 )
    goto LABEL_30;
  if ( v7 <= 0x209 )
  {
    if ( v7 < 0x200 )
    {
      if ( v7 > 0xA9 )
      {
        if ( v7 > 0xAD && (unsigned int)(unsigned __int16)a4[1] + 1 <= 1 )
          return v10;
        goto LABEL_30;
      }
      if ( v7 >= 0xA0 )
      {
LABEL_30:
        v33 = *a4;
        v34 = (__int16)HIWORD(*(_DWORD *)a4);
        v10 = TransformPointBetweenCoordinateSpaces(&v31, &v33, a5, a6);
LABEL_31:
        *(_QWORD *)a4 = ((unsigned __int16)v32 << 16) | (unsigned __int16)v31;
        return v10;
      }
      if ( v7 != 3 )
      {
        if ( v7 != 123 )
          return v10;
        goto LABEL_30;
      }
    }
LABEL_89:
    if ( !a5 )
      return v10;
    v33 = *a4;
    v34 = (__int16)HIWORD(*(_DWORD *)a4);
    v35 = *(_QWORD **)(a5 + 128);
    TransformPointBetweenCoordinateSpaces(v36, &v35, a6, a5);
    v33 += v36[0];
    v34 += v36[1];
    v10 = TransformPointBetweenCoordinateSpaces(&v31, &v33, a5, a6);
    v31 -= (int)v35;
    v32 -= HIDWORD(v35);
    goto LABEL_31;
  }
  if ( v7 <= 0x313 )
  {
    if ( v7 == 787 )
    {
      if ( *(_QWORD *)a4 == 0xFFFFFFFFLL )
        return v10;
      goto LABEL_30;
    }
    goto LABEL_84;
  }
  if ( v7 != 831 || !a6 || !v14 )
    return v10;
  v15 = TransformRectBetweenCoordinateSpaces(v14 + 4, v14 + 4, a5, a6);
  v16 = v14 + 44;
  v17 = 6LL;
  v18 = v15;
  do
  {
    v18 |= TransformRectBetweenCoordinateSpaces(v16, v16, a5, a6);
    v16 += 16LL;
    --v17;
  }
  while ( v17 );
  return v18;
}
