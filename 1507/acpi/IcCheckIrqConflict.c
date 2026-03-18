/*
 * XREFs of IcCheckIrqConflict @ 0x1C006CCB0
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C006B600 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     IcIsActiveBothPrimaryInterrupt @ 0x1C00804F8 (IcIsActiveBothPrimaryInterrupt.c)
 */

__int64 __fastcall IcCheckIrqConflict(unsigned int a1, int a2, unsigned __int8 a3, _BYTE *a4)
{
  unsigned int v4; // r10d
  __int64 v8; // r9
  __int16 v9; // r14
  __int64 v10; // r11
  int v11; // eax
  bool v12; // bp
  unsigned int v13; // r8d
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  unsigned int v17; // r8d
  __int64 v18; // r9
  int v19; // eax
  char IsActiveBothPrimaryInterrupt; // al
  int v21; // r8d
  unsigned int v22; // r10d
  __int64 v23; // r11
  int v24; // eax

  v4 = 0;
  v8 = IcListHead;
  v9 = (a3 & 1) != 0;
  v10 = IcListHead;
  if ( &IcListHead != (__int64 *)IcListHead )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 28);
      if ( v11 >= 0 && a1 >= *(_DWORD *)(v10 + 16) && a1 <= *(_DWORD *)(v10 + 20) )
        break;
      v10 = *(_QWORD *)v10;
      if ( &IcListHead == (__int64 *)v10 )
        goto LABEL_22;
    }
    v12 = ((a3 >> 1) & ((v11 & 4) == 0)) != 0;
    if ( &IcListHead != (__int64 *)IcListHead )
    {
      while ( 1 )
      {
        if ( *(int *)(v8 + 28) >= 0 && v10 != v8 )
        {
          v13 = 0;
          if ( *(_DWORD *)(v8 + 20) - *(_DWORD *)(v8 + 16) != -1 )
            break;
        }
LABEL_12:
        v8 = *(_QWORD *)v8;
        if ( &IcListHead == (__int64 *)v8 )
          goto LABEL_13;
      }
      v14 = (_DWORD *)(v8 + 132);
      while ( !*(v14 - 24) || *v14 != a2 )
      {
        ++v13;
        v14 += 46;
        if ( v13 >= *(_DWORD *)(v8 + 20) - *(_DWORD *)(v8 + 16) + 1 )
          goto LABEL_12;
      }
      if ( v12 )
        goto LABEL_38;
      if ( (unsigned __int8)IcIsActiveBothPrimaryInterrupt(v8, v13) )
        goto LABEL_38;
      v19 = *(_DWORD *)(184LL * v17 + v18 + 144);
      if ( !v19 )
      {
        if ( v9 )
          goto LABEL_38;
      }
      if ( v19 == 1 && !v9 )
        goto LABEL_38;
    }
LABEL_13:
    if ( *(_DWORD *)(v10 + 20) - *(_DWORD *)(v10 + 16) != -1 )
    {
      v15 = (_DWORD *)(v10 + 132);
      while ( !*(v15 - 24) || *v15 != a2 )
      {
        ++v4;
        v15 += 46;
        if ( v4 >= *(_DWORD *)(v10 + 20) - *(_DWORD *)(v10 + 16) + 1 )
          goto LABEL_17;
      }
      IsActiveBothPrimaryInterrupt = IcIsActiveBothPrimaryInterrupt(v10, v4);
      if ( a1 != v21 + v22 )
      {
        if ( v12 )
          goto LABEL_38;
        if ( IsActiveBothPrimaryInterrupt )
          goto LABEL_38;
        v24 = *(_DWORD *)(184LL * v22 + v23 + 144);
        if ( !v24 )
        {
          if ( v9 )
            goto LABEL_38;
        }
        if ( v24 == 1 )
        {
          if ( !v9 )
          {
LABEL_38:
            *a4 = 1;
            return 0LL;
          }
        }
        else if ( !v9 && (*(_DWORD *)(v23 + 28) & 2) != 0 )
        {
          goto LABEL_17;
        }
        if ( (*(_BYTE *)(v23 + 28) & 1) == 0 || (v9 & 1) == 0 )
          goto LABEL_38;
      }
    }
LABEL_17:
    *a4 = 0;
    return 0LL;
  }
LABEL_22:
  *a4 = 1;
  return 3221226021LL;
}
