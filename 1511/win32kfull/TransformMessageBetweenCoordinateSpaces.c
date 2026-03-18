/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1C00603C0
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r13d
  int v22; // r13d
  int v23; // eax
  _DWORD *v24; // rbx
  _WORD *v25; // rbx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // [rsp+20h] [rbp-50h] BYREF
  int v30; // [rsp+24h] [rbp-4Ch]
  int v31; // [rsp+28h] [rbp-48h] BYREF
  int v32; // [rsp+2Ch] [rbp-44h]
  _QWORD *v33; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v34[2]; // [rsp+38h] [rbp-38h] BYREF
  int v35; // [rsp+40h] [rbp-30h] BYREF
  int v36; // [rsp+44h] [rbp-2Ch]
  int v37; // [rsp+48h] [rbp-28h]
  int v38; // [rsp+4Ch] [rbp-24h]
  int v39; // [rsp+50h] [rbp-20h] BYREF
  int v40; // [rsp+54h] [rbp-1Ch]
  int v41; // [rsp+58h] [rbp-18h]
  int v42; // [rsp+5Ch] [rbp-14h]

  v7 = a1;
  v33 = a3;
  v34[0] = a2;
  if ( a5 )
    CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(a5 + 16) + 376LL);
  else
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( a6 )
    v9 = *(_QWORD *)(*(_QWORD *)(a6 + 16) + 376LL);
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
  if ( v34[0] && (v7 >= 0x220 || v7 < 0x84) )
  {
    if ( v7 <= 0x220 )
    {
      switch ( v7 )
      {
        case 0x220u:
          v39 = *(_DWORD *)(v14 + 24);
          v40 = *(_DWORD *)(v14 + 28);
          v41 = *(_DWORD *)(v14 + 24) + *(_DWORD *)(v14 + 32);
          v42 = *(_DWORD *)(v14 + 36) + *(_DWORD *)(v14 + 28);
          v10 = TransformRectBetweenCoordinateSpaces(&v35, &v39, a5, a6);
          *(_DWORD *)(v14 + 24) = v35;
          *(_DWORD *)(v14 + 28) = v36;
          *(_DWORD *)(v14 + 32) = v37 - v35;
          *(_DWORD *)(v14 + 36) = v38 - v36;
LABEL_80:
          v25 = v33;
          goto LABEL_81;
        case 0x53u:
          return (unsigned int)TransformPointBetweenCoordinateSpaces(v14 + 32, v14 + 32, a5, a6);
        case 0x83u:
          v19 = *(_QWORD *)a4;
          v20 = *(_QWORD *)a4;
          if ( *v33 )
          {
            v21 = TransformRectBetweenCoordinateSpaces(v20, v19, a5, a6);
            v22 = TransformRectBetweenCoordinateSpaces(v14 + 16, v14 + 16, a5, a6) | v21;
            v23 = TransformRectBetweenCoordinateSpaces(v14 + 32, v14 + 32, a5, a6);
            v24 = *(_DWORD **)(v14 + 48);
            v39 = v24[4];
            v40 = v24[5];
            v41 = v24[4] + v24[6];
            v42 = v24[7] + v24[5];
            v10 = TransformRectBetweenCoordinateSpaces(&v35, &v39, a5, a6) | v23 | v22;
            v24[4] = v35;
            v24[5] = v36;
            v24[6] = v37 - v35;
            v24[7] = v38 - v36;
          }
          else
          {
            return (unsigned int)TransformRectBetweenCoordinateSpaces(v20, v19, a5, a6);
          }
          return v10;
      }
    }
    else
    {
      if ( v7 == 643 )
      {
        v25 = v33;
        v26 = *v33;
        if ( (unsigned __int64)(*v33 - 7LL) <= 1 )
        {
          v27 = TransformPointBetweenCoordinateSpaces(v14 + 8, v14 + 8, a5, a6);
          v28 = v14 + 16;
        }
        else
        {
          if ( (unsigned __int64)(v26 - 11) > 1 )
          {
            if ( v26 == 16 )
            {
              v31 = (__int16)v14;
              v32 = a4[1];
              v10 = TransformPointBetweenCoordinateSpaces(&v29, &v31, a5, a6);
              *a4 = v29;
              a4[1] = v30;
            }
            goto LABEL_81;
          }
          v27 = TransformPointBetweenCoordinateSpaces(v14 + 4, v14 + 4, a5, a6);
          v28 = v14 + 12;
        }
        v10 = TransformRectBetweenCoordinateSpaces(v28, v28, a5, a6) | v27;
LABEL_81:
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
            goto LABEL_85;
          case 0x210u:
            if ( v7 != 528 || *v25 != 582 )
              goto LABEL_30;
            break;
          default:
            return v10;
        }
        return v10;
      }
      if ( v7 - 833 <= 1 )
        v10 = 1;
    }
  }
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
        v31 = *a4;
        v32 = (__int16)HIWORD(*(_DWORD *)a4);
        v10 = TransformPointBetweenCoordinateSpaces(&v29, &v31, a5, a6);
LABEL_31:
        *(_QWORD *)a4 = ((unsigned __int16)v30 << 16) | (unsigned __int16)v29;
        return v10;
      }
      if ( v7 != 3 )
      {
        if ( v7 != 123 )
          return v10;
        goto LABEL_30;
      }
    }
LABEL_85:
    if ( !a5 )
      return v10;
    v31 = *a4;
    v32 = (__int16)HIWORD(*(_DWORD *)a4);
    v33 = *(_QWORD **)(a5 + 128);
    TransformPointBetweenCoordinateSpaces(v34, &v33, a6, a5);
    v31 += v34[0];
    v32 += v34[1];
    v10 = TransformPointBetweenCoordinateSpaces(&v29, &v31, a5, a6);
    v29 -= (int)v33;
    v30 -= HIDWORD(v33);
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
    goto LABEL_80;
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
