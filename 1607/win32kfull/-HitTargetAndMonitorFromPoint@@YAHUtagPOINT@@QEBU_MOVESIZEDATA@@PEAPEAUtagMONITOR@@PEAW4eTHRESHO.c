/*
 * XREFs of ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FCBA0
 * Callers:
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FC1F8 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FC2F0 (-ComputeSizeOutcome@@YA-AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     xxxInitializeMoveSizeData @ 0x1C0203F8C (xxxInitializeMoveSizeData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01FC3B0 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?PtInRectSpace@@YAHPEBUtagRECT@@UtagPOINT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FD1F4 (-PtInRectSpace@@YAHPEBUtagRECT@@UtagPOINT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

__int64 __fastcall HitTargetAndMonitorFromPoint(
        struct tagPOINT a1,
        const struct _MOVESIZEDATA *const a2,
        struct tagMONITOR **a3,
        enum eTHRESHOLD_MARGIN_DIRECTION *a4)
{
  int v6; // esi
  BOOL v7; // r14d
  __int64 v8; // rcx
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // si
  unsigned __int8 v11; // r15
  struct tagRECT v12; // xmm6
  int v13; // r14d
  __int64 v14; // r9
  struct tagMONITOR *v15; // r10
  __int64 v16; // r9
  unsigned __int8 v17; // r11
  __int64 v18; // r9
  int v19; // r11d
  __int64 result; // rax
  struct tagMONITOR *v21[2]; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v22; // [rsp+30h] [rbp-30h] BYREF
  struct tagPOINT v23; // [rsp+80h] [rbp+20h] BYREF

  v23 = a1;
  v6 = (*((_DWORD *)a2 + 45) >> 15) & 7;
  v7 = *(_DWORD *)(gpDispInfo + 80LL) > 1u && ((*((_DWORD *)a2 + 45) >> 15) & 7u) < 6;
  ComputeSourceRectAndMonitorWithPrecision(a2, &v23, v21, &v22);
  v8 = v6;
  v9 = *((_BYTE *)v21[0] + 4 * v6 + 465);
  v10 = *((_BYTE *)v21[0] + 4 * v6 + 466);
  v11 = *((_BYTE *)v21[0] + 4 * v8 + 467);
  if ( v7 )
  {
    if ( !v9 )
      v9 = gWinArrGlobal[dword_1C02EA9D4[4 * v8]];
    if ( !v10 )
      v10 = gWinArrGlobal[dword_1C02EA9D8[4 * v8]];
    if ( !v11 )
      v11 = gWinArrGlobal[dword_1C02EA9DC[4 * v8]];
  }
  v12 = v22;
  *(struct tagRECT *)v21 = v22;
  v13 = _mm_cvtsi128_si32((__m128i)v22) + v9;
  LODWORD(v21[1]) = v13;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PtInRectSpace)(v21, v23, 1LL) )
  {
    *(_DWORD *)a4 = 1;
  }
  else
  {
    *(struct tagRECT *)v21 = v12;
    LODWORD(v21[0]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v12, 8)) - v10;
    if ( (unsigned int)PtInRectSpace(v21, v14, 2LL) )
    {
      *(_DWORD *)a4 = 2;
    }
    else
    {
      LODWORD(v21[1]) = v12.right - v10;
      HIDWORD(v21[1]) = v12.top + v17;
      v21[0] = (struct tagMONITOR *)__PAIR64__(v12.top, v13);
      if ( (unsigned int)PtInRectSpace(v21, v16, 0LL) )
      {
        *(_DWORD *)a4 = 0;
      }
      else
      {
        HIDWORD(v21[1]) = v12.bottom;
        LODWORD(v21[1]) = v12.right - v10;
        LODWORD(v21[0]) = v13;
        HIDWORD(v21[0]) = v12.bottom - v11;
        if ( !(unsigned int)PtInRectSpace(v21, v18, 3LL) )
        {
          *(_DWORD *)a4 = 4;
          result = 0LL;
          goto LABEL_22;
        }
        *(_DWORD *)a4 = v19;
      }
    }
  }
  result = 1LL;
LABEL_22:
  *a3 = v15;
  return result;
}
