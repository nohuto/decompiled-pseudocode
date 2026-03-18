/*
 * XREFs of ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C00B3320
 * Callers:
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 * Callees:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C002D860 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0038FB8 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 */

__int64 __fastcall DC::bMakeInfoDC(DC *this, int a2)
{
  DC *v2; // r9
  unsigned int v3; // ecx
  int v4; // eax
  __int64 v5; // rax
  struct tagSIZE v6; // rax
  struct tagSIZE v7; // r9
  struct tagSIZE v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v2 = this;
  v3 = 0;
  v4 = *((_DWORD *)v2 + 9);
  if ( (v4 & 1) == 0 )
  {
    if ( a2 )
    {
      if ( (v4 & 0x200800) == 0 && !*((_DWORD *)v2 + 8) )
      {
        *((_DWORD *)v2 + 8) = 2;
        *((_DWORD *)v2 + 9) = v4 | 0x800;
        *((_QWORD *)v2 + 311) = *((_QWORD *)v2 + 64);
        v5 = *((_QWORD *)v2 + 6);
        *((_QWORD *)v2 + 64) = 0LL;
        v12 = v5;
        v6 = PDEVOBJ::sizl((PDEVOBJ *)&v12, &v13);
        if ( *(_DWORD *)v6.cx == *(_DWORD *)(*(_QWORD *)&v7 + 528LL) )
        {
          v13 = *(_QWORD *)(*(_QWORD *)&v7 + 528LL);
          v8 = PDEVOBJ::sizl((PDEVOBJ *)&v12, &v14);
          if ( *(_DWORD *)(*(_QWORD *)&v8 + 4LL) == HIDWORD(v13) )
            return 1;
        }
        v9 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v12, &v13);
        *((_QWORD *)v2 + 66) = *v9;
LABEL_13:
        DC::bSetDefaultRegion(v2);
        return 1;
      }
    }
    else if ( (v4 & 0x800) != 0 && *((_DWORD *)v2 + 8) == 2 )
    {
      *((_DWORD *)v2 + 8) = 0;
      *((_DWORD *)v2 + 9) = v4 & 0xFFFFF7FF;
      v10 = *((_QWORD *)v2 + 311);
      *((_QWORD *)v2 + 64) = v10;
      *((_QWORD *)v2 + 311) = 0LL;
      if ( !v10 || *(_QWORD *)(v10 + 56) == *((_QWORD *)v2 + 66) )
        return 1;
      *((_QWORD *)v2 + 66) = *(_QWORD *)(v10 + 56);
      goto LABEL_13;
    }
  }
  return v3;
}
