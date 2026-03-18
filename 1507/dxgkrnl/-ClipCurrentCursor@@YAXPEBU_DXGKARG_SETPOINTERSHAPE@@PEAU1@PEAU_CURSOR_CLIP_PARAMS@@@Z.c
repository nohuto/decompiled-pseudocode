/*
 * XREFs of ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAU_CURSOR_CLIP_PARAMS@@@Z @ 0x1C0145BDC
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C008EBC0 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C00AC6F0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

void __fastcall ClipCurrentCursor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _CURSOR_CLIP_PARAMS *a3,
        __int64 a4)
{
  struct _DXGKARG_SETPOINTERSHAPE *v6; // r14
  UINT v7; // esi
  UINT YHot; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rax
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // r8
  _BYTE *v21; // r9
  _BYTE *v22; // rcx
  char v23; // r12
  char v24; // r15
  size_t v25; // r14
  void *v26; // rcx
  const void *v27; // rax
  bool v28; // zf
  UINT v29; // esi
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rax
  _BYTE *v34; // rdi
  _BYTE *v35; // rsi
  unsigned int v36; // ecx
  __int64 v37; // r13
  char v38; // r8
  char v39; // r15
  __int64 v40; // r12
  size_t v41; // r14
  void *v42; // rbx
  const void *v43; // rbp
  int v44; // eax
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  _BYTE *v49; // rdi
  _BYTE *v50; // rsi
  unsigned int v51; // ecx
  char v52; // r8
  char v53; // r15
  __int64 v54; // r12
  __int64 v55; // r13
  size_t v56; // r14
  void *v57; // rbx
  const void *v58; // rbp
  _BYTE *v59; // [rsp+20h] [rbp-68h]
  _BYTE *v60; // [rsp+28h] [rbp-60h]
  __int64 v61; // [rsp+30h] [rbp-58h]
  __int64 v62; // [rsp+38h] [rbp-50h]
  _BYTE *v63; // [rsp+90h] [rbp+8h]
  char v64; // [rsp+90h] [rbp+8h]
  char v65; // [rsp+90h] [rbp+8h]
  char v67; // [rsp+98h] [rbp+10h]
  char v68; // [rsp+98h] [rbp+10h]
  _BYTE *v69; // [rsp+A0h] [rbp+18h]

  a2->Flags.Value = a1->Flags.Value;
  a2->Width = a1->Width;
  v6 = a2;
  v7 = 0;
  a2->Height = a1->Height;
  a2->Pitch = a1->Pitch;
  a2->XHot = a1->XHot;
  YHot = a1->YHot;
  v9 = *((unsigned int *)a3 + 5);
  a2->YHot = YHot;
  if ( (v9 & 1) != 0 )
    v7 = a1->Pitch * (a1->Height - *((_DWORD *)a3 + 1));
  if ( (v9 & 4) != 0 )
  {
    v9 = a1->Width - *(_DWORD *)a3;
    if ( (a1->Flags.Value & 1) != 0 )
    {
      v9 = (unsigned int)v9 >> 3;
      v7 += v9;
    }
    else
    {
      v7 += 4 * v9;
    }
  }
  if ( (a1->Flags.Value & 1) != 0 )
  {
    memset((void *)a2->pPixels, 255, a2->Height * a2->Pitch);
    if ( *((_DWORD *)a3 + 3) )
    {
      v14 = *((unsigned __int8 *)a3 + 17);
      if ( ((*(_BYTE *)a3 - *((_BYTE *)a3 + 16) - (_BYTE)v14) & 7) != 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(
                *(_DWORD *)a3 - (unsigned int)*((unsigned __int8 *)a3 + 16) - v14,
                v10,
                v12,
                v13);
        *(_QWORD *)(v15 + 24) = 124LL;
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = *(_DWORD *)a3;
      v17 = (*(_DWORD *)a3 - *((unsigned __int8 *)a3 + 16) - (unsigned int)*((unsigned __int8 *)a3 + 17)) >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        *(_QWORD *)(v18 + 24) = 129LL;
        WdLogEvent5_WdAssertion(v18);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v19 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        *(_QWORD *)(v19 + 24) = 130LL;
        WdLogEvent5_WdAssertion(v19);
      }
      v16 = *(_DWORD *)a3;
      v17 = (unsigned int)(4 * *(_DWORD *)a3);
    }
    v20 = (char *)v6->pPixels + v7;
    v21 = (char *)a1->pPixels + v7;
    v22 = (_BYTE *)*((unsigned int *)a3 + 1);
    v59 = v20;
    v60 = v21;
    if ( (_DWORD)v22 )
    {
      v23 = *((_BYTE *)a3 + 17);
      v24 = *((_BYTE *)a3 + 16);
      v62 = *((unsigned int *)a3 + 2);
      v25 = (unsigned int)v17;
      v61 = *((unsigned int *)a3 + 1);
      do
      {
        v26 = v20;
        v27 = v21;
        v63 = v20;
        v69 = v21;
        if ( v24 )
        {
          v27 = v21 + 1;
          *v20 = ((1 << v24) - 1) & *v21 | *v20 & ~((1 << v24) - 1);
          v26 = v20 + 1;
          v63 = v20 + 1;
          v69 = v21 + 1;
        }
        memmove(v26, v27, v25);
        if ( v23 )
        {
          v17 = 1LL;
          v22 = v69;
          LOBYTE(v17) = (1 << (8 - v23)) - 1;
          LOBYTE(v22) = v17 & v63[v25] | ~(_BYTE)v17 & v69[v25];
          v63[v25] = (_BYTE)v22;
        }
        v20 = &v59[v62];
        v21 = &v60[v62];
        v28 = v61-- == 1;
        v59 += v62;
        v60 += v62;
      }
      while ( !v28 );
      v6 = a2;
    }
    v29 = a1->Height * a1->Pitch + v7;
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( (((_BYTE)v16 - *((_BYTE *)a3 + 16) - *((_BYTE *)a3 + 17)) & 7) != 0 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v22, v17, v20, v21);
        *(_QWORD *)(v30 + 24) = 124LL;
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = (*(_DWORD *)a3 - *((unsigned __int8 *)a3 + 16) - (unsigned int)*((unsigned __int8 *)a3 + 17)) >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v22, v17, v20, v21);
        *(_QWORD *)(v32 + 24) = 129LL;
        WdLogEvent5_WdAssertion(v32);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v22, v17, v20, v21);
        *(_QWORD *)(v33 + 24) = 130LL;
        WdLogEvent5_WdAssertion(v33);
      }
      v31 = 4 * *(_DWORD *)a3;
    }
    v34 = (char *)a1->pPixels + v29;
    v35 = (char *)v6->pPixels + v29;
    v36 = *((_DWORD *)a3 + 1);
    if ( v36 )
    {
      v37 = v36;
      v38 = *((_BYTE *)a3 + 16);
      v39 = 8 - *((_BYTE *)a3 + 17);
      v40 = *((unsigned int *)a3 + 2);
      v64 = v38;
      v67 = *((_BYTE *)a3 + 17);
      v41 = v31;
      do
      {
        v42 = v35;
        v43 = v34;
        if ( v38 )
        {
          v42 = v35 + 1;
          v43 = v34 + 1;
          *v35 = ((1 << v38) - 1) & *v34 | *v35 & ~((1 << v38) - 1);
        }
        memmove(v42, v43, v41);
        if ( v67 )
          *((_BYTE *)v42 + v41) = *((_BYTE *)v42 + v41) & ((1 << v39) - 1) | ~((1 << v39) - 1) & *((_BYTE *)v43 + v41);
        v38 = v64;
        v35 += v40;
        v34 += v40;
        --v37;
      }
      while ( v37 );
    }
  }
  else
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      v44 = *((unsigned __int8 *)a3 + 17);
      if ( ((*(_BYTE *)a3 - *((_BYTE *)a3 + 16) - (_BYTE)v44) & 7) != 0 )
      {
        v45 = WdLogNewEntry5_WdAssertion(*(_DWORD *)a3 - (unsigned int)*((unsigned __int8 *)a3 + 16) - v44, a2, a3, a4);
        *(_QWORD *)(v45 + 24) = 124LL;
        WdLogEvent5_WdAssertion(v45);
      }
      v46 = (*(_DWORD *)a3 - *((unsigned __int8 *)a3 + 16) - (unsigned int)*((unsigned __int8 *)a3 + 17)) >> 3;
    }
    else
    {
      if ( *((_BYTE *)a3 + 16) )
      {
        v47 = WdLogNewEntry5_WdAssertion(v9, a2, a3, a4);
        *(_QWORD *)(v47 + 24) = 129LL;
        WdLogEvent5_WdAssertion(v47);
      }
      if ( *((_BYTE *)a3 + 17) )
      {
        v48 = WdLogNewEntry5_WdAssertion(v9, a2, a3, a4);
        *(_QWORD *)(v48 + 24) = 130LL;
        WdLogEvent5_WdAssertion(v48);
      }
      v46 = 4 * *(_DWORD *)a3;
    }
    v49 = (char *)a1->pPixels + v7;
    v50 = (char *)v6->pPixels + v7;
    v51 = *((_DWORD *)a3 + 1);
    if ( v51 )
    {
      v52 = *((_BYTE *)a3 + 16);
      v53 = 8 - *((_BYTE *)a3 + 17);
      v54 = *((unsigned int *)a3 + 2);
      v55 = v51;
      v65 = v52;
      v68 = *((_BYTE *)a3 + 17);
      v56 = v46;
      do
      {
        v57 = v50;
        v58 = v49;
        if ( v52 )
        {
          v57 = v50 + 1;
          v58 = v49 + 1;
          *v50 = ((1 << v52) - 1) & *v49 | *v50 & ~((1 << v52) - 1);
        }
        memmove(v57, v58, v56);
        if ( v68 )
          *((_BYTE *)v57 + v56) = ((1 << v53) - 1) & *((_BYTE *)v57 + v56) | ~((1 << v53) - 1) & *((_BYTE *)v58 + v56);
        v52 = v65;
        v50 += v54;
        v49 += v54;
        --v55;
      }
      while ( v55 );
    }
  }
}
