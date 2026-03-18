/*
 * XREFs of ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAU_CURSOR_CLIP_PARAMS@@@Z @ 0x1C01460D8
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00AC6F0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FillClipParams(
        struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct DISPLAY_SOURCE *a2,
        struct _DXGKARG_SETPOINTERPOSITION *a3,
        struct _CURSOR_CLIP_PARAMS *a4)
{
  __m128i v4; // xmm1
  struct _DXGKARG_SETPOINTERSHAPE *v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // rax
  __int64 Width; // rdx
  UINT Height; // eax
  INT v14; // eax
  __int64 X; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edi
  __int64 v21; // rcx
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[20]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(__m128i *)((char *)a2 + 652);
  v8 = a1;
  v9 = *(_QWORD *)((char *)a2 + 652);
  v10 = _mm_srli_si128(v4, 8).m128i_u64[0];
  if ( (int)v10 - v4.m128i_i32[0] < (signed int)a1->Width
    || (a1 = (struct _DXGKARG_SETPOINTERSHAPE *)HIDWORD(v4.m128i_i64[0]),
        HIDWORD(v10) - v4.m128i_i32[1] < (signed int)v8->Height) )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 191LL;
    WdLogEvent5_WdAssertion(v11);
  }
  memset(v25, 0, sizeof(v25));
  Width = v8->Width;
  *(_OWORD *)a4 = *(_OWORD *)v25;
  *((_QWORD *)a4 + 2) = (unsigned __int128)0LL >> 96;
  *((_DWORD *)a4 + 5) = 0;
  Height = v8->Height;
  *(_DWORD *)a4 = Width;
  *((_DWORD *)a4 + 1) = Height;
  if ( (_DWORD)v9 && (v14 = a3->X, v14 < (int)v9) )
  {
    *((_DWORD *)a4 + 5) = 4;
    *(_DWORD *)a4 = Width + v14 - v9;
  }
  else if ( *((_DWORD *)a2 + 225) != (_DWORD)v10 )
  {
    X = (unsigned int)a3->X;
    if ( (int)X + (int)Width > (int)v10 )
    {
      if ( (int)v10 - (int)X < 0 )
      {
        v16 = WdLogNewEntry5_WdAssertion(X, Width, a3, a4);
        *(_QWORD *)(v16 + 24) = 211LL;
        WdLogEvent5_WdAssertion(v16);
      }
      *(_DWORD *)a4 = v10 - a3->X;
      *((_DWORD *)a4 + 5) = 8;
    }
  }
  if ( v4.m128i_i32[1] && (Width = (unsigned int)a3->Y, (int)Width < v4.m128i_i32[1]) )
  {
    v17 = Width + v8->Height - v4.m128i_i32[1];
    *((_DWORD *)a4 + 5) |= 1u;
    *((_DWORD *)a4 + 1) = v17;
  }
  else if ( v4.m128i_i32[3] != *((_DWORD *)a2 + 226) )
  {
    Width = (unsigned int)a3->Y;
    v18 = (unsigned int)(Width + v8->Height);
    if ( (int)v18 > v4.m128i_i32[3] )
    {
      if ( v4.m128i_i32[3] - (int)Width < 0 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v18, Width, a3, a4);
        *(_QWORD *)(v19 + 24) = 228LL;
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = v4.m128i_i32[3] - a3->Y;
      *((_DWORD *)a4 + 5) |= 2u;
      *((_DWORD *)a4 + 1) = v20;
    }
  }
  v21 = *((unsigned int *)a4 + 5);
  if ( (_DWORD)v21 )
  {
    *((_DWORD *)a4 + 2) = v8->Pitch;
    if ( (v8->Flags.Value & 1) != 0 )
    {
      v22 = *(_BYTE *)a4;
      if ( (v21 & 4) != 0 )
      {
        LOBYTE(v21) = v8->Width & 7;
        *((_BYTE *)a4 + 17) = v21;
        *((_BYTE *)a4 + 16) = (v22 - v21) & 7;
      }
      else
      {
        *((_BYTE *)a4 + 16) = 0;
        *((_BYTE *)a4 + 17) = v22 & 7;
      }
      if ( *((_BYTE *)a4 + 16) >= 8u )
      {
        v23 = WdLogNewEntry5_WdAssertion(v21, Width, a3, a4);
        *(_QWORD *)(v23 + 24) = 257LL;
        WdLogEvent5_WdAssertion(v23);
      }
      if ( *((_BYTE *)a4 + 17) >= 8u )
      {
        v24 = WdLogNewEntry5_WdAssertion(v21, Width, a3, a4);
        *(_QWORD *)(v24 + 24) = 258LL;
        WdLogEvent5_WdAssertion(v24);
      }
      *((_DWORD *)a4 + 3) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 3) = 0;
    }
  }
}
