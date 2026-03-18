/*
 * XREFs of TransformMessageBetweenCoordinateSpaces @ 0x1401550A0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 * Callees:
 *     IsPointerParentNotify @ 0x140137BE0 (IsPointerParentNotify.c)
 *     ?DoesMsgNeedDPITransform@@YA_NI_K_J@Z @ 0x1401556B8 (-DoesMsgNeedDPITransform@@YA_NI_K_J@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall TransformMessageBetweenCoordinateSpaces(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v6; // r13d
  unsigned int v9; // r15d
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  unsigned int v11; // eax
  __int64 result; // rax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ebx
  int v21; // edi
  int v22; // ebx
  __int64 v23; // rdi
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // [rsp+20h] [rbp-50h] BYREF
  __int64 v29; // [rsp+28h] [rbp-48h] BYREF
  int v30; // [rsp+30h] [rbp-40h] BYREF
  int v31; // [rsp+34h] [rbp-3Ch]
  __int64 v32; // [rsp+38h] [rbp-38h] BYREF
  __int128 v33; // [rsp+40h] [rbp-30h] BYREF
  __int128 v34; // [rsp+50h] [rbp-20h] BYREF

  v6 = 0;
  v30 = a2;
  v9 = a1;
  if ( a5 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a5 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( a6 )
    v11 = *(_DWORD *)(*(_QWORD *)(a6 + 40) + 288LL);
  else
    v11 = W32GetCurrentThreadDpiAwarenessContext(a1);
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v11 >> 8)) & 0x1FF) == 0 )
    return 0LL;
  v13 = *(_QWORD *)a4;
  v32 = *(_QWORD *)a4;
  if ( !DoesMsgNeedDPITransform(v9, a2, v32) )
    return 0LL;
  v34 = 0LL;
  v28 = 0LL;
  v33 = 0LL;
  v29 = 0LL;
  if ( v30 )
  {
    if ( v9 == 833 )
    {
LABEL_23:
      v6 = 1;
      goto LABEL_14;
    }
    if ( v9 <= 0x83 )
    {
      switch ( v9 )
      {
        case 0x83u:
          if ( *a3 )
          {
            v20 = TransformRectBetweenCoordinateSpaces(v13, v13, a5, a6);
            v21 = v20 | TransformRectBetweenCoordinateSpaces(v32 + 16, v32 + 16, a5, a6);
            v22 = v21 | TransformRectBetweenCoordinateSpaces(v32 + 32, v32 + 32, a5, a6);
            v23 = *(_QWORD *)(v32 + 48);
            *(_QWORD *)&v34 = *(_QWORD *)(v23 + 16);
            DWORD2(v34) = *(_DWORD *)(v23 + 24) + *(_DWORD *)(v23 + 16);
            HIDWORD(v34) = *(_DWORD *)(v23 + 28) + *(_DWORD *)(v23 + 20);
            v24 = TransformRectBetweenCoordinateSpaces(&v33, &v34, a5, a6);
            *(_DWORD *)(v23 + 16) = v33;
            v6 = v22 | v24;
            *(_DWORD *)(v23 + 20) = DWORD1(v33);
            *(_DWORD *)(v23 + 24) = DWORD2(v33) - v33;
            *(_DWORD *)(v23 + 28) = HIDWORD(v33) - DWORD1(v33);
          }
          else
          {
            v6 = TransformRectBetweenCoordinateSpaces(v13, v13, a5, a6);
          }
          v14 = 128;
LABEL_22:
          switch ( v14 )
          {
            case 0:
              goto LABEL_33;
            case 120:
            case 129:
            case 157:
            case 158:
            case 159:
            case 160:
            case 161:
            case 162:
            case 163:
            case 164:
            case 165:
            case 166:
            case 168:
            case 169:
            case 170:
              goto LABEL_24;
            default:
              return v6;
          }
        case 0x46u:
        case 0x47u:
          *(_QWORD *)&v34 = *(_QWORD *)(v13 + 16);
          DWORD2(v34) = *(_DWORD *)(v13 + 24) + *(_DWORD *)(v13 + 16);
          HIDWORD(v34) = *(_DWORD *)(v13 + 28) + *(_DWORD *)(v13 + 20);
          v6 = TransformRectBetweenCoordinateSpaces(&v33, &v34, a5, a6);
          *(_QWORD *)(v13 + 16) = v33;
          *(_DWORD *)(v13 + 24) = DWORD2(v33) - v33;
          *(_DWORD *)(v13 + 28) = HIDWORD(v33) - DWORD1(v33);
          break;
        case 0x53u:
          v6 = TransformPointBetweenCoordinateSpaces(v13 + 32, v13 + 32, a5, a6);
          v14 = 80;
          goto LABEL_22;
      }
LABEL_21:
      v14 = v9 - 3;
      goto LABEL_22;
    }
    switch ( v9 )
    {
      case 0x220u:
        *(_QWORD *)&v34 = *(_QWORD *)(v13 + 24);
        DWORD2(v34) = *(_DWORD *)(v13 + 24) + *(_DWORD *)(v13 + 32);
        HIDWORD(v34) = *(_DWORD *)(v13 + 28) + *(_DWORD *)(v13 + 36);
        v6 = TransformRectBetweenCoordinateSpaces(&v33, &v34, a5, a6);
        *(_QWORD *)(v13 + 24) = v33;
        *(_DWORD *)(v13 + 32) = DWORD2(v33) - v33;
        *(_DWORD *)(v13 + 36) = HIDWORD(v33) - DWORD1(v33);
        break;
      case 0x283u:
        v17 = *a3;
        if ( *a3 == 7 || v17 == 8 )
        {
          v18 = TransformPointBetweenCoordinateSpaces(v13 + 8, v13 + 8, a5, a6);
          v19 = v13 + 16;
        }
        else
        {
          if ( (unsigned __int64)(v17 - 11) > 1 )
          {
            if ( v17 == 16 )
            {
              LODWORD(v28) = *a4;
              HIDWORD(v28) = a4[1];
              v6 = TransformPointBetweenCoordinateSpaces(&v29, &v28, a5, a6);
              *a4 = v29;
              a4[1] = WORD2(v29);
            }
            break;
          }
          v18 = TransformPointBetweenCoordinateSpaces(v13 + 4, v13 + 4, a5, a6);
          v19 = v13 + 12;
        }
        v6 = TransformRectBetweenCoordinateSpaces(v19, v19, a5, a6) | v18;
        break;
      case 0x342u:
        goto LABEL_23;
      default:
        goto LABEL_14;
    }
    v16 = v9 - 512;
    goto LABEL_38;
  }
LABEL_14:
  if ( v9 == 787 )
  {
    if ( *(_QWORD *)a4 == 0xFFFFFFFFLL )
      return v6;
LABEL_24:
    LODWORD(v28) = *a4;
    HIDWORD(v28) = (__int16)HIWORD(*(_DWORD *)a4);
    v6 = TransformPointBetweenCoordinateSpaces(&v29, &v28, a5, a6);
    *(_QWORD *)a4 = (WORD2(v29) << 16) | (unsigned __int16)v29;
    return v6;
  }
  if ( v9 != 673 )
  {
    if ( v9 <= 0x112 )
    {
      if ( v9 == 274 )
      {
        if ( !a4[1] )
          return v6;
LABEL_31:
        if ( IsPointerParentNotify(v9, *a3) )
          return v6;
        goto LABEL_24;
      }
      goto LABEL_21;
    }
    if ( v9 > 0x33F )
      return v6;
    if ( v9 == 831 )
    {
      if ( a6 && v13 )
      {
        v25 = TransformRectBetweenCoordinateSpaces(v13 + 4, v13 + 4, a5, a6);
        v26 = v13 + 44;
        v27 = 6LL;
        v6 = v25;
        do
        {
          v6 |= TransformRectBetweenCoordinateSpaces(v26, v26, a5, a6);
          v26 += 16LL;
          --v27;
        }
        while ( v27 );
      }
      return v6;
    }
    v16 = v9 - 512;
LABEL_38:
    switch ( v16 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xBu:
      case 0xCu:
      case 0xDu:
        break;
      case 0xAu:
      case 0xEu:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x49u:
      case 0x4Au:
      case 0x4Eu:
      case 0x4Fu:
      case 0x51u:
      case 0x52u:
      case 0xA0u:
      case 0xF2u:
      case 0xF3u:
      case 0xF4u:
        goto LABEL_24;
      case 0x10u:
        goto LABEL_31;
      default:
        return v6;
    }
  }
LABEL_33:
  if ( !a5 )
    return v6;
  v15 = *(_QWORD *)(a5 + 40);
  LODWORD(v28) = *a4;
  HIDWORD(v28) = (__int16)HIWORD(*(_DWORD *)a4);
  v32 = 0LL;
  v30 = *(_DWORD *)(v15 + 104);
  v31 = *(_DWORD *)(v15 + 108);
  TransformPointBetweenCoordinateSpaces(&v32, &v30, a6, a5);
  LODWORD(v28) = v32 + v28;
  HIDWORD(v28) += HIDWORD(v32);
  LODWORD(result) = TransformPointBetweenCoordinateSpaces(&v29, &v28, a5, a6);
  *(_QWORD *)a4 = ((unsigned __int16)(WORD2(v29) - v31) << 16) | (unsigned __int16)(v29 - v30);
  return (unsigned int)result;
}
