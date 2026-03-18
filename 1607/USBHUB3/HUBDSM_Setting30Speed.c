/*
 * XREFs of HUBDSM_Setting30Speed @ 0x1C00188C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ComputeDelayInNanoSecondsFromSpeedAttr @ 0x1C0025B5C (HUBMISC_ComputeDelayInNanoSecondsFromSpeedAttr.c)
 */

__int64 __fastcall HUBDSM_Setting30Speed(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r10d
  __int64 v3; // rdi
  __int64 v4; // r11
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rcx
  int v8; // r9d
  __int16 v9; // ax
  int v10; // r8d
  __int16 v11; // ax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = *(_QWORD *)(v1 + 8);
  *(_DWORD *)(v1 + 2556) = 2621480;
  if ( (*(_DWORD *)(v3 + 204) & 0x100) != 0 )
  {
    v4 = 0LL;
    v5 = *(unsigned int *)(v3 + 232);
    v6 = *(_QWORD *)(v3 + 224);
    v7 = 0LL;
    if ( *(_DWORD *)(v3 + 232) )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v6 + 4 * v7);
        if ( (v8 & 0xF) == (*(_DWORD *)(v3 + 188) & 0xF) && (v8 & 0x80u) == 0 )
          break;
        if ( ++v7 >= v5 )
          goto LABEL_10;
      }
      v9 = HUBMISC_ComputeDelayInNanoSecondsFromSpeedAttr(v6 + 4 * v7, (*(_DWORD *)(v3 + 188) >> 8) & 0xF);
      if ( v9 == -1 )
        return 4065;
      *(_WORD *)(v1 + 2556) = v9;
    }
LABEL_10:
    if ( !v5 )
      return v2;
    while ( 1 )
    {
      v10 = *(_DWORD *)(v6 + 4 * v4);
      if ( (v10 & 0xF) == ((*(_DWORD *)(v3 + 188) >> 4) & 0xF) && (v10 & 0x80u) != 0 )
        break;
      if ( ++v4 >= v5 )
        return v2;
    }
    v11 = HUBMISC_ComputeDelayInNanoSecondsFromSpeedAttr(v6 + 4 * v4, (unsigned __int16)*(_DWORD *)(v3 + 188) >> 12);
    if ( v11 != -1 )
    {
      *(_WORD *)(v1 + 2558) = v11;
      return v2;
    }
    return 4065;
  }
  return v2;
}
