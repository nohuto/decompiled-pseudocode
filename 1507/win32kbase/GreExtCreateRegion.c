/*
 * XREFs of GreExtCreateRegion @ 0x1C0055450
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C0053100 (NtGdiExtCreateRegion.c)
 * Callees:
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     vConvertXformToMatrix @ 0x1C0025560 (vConvertXformToMatrix.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0025650 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0025680 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0028200 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003E0B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C003E150 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C003E6C0 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C003F720 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C00402CC (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004BCE0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C004C060 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C004C104 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00690C8 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ @ 0x1C00A4064 (-bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B1130 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 */

struct HOBJ__ *__fastcall GreExtCreateRegion(float *a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  struct HOBJ__ *v7; // rdi
  struct HOBJ__ *v8; // rbx
  int v9; // ebx
  struct _RECTL *v10; // r9
  struct HOBJ__ *v11; // rbx
  __int16 *v12[2]; // [rsp+20h] [rbp-99h] BYREF
  __m128 *v13; // [rsp+30h] [rbp-89h] BYREF
  int v14; // [rsp+3Ch] [rbp-7Dh]
  __int16 *v15[2]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v17; // [rsp+58h] [rbp-61h]
  __m128 v18; // [rsp+D0h] [rbp+17h] BYREF
  float v19; // [rsp+E0h] [rbp+27h]
  float v20; // [rsp+E4h] [rbp+2Bh]
  int v21; // [rsp+E8h] [rbp+2Fh]
  int v22; // [rsp+ECh] [rbp+33h]
  int v23; // [rsp+F0h] [rbp+37h]

  right = a3->right;
  if ( a3->left != 32 || right > 0xFFFFFFD || 16 * (right + 2) > a2 )
    return 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
  v7 = 0LL;
  if ( !v12[0] || !(unsigned int)RGNOBJ::bSet((RGNOBJ *)v12, right, a3 + 2) )
  {
    RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v12);
    EngSetLastError(8u);
LABEL_45:
    v8 = v7;
    goto LABEL_46;
  }
  if ( !a1 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v12) == 1 )
  {
    RGNOBJ::vTighten((RGNOBJ *)v12);
    if ( (((*((_DWORD *)v12[0] + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v12[0] + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v12[0] + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v12[0] + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v12);
      v11 = 0LL;
    }
    else
    {
      v11 = RGNOBJ::hrgnAssociate((struct OBJECT **)v12);
      if ( !v11 )
        RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v12);
    }
    v7 = v11;
    goto LABEL_45;
  }
  vConvertXformToMatrix(a1, v18.m128_f32);
  v21 *= 16;
  v22 *= 16;
  v13 = &v18;
  v14 = 0;
  v18 = _mm_mul_ps(v18, (__m128)_xmm);
  v20 = v20 * 16.0;
  v19 = v19 * 16.0;
  EXFORMOBJ::vComputeAccelFlags((EFLOAT **)&v13, 8);
  if ( (v23 & 0x43) == 0x43 )
  {
    RGNOBJ::vTighten((RGNOBJ *)v12);
    if ( (((*((_DWORD *)v12[0] + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((*((_DWORD *)v12[0] + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((*((_DWORD *)v12[0] + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((*((_DWORD *)v12[0] + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      v8 = RGNOBJ::hrgnAssociate((struct OBJECT **)v12);
      if ( !v8 )
        RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v12);
      goto LABEL_46;
    }
    RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v12);
    goto LABEL_45;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v16);
  if ( v17 )
  {
    v9 = RGNOBJ::bCreate((RGNOBJ *)v12, (struct EPATHOBJ *)v16, (struct EXFORMOBJ *)&v13);
    RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v12);
    if ( !v9 )
      goto LABEL_21;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v13, (struct EPATHOBJ *)v16, 1u, v10);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v13);
    if ( !v13 )
    {
      EngSetLastError(8u);
      v8 = 0LL;
LABEL_35:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((__int16 **)&v13);
      goto LABEL_36;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v15);
    if ( v15[0] )
    {
      RGNMEMOBJ::iReduce((RGNMEMOBJ *)v15, (struct RGNOBJ *)&v13);
      RGNOBJ::vTighten((RGNOBJ *)v15);
      if ( (((*((_DWORD *)v15[0] + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((*((_DWORD *)v15[0] + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((*((_DWORD *)v15[0] + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((*((_DWORD *)v15[0] + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        v8 = RGNOBJ::hrgnAssociate((struct OBJECT **)v15);
        if ( !v8 )
          RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v15);
        goto LABEL_34;
      }
      RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v15);
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0LL;
LABEL_34:
    RGNMEMOBJ::~RGNMEMOBJ(v15);
    goto LABEL_35;
  }
  EngSetLastError(8u);
  RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v12);
LABEL_21:
  v8 = 0LL;
LABEL_36:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v16);
LABEL_46:
  RGNMEMOBJ::~RGNMEMOBJ(v12);
  return v8;
}
