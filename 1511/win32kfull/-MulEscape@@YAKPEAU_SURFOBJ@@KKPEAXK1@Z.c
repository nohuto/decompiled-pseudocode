/*
 * XREFs of ?MulEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C0296230
 * Callers:
 *     <none>
 * Callees:
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C01406D8 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0299194 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02995A4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 */

__int64 __fastcall MulEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        void *a6)
{
  unsigned int v6; // esi
  unsigned int v10; // eax
  DHPDEV dhpdev; // rax
  int v12; // ebx
  __int64 **i; // rdi
  unsigned int v14; // eax
  _QWORD v16[2]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v17[72]; // [rsp+50h] [rbp-C8h] BYREF
  struct _SURFOBJ *v18; // [rsp+98h] [rbp-80h]

  v6 = 0;
  if ( !a1->dhsurf || a2 - 4352 <= 2 )
    return 0LL;
  if ( a1->iType == 3 )
  {
    if ( (unsigned int)MSURF::bFindSurface((MSURF *)v17, a1, 0LL, 0LL) )
    {
      do
      {
        v16[0] = v18->hdev;
        if ( *(_QWORD *)(v16[0] + 2912LL) )
        {
          v10 = PDEVOBJ::Escape((PDEVOBJ *)v16, v18, a2, a3, a4, a5, a6);
          if ( v10 )
            v6 = v10;
        }
      }
      while ( (unsigned int)MSURF::bNextSurface((MSURF *)v17) );
    }
  }
  else
  {
    dhpdev = a1->dhpdev;
    v12 = *((_DWORD *)dhpdev + 4);
    for ( i = *(__int64 ***)dhpdev; v12; i = (__int64 **)*i )
    {
      --v12;
      v16[0] = i[6];
      if ( *(_QWORD *)(v16[0] + 2912LL) )
      {
        v14 = PDEVOBJ::Escape((PDEVOBJ *)v16, (struct _SURFOBJ *)i[8], a2, a3, a4, a5, a6);
        if ( v14 )
          v6 = v14;
      }
    }
  }
  return v6;
}
