/*
 * XREFs of CmpGenerateFlushControlData @ 0x14047F848
 * Callers:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 * Callees:
 *     HvIsCurrentLogSwappable @ 0x14047D5E4 (HvIsCurrentLogSwappable.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x14047FADC (HvGetEffectiveLogSizeCapForHive.c)
 *     HvGetHiveLogFileStatus @ 0x14047FB5C (HvGetHiveLogFileStatus.c)
 */

char __fastcall CmpGenerateFlushControlData(__int64 a1, __int64 a2, int *a3)
{
  int *v3; // rsi
  char v5; // bp
  char v7; // al
  char v8; // r10
  int v9; // eax
  int v10; // eax
  int v11; // r9d
  int v12; // edx
  int v13; // r9d
  char v14; // r10
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d

  v3 = a3 + 2;
  *(_QWORD *)a3 = 0LL;
  a3[2] = 0;
  v5 = a2;
  a3[5] = 0;
  a3[3] = 0;
  v7 = *(_BYTE *)(a1 + 175);
  if ( v7 || *(_DWORD *)(a1 + 88) || (v8 = 0, *(_DWORD *)(a1 + 112)) )
    v8 = 1;
  if ( *(_DWORD *)(a1 + 88) || v7 )
  {
    *a3 = 9;
    v9 = *a3;
    if ( *(_BYTE *)(a1 + 174) )
      v9 = 27;
    *a3 = v9;
    if ( *(_DWORD *)(a1 + 5492) )
      *a3 |= 0x82u;
    a3[6] = HvGetEffectiveLogSizeCapForHive(a1, a2, a3);
  }
  if ( v8 && (v5 & 4) != 0 )
    *a3 |= 0x42u;
  v10 = *(_DWORD *)(a1 + 144);
  if ( (v10 & 2) == 0 )
  {
    LOBYTE(v10) = (CmpGlobalFlushControlFlags & 1) == 0;
    if ( (((*(_DWORD *)(a1 + 5360) & 0x800) == 0) & (unsigned __int8)v10) != 0 )
    {
      if ( (v5 & 8) != 0 && (!*(_BYTE *)(a1 + 174) || (*a3 & 0x10) != 0) )
      {
        *a3 |= 0x107u;
        v10 = *a3;
        if ( (*a3 & 8) != 0 )
        {
          HvGetHiveLogFileStatus(a1, (unsigned int)a3[6], v3);
          v10 = *v3;
          if ( (*v3 & 0xC) != 0 )
            *a3 |= 0x400u;
        }
        return v10;
      }
      if ( (*a3 & 0x48) == 8 )
      {
        HvGetHiveLogFileStatus(a1, (unsigned int)a3[6], v3);
        v10 = *v3;
        if ( (*v3 & 1) != 0 )
        {
          *a3 |= 2u;
          return v10;
        }
        if ( (v10 & 0xA) != 0 )
        {
          *a3 |= 0x42u;
        }
        else if ( (v10 & 4) != 0 )
        {
          *a3 |= 2u;
          if ( HvIsCurrentLogSwappable(a1) )
            v17 = v16 | 0x20;
          else
            v17 = v16 | 0x40;
          *a3 = v17;
        }
      }
      v11 = *a3;
      if ( (*a3 & 0x40) == 0 )
        goto LABEL_21;
      v10 = *(_DWORD *)(a1 + 5488);
      if ( (v10 & 2) != 0 )
        return v10;
      if ( (*v3 & 8) != 0 )
      {
        v15 = v11 | 0x504;
      }
      else
      {
        *a3 = v11 | 1;
        if ( HvIsCurrentLogSwappable(a1) )
        {
          v15 = v13 | 0x20;
        }
        else
        {
          v18 = v13 | 4;
          *a3 = v18;
          if ( (v14 & 4) == 0 )
            goto LABEL_21;
          v15 = v18 | 0x400;
        }
      }
      *a3 = v15;
LABEL_21:
      if ( (*a3 & 0x48) == 8 )
      {
        if ( !*(_DWORD *)(a1 + 112) )
          *a3 |= 0x800u;
        v12 = *v3;
        if ( (*v3 & 0x14) != 0 )
          *a3 |= 0x1000u;
        if ( (*(_DWORD *)(a1 + 5488) & 2) != 0 && (v12 & 0x20) != 0 )
          *a3 |= 0x2000u;
      }
      v10 = *(_DWORD *)(a1 + 5488);
      if ( (v10 & 4) == 0 )
      {
        if ( *(_QWORD *)(a1 + 2664) )
        {
          LOBYTE(v10) = (v5 & 0x20) == 0;
          if ( (((*a3 & 8) == 0) & (unsigned __int8)v10) == 0 )
            *a3 |= 0x202u;
        }
      }
      return v10;
    }
  }
  if ( *(_DWORD *)(a1 + 88) || *(_BYTE *)(a1 + 175) )
  {
    *a3 |= 0x46u;
    if ( *(_BYTE *)(a1 + 174) )
      *a3 |= 0x10u;
    *a3 |= 0x500u;
  }
  else
  {
    LOBYTE(v10) = (v5 & 0x20) != 0;
    if ( (((*(_DWORD *)(a1 + 5488) & 4) == 0) & (unsigned __int8)v10) != 0 )
      *a3 |= 0x202u;
  }
  return v10;
}
