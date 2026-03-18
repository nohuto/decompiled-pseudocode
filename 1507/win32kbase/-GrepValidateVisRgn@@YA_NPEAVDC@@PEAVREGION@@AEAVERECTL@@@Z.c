/*
 * XREFs of ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00BE150
 * Callers:
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreValidateVisrgn @ 0x1C0067180 (GreValidateVisrgn.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003A914 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C003AFC0 (HmgShareLockCheck.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C00AEEB0 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ?GreValidateRgnInDCSurfBounds@@YA_NPEAVDC@@PEAVSURFACE@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00B3E28 (-GreValidateRgnInDCSurfBounds@@YA_NPEAVDC@@PEAVSURFACE@@PEAVREGION@@AEAVERECTL@@@Z.c)
 */

char __fastcall GrepValidateVisRgn(struct DC *a1, struct REGION *a2, struct ERECTL *a3)
{
  __int64 v7; // rbx
  struct SURFACE *v8; // rax
  __int64 v9; // rcx
  bool v10; // bl
  _BYTE v11[32]; // [rsp+20h] [rbp-38h] BYREF
  struct SURFACE *v12; // [rsp+40h] [rbp-18h]

  if ( (*((_DWORD *)a1 + 9) & 0x100000) == 0 )
    return 1;
  v7 = *((_QWORD *)a1 + 6);
  if ( !v7 || !a2 )
    return 1;
  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v11);
  v12 = 0LL;
  if ( (*((_DWORD *)a1 + 9) & 0x40000) != 0 )
  {
    v9 = *((_QWORD *)a1 + 317);
    if ( v9 )
    {
      v8 = (struct SURFACE *)HmgShareLockCheck(v9, 5);
      v12 = v8;
    }
    else
    {
      v8 = *(struct SURFACE **)(v7 + 2576);
    }
  }
  else
  {
    v8 = (struct SURFACE *)*((_QWORD *)a1 + 64);
  }
  if ( v8 )
    v10 = GreValidateRgnInDCSurfBounds(a1, v8, a2, a3);
  else
    v10 = 1;
  SURFREF::~SURFREF((SURFREF *)v11);
  return v10;
}
