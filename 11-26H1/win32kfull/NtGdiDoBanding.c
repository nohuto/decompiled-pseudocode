/*
 * XREFs of NtGdiDoBanding @ 0x140241610
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x14028FC9C (-GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall NtGdiDoBanding(HDC a1, int a2, void *a3, void *a4)
{
  unsigned int v7; // ebx
  struct _POINTL v9; // [rsp+30h] [rbp-88h] BYREF
  struct tagSIZE v10; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v11[14]; // [rsp+40h] [rbp-78h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v11, a1);
  if ( v11[0] )
    v7 = GrepDoBanding((struct XDCOBJ *)v11, a2, &v9, &v10);
  else
    v7 = 0;
  if ( v7 )
  {
    GreProbeAndWriteToUntrustedVa(a3, 8uLL, &v9, 8uLL, 4uLL);
    GreProbeAndWriteToUntrustedVa(a4, 8uLL, &v10, 8uLL, 4uLL);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v11);
  return v7;
}
