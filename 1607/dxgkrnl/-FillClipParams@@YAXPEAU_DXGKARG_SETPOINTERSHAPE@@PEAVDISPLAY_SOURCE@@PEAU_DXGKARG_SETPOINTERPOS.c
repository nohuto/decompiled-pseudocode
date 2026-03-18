/*
 * XREFs of ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C007C954
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C007A500 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00D34A0 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FillClipParams(
        struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct DISPLAY_SOURCE *a2,
        struct _DXGKARG_SETPOINTERPOSITION *a3,
        struct CURSOR_CLIP_PARAMS *a4)
{
  __m128i v4; // xmm1
  struct _DXGKARG_SETPOINTERSHAPE *v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 v10; // xmm0_8
  UINT Width; // edx
  UINT Height; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  INT v15; // eax
  __int64 X; // rcx
  __int64 v17; // rax
  INT v18; // edx
  unsigned __int32 v19; // eax
  INT Y; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // edi
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[20]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(__m128i *)((char *)a2 + 652);
  v8 = a1;
  v9 = *(_QWORD *)((char *)a2 + 652);
  v10 = _mm_srli_si128(v4, 8).m128i_u64[0];
  if ( (int)v10 - v4.m128i_i32[0] < (signed int)a1->Width
    || (a1 = (struct _DXGKARG_SETPOINTERSHAPE *)HIDWORD(v4.m128i_i64[0]),
        HIDWORD(v10) - v4.m128i_i32[1] < (signed int)v8->Height) )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 197LL;
    WdLogEvent5_WdAssertion(v14);
  }
  memset(v27, 0, sizeof(v27));
  Width = v8->Width;
  *(_OWORD *)a4 = *(_OWORD *)v27;
  *((_QWORD *)a4 + 2) = (unsigned __int128)0LL >> 96;
  *((_DWORD *)a4 + 5) = 0;
  Height = v8->Height;
  *(_DWORD *)a4 = Width;
  *((_DWORD *)a4 + 1) = Height;
  if ( (_DWORD)v9 && (v15 = a3->X, v15 < (int)v9) )
  {
    *((_DWORD *)a4 + 5) = 4;
    *(_DWORD *)a4 = Width + v15 - v9;
  }
  else if ( *((_DWORD *)a2 + 227) != (_DWORD)v10 )
  {
    X = (unsigned int)a3->X;
    if ( (int)(X + Width) > (int)v10 )
    {
      if ( (int)v10 - (int)X < 0 )
      {
        v17 = WdLogNewEntry5_WdAssertion(X);
        *(_QWORD *)(v17 + 24) = 217LL;
        WdLogEvent5_WdAssertion(v17);
      }
      *(_DWORD *)a4 = v10 - a3->X;
      *((_DWORD *)a4 + 5) = 8;
    }
  }
  if ( v4.m128i_i32[1] && (v18 = a3->Y, v18 < v4.m128i_i32[1]) )
  {
    v19 = v18 + v8->Height - v4.m128i_i32[1];
    *((_DWORD *)a4 + 5) |= 1u;
    *((_DWORD *)a4 + 1) = v19;
  }
  else if ( v4.m128i_i32[3] != *((_DWORD *)a2 + 228) )
  {
    Y = a3->Y;
    v21 = Y + v8->Height;
    if ( (int)v21 > v4.m128i_i32[3] )
    {
      if ( v4.m128i_i32[3] - Y < 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(v21);
        *(_QWORD *)(v22 + 24) = 234LL;
        WdLogEvent5_WdAssertion(v22);
      }
      v23 = v4.m128i_i32[3] - a3->Y;
      *((_DWORD *)a4 + 5) |= 2u;
      *((_DWORD *)a4 + 1) = v23;
    }
  }
  v13 = *((unsigned int *)a4 + 5);
  if ( (_DWORD)v13 )
  {
    *((_DWORD *)a4 + 2) = v8->Pitch;
    if ( (v8->Flags.Value & 1) != 0 )
    {
      v24 = *(_BYTE *)a4;
      if ( (v13 & 4) != 0 )
      {
        LOBYTE(v13) = v8->Width & 7;
        *((_BYTE *)a4 + 17) = v13;
        *((_BYTE *)a4 + 16) = (v24 - v13) & 7;
      }
      else
      {
        *((_BYTE *)a4 + 16) = 0;
        *((_BYTE *)a4 + 17) = v24 & 7;
      }
      if ( *((_BYTE *)a4 + 16) >= 8u )
      {
        v25 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v25 + 24) = 263LL;
        WdLogEvent5_WdAssertion(v25);
      }
      if ( *((_BYTE *)a4 + 17) >= 8u )
      {
        v26 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v26 + 24) = 264LL;
        WdLogEvent5_WdAssertion(v26);
      }
      *((_DWORD *)a4 + 3) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 3) = 0;
    }
  }
}
