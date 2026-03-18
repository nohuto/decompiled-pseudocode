/*
 * XREFs of ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO@@@Z @ 0x1C015B980
 * Callers:
 *     GreGetRealizationInfo @ 0x1C01017D8 (GreGetRealizationInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::GetRealizationInfo(RFONTOBJ *this, struct tagFONT_REALIZATION_INFO *a2)
{
  __int64 v3; // rdx
  int v4; // eax
  char v5; // al
  __int16 v6; // r11
  bool v7; // zf
  _DWORD *v8; // rbx
  __int16 v9; // r9
  unsigned __int16 v10; // dx
  int v11; // eax

  v3 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL) + 48LL);
  if ( (v4 & 2) != 0 )
    v5 = 1;
  else
    v5 = ((v4 & 4) == 0) | 2;
  *((_BYTE *)a2 + 4) = v5;
  v6 = 0;
  *((_DWORD *)a2 + 2) = **(_DWORD **)this;
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v3 + 140);
  *((_WORD *)a2 + 3) = 0;
  v7 = *(_DWORD *)a2 == 16;
  *((_BYTE *)a2 + 5) = ((*(_DWORD *)(*(_QWORD *)this + 12LL) & 0x40000000) != 0) + 1;
  if ( !v7 )
  {
    v8 = *(_DWORD **)this;
    v9 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL);
    v10 = v9 - 1;
    if ( v9 != 1 )
    {
      do
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 15) + 8LL * v10 + 216) + 12LL) & 0x100) != 0 )
          --v9;
        --v10;
      }
      while ( v10 );
    }
    v11 = v8[3];
    if ( (v11 & 0x2000) != 0 )
      v6 = 1;
    if ( (v11 & 0x4000) != 0 )
      v6 |= 2u;
    *((_DWORD *)a2 + 4) = *(_DWORD *)(*((_QWORD *)v8 + 15) + 36LL);
    *((_WORD *)a2 + 10) = v9 - 1;
    *((_WORD *)a2 + 11) = v6;
  }
  return 1LL;
}
