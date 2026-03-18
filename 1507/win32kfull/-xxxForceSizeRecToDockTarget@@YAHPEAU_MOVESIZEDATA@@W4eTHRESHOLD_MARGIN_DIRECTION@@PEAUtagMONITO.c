/*
 * XREFs of ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C02076E8
 * Callers:
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0209AF0 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C020C370 (xxxEvaluateDestRectForMonitorMigration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0209C0C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 */

__int64 __fastcall xxxForceSizeRecToDockTarget(
        struct _MOVESIZEDATA *a1,
        int a2,
        __int16 *a3,
        unsigned int *a4,
        struct tagRECT *a5,
        struct tagCHECKPOINT **a6)
{
  __int64 v8; // r11
  __int64 v10; // rdx
  int v11; // r8d
  __int16 *v12; // r8
  __int16 v13; // r9
  int v14; // esi
  __int64 v15; // rdi
  char *v16; // rbx
  char *v17; // rdx
  char *v18; // rcx
  __int64 v19; // r8
  char v20; // al
  _BYTE *v21; // rax
  __int64 v22; // rdx
  __int64 result; // rax
  char *v24; // rdx
  char v25; // cl
  char v26; // [rsp+30h] [rbp-48h] BYREF

  v8 = a2;
  v10 = *(_QWORD *)a1;
  v11 = *(_DWORD *)(*(_QWORD *)a1 + 344LL);
  if ( v11 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v11 != 1
      || (v12 = a3 + 54, (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
    {
      v12 = a3 + 38;
    }
  }
  else
  {
    v12 = a3 + 46;
  }
  if ( (_DWORD)v8 == 2 )
  {
    v13 = v12[4] - 1;
    LOWORD(v14) = *((_DWORD *)v12 + 1) + (*((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1)) / 2;
  }
  else if ( (_DWORD)v8 == 1 )
  {
    v13 = *v12;
    v14 = *((_DWORD *)v12 + 1) + (*((_DWORD *)v12 + 3) - *((_DWORD *)v12 + 1)) / 2;
  }
  else
  {
    if ( (_DWORD)v8 )
      return 0LL;
    LOWORD(v14) = v12[2];
    v13 = *(_DWORD *)v12 + (*((_DWORD *)v12 + 2) - *(_DWORD *)v12) / 2;
  }
  v15 = 7LL;
  v16 = (char *)a3 + v8 + 464;
  v17 = &v26;
  v18 = v16;
  v19 = 7LL;
  do
  {
    v20 = *v18;
    v18 += 4;
    *v17++ = v20;
    --v19;
  }
  while ( v19 );
  v21 = (char *)a3 + v8 + 464;
  v22 = 7LL;
  do
  {
    *v21 = 1;
    v21 += 4;
    --v22;
  }
  while ( v22 );
  result = xxxSizeOrMoveRect(
             a1,
             (unsigned __int16)(*((_WORD *)a1 + 76) + v13) | ((unsigned __int16)(*((_WORD *)a1 + 78) + v14) << 16),
             a4,
             a5,
             a6);
  v24 = &v26;
  do
  {
    v25 = *v24++;
    *v16 = v25;
    v16 += 4;
    --v15;
  }
  while ( v15 );
  return result;
}
