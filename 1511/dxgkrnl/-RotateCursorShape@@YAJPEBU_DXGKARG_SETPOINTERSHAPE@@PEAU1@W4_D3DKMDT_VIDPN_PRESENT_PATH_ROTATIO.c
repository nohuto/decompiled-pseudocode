/*
 * XREFs of ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C014A340
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C009D4F8 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z @ 0x1C014A5AC (-RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z.c)
 */

__int64 __fastcall RotateCursorShape(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3,
        const struct _DXGK_DRIVERCAPS *a4)
{
  __int64 v4; // rsi
  size_t v8; // r8
  UINT YHot; // eax
  __int64 v11; // r14
  size_t v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  UINT Height; // r8d
  UINT Width; // edx
  UINT Value; // r9d
  UINT Pitch; // ecx
  int v19; // r9d
  char *pPixels; // r11
  UINT v21; // eax
  UINT v22; // ecx
  UINT v23; // edx
  UINT v24; // eax
  UINT v25; // ecx
  UINT v26; // [rsp+20h] [rbp-50h] BYREF
  UINT v27; // [rsp+24h] [rbp-4Ch]
  UINT v28; // [rsp+28h] [rbp-48h]
  UINT v29; // [rsp+2Ch] [rbp-44h]
  UINT v30; // [rsp+30h] [rbp-40h]
  UINT v31; // [rsp+34h] [rbp-3Ch]
  char *v32; // [rsp+38h] [rbp-38h]
  int v33; // [rsp+40h] [rbp-30h]
  int v34; // [rsp+44h] [rbp-2Ch]
  _DWORD v35[2]; // [rsp+48h] [rbp-28h] BYREF
  UINT v36; // [rsp+50h] [rbp-20h]
  UINT v37; // [rsp+54h] [rbp-1Ch]
  UINT v38; // [rsp+58h] [rbp-18h]
  UINT v39; // [rsp+5Ch] [rbp-14h]
  char *v40; // [rsp+60h] [rbp-10h]
  int v41; // [rsp+68h] [rbp-8h]
  int v42; // [rsp+6Ch] [rbp-4h]

  v4 = a3;
  if ( a3 == D3DKMDT_VPPR_IDENTITY )
  {
    a2->Flags.Value = a1->Flags.Value;
    a2->Width = a1->Width;
    a2->Height = a1->Height;
    a2->Pitch = a1->Pitch;
    if ( (a1->Flags.Value & 1) != 0 )
      v8 = 2 * a1->Height * a1->Pitch;
    else
      v8 = a1->Height * a1->Pitch;
    memmove((void *)a2->pPixels, a1->pPixels, v8);
LABEL_6:
    a2->XHot = a1->XHot;
    YHot = a1->YHot;
LABEL_7:
    a2->YHot = YHot;
    return 0LL;
  }
  v11 = 2LL;
  if ( (unsigned int)(a3 - 2) > 2 )
  {
    a2->Flags.Value = a1->Flags.Value;
    a2->Width = a1->Width;
    a2->Height = a1->Height;
    a2->Pitch = a1->Pitch;
    if ( (a1->Flags.Value & 1) != 0 )
      v12 = 2 * a1->Height * a1->Pitch;
    else
      v12 = a1->Height * a1->Pitch;
    memmove((void *)a2->pPixels, a1->pPixels, v12);
    a2->XHot = a1->XHot;
    a2->YHot = a1->YHot;
    goto LABEL_14;
  }
  Height = a1->Height;
  Width = a1->Width;
  Value = a1->Flags.Value;
  Pitch = a1->Pitch;
  v19 = Value & 1;
  pPixels = (char *)a2->pPixels;
  v40 = (char *)a1->pPixels;
  v42 = v19;
  v34 = v19;
  v37 = Height;
  v36 = Height;
  v28 = Height;
  v35[1] = Width;
  v35[0] = Width;
  v26 = Width;
  v39 = Pitch;
  v38 = Pitch;
  v30 = Pitch;
  v32 = pPixels;
  v33 = v4;
  v41 = 1;
  if ( (((_DWORD)v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    v21 = Width;
    v27 = Width;
    Width = Height;
    v29 = Height;
  }
  else
  {
    v29 = Width;
    v21 = Height;
    v27 = Height;
    if ( v19 )
      Pitch = ((Height + 7) & 0xFFFFFFF8) >> 3;
    else
      Pitch = 4 * Height;
  }
  v31 = Pitch;
  if ( v21 <= a4->MaxPointerWidth && Width <= a4->MaxPointerHeight )
  {
    if ( v19 )
    {
      memset(pPixels, 255, Width * Pitch);
      do
      {
        RotateCursorShapeWorker((struct CURSOR_INFO *)&v26, (const struct CURSOR_INFO *)v35);
        v22 = v31;
        v23 = v29;
        v32 += v29 * v31;
        v40 += v36 * v38;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      RotateCursorShapeWorker((struct CURSOR_INFO *)&v26, (const struct CURSOR_INFO *)v35);
      v22 = v31;
      v23 = v29;
    }
    v24 = v27;
    a2->Pitch = v22;
    a2->Height = v23;
    a2->Width = v24;
    a2->Flags.Value = a1->Flags.Value;
    if ( (_DWORD)v4 == 1 )
      goto LABEL_6;
    if ( (_DWORD)v4 == 2 )
    {
      a2->XHot = a1->YHot;
      v25 = a1->Width - a1->XHot;
    }
    else
    {
      v13 = (unsigned int)(v4 - 3);
      if ( (_DWORD)v4 != 3 )
      {
        if ( (_DWORD)v4 == 4 )
        {
          a2->XHot = a1->Height - a1->YHot;
          YHot = a1->XHot;
          goto LABEL_7;
        }
LABEL_14:
        v14 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v14 + 24) = v4;
        WdLogEvent5_WdAssertion(v14);
        return 0LL;
      }
      a2->XHot = a1->Width - a1->XHot;
      v25 = a1->Height - a1->YHot;
    }
    a2->YHot = v25;
    return 0LL;
  }
  return 3221225659LL;
}
