/*
 * XREFs of ?UMPDDrvStartDoc@@YAHPEAU_SURFOBJ@@PEAGK@Z @ 0x1C029FF60
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0146AE8 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C0146F1C (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C1AC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A1AF0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvStartDoc(struct _SURFOBJ *a1, unsigned __int16 *a2, int a3)
{
  int v4; // esi
  UMPDOBJ *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // edi
  size_t Size; // [rsp+20h] [rbp-59h]
  unsigned int v14; // [rsp+40h] [rbp-39h] BYREF
  int v15; // [rsp+44h] [rbp-35h] BYREF
  int v16; // [rsp+48h] [rbp-31h] BYREF
  void *v17; // [rsp+50h] [rbp-29h] BYREF
  UMPDOBJ *v18; // [rsp+58h] [rbp-21h] BYREF
  void *v19; // [rsp+60h] [rbp-19h] BYREF
  _QWORD Src[6]; // [rsp+68h] [rbp-11h] BYREF

  v14 = 1;
  v16 = 0;
  v15 = 0;
  v4 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  v19 = 0LL;
  v17 = 0LL;
  memset(Src, 0, sizeof(Src));
  v7 = v18;
  if ( !v18 )
    goto LABEL_17;
  if ( !*((_DWORD *)v18 + 109) )
  {
LABEL_10:
    Src[0] = 0x2300000030LL;
    Src[2] = *(_QWORD *)v7;
    Src[3] = a1;
    Src[4] = a2;
    LODWORD(Src[5]) = a3;
    if ( !(unsigned int)UMPDOBJ::pso(v7, (UMPDOBJ *)((char *)v7 + 64), (struct _SURFOBJ **)&Src[3], v4)
      || !(unsigned int)UMPDOBJ::ThunkStringW(v7, (unsigned __int16 **)&Src[4])
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v7, Src, 0x30u, &v14, Size) == -1)
      || (v11 = 1, !v14) )
    {
      v11 = 0;
    }
    goto LABEL_15;
  }
  v14 = 56;
  if ( a2 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    v9 = 2 * v8 + 2;
    if ( v9 + 7 >= v9 && ((v9 + 7) & 0xFFFFFFF8) + 56 >= 0x38 )
    {
      v14 = ((v9 + 7) & 0xFFFFFFF8) + 56;
      goto LABEL_9;
    }
LABEL_17:
    v11 = 0;
    goto LABEL_18;
  }
LABEL_9:
  v10 = UMPDOBJ::bThunkLargeBitmap(v18, a1, &v19, &v17, &v16, &v15, &v14);
  v4 = v15;
  v11 = v10;
  v14 = v10;
  if ( v10 )
    goto LABEL_10;
LABEL_15:
  if ( v16 )
    UMPDOBJ::RestoreBitmap(v7, a1, v19, v17, Size, v4);
LABEL_18:
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v11;
}
