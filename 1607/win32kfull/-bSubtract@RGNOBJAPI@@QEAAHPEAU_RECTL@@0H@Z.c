/*
 * XREFs of ?bSubtract@RGNOBJAPI@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C004B448
 * Callers:
 *     GreSubtractRgnRectList @ 0x1C00D6598 (GreSubtractRgnRectList.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C004A15C (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall RGNOBJAPI::bSubtract(RGNOBJAPI *this, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  __int64 v8; // rdx
  LONG *v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // edi
  LONG top; // r10d
  LONG v14; // r11d
  LONG left; // r15d
  LONG v16; // eax
  LONG bottom; // edx
  LONG v18; // r12d
  LONG right; // r9d
  LONG v20; // ecx
  bool v21; // cc
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  struct _RECTL *v30; // rdx
  int v32; // ecx
  _DWORD *v33; // rdx
  _DWORD *v34; // rdx
  _DWORD *v35; // rdx
  LONG v36; // eax
  LONG v37; // eax
  char *v38; // rdx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  _DWORD *v43; // rdx
  LONG v44; // eax
  int v45; // ecx
  LONG v46; // eax
  LONG v47; // eax
  LONG v48; // eax
  int v49; // ecx
  _DWORD *v50; // rdx
  _DWORD *v51; // rdx
  LONG v52; // eax
  _DWORD *v53; // rdx
  _DWORD *v54; // rdx
  _DWORD *v55; // rdx
  _QWORD v56[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v57; // [rsp+30h] [rbp-28h] BYREF

  v12 = 0;
  if ( ERECTL::bEmpty((ERECTL *)a2) )
    goto LABEL_20;
  if ( v11 == 1 )
  {
    top = a3->top;
    v14 = *(_DWORD *)(v8 + 12);
    if ( top >= v14
      || (left = a3->left, v16 = *(_DWORD *)(v8 + 8), a3->left >= v16)
      || (bottom = a3->bottom, v18 = v9[1], bottom <= v18)
      || (right = a3->right, v20 = *v9, right <= v20) )
    {
      v30 = a2;
      goto LABEL_23;
    }
    v21 = left <= v20;
    v22 = right >= v16;
    if ( !v21 )
      v22 += 2;
    if ( top > v18 )
    {
      v23 = 12;
      if ( bottom < v14 )
        v23 = 8;
    }
    else
    {
      v23 = 4;
      if ( bottom < v14 )
        v23 = 0;
    }
    v24 = v23 + v22;
    if ( v24 <= 8 )
    {
      if ( v24 == 8 )
      {
        *(_DWORD *)(v10 + 80) = 208;
        *(_DWORD *)(v10 + 84) = 5;
        *(struct _RECTL *)(v10 + 88) = *a2;
        *(_DWORD *)(v10 + 104) = 0;
        *(_DWORD *)(v10 + 108) = 0x80000000;
        *(_DWORD *)(v10 + 112) = a2->top;
        *(_DWORD *)(v10 + 116) = 0;
        v54 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
        *v54 = 2;
        v54[1] = a2->top;
        v54[2] = a3->top;
        v54[3] = a2->left;
        v54[4] = a2->right;
        v54[5] = 2;
        v34 = (_DWORD *)((char *)v54 + (unsigned int)(4 * *v54 + 16));
        *v34 = 2;
        v47 = a3->top;
      }
      else
      {
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            v26 = v25 - 1;
            if ( v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                v28 = v27 - 1;
                if ( v28 )
                {
                  v29 = v28 - 1;
                  if ( !v29 )
                  {
LABEL_20:
                    RGNOBJ::vSet(this);
                    return 1LL;
                  }
                  v45 = v29 - 1;
                  if ( !v45 )
                  {
                    *(_DWORD *)(v10 + 80) = 168;
                    *(_DWORD *)(v10 + 84) = 3;
                    *(struct _RECTL *)(v10 + 88) = *a2;
                    *(_DWORD *)(v10 + 104) = 0;
                    *(_DWORD *)(v10 + 108) = 0x80000000;
                    *(_DWORD *)(v10 + 112) = a2->top;
                    *(_DWORD *)(v10 + 116) = 0;
                    v35 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
                    *v35 = 4;
                    v46 = a2->top;
LABEL_48:
                    v35[1] = v46;
                    v35[2] = a2->bottom;
                    v35[3] = a2->left;
                    v35[4] = a3->left;
                    v35[5] = a3->right;
                    v35[6] = a2->right;
                    v35[7] = 4;
                    goto LABEL_37;
                  }
                  if ( v45 != 1 )
                    return 1LL;
                  v57 = (__int128)*a2;
                  DWORD2(v57) = left;
                }
                else
                {
                  v57 = (__int128)*a2;
                  LODWORD(v57) = right;
                }
                goto LABEL_22;
              }
              *(_DWORD *)(v10 + 80) = 184;
              *(_DWORD *)(v10 + 84) = 4;
              *(struct _RECTL *)(v10 + 88) = *a2;
              *(_DWORD *)(v10 + 104) = 0;
              *(_DWORD *)(v10 + 108) = 0x80000000;
              *(_DWORD *)(v10 + 112) = a2->top;
              *(_DWORD *)(v10 + 116) = 0;
              v34 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
              *v34 = 2;
              v52 = a2->top;
              goto LABEL_56;
            }
            *(_DWORD *)(v10 + 80) = 192;
            *(_DWORD *)(v10 + 84) = 4;
            *(struct _RECTL *)(v10 + 88) = *a2;
            *(_DWORD *)(v10 + 104) = 0;
            *(_DWORD *)(v10 + 108) = 0x80000000;
            *(_DWORD *)(v10 + 112) = a2->top;
            *(_DWORD *)(v10 + 116) = 0;
            v34 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
            *v34 = 4;
            v44 = a2->top;
            goto LABEL_44;
          }
          v57 = (__int128)*a2;
          DWORD1(v57) = bottom;
          goto LABEL_22;
        }
        *(_DWORD *)(v10 + 80) = 184;
        *(_DWORD *)(v10 + 84) = 4;
        *(struct _RECTL *)(v10 + 88) = *a2;
        *(_DWORD *)(v10 + 104) = 0;
        *(_DWORD *)(v10 + 108) = 0x80000000;
        *(_DWORD *)(v10 + 112) = a2->top;
        *(_DWORD *)(v10 + 116) = 0;
        v34 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
        *v34 = 2;
        v47 = a2->top;
      }
      v34[1] = v47;
      v34[2] = a3->bottom;
      v34[3] = a3->right;
      v48 = a2->right;
LABEL_51:
      v34[4] = v48;
      v34[5] = 2;
      goto LABEL_34;
    }
    v32 = v24 - 9;
    if ( !v32 )
    {
      *(_DWORD *)(v10 + 80) = 200;
      *(_DWORD *)(v10 + 84) = 5;
      *(struct _RECTL *)(v10 + 88) = *a2;
      *(_DWORD *)(v10 + 104) = 0;
      *(_DWORD *)(v10 + 108) = 0x80000000;
      *(_DWORD *)(v10 + 112) = a2->top;
      *(_DWORD *)(v10 + 116) = 0;
      v33 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
      *v33 = 2;
      v33[1] = a2->top;
      v33[2] = a3->top;
      v33[3] = a2->left;
      v33[4] = a2->right;
      v33[5] = 2;
      v34 = (_DWORD *)((char *)v33 + (unsigned int)(4 * *v33 + 16));
      *v34 = 0;
      v34[1] = a3->top;
      *((_QWORD *)v34 + 1) = (unsigned int)a3->bottom;
LABEL_34:
      v35 = (_DWORD *)((char *)v34 + (unsigned int)(4 * *v34 + 16));
      *v35 = 2;
      v35[1] = a3->bottom;
      v35[2] = a2->bottom;
      v36 = a2->left;
LABEL_35:
      v35[3] = v36;
      v37 = a2->right;
      goto LABEL_36;
    }
    v39 = v32 - 1;
    if ( !v39 )
    {
      *(_DWORD *)(v10 + 80) = 216;
      *(_DWORD *)(v10 + 84) = 5;
      *(struct _RECTL *)(v10 + 88) = *a2;
      *(_DWORD *)(v10 + 104) = 0;
      *(_DWORD *)(v10 + 108) = 0x80000000;
      *(_DWORD *)(v10 + 112) = a2->top;
      *(_DWORD *)(v10 + 116) = 0;
      v43 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
      *v43 = 2;
      v43[1] = a2->top;
      v43[2] = a3->top;
      v43[3] = a2->left;
      v43[4] = a2->right;
      v43[5] = 2;
      v34 = (_DWORD *)((char *)v43 + (unsigned int)(4 * *v43 + 16));
      *v34 = 4;
      v44 = a3->top;
LABEL_44:
      v34[1] = v44;
      v34[2] = a3->bottom;
      v34[3] = a2->left;
      v34[4] = a3->left;
      v34[5] = a3->right;
      v34[6] = a2->right;
      v34[7] = 4;
      goto LABEL_34;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      *(_DWORD *)(v10 + 80) = 208;
      *(_DWORD *)(v10 + 84) = 5;
      *(struct _RECTL *)(v10 + 88) = *a2;
      *(_DWORD *)(v10 + 104) = 0;
      *(_DWORD *)(v10 + 108) = 0x80000000;
      *(_DWORD *)(v10 + 112) = a2->top;
      *(_DWORD *)(v10 + 116) = 0;
      v51 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
      *v51 = 2;
      v51[1] = a2->top;
      v51[2] = a3->top;
      v51[3] = a2->left;
      v51[4] = a2->right;
      v51[5] = 2;
      v34 = (_DWORD *)((char *)v51 + (unsigned int)(4 * *v51 + 16));
      *v34 = 2;
      v52 = a3->top;
LABEL_56:
      v34[1] = v52;
      v34[2] = a3->bottom;
      v34[3] = a2->left;
      v48 = a3->left;
      goto LABEL_51;
    }
    v41 = v40 - 1;
    if ( !v41 )
    {
      *(_DWORD *)(v10 + 80) = 184;
      *(_DWORD *)(v10 + 84) = 4;
      *(struct _RECTL *)(v10 + 88) = *a2;
      *(_DWORD *)(v10 + 104) = 0;
      *(_DWORD *)(v10 + 108) = 0x80000000;
      *(_DWORD *)(v10 + 112) = a2->top;
      *(_DWORD *)(v10 + 116) = 0;
      v53 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
      *v53 = 2;
      v53[1] = a2->top;
      v53[2] = a3->top;
      v53[3] = a2->left;
      v53[4] = a2->right;
      v53[5] = 2;
      v35 = (_DWORD *)((char *)v53 + (unsigned int)(4 * *v53 + 16));
      *v35 = 2;
      v35[1] = a3->top;
      v35[2] = a2->bottom;
      v36 = a3->right;
      goto LABEL_35;
    }
    v42 = v41 - 1;
    if ( v42 )
    {
      v49 = v42 - 1;
      if ( !v49 )
      {
        *(_DWORD *)(v10 + 80) = 192;
        *(_DWORD *)(v10 + 84) = 4;
        *(struct _RECTL *)(v10 + 88) = *a2;
        *(_DWORD *)(v10 + 104) = 0;
        *(_DWORD *)(v10 + 108) = 0x80000000;
        *(_DWORD *)(v10 + 112) = a2->top;
        *(_DWORD *)(v10 + 116) = 0;
        v55 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
        *v55 = 2;
        v55[1] = a2->top;
        v55[2] = a3->top;
        v55[3] = a2->left;
        v55[4] = a2->right;
        v55[5] = 2;
        v35 = (_DWORD *)((char *)v55 + (unsigned int)(4 * *v55 + 16));
        *v35 = 4;
        v46 = a3->top;
        goto LABEL_48;
      }
      if ( v49 != 1 )
        return 1LL;
      *(_DWORD *)(v10 + 80) = 184;
      *(_DWORD *)(v10 + 84) = 4;
      *(struct _RECTL *)(v10 + 88) = *a2;
      *(_DWORD *)(v10 + 104) = 0;
      *(_DWORD *)(v10 + 108) = 0x80000000;
      *(_DWORD *)(v10 + 112) = a2->top;
      *(_DWORD *)(v10 + 116) = 0;
      v50 = (_DWORD *)((unsigned int)(4 * *(_DWORD *)(v10 + 104) + 16) + v10 + 104);
      *v50 = 2;
      v50[1] = a2->top;
      v50[2] = a3->top;
      v50[3] = a2->left;
      v50[4] = a2->right;
      v50[5] = 2;
      v35 = (_DWORD *)((char *)v50 + (unsigned int)(4 * *v50 + 16));
      *v35 = 2;
      v35[1] = a3->top;
      v35[2] = a2->bottom;
      v35[3] = a2->left;
      v37 = a3->left;
LABEL_36:
      v35[5] = 2;
      v35[4] = v37;
LABEL_37:
      v38 = (char *)v35 + (unsigned int)(4 * *v35 + 16);
      *(_DWORD *)v38 = 0;
      *((_DWORD *)v38 + 1) = a2->bottom;
      *((_QWORD *)v38 + 1) = 0x7FFFFFFFLL;
      *(_QWORD *)(v10 + 40) = v38 + 16;
      return 1LL;
    }
    v57 = (__int128)*a2;
    HIDWORD(v57) = top;
LABEL_22:
    v30 = (struct _RECTL *)&v57;
LABEL_23:
    RGNOBJ::vSet(this, v30);
    return 1LL;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v56, *(_DWORD *)(v10 + 80));
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v56);
  if ( v56[0] )
  {
    RGNOBJ::vCopy((RGNOBJ *)v56, this);
    if ( (unsigned int)RGNOBJ::bSubtractComplex((RGNOBJ *)v56, a2, a3, a4) )
      v12 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)v56);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v56);
  return v12;
}
