/*
 * XREFs of DwmAsyncChildCreate @ 0x1C005B92C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C014AB34 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncChildCreate(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int128 *a8,
        __int64 a9,
        __int128 *a10)
{
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _QWORD v19[18]; // [rsp+20h] [rbp-A1h] BYREF

  v14 = -1073741823;
  if ( Object )
  {
    memset((char *)v19 + 2, 0, 0x8AuLL);
    v15 = *a8;
    v16 = a8[1];
    WORD2(v19[0]) = 0x8000;
    LODWORD(v19[8]) = a5;
    *(_OWORD *)&v19[11] = v15;
    LODWORD(v19[17]) = a6;
    v19[15] = *((_QWORD *)a8 + 4);
    v17 = *a10;
    HIDWORD(v19[10]) = a7;
    *(_OWORD *)((char *)&v19[8] + 4) = v17;
    LODWORD(v19[0]) = 9175140;
    LODWORD(v19[5]) = 1073741841;
    *(_QWORD *)((char *)&v19[5] + 4) = a2;
    *(_QWORD *)((char *)&v19[6] + 4) = a3;
    HIDWORD(v19[7]) = a4;
    *(_OWORD *)&v19[13] = v16;
    v19[16] = a9;
    EtwUpdateEvent(a3);
    v14 = LpcRequestPort(Object, v19);
    ObfDereferenceObject(Object);
  }
  return v14;
}
