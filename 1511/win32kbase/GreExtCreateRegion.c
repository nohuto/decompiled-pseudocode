/*
 * XREFs of GreExtCreateRegion @ 0x1C0074050
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C0073F60 (NtGdiExtCreateRegion.c)
 * Callees:
 *     vConvertXformToMatrix @ 0x1C0014000 (vConvertXformToMatrix.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C00156F0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002863C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0028700 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00294B0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C002A02C (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C002AE80 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C002B2C0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C002B590 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C002B62C (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C006F530 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C006F560 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C0081D40 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ @ 0x1C00A8C14 (-bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B48A8 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 */

__int64 __fastcall GreExtCreateRegion(_DWORD *a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int16 *v13[2]; // [rsp+20h] [rbp-99h] BYREF
  __m128 *v14; // [rsp+30h] [rbp-89h] BYREF
  int v15; // [rsp+38h] [rbp-81h]
  int v16; // [rsp+3Ch] [rbp-7Dh]
  __int16 *v17[2]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v18[8]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v19; // [rsp+58h] [rbp-61h]
  __m128 v20; // [rsp+D0h] [rbp+17h] BYREF
  float v21; // [rsp+E0h] [rbp+27h]
  float v22; // [rsp+E4h] [rbp+2Bh]
  int v23; // [rsp+E8h] [rbp+2Fh]
  int v24; // [rsp+ECh] [rbp+33h]
  int v25; // [rsp+F0h] [rbp+37h]

  right = a3->right;
  if ( a3->left != 32 || right > 0xFFFFFFD || 16 * (right + 2) > a2 )
    return 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
  v7 = 0LL;
  if ( !v13[0] || !(unsigned int)RGNOBJ::bSet((RGNOBJ *)v13, right, a3 + 2) )
  {
    RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v13);
    EngSetLastError(8u);
LABEL_45:
    v8 = v7;
    goto LABEL_46;
  }
  if ( !a1 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v13) == 1 )
  {
    RGNOBJ::vTighten((RGNOBJ *)v13);
    if ( (((*((_DWORD *)v13[0] + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v13[0] + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v13[0] + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
      || (((*((_DWORD *)v13[0] + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
    {
      RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v13);
      v12 = 0LL;
    }
    else
    {
      v12 = RGNOBJ::hrgnAssociate((struct OBJECT **)v13);
      if ( !v12 )
        RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v13);
    }
    v7 = v12;
    goto LABEL_45;
  }
  vConvertXformToMatrix(a1, &v20);
  v23 *= 16;
  v24 *= 16;
  v14 = &v20;
  v16 = 0;
  v20 = _mm_mul_ps(v20, (__m128)_xmm);
  v22 = v22 * 16.0;
  v21 = v21 * 16.0;
  EXFORMOBJ::vComputeAccelFlags((EFLOAT **)&v14, 8);
  if ( (v25 & 0x43) == 0x43 )
  {
    RGNOBJ::vTighten((RGNOBJ *)v13);
    if ( (((*((_DWORD *)v13[0] + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((*((_DWORD *)v13[0] + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((*((_DWORD *)v13[0] + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
      && (((*((_DWORD *)v13[0] + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
    {
      v8 = RGNOBJ::hrgnAssociate((struct OBJECT **)v13);
      if ( !v8 )
        RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v13);
      goto LABEL_46;
    }
    RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v13);
    goto LABEL_45;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
  if ( v19 )
  {
    v9 = RGNOBJ::bCreate((RGNOBJ *)v13, (struct EPATHOBJ *)v18, (struct EXFORMOBJ *)&v14);
    RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v13);
    if ( !v9 )
      goto LABEL_21;
    v15 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v14, (struct EPATHOBJ *)v18, 1u, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14, v10, v11);
    if ( !v14 )
    {
      EngSetLastError(8u);
      v8 = 0LL;
LABEL_35:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((__int16 **)&v14);
      goto LABEL_36;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
    if ( v17[0] )
    {
      RGNMEMOBJ::iReduce((RGNMEMOBJ *)v17, (struct RGNOBJ *)&v14);
      RGNOBJ::vTighten((RGNOBJ *)v17);
      if ( (((*((_DWORD *)v17[0] + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((*((_DWORD *)v17[0] + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((*((_DWORD *)v17[0] + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((*((_DWORD *)v17[0] + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        v8 = RGNOBJ::hrgnAssociate((struct OBJECT **)v17);
        if ( !v8 )
          RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v17);
        goto LABEL_34;
      }
      RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v17);
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0LL;
LABEL_34:
    RGNMEMOBJ::~RGNMEMOBJ(v17);
    goto LABEL_35;
  }
  EngSetLastError(8u);
  RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v13);
LABEL_21:
  v8 = 0LL;
LABEL_36:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
LABEL_46:
  RGNMEMOBJ::~RGNMEMOBJ(v13);
  return v8;
}
