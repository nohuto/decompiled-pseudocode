/*
 * XREFs of ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C029CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C01469A0 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  UMPDOBJ *v2; // rbx
  size_t Size; // [rsp+20h] [rbp-50h]
  UMPDOBJ *v4; // [rsp+30h] [rbp-40h] BYREF
  __int64 v5; // [rsp+38h] [rbp-38h] BYREF
  _QWORD Src[5]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v4);
  memset(Src, 0, sizeof(Src));
  v2 = v4;
  if ( v4 )
  {
    if ( a1 )
    {
      Src[0] = 0x2B00000028LL;
      Src[2] = *(_QWORD *)v4;
      Src[3] = *(_QWORD *)&a1[1].ulStyleSize;
      Src[4] = a1;
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v4, (UMPDOBJ *)((char *)v4 + 176), (const void **)&Src[4], 0x40u) )
      {
        LODWORD(Size) = 4;
        UMPDOBJ::Thunk(v2, Src, 0x28u, &v5, Size);
      }
    }
  }
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  XUMPDOBJ::~XUMPDOBJ(&v4);
}
