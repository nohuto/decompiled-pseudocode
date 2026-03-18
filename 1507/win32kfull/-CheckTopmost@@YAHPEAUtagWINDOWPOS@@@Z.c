/*
 * XREFs of ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0083EC8
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00836EC (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C008143C (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C0081574 (GetLastTopMostWindow.c)
 *     GetTopMostInsertAfter @ 0x1C01C39FC (GetTopMostInsertAfter.c)
 */

__int64 __fastcall CheckTopmost(struct tagWINDOWPOS *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int v4; // edx
  __int64 v6; // rax
  struct tagWND *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 *LastTopMostWindow; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  _QWORD *TopMostInsertAfter; // rax
  _QWORD *v14; // rax

  v1 = 0LL;
  v3 = *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1]);
  v4 = *((_DWORD *)a1 + 8);
  if ( (v4 & 0x14) == 0
    && *((_QWORD *)a1 + 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && v3 != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 392LL) + 80LL) )
  {
    *((_QWORD *)a1 + 1) = 0LL;
  }
  if ( (v4 & 4) != 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 1);
  if ( v6 != 1 )
  {
    switch ( v6 )
    {
      case -2LL:
        if ( (*(_BYTE *)(v3 + 48) & 8) == 0
          || ((LastTopMostWindow = (__int64 *)GetLastTopMostWindow(v3)) == 0LL
            ? (v11 = 0LL)
            : (v11 = *LastTopMostWindow),
              *((_QWORD *)a1 + 1) = v11,
              v11 == *(_QWORD *)a1) )
        {
          if ( (*(_WORD *)(v3 + 66) & 0x3FFF) != 0x29D )
          {
            v12 = *(__int64 **)(v3 + 80);
            if ( v12 )
              v1 = *v12;
          }
          *((_QWORD *)a1 + 1) = v1;
        }
        break;
      case -1LL:
        if ( gHardErrorHandler && (TopMostInsertAfter = (_QWORD *)GetTopMostInsertAfter(v3)) != 0LL )
          *((_QWORD *)a1 + 1) = *TopMostInsertAfter;
        else
          *((_QWORD *)a1 + 1) = 0LL;
        return 1LL;
      case 0LL:
        if ( (*(_BYTE *)(v3 + 48) & 8) == 0 )
        {
          v7 = CalcForegroundInsertAfter(v3);
          if ( v7 )
            v1 = *(_QWORD *)v7;
          *((_QWORD *)a1 + 1) = v1;
          return 0LL;
        }
LABEL_17:
        if ( gHardErrorHandler )
        {
          v14 = (_QWORD *)GetTopMostInsertAfter(v3);
          if ( v14 )
            *((_QWORD *)a1 + 1) = *v14;
        }
        return 0LL;
      default:
        v8 = (__int64 *)GetLastTopMostWindow(v3);
        if ( v8 )
          v9 = *v8;
        else
          v9 = 0LL;
        if ( *((_QWORD *)a1 + 1) == v9 )
          return 0LL;
        if ( (*(_BYTE *)(*(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*((_DWORD *)a1 + 2)
                                   + gSharedInfo[1])
                       + 48LL) & 8) != 0 )
        {
          if ( (*(_BYTE *)(v3 + 48) & 8) != 0 )
            goto LABEL_17;
          return 1LL;
        }
        if ( (*(_BYTE *)(v3 + 48) & 8) == 0 )
          return 0LL;
        break;
    }
  }
  return 2LL;
}
