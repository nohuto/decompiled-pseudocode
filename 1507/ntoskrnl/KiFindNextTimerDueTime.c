/*
 * XREFs of KiFindNextTimerDueTime @ 0x1400AA860
 * Callers:
 *     PpmIdlePrepare @ 0x1400A91A0 (PpmIdlePrepare.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1400AC470 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiFindNextTimerDueTime(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r12
  unsigned int v4; // r15d
  __int64 v6; // rbp
  unsigned int v7; // r10d
  __int64 *v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // r11
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // ecx
  __int64 v20; // rdi
  unsigned int v21; // ebx
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r11
  _QWORD *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // r8d
  __int64 v31; // r11
  unsigned int v32; // r9d
  unsigned __int64 v33; // rbp
  unsigned __int16 v34; // r11
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  __int64 v37; // r14
  unsigned __int64 v38; // rbx
  _QWORD *v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // r8
  __int64 v43; // r11
  __int64 v44; // rbx

  v3 = -1LL;
  v4 = (unsigned __int8)(a2 >> 18);
  if ( !KiSerializeTimerExpiration )
  {
    if ( v4 != (unsigned __int8)*(_DWORD *)(a1 + 11760) )
      return 0LL;
    if ( !a3 )
    {
      v6 = *(_QWORD *)(a1 + 1608);
      v7 = 0;
      v8 = &KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 1616)];
      while ( 1 )
      {
        v9 = *v8;
        v10 = (unsigned __int64)v4 << 9;
        if ( v10 >= *v8 )
          v11 = 0LL;
        else
          v11 = (unsigned __int64)v4 << 9;
        v12 = v8[1];
        v13 = v9 - 1;
        while ( 1 )
        {
          if ( v13 - v11 == -1LL )
          {
            LODWORD(v16) = -1;
            goto LABEL_44;
          }
          v14 = (_QWORD *)(v12 + 8 * (v11 >> 6));
          v15 = ((1LL << (v11 & 0x3F)) - 1) | ~*v14;
          if ( v15 == -1 )
          {
            while ( (unsigned __int64)++v14 <= v12 + 8 * (v13 >> 6) )
            {
              v15 = ~*v14;
              if ( *v14 )
                goto LABEL_12;
            }
LABEL_48:
            LODWORD(v16) = -1;
            goto LABEL_44;
          }
LABEL_12:
          _BitScanForward64((unsigned __int64 *)&v15, ~v15);
          v16 = v15 + (((__int64)v14 - v12) >> 3 << 6);
          if ( v16 > v13 )
            goto LABEL_48;
          if ( v16 != -1LL )
            break;
LABEL_44:
          if ( !v11 )
            break;
          v31 = v10 + 1;
          if ( v10 + 1 > v9 )
            v31 = *v8;
          v13 = v31 - 1;
          v11 = 0LL;
        }
        if ( (_DWORD)v16 == -1 )
          return v3;
        v17 = (unsigned int)v16 >> 9;
        v7 += (unsigned __int8)(v17 - v4) + 1;
        if ( v7 > 0x100 )
          return v3;
        if ( (*(_QWORD *)(((unsigned __int64)v17 << 6) + v8[1]) & v6) != 0 )
          return a2 + (v7 << 18);
        v4 = (unsigned __int8)(v17 + 1);
      }
    }
    v32 = -1;
    v33 = v4 << 9;
    v34 = 0;
LABEL_51:
    v35 = KiPendingTimerBitmaps[2 * v34];
    if ( v33 >= v35 )
      v36 = 0LL;
    else
      v36 = v4 << 9;
    v37 = KiPendingTimerBitmaps[2 * v34 + 1];
    v38 = v35 - 1;
    while ( 1 )
    {
      if ( v38 - v36 == -1LL )
      {
        LODWORD(v41) = -1;
      }
      else
      {
        v39 = (_QWORD *)(v37 + 8 * (v36 >> 6));
        v40 = ((1LL << (v36 & 0x3F)) - 1) | ~*v39;
        if ( v40 == -1 )
        {
          while ( (unsigned __int64)++v39 <= v37 + 8 * (v38 >> 6) )
          {
            v40 = ~*v39;
            if ( *v39 )
              goto LABEL_56;
          }
LABEL_75:
          LODWORD(v41) = -1;
          goto LABEL_76;
        }
LABEL_56:
        _BitScanForward64((unsigned __int64 *)&v40, ~v40);
        v41 = v40 + (((__int64)v39 - v37) >> 3 << 6);
        if ( v41 > v38 )
          goto LABEL_75;
        if ( v41 != -1LL )
          goto LABEL_58;
      }
LABEL_76:
      if ( !v36 )
      {
LABEL_58:
        if ( (_DWORD)v41 != -1 && (unsigned __int8)(((unsigned int)v41 >> 9) - v4) < v32 )
          v32 = (unsigned __int8)(((unsigned int)v41 >> 9) - v4);
        if ( ++v34 >= (unsigned __int16)KiActiveGroups )
        {
          if ( v32 != -1 )
            return (unsigned int)KeTimeIncrement + (a2 & 0xFFFFFFFFFFFC0000uLL) + (v32 << 18);
          return v3;
        }
        goto LABEL_51;
      }
      v44 = v33 + 1;
      if ( v33 + 1 > v35 )
        v44 = KiPendingTimerBitmaps[2 * v34];
      v38 = v44 - 1;
      v36 = 0LL;
    }
  }
  if ( !a3 )
    return v3;
  v18 = *(_DWORD *)(a1 + 11760);
  v19 = (unsigned __int8)(v4 - v18);
  if ( v19 > 1 )
    return 0LL;
  v20 = (unsigned __int8)v18;
  v21 = 0;
  v22 = (a2 & 0xFFFFFFFFFFFC0000uLL) - (v19 << 18) + 0x4000000;
  while ( 2 )
  {
    if ( (unsigned __int64)(unsigned int)v20 >= KiPendingTimerBitmaps[0] )
      v23 = 0LL;
    else
      v23 = (unsigned int)v20;
    v24 = KiPendingTimerBitmaps[0] - 1;
    while ( 1 )
    {
      if ( v24 - v23 == -1LL )
      {
        LODWORD(v27) = -1;
      }
      else
      {
        v25 = (_QWORD *)(qword_1403D2238[0] + 8 * (v23 >> 6));
        v26 = ((1LL << (v23 & 0x3F)) - 1) | ~*v25;
        if ( v26 == -1 )
        {
          while ( (unsigned __int64)++v25 <= qword_1403D2238[0] + 8 * (v24 >> 6) )
          {
            v26 = ~*v25;
            if ( *v25 )
              goto LABEL_30;
          }
LABEL_69:
          LODWORD(v27) = -1;
          goto LABEL_70;
        }
LABEL_30:
        _BitScanForward64((unsigned __int64 *)&v26, ~v26);
        v27 = v26 + (((__int64)v25 - qword_1403D2238[0]) >> 3 << 6);
        if ( v27 > v24 )
          goto LABEL_69;
        if ( v27 != -1LL )
          break;
      }
LABEL_70:
      if ( !v23 )
        break;
      v43 = v20 + 1;
      if ( (unsigned __int64)(v20 + 1) > KiPendingTimerBitmaps[0] )
        v43 = KiPendingTimerBitmaps[0];
      v24 = v43 - 1;
      v23 = 0LL;
    }
    if ( (_DWORD)v27 != -1 )
    {
      v21 += (unsigned __int8)(v27 - v20 + 1);
      if ( v21 <= 0x100 )
      {
        v28 = 32LL * (unsigned int)v27;
        v29 = *(_QWORD *)(v28 + KiProcessorBlock[0] + 14360);
        if ( v29 >= v3 )
          goto LABEL_42;
        if ( v29 >= v22 )
        {
          v3 = *(_QWORD *)(v28 + KiProcessorBlock[0] + 14360);
        }
        else
        {
          v30 = (unsigned __int8)(v29 >> 18);
          if ( v30 == (_DWORD)v27 )
            return *(_QWORD *)(v28 + KiProcessorBlock[0] + 14360);
          v42 = (v29 & 0xFFFFFFFFFFFC0000uLL) + ((((_DWORD)v27 - v30) << 18) & 0x3FC0000);
          if ( v42 < v3 )
          {
            v3 = v42;
            v20 = (unsigned __int8)(v27 + 1);
            continue;
          }
        }
LABEL_42:
        v20 = (unsigned __int8)(v27 + 1);
        continue;
      }
    }
    return v3;
  }
}
