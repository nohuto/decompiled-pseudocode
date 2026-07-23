/*
 * XREFs of KiFindNextTimerDueTime @ 0x1400DABF0
 * Callers:
 *     KiGetNextTimerExpirationDueTime @ 0x14009C8B8 (KiGetNextTimerExpirationDueTime.c)
 *     PpmIdlePrepare @ 0x1400D9B50 (PpmIdlePrepare.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiFindNextTimerDueTime(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // r11d
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // r14
  unsigned int v9; // edi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // r8d
  __int64 v19; // r13
  unsigned int v20; // edi
  __int64 *v21; // r12
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r14
  __int64 v25; // r15
  unsigned __int64 v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  unsigned int v31; // r10d
  unsigned __int64 v32; // r13
  unsigned __int16 v33; // di
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // r14
  __int64 v36; // r12
  unsigned __int64 v37; // rbp
  _QWORD *v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rsi
  unsigned __int64 v43; // r8
  __int64 v44; // rbp

  v3 = -1LL;
  v4 = (unsigned __int8)(a2 >> 18);
  if ( !KiSerializeTimerExpiration )
  {
    if ( v4 != (unsigned __int8)*(_DWORD *)(a1 + 11760) )
      return 0LL;
    if ( !a3 )
    {
      v19 = *(_QWORD *)(a1 + 1608);
      v20 = 0;
      v21 = &KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 1616)];
      while ( 1 )
      {
        v22 = *v21;
        v23 = (unsigned __int64)v4 << 9;
        if ( v23 >= *v21 )
          v24 = 0LL;
        else
          v24 = (unsigned __int64)v4 << 9;
        v25 = v21[1];
        v26 = v22 - 1;
        while ( 1 )
        {
          if ( v26 - v24 == -1LL )
          {
            LODWORD(v29) = -1;
            goto LABEL_59;
          }
          v27 = (_QWORD *)(v25 + 8 * (v24 >> 6));
          v28 = ((1LL << (v24 & 0x3F)) - 1) | ~*v27;
          if ( v28 == -1 )
          {
            while ( (unsigned __int64)++v27 <= v25 + 8 * (v26 >> 6) )
            {
              v28 = ~*v27;
              if ( *v27 )
                goto LABEL_27;
            }
LABEL_66:
            LODWORD(v29) = -1;
            goto LABEL_59;
          }
LABEL_27:
          _BitScanForward64((unsigned __int64 *)&v28, ~v28);
          v29 = v28 + (((__int64)v27 - v25) >> 3 << 6);
          if ( v29 > v26 )
            goto LABEL_66;
          if ( v29 != -1LL )
            break;
LABEL_59:
          if ( !v24 )
            break;
          v41 = v23 + 1;
          if ( v23 + 1 > v22 )
            v41 = *v21;
          v26 = v41 - 1;
          v24 = 0LL;
        }
        if ( (_DWORD)v29 == -1 )
          return v3;
        v30 = (unsigned int)v29 >> 9;
        v20 += (unsigned __int8)(v30 - v4) + 1;
        if ( v20 > 0x100 )
          return v3;
        if ( (*(_QWORD *)(((unsigned __int64)v30 << 6) + v21[1]) & v19) != 0 )
          return a2 + (v20 << 18);
        v4 = (unsigned __int8)(v30 + 1);
      }
    }
    v31 = -1;
    v32 = v4 << 9;
    v33 = 0;
LABEL_43:
    v34 = KiPendingTimerBitmaps[2 * v33];
    if ( v32 >= v34 )
      v35 = 0LL;
    else
      v35 = v4 << 9;
    v36 = KiPendingTimerBitmaps[2 * v33 + 1];
    v37 = v34 - 1;
    while ( 1 )
    {
      if ( v37 - v35 == -1LL )
      {
        LODWORD(v40) = -1;
      }
      else
      {
        v38 = (_QWORD *)(v36 + 8 * (v35 >> 6));
        v39 = ((1LL << (v35 & 0x3F)) - 1) | ~*v38;
        if ( v39 == -1 )
        {
          while ( (unsigned __int64)++v38 <= v36 + 8 * (v37 >> 6) )
          {
            v39 = ~*v38;
            if ( *v38 )
              goto LABEL_48;
          }
LABEL_76:
          LODWORD(v40) = -1;
          goto LABEL_77;
        }
LABEL_48:
        _BitScanForward64((unsigned __int64 *)&v39, ~v39);
        v40 = v39 + (((__int64)v38 - v36) >> 3 << 6);
        if ( v40 > v37 )
          goto LABEL_76;
        if ( v40 != -1LL )
          goto LABEL_50;
      }
LABEL_77:
      if ( !v35 )
      {
LABEL_50:
        if ( (_DWORD)v40 != -1 && (unsigned __int8)(((unsigned int)v40 >> 9) - v4) < v31 )
          v31 = (unsigned __int8)(((unsigned int)v40 >> 9) - v4);
        if ( ++v33 >= (unsigned __int16)KiActiveGroups )
        {
          if ( v31 != -1 )
            return (unsigned int)KeTimeIncrement + (a2 & 0xFFFFFFFFFFFC0000uLL) + (v31 << 18);
          return v3;
        }
        goto LABEL_43;
      }
      v44 = v32 + 1;
      if ( v32 + 1 > v34 )
        v44 = KiPendingTimerBitmaps[2 * v33];
      v37 = v44 - 1;
      v35 = 0LL;
    }
  }
  if ( !a3 )
    return v3;
  v6 = *(_DWORD *)(a1 + 11760);
  v7 = (unsigned __int8)(v4 - v6);
  if ( v7 > 1 )
    return 0LL;
  v8 = (unsigned __int8)v6;
  v9 = 0;
  v10 = (a2 & 0xFFFFFFFFFFFC0000uLL) - (v7 << 18) + 0x4000000;
  while ( 2 )
  {
    if ( (unsigned __int64)(unsigned int)v8 >= KiPendingTimerBitmaps[0] )
      v11 = 0LL;
    else
      v11 = (unsigned int)v8;
    v12 = KiPendingTimerBitmaps[0] - 1;
    while ( 1 )
    {
      if ( v12 - v11 == -1LL )
      {
        LODWORD(v15) = -1;
      }
      else
      {
        v13 = (_QWORD *)(qword_1403AB288[0] + 8 * (v11 >> 6));
        v14 = ((1LL << (v11 & 0x3F)) - 1) | ~*v13;
        if ( v14 == -1 )
        {
          while ( (unsigned __int64)++v13 <= qword_1403AB288[0] + 8 * (v12 >> 6) )
          {
            v14 = ~*v13;
            if ( *v13 )
              goto LABEL_11;
          }
LABEL_68:
          LODWORD(v15) = -1;
          goto LABEL_69;
        }
LABEL_11:
        _BitScanForward64((unsigned __int64 *)&v14, ~v14);
        v15 = v14 + (((__int64)v13 - qword_1403AB288[0]) >> 3 << 6);
        if ( v15 > v12 )
          goto LABEL_68;
        if ( v15 != -1LL )
          break;
      }
LABEL_69:
      if ( !v11 )
        break;
      v42 = v8 + 1;
      if ( (unsigned __int64)(v8 + 1) > KiPendingTimerBitmaps[0] )
        v42 = KiPendingTimerBitmaps[0];
      v12 = v42 - 1;
      v11 = 0LL;
    }
    if ( (_DWORD)v15 != -1 )
    {
      v9 += (unsigned __int8)(v15 - v8 + 1);
      if ( v9 <= 0x100 )
      {
        v16 = 32LL * (unsigned int)v15;
        v17 = *(_QWORD *)(v16 + KiProcessorBlock[0] + 14360);
        if ( v17 >= v3 )
          goto LABEL_57;
        if ( v17 >= v10 )
        {
          v3 = *(_QWORD *)(v16 + KiProcessorBlock[0] + 14360);
        }
        else
        {
          v18 = (unsigned __int8)(v17 >> 18);
          if ( v18 == (_DWORD)v15 )
            return *(_QWORD *)(v16 + KiProcessorBlock[0] + 14360);
          v43 = (v17 & 0xFFFFFFFFFFFC0000uLL) + ((((_DWORD)v15 - v18) << 18) & 0x3FC0000);
          if ( v43 < v3 )
          {
            v3 = v43;
            v8 = (unsigned __int8)(v15 + 1);
            continue;
          }
        }
LABEL_57:
        v8 = (unsigned __int8)(v15 + 1);
        continue;
      }
    }
    return v3;
  }
}
