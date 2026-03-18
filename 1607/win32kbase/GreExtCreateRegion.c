/*
 * XREFs of GreExtCreateRegion @ 0x1C006EC30
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C006E6A0 (NtGdiExtCreateRegion.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002D344 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C002D570 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C002DD1C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C002E7B8 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0031510 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0031740 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00317EC (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00345B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z @ 0x1C0045CD0 (-vComputeAccelFlags@EXFORMOBJ@@QEAAXK@Z.c)
 *     ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0047A90 (--1PATHMEMOBJ@@QEAA@XZ.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0047AC0 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     vConvertXformToMatrix @ 0x1C0047BA0 (vConvertXformToMatrix.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0083240 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00839B0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ @ 0x1C00B146C (-bDeleteRGNOBJ@RGNOBJ@@QEAAHXZ.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00BF090 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 */

struct HOBJ__ *__fastcall GreExtCreateRegion(_DWORD *a1, unsigned int a2, struct _RECTL *a3)
{
  unsigned int right; // ebx
  struct HOBJ__ *v7; // rdi
  struct HOBJ__ *v8; // rbx
  int v9; // ebx
  struct _RECTL *v10; // r9
  struct HOBJ__ *v11; // rbx
  __int16 *v12[2]; // [rsp+20h] [rbp-99h] BYREF
  __int16 *v13[2]; // [rsp+30h] [rbp-89h] BYREF
  __m128 *v14; // [rsp+40h] [rbp-79h] BYREF
  int v15; // [rsp+4Ch] [rbp-6Dh]
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
  vConvertXformToMatrix(a1, &v18);
  v21 *= 16;
  v22 *= 16;
  v14 = &v18;
  v15 = 0;
  v18 = _mm_mul_ps(v18, (__m128)_xmm);
  v20 = v20 * 16.0;
  v19 = v19 * 16.0;
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)&v14, 8);
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
    v9 = RGNOBJ::bCreate((RGNOBJ *)v12, (struct EPATHOBJ *)v16, (struct EXFORMOBJ *)&v14);
    RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v12);
    if ( !v9 )
      goto LABEL_21;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v14, (struct EPATHOBJ *)v16, 1u, v10);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
    if ( !v14 )
    {
      EngSetLastError(8u);
      v8 = 0LL;
LABEL_35:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((__int16 **)&v14);
      goto LABEL_36;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
    if ( v13[0] )
    {
      RGNMEMOBJ::iReduce((RGNMEMOBJ *)v13, (struct RGNOBJ *)&v14);
      RGNOBJ::vTighten((RGNOBJ *)v13);
      if ( (((*((_DWORD *)v13[0] + 22) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((*((_DWORD *)v13[0] + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((*((_DWORD *)v13[0] + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((*((_DWORD *)v13[0] + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        v8 = RGNOBJ::hrgnAssociate((struct OBJECT **)v13);
        if ( !v8 )
          RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v13);
        goto LABEL_34;
      }
      RGNOBJ::bDeleteRGNOBJ((RGNOBJ *)v13);
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0LL;
LABEL_34:
    RGNMEMOBJ::~RGNMEMOBJ(v13);
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
