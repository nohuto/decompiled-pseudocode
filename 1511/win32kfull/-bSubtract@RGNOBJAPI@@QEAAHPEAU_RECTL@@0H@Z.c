/*
 * XREFs of ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C0036B1C
 * Callers:
 *     GreSubtractRgnRectList @ 0x1C003B874 (GreSubtractRgnRectList.c)
 * Callees:
 *     ?bSubtractComplex@RGNOBJAPI@@AEAAHPEAU_RECTL@@0H@Z @ 0x1C0037338 (-bSubtractComplex@RGNOBJAPI@@AEAAHPEAU_RECTL@@0H@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall RGNOBJAPI::bSubtract(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3)
{
  __int64 v3; // rbx
  struct _RECTL *v5; // rdx
  LONG *v6; // rcx
  struct _RECTL *v7; // r8
  int v8; // r9d
  struct _RECTL *v9; // r10
  LONG top; // r11d
  LONG bottom; // r14d
  LONG left; // r15d
  LONG right; // eax
  LONG v14; // edx
  LONG v15; // r12d
  LONG v16; // r9d
  LONG v17; // ecx
  bool v18; // cc
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  struct _RECTL *v26; // rdx
  __int64 v28; // r14
  char v29; // r12
  unsigned int v30; // r13d
  int v31; // ecx
  int v32; // ecx
  _DWORD *v33; // rdx
  _DWORD *v34; // rdx
  _DWORD *v35; // rdx
  LONG v36; // eax
  LONG v37; // eax
  char *v38; // rdx
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  _DWORD *v44; // rdx
  int v45; // ecx
  LONG v46; // eax
  LONG v47; // eax
  LONG v48; // eax
  _DWORD *v49; // rdx
  LONG v50; // eax
  int v51; // ecx
  _DWORD *v52; // rdx
  _DWORD *v53; // rdx
  _DWORD *v54; // rdx
  _DWORD *v55; // rdx
  LONG v56; // eax
  _DWORD *v57; // rdx
  struct _RECTL v58; // [rsp+30h] [rbp-20h] BYREF

  v3 = *(_QWORD *)this;
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)a2) )
    goto LABEL_27;
  if ( v8 == 1 )
  {
    top = v7->top;
    bottom = v5->bottom;
    if ( top >= bottom
      || (left = v7->left, right = v5->right, v7->left >= right)
      || (v14 = v7->bottom, v15 = v6[1], v14 <= v15)
      || (v16 = v7->right, v17 = *v6, v16 <= v17) )
    {
      v26 = v9;
      goto LABEL_21;
    }
    v18 = left <= v17;
    v19 = v16 >= right;
    if ( !v18 )
      v19 += 2;
    if ( top > v15 )
    {
      v20 = 12;
      if ( v14 < bottom )
        v20 = 8;
    }
    else
    {
      v20 = 4;
      if ( v14 < bottom )
        v20 = 0;
    }
    v21 = v20 + v19;
    if ( v21 <= 8 )
    {
      if ( v21 == 8 )
      {
        *(_DWORD *)(v3 + 80) = 208;
        *(_DWORD *)(v3 + 84) = 5;
        *(struct _RECTL *)(v3 + 88) = *v9;
        *(_DWORD *)(v3 + 104) = 0;
        *(_DWORD *)(v3 + 108) = 0x80000000;
        *(_DWORD *)(v3 + 112) = v9->top;
        *(_DWORD *)(v3 + 116) = 0;
        v54 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
        *v54 = 2;
        v54[1] = v9->top;
        v54[2] = v7->top;
        v54[3] = v9->left;
        v54[4] = v9->right;
        v54[5] = 2;
        v34 = (_DWORD *)((char *)v54 + (unsigned int)(4 * *v54 + 16));
        *v34 = 2;
        v47 = v7->top;
      }
      else
      {
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( !v22 )
          {
            v58 = *v9;
            v58.top = v14;
            goto LABEL_20;
          }
          v23 = v22 - 1;
          if ( !v23 )
          {
            *(_DWORD *)(v3 + 80) = 192;
            *(_DWORD *)(v3 + 84) = 4;
            *(struct _RECTL *)(v3 + 88) = *v9;
            *(_DWORD *)(v3 + 104) = 0;
            *(_DWORD *)(v3 + 108) = 0x80000000;
            *(_DWORD *)(v3 + 112) = v9->top;
            *(_DWORD *)(v3 + 116) = 0;
            v57 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
            *v57 = 4;
            v57[1] = v9->top;
            v57[2] = v7->bottom;
            v57[3] = v9->left;
            v57[4] = v7->left;
            v57[5] = v7->right;
            v57[6] = v9->right;
            v57[7] = 4;
            v35 = (_DWORD *)((char *)v57 + (unsigned int)(4 * *v57 + 16));
            *v35 = 2;
            v35[1] = v7->bottom;
            v35[2] = v9->bottom;
            v35[3] = v9->left;
            v37 = v9->right;
            v35[5] = 2;
            goto LABEL_36;
          }
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( !v25 )
            {
              v58 = *v9;
              v58.left = v16;
LABEL_20:
              v26 = &v58;
LABEL_21:
              RGNOBJ::vSet(this, v26);
              return 1LL;
            }
            v31 = v25 - 1;
            if ( !v31 )
            {
LABEL_27:
              RGNOBJ::vSet(this);
              return 1LL;
            }
            v45 = v31 - 1;
            if ( v45 )
            {
              if ( v45 != 1 )
                return 1LL;
              v58 = *v9;
              v58.right = left;
              goto LABEL_20;
            }
            *(_DWORD *)(v3 + 80) = 168;
            *(_DWORD *)(v3 + 84) = 3;
            *(struct _RECTL *)(v3 + 88) = *v9;
            *(_DWORD *)(v3 + 104) = 0;
            *(_DWORD *)(v3 + 108) = 0x80000000;
            *(_DWORD *)(v3 + 112) = v9->top;
            *(_DWORD *)(v3 + 116) = 0;
            v35 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
            *v35 = 4;
            v46 = v9->top;
            goto LABEL_47;
          }
          *(_DWORD *)(v3 + 80) = 184;
          *(_DWORD *)(v3 + 84) = 4;
          *(struct _RECTL *)(v3 + 88) = *v9;
          *(_DWORD *)(v3 + 104) = 0;
          *(_DWORD *)(v3 + 108) = 0x80000000;
          *(_DWORD *)(v3 + 112) = v9->top;
          *(_DWORD *)(v3 + 116) = 0;
          v34 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
          *v34 = 2;
          v50 = v9->top;
LABEL_52:
          v34[1] = v50;
          v34[2] = v7->bottom;
          v34[3] = v9->left;
          v48 = v7->left;
          goto LABEL_50;
        }
        *(_DWORD *)(v3 + 80) = 184;
        *(_DWORD *)(v3 + 84) = 4;
        *(struct _RECTL *)(v3 + 88) = *v9;
        *(_DWORD *)(v3 + 104) = 0;
        *(_DWORD *)(v3 + 108) = 0x80000000;
        *(_DWORD *)(v3 + 112) = v9->top;
        *(_DWORD *)(v3 + 116) = 0;
        v34 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
        *v34 = 2;
        v47 = v9->top;
      }
      v34[1] = v47;
      v34[2] = v7->bottom;
      v34[3] = v7->right;
      v48 = v9->right;
LABEL_50:
      v34[4] = v48;
      v34[5] = 2;
      goto LABEL_33;
    }
    v32 = v21 - 9;
    if ( v32 )
    {
      v40 = v32 - 1;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            v43 = v42 - 1;
            if ( !v43 )
            {
              v58 = *v9;
              v58.bottom = top;
              goto LABEL_20;
            }
            v51 = v43 - 1;
            if ( !v51 )
            {
              *(_DWORD *)(v3 + 80) = 192;
              *(_DWORD *)(v3 + 84) = 4;
              *(struct _RECTL *)(v3 + 88) = *v9;
              *(_DWORD *)(v3 + 104) = 0;
              *(_DWORD *)(v3 + 108) = 0x80000000;
              *(_DWORD *)(v3 + 112) = v9->top;
              *(_DWORD *)(v3 + 116) = 0;
              v55 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
              *v55 = 2;
              v55[1] = v9->top;
              v55[2] = v7->top;
              v55[3] = v9->left;
              v56 = v9->right;
              v55[5] = 2;
              v55[4] = v56;
              v35 = (_DWORD *)((char *)v55 + (unsigned int)(4 * *v55 + 16));
              *v35 = 4;
              v46 = v7->top;
LABEL_47:
              v35[1] = v46;
              v35[2] = v9->bottom;
              v35[3] = v9->left;
              v35[4] = v7->left;
              v35[5] = v7->right;
              v35[6] = v9->right;
              v35[7] = 4;
              goto LABEL_37;
            }
            if ( v51 != 1 )
              return 1LL;
            *(_DWORD *)(v3 + 80) = 184;
            *(_DWORD *)(v3 + 84) = 4;
            *(struct _RECTL *)(v3 + 88) = *v9;
            *(_DWORD *)(v3 + 104) = 0;
            *(_DWORD *)(v3 + 108) = 0x80000000;
            *(_DWORD *)(v3 + 112) = v9->top;
            *(_DWORD *)(v3 + 116) = 0;
            v52 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
            *v52 = 2;
            v52[1] = v9->top;
            v52[2] = v7->top;
            v52[3] = v9->left;
            v52[4] = v9->right;
            v52[5] = 2;
            v35 = (_DWORD *)((char *)v52 + (unsigned int)(4 * *v52 + 16));
            *v35 = 2;
            v35[1] = v7->top;
            v35[2] = v9->bottom;
            v35[3] = v9->left;
            v37 = v7->left;
            goto LABEL_35;
          }
          *(_DWORD *)(v3 + 80) = 184;
          *(_DWORD *)(v3 + 84) = 4;
          *(struct _RECTL *)(v3 + 88) = *v9;
          *(_DWORD *)(v3 + 104) = 0;
          *(_DWORD *)(v3 + 108) = 0x80000000;
          *(_DWORD *)(v3 + 112) = v9->top;
          *(_DWORD *)(v3 + 116) = 0;
          v53 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
          *v53 = 2;
          v53[1] = v9->top;
          v53[2] = v7->top;
          v53[3] = v9->left;
          v53[4] = v9->right;
          v53[5] = 2;
          v35 = (_DWORD *)((char *)v53 + (unsigned int)(4 * *v53 + 16));
          *v35 = 2;
          v35[1] = v7->top;
          v35[2] = v9->bottom;
          v36 = v7->right;
LABEL_34:
          v35[3] = v36;
          v37 = v9->right;
LABEL_35:
          v35[5] = 2;
LABEL_36:
          v35[4] = v37;
LABEL_37:
          v38 = (char *)v35 + (unsigned int)(4 * *v35 + 16);
          *(_DWORD *)v38 = 0;
          *((_DWORD *)v38 + 1) = v9->bottom;
          v39 = *(_DWORD *)v38;
          *((_QWORD *)v38 + 1) = 0x7FFFFFFFLL;
          *(_QWORD *)(v3 + 40) = &v38[4 * v39 + 16];
          return 1LL;
        }
        *(_DWORD *)(v3 + 80) = 208;
        *(_DWORD *)(v3 + 84) = 5;
        *(struct _RECTL *)(v3 + 88) = *v9;
        *(_DWORD *)(v3 + 104) = 0;
        *(_DWORD *)(v3 + 108) = 0x80000000;
        *(_DWORD *)(v3 + 112) = v9->top;
        *(_DWORD *)(v3 + 116) = 0;
        v49 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
        *v49 = 2;
        v49[1] = v9->top;
        v49[2] = v7->top;
        v49[3] = v9->left;
        v49[4] = v9->right;
        v49[5] = 2;
        v34 = (_DWORD *)((char *)v49 + (unsigned int)(4 * *v49 + 16));
        *v34 = 2;
        v50 = v7->top;
        goto LABEL_52;
      }
      *(_DWORD *)(v3 + 80) = 216;
      *(_DWORD *)(v3 + 84) = 5;
      *(struct _RECTL *)(v3 + 88) = *v9;
      *(_DWORD *)(v3 + 104) = 0;
      *(_DWORD *)(v3 + 108) = 0x80000000;
      *(_DWORD *)(v3 + 112) = v9->top;
      *(_DWORD *)(v3 + 116) = 0;
      v44 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
      *v44 = 2;
      v44[1] = v9->top;
      v44[2] = v7->top;
      v44[3] = v9->left;
      v44[4] = v9->right;
      v44[5] = 2;
      v34 = (_DWORD *)((char *)v44 + (unsigned int)(4 * *v44 + 16));
      *v34 = 4;
      v34[1] = v7->top;
      v34[2] = v7->bottom;
      v34[3] = v9->left;
      v34[4] = v7->left;
      v34[5] = v7->right;
      v34[6] = v9->right;
      v34[7] = 4;
    }
    else
    {
      *(_DWORD *)(v3 + 80) = 200;
      *(_DWORD *)(v3 + 84) = 5;
      *(struct _RECTL *)(v3 + 88) = *v9;
      *(_DWORD *)(v3 + 104) = 0;
      *(_DWORD *)(v3 + 108) = 0x80000000;
      *(_DWORD *)(v3 + 112) = v9->top;
      *(_DWORD *)(v3 + 116) = 0;
      v33 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v3 + 104) + 16) + v3 + 104);
      *v33 = 2;
      v33[1] = v9->top;
      v33[2] = v7->top;
      v33[3] = v9->left;
      v33[4] = v9->right;
      v33[5] = 2;
      v34 = (_DWORD *)((char *)v33 + (unsigned int)(4 * *v33 + 16));
      *v34 = 0;
      v34[1] = v7->top;
      *((_QWORD *)v34 + 1) = (unsigned int)v7->bottom;
    }
LABEL_33:
    v35 = (_DWORD *)((char *)v34 + (unsigned int)(4 * *v34 + 16));
    *v35 = 2;
    v35[1] = v7->bottom;
    v35[2] = v9->bottom;
    v36 = v9->left;
    goto LABEL_34;
  }
  v28 = 3LL * (unsigned __int16)*((_DWORD *)this + 2);
  v29 = *(_BYTE *)(gpentHmgr + 24LL * (unsigned __int16)*((_DWORD *)this + 2) + 14);
  *(_BYTE *)(gpentHmgr + 24LL * (unsigned __int16)*((_DWORD *)this + 2) + 14) = 0;
  v30 = RGNOBJAPI::bSubtractComplex(this, v5, v7, v8);
  if ( *(_QWORD *)this != v3 )
    HmgReplace(*((_QWORD *)this + 1), *(_QWORD *)this, 0LL, 1LL, 0);
  *(_BYTE *)(gpentHmgr + 8 * v28 + 14) = v29;
  return v30;
}
