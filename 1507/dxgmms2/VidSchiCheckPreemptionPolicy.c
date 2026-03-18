/*
 * XREFs of VidSchiCheckPreemptionPolicy @ 0x1C0003AE8
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C0003888 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     VidSchiUpdateNodeRunningTime @ 0x1C0004950 (VidSchiUpdateNodeRunningTime.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 */

__int64 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  int v8; // ebx
  __int64 v9; // rbp
  unsigned int MostSignificantBit; // ecx
  unsigned int v12; // eax
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  bool v17; // cc
  bool v18; // sf
  _BYTE v19[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+58h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 96);
  v5 = 0;
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 24);
  *a2 = -1LL;
  if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
  {
    if ( a1 == *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1480) + 1488) )
    {
      v8 = 15;
      goto LABEL_4;
    }
    v8 = -18;
  }
  if ( !*(_DWORD *)(v4 + 2852) )
  {
    *a2 = 0LL;
    v8 = 2;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v9 + 2144) & 1) == 0 )
  {
    v8 = 3;
    goto LABEL_4;
  }
  _InterlockedAdd((volatile signed __int32 *)(v9 + 904), 1u);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2856)) != 1 )
  {
    v8 = 13;
    goto LABEL_42;
  }
  if ( *(_DWORD *)(v9 + 976) )
    v8 = -14;
  if ( *(_DWORD *)(v9 + 916) )
    v8 = -8;
  if ( *(int *)(v4 + 2872) > 32 )
  {
    v8 = 9;
LABEL_45:
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 2856));
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 904));
    goto LABEL_4;
  }
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v4 + 1620));
  v12 = *(_DWORD *)(a1 + 396);
  if ( MostSignificantBit > v12 )
    goto LABEL_26;
  if ( MostSignificantBit != v12 )
  {
    if ( *(_BYTE *)(v4 + 2024) )
      goto LABEL_30;
    goto LABEL_39;
  }
  v13 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1480) + 1488);
  if ( v13 && *(_QWORD *)(*(_QWORD *)(v13 + 104) + 40LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) )
  {
    v14 = *(_DWORD *)(a1 + 400);
    v15 = *(_DWORD *)(v13 + 400);
    if ( v14 > v15 )
    {
      v8 = -17;
      goto LABEL_4;
    }
    if ( v14 < v15 )
    {
LABEL_26:
      v8 = 10;
      goto LABEL_45;
    }
  }
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( (unsigned __int8)VidSchiUpdateNodeRunningTime(v4, v19) )
  {
    *a2 = v22;
LABEL_30:
    v8 = 11;
    goto LABEL_45;
  }
  if ( !v20 )
  {
    v8 = 2;
    goto LABEL_45;
  }
  v16 = *(_DWORD *)(v20 + 492);
  v17 = v16 <= SHIDWORD(v21);
  if ( v16 == HIDWORD(v21) )
  {
    if ( *(_DWORD *)(v20 + 488) > (unsigned int)v21 )
    {
LABEL_37:
      v8 = 12;
      *a2 = *(_QWORD *)(v20 + 488) - v21;
      goto LABEL_45;
    }
    v17 = v16 <= SHIDWORD(v21);
  }
  if ( !v17 )
    goto LABEL_37;
LABEL_39:
  v18 = v8 < 0;
  if ( !v8 )
  {
    v8 = 1;
LABEL_42:
    v18 = v8 < 0;
  }
  if ( !v18 && v8 != 1 )
    goto LABEL_45;
LABEL_4:
  VidSchiProfilePerformanceTick(1, v9, v4, a4, a1, 0LL, 0LL, v8);
  if ( v8 < 0 || v8 == 1 )
    return 1;
  return v5;
}
