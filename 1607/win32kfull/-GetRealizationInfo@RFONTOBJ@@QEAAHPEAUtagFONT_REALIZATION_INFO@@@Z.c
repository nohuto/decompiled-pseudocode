/*
 * XREFs of ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO@@@Z @ 0x1C002E7E8
 * Callers:
 *     GreGetRealizationInfo @ 0x1C010CE84 (GreGetRealizationInfo.c)
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
  _DWORD *v9; // rbx
  __int16 v10; // r9
  unsigned __int16 v11; // dx
  int v12; // eax

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
    v9 = *(_DWORD **)this;
    v10 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL);
    v11 = v10 - 1;
    if ( v10 != 1 )
    {
      do
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 15) + 8LL * v11 + 224) + 12LL) & 0x100) != 0 )
          --v10;
        --v11;
      }
      while ( v11 );
    }
    v12 = v9[3];
    if ( (v12 & 0x2000) != 0 )
      v6 = 1;
    if ( (v12 & 0x4000) != 0 )
      v6 |= 2u;
    *((_DWORD *)a2 + 4) = *(_DWORD *)(*((_QWORD *)v9 + 15) + 36LL);
    *((_WORD *)a2 + 10) = v10 - 1;
    *((_WORD *)a2 + 11) = v6;
  }
  return 1LL;
}
