/*
 * XREFs of ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C0207BD4
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207464 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00716CC (xxxInitSendValidateMinMaxInfoEx.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall xxxGetMinMaxTrackInfo(struct _MOVESIZEDATA *a1, int a2)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-38h] BYREF

  memset(v4, 0, sizeof(v4));
  xxxInitSendValidateMinMaxInfoEx(*(_QWORD *)a1, (__int64)v4, 0LL, a2);
  *((_QWORD *)a1 + 11) = v4[3];
  *((_QWORD *)a1 + 12) = v4[4];
}
