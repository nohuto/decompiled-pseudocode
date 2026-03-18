/*
 * XREFs of ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FC678
 * Callers:
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01FD378 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0201234 (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     CkptRestore @ 0x1C00AFD64 (CkptRestore.c)
 *     GetRect @ 0x1C00AFEE8 (GetRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

struct tagCHECKPOINT *__fastcall GetOrUpdateCheckPointIfNotPresent(struct _MOVESIZEDATA *a1)
{
  struct tagCHECKPOINT *Prop; // r8
  __int64 v3; // r10
  struct tagCHECKPOINT *result; // rax
  int v5; // eax
  __int128 v6; // xmm0
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  Prop = (struct tagCHECKPOINT *)GetProp(*(_QWORD *)a1, (unsigned __int16)atomCheckpointProp, 1LL);
  if ( Prop
    || (GetRect(v3, (__int64)&v7, 66),
        result = (struct tagCHECKPOINT *)CkptRestore(*(_QWORD *)a1, &v7),
        (Prop = result) != 0LL) )
  {
    v5 = *((_DWORD *)a1 + 45);
    if ( (v5 & 0x1000000) == 0 )
    {
      v6 = *(_OWORD *)Prop;
      *((_DWORD *)a1 + 45) = v5 | 0x1000000;
      *(_OWORD *)((char *)a1 + 136) = v6;
    }
    return Prop;
  }
  return result;
}
