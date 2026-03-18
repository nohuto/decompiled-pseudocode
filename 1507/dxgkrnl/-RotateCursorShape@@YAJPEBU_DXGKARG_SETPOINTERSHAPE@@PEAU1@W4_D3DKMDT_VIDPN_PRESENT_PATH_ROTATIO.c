/*
 * XREFs of ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C0146350
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?RotateCursorShapeWorker@@YAXPEAU_CURSOR_INFO@@PEBU1@@Z @ 0x1C01465BC (-RotateCursorShapeWorker@@YAXPEAU_CURSOR_INFO@@PEBU1@@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  UINT Height; // r8d
  UINT Width; // edx
  UINT Value; // r9d
  UINT Pitch; // ecx
  int v22; // r9d
  char *pPixels; // r11
  UINT v24; // eax
  UINT v25; // ecx
  UINT v26; // eax
  UINT v27; // ecx
  UINT v28; // [rsp+20h] [rbp-50h] BYREF
  UINT v29; // [rsp+24h] [rbp-4Ch]
  UINT v30; // [rsp+28h] [rbp-48h]
  UINT v31; // [rsp+2Ch] [rbp-44h]
  UINT v32; // [rsp+30h] [rbp-40h]
  UINT v33; // [rsp+34h] [rbp-3Ch]
  char *v34; // [rsp+38h] [rbp-38h]
  int v35; // [rsp+40h] [rbp-30h]
  int v36; // [rsp+44h] [rbp-2Ch]
  _DWORD v37[2]; // [rsp+48h] [rbp-28h] BYREF
  UINT v38; // [rsp+50h] [rbp-20h]
  UINT v39; // [rsp+54h] [rbp-1Ch]
  UINT v40; // [rsp+58h] [rbp-18h]
  UINT v41; // [rsp+5Ch] [rbp-14h]
  char *v42; // [rsp+60h] [rbp-10h]
  int v43; // [rsp+68h] [rbp-8h]
  int v44; // [rsp+6Ch] [rbp-4h]

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
  v22 = Value & 1;
  pPixels = (char *)a2->pPixels;
  v42 = (char *)a1->pPixels;
  v44 = v22;
  v36 = v22;
  v39 = Height;
  v38 = Height;
  v30 = Height;
  v37[1] = Width;
  v37[0] = Width;
  v28 = Width;
  v41 = Pitch;
  v40 = Pitch;
  v32 = Pitch;
  v34 = pPixels;
  v35 = v4;
  v43 = 1;
  if ( (((_DWORD)v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    v24 = Width;
    v29 = Width;
    Width = Height;
    v31 = Height;
  }
  else
  {
    v31 = Width;
    v24 = Height;
    v29 = Height;
    if ( v22 )
      Pitch = ((Height + 7) & 0xFFFFFFF8) >> 3;
    else
      Pitch = 4 * Height;
  }
  v33 = Pitch;
  if ( v24 <= a4->MaxPointerWidth && Width <= a4->MaxPointerHeight )
  {
    if ( v22 )
    {
      memset(pPixels, 255, Width * Pitch);
      do
      {
        RotateCursorShapeWorker((struct _CURSOR_INFO *)&v28, (const struct _CURSOR_INFO *)v37);
        v25 = v33;
        v13 = v31;
        v34 += v31 * v33;
        v42 += v38 * v40;
        --v11;
      }
      while ( v11 );
    }
    else
    {
      RotateCursorShapeWorker((struct _CURSOR_INFO *)&v28, (const struct _CURSOR_INFO *)v37);
      v25 = v33;
      v13 = v31;
    }
    v26 = v29;
    a2->Pitch = v25;
    a2->Height = v13;
    a2->Width = v26;
    a2->Flags.Value = a1->Flags.Value;
    if ( (_DWORD)v4 == 1 )
      goto LABEL_6;
    if ( (_DWORD)v4 == 2 )
    {
      a2->XHot = a1->YHot;
      v27 = a1->Width - a1->XHot;
    }
    else
    {
      v14 = (unsigned int)(v4 - 3);
      if ( (_DWORD)v4 != 3 )
      {
        if ( (_DWORD)v4 == 4 )
        {
          a2->XHot = a1->Height - a1->YHot;
          YHot = a1->XHot;
          goto LABEL_7;
        }
LABEL_14:
        v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        *(_QWORD *)(v17 + 24) = v4;
        WdLogEvent5_WdAssertion(v17);
        return 0LL;
      }
      a2->XHot = a1->Width - a1->XHot;
      v27 = a1->Height - a1->YHot;
    }
    a2->YHot = v27;
    return 0LL;
  }
  return 3221225659LL;
}
