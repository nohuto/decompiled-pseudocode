/*
 * XREFs of VidSchiCheckPreemptionPolicy @ 0x1C0006D00
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000A340 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0009E20 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C00111F8 (VidSchiUpdateNodeRunningTime.c)
 */

_BOOL8 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  int v5; // eax
  int v8; // esi
  __int64 v9; // r14
  _QWORD *v10; // rax
  unsigned int MostSignificantBit; // ecx
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rcx
  int v21; // edx
  bool v22; // cc
  _BYTE v23[8]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+48h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-48h]
  __int64 v26; // [rsp+58h] [rbp-40h]
  _BYTE v27[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v28; // [rsp+68h] [rbp-30h]
  __int64 v29; // [rsp+70h] [rbp-28h]
  __int64 v30; // [rsp+78h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_DWORD *)(a1 + 176);
  *a2 = -1LL;
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 24);
  if ( (v5 & 2) != 0 )
  {
    if ( a1 == *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560) )
    {
      v8 = 15;
      goto LABEL_4;
    }
    v8 = -18;
  }
  if ( !*(_DWORD *)(v4 + 2764) )
  {
    v8 = 2;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v9 + 2136) & 1) == 0 )
  {
    v8 = 3;
    goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 948));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2768)) != 1 )
  {
    v8 = 13;
    goto LABEL_19;
  }
  if ( *(_DWORD *)(v9 + 1016) )
    v8 = -14;
  if ( *(_DWORD *)(v9 + 960) )
    v8 = -8;
  if ( *(int *)(v4 + 2784) > 32 )
  {
    v8 = 9;
    goto LABEL_19;
  }
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v4 + 1692));
  v13 = *(_DWORD *)(a1 + 396);
  if ( MostSignificantBit <= v13 )
  {
    if ( MostSignificantBit != v13 )
    {
      if ( *(_BYTE *)(v4 + 1936) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 2768));
        v8 = 11;
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 948));
        goto LABEL_4;
      }
      goto LABEL_22;
    }
    v14 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560);
    if ( v14 && *(_QWORD *)(*(_QWORD *)(v14 + 104) + 40LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) )
    {
      v15 = *(_DWORD *)(a1 + 400);
      v16 = *(_DWORD *)(v14 + 400);
      if ( v15 < v16 )
        goto LABEL_18;
      if ( v15 > v16 )
      {
        v8 = -17;
        goto LABEL_4;
      }
    }
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v17 = (unsigned __int8)VidSchiUpdateNodeRunningTime(v4, v27) == 0;
    v18 = v28;
    if ( !v17 )
    {
      v8 = 11;
      *a2 = *(_QWORD *)(v28 + 488);
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2768));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 948));
      goto LABEL_4;
    }
    if ( !v28 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2768));
      v8 = 2;
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 948));
      goto LABEL_4;
    }
    v19 = HIDWORD(v29);
    v20 = v29;
  }
  else
  {
    if ( !*(_BYTE *)(v4 + 1936) )
    {
LABEL_18:
      v8 = 10;
LABEL_19:
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2768));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 948));
      goto LABEL_4;
    }
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v17 = (unsigned __int8)VidSchiUpdateNodeRunningTime(v4, v23) == 0;
    v18 = v24;
    if ( !v17 )
    {
      v8 = 11;
      *a2 = *(_QWORD *)(v24 + 488);
      goto LABEL_19;
    }
    if ( !v24 )
    {
      v8 = 2;
      goto LABEL_19;
    }
    v19 = HIDWORD(v25);
    v20 = v25;
  }
  v21 = *(_DWORD *)(v18 + 492);
  v22 = v21 <= v19;
  if ( v21 == v19 )
  {
    if ( *(_DWORD *)(v18 + 488) > (unsigned int)v20 )
    {
LABEL_37:
      v8 = 12;
      *a2 = *(_QWORD *)(v18 + 488) - v20;
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2768));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 948));
      goto LABEL_4;
    }
    v22 = v21 <= v19;
  }
  if ( !v22 )
    goto LABEL_37;
LABEL_22:
  if ( !v8 )
    v8 = 1;
LABEL_4:
  VidSchiProfilePerformanceTick(1, v9, v4, a4, a1, 0LL, 0LL, v8);
  v10 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v10[3] = v4;
  v10[4] = *(_QWORD *)(v4 + 96);
  v10[5] = *(_QWORD *)(v4 + 152);
  v10[6] = a1;
  v10[7] = v8;
  WdLogEvent5_WdEvent(v10);
  return v8 < 0 || v8 == 1;
}
