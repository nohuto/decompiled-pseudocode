/*
 * XREFs of NtGdiGetTransform @ 0x1401107A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vInitPageToDevice@DC@@QEAAXPEAUMATRIX@@@Z @ 0x140110EB0 (-vInitPageToDevice@DC@@QEAAXPEAUMATRIX@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetTransform(HDC a1, unsigned int a2, void *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  EXFORMOBJ *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-E8h] BYREF
  _OWORD *v10; // [rsp+38h] [rbp-E0h] BYREF
  DC *v11[14]; // [rsp+40h] [rbp-D8h] BYREF
  struct _XFORML v12; // [rsp+B0h] [rbp-68h] BYREF
  _OWORD v13[2]; // [rsp+C8h] [rbp-50h] BYREF
  int v14; // [rsp+E8h] [rbp-30h]

  memset(&v12, 0, sizeof(v12));
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  v5 = 0;
  if ( v11[0] )
  {
    v6 = a2;
    LODWORD(v6) = a2 | 0x80000000;
    DC::QuickInitXform(v11[0], &v9, v6);
    if ( v9 )
    {
      v7 = (EXFORMOBJ *)&v9;
    }
    else
    {
      if ( a2 != 772 )
        goto LABEL_7;
      memset(v13, 0, sizeof(v13));
      v14 = 0;
      DC::vInitPageToDevice(v11[0], (struct MATRIX *)v13);
      v10 = v13;
      v7 = (EXFORMOBJ *)&v10;
    }
    EXFORMOBJ::vGetCoefficient(v7, &v12);
    v5 = 1;
  }
LABEL_7:
  if ( v5 )
    GreProbeAndWriteToUntrustedVa(a3, 0x18uLL, &v12, 0x18uLL, 1uLL);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return v5;
}
