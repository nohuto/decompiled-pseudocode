/*
 * XREFs of ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x1C02A8610
 * Callers:
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02A838C (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 * Callees:
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

struct _POINTL __fastcall EBOX::ptlXform(EBOX *this, struct EPOINTFL *a2, float *a3)
{
  float *v5; // r11
  char v6; // r8
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  bFToL((float)((float)*((int *)this + 14) * a3[1]) + (float)((float)*((int *)this + 12) * *a3), &v8, 6);
  bFToL((float)((float)*((int *)this + 15) * v5[1]) + (float)((float)*((int *)this + 13) * *v5), (_DWORD *)&v8 + 1, v6);
  LODWORD(v8) = *((_DWORD *)this + 10) + v8;
  HIDWORD(v8) += *((_DWORD *)this + 11);
  *(_QWORD *)a2 = v8;
  return (struct _POINTL)a2;
}
