/*
 * XREFs of ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A17F0
 * Callers:
 *     ?RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z @ 0x1C029C1AC (-RestoreBitmap@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAX1HH@Z.c)
 *     ?RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z @ 0x1C029C1F0 (-RestoreBitmaps@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@00PEAX11111HHHHHH@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02A1958 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z @ 0x1C02A1BEC (-bThunkLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00PEAPEAX11111PEAH22222PEAK@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0146F48 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x1C0286824 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall UMPDOBJ::bDeleteLargeBitmaps(
        UMPDOBJ *this,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4)
{
  unsigned int v8; // ebx
  size_t Size; // [rsp+20h] [rbp-58h]
  int v11; // [rsp+30h] [rbp-48h] BYREF
  _QWORD Src[6]; // [rsp+38h] [rbp-40h] BYREF

  memset(Src, 0, sizeof(Src));
  v8 = 0;
  if ( !a2 && !a3 && !a4 )
    return 1LL;
  Src[2] = *(_QWORD *)this;
  Src[0] = 0x7600000030LL;
  if ( a2 )
    Src[3] = a2->pvBits;
  else
    Src[3] = 0LL;
  if ( a3 )
    Src[4] = a3->pvBits;
  else
    Src[4] = 0LL;
  if ( a4 )
    Src[5] = a4->pvBits;
  else
    Src[5] = 0LL;
  LODWORD(Size) = 4;
  if ( (unsigned int)UMPDOBJ::Thunk(this, Src, 0x30u, &v11, Size) != -1 )
  {
    if ( v11 )
      v8 = 1;
  }
  UMPDOBJ::ResetHeap(this);
  return v8;
}
