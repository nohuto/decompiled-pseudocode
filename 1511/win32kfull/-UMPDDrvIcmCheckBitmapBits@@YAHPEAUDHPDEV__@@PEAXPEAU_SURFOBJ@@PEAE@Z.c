/*
 * XREFs of ?UMPDDrvIcmCheckBitmapBits@@YAHPEAUDHPDEV__@@PEAXPEAU_SURFOBJ@@PEAE@Z @ 0x1C029DE40
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C01467A8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C01467F8 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01468CC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0146AE8 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C1AC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C02A1AF0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 */

__int64 __fastcall UMPDDrvIcmCheckBitmapBits(struct DHPDEV__ *a1, void *a2, struct _SURFOBJ *a3, unsigned __int8 *a4)
{
  int v5; // esi
  UMPDOBJ *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned int v13; // edi
  size_t Size; // [rsp+20h] [rbp-69h]
  unsigned int v16; // [rsp+40h] [rbp-49h] BYREF
  int v17; // [rsp+44h] [rbp-45h] BYREF
  int v18; // [rsp+48h] [rbp-41h] BYREF
  void *v19; // [rsp+50h] [rbp-39h] BYREF
  UMPDOBJ *v20; // [rsp+58h] [rbp-31h] BYREF
  void *v21; // [rsp+60h] [rbp-29h] BYREF
  _QWORD Src[7]; // [rsp+68h] [rbp-21h] BYREF

  v18 = 0;
  v5 = 0;
  v16 = 1;
  v17 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  v21 = 0LL;
  v19 = 0LL;
  memset(Src, 0, sizeof(Src));
  v9 = v20;
  if ( !v20 )
    goto LABEL_13;
  Src[0] = 0x4200000038LL;
  v10 = *(_QWORD *)v20;
  Src[4] = a2;
  v11 = a3->sizlBitmap.cx * a3->sizlBitmap.cy;
  Src[6] = a4;
  Src[2] = v10;
  Src[3] = a1;
  Src[5] = a3;
  if ( !*((_DWORD *)v20 + 109) )
  {
LABEL_6:
    if ( !(unsigned int)UMPDOBJ::pso(v9, (UMPDOBJ *)((char *)v9 + 64), (struct _SURFOBJ **)&Src[5], v5)
      || (v13 = 1, (Src[6] = UMPDOBJ::_AllocUserMem(v9, v11, 1)) == 0LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v9, Src, 0x38u, &v16, Size) == -1)
      || !v16 )
    {
      v13 = 0;
    }
    goto LABEL_11;
  }
  if ( v11 + 7 < v11 || ((v11 + 7) & 0xFFFFFFF8) + 64 < 0x40 )
  {
LABEL_13:
    v13 = 0;
    goto LABEL_14;
  }
  v16 = ((v11 + 7) & 0xFFFFFFF8) + 64;
  v12 = UMPDOBJ::bThunkLargeBitmap(v20, a3, &v21, &v19, &v18, &v17, &v16);
  v5 = v17;
  v13 = v12;
  v16 = v12;
  if ( v12 )
    goto LABEL_6;
LABEL_11:
  if ( v18 )
    UMPDOBJ::RestoreBitmap(v9, a3, v21, v19, Size, v5);
LABEL_14:
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v13;
}
