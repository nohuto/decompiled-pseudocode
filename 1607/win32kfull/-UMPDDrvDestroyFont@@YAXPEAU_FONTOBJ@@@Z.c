/*
 * XREFs of ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C029D090
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C02849D4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C029B870 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C029B8F4 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C029C27C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

void __fastcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  UMPDOBJ *v2; // rbx
  size_t Size; // [rsp+20h] [rbp-50h]
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v5; // [rsp+38h] [rbp-38h] BYREF
  _QWORD Src[5]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  memset(Src, 0, sizeof(Src));
  v2 = v5;
  if ( v5 )
  {
    if ( a1 )
    {
      Src[0] = 0x2B00000028LL;
      Src[2] = *(_QWORD *)v5;
      Src[3] = *(_QWORD *)&a1[1].ulStyleSize;
      Src[4] = a1;
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v5, (UMPDOBJ *)((char *)v5 + 176), (const void **)&Src[4], 0x40u, 0LL) )
      {
        LODWORD(Size) = 4;
        UMPDOBJ::Thunk(v2, Src, 40LL, &v4, Size);
      }
    }
  }
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
