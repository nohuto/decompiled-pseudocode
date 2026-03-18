/*
 * XREFs of IcCheckIrqConflict @ 0x1C008AA80
 * Callers:
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C0089270 (ProcessorpFindAffinitizedIdtEntries.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     IcIsActiveBothPrimaryInterrupt @ 0x1C00A27FC (IcIsActiveBothPrimaryInterrupt.c)
 */

__int64 __fastcall IcCheckIrqConflict(unsigned int a1, int a2, unsigned __int8 a3, _BYTE *a4)
{
  int v4; // r11d
  __int64 v7; // r9
  __int16 v8; // bp
  __int64 v9; // r10
  int v10; // eax
  bool v11; // si
  unsigned int v12; // r8d
  _DWORD *v13; // rax
  unsigned int v14; // r8d
  _DWORD *v15; // rax
  unsigned int v17; // r8d
  __int64 v18; // r9
  int v19; // eax
  int v20; // r9d
  char IsActiveBothPrimaryInterrupt; // al
  unsigned int v22; // r8d
  int v23; // r9d
  __int64 v24; // r10
  int v25; // eax

  v4 = a2;
  v7 = IcListHead;
  v8 = (a3 & 1) != 0;
  v9 = IcListHead;
  if ( &IcListHead != (__int64 *)IcListHead )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v9 + 28);
      if ( v10 >= 0 && a1 >= *(_DWORD *)(v9 + 16) && a1 <= *(_DWORD *)(v9 + 20) )
        break;
      v9 = *(_QWORD *)v9;
      if ( &IcListHead == (__int64 *)v9 )
        goto LABEL_22;
    }
    v11 = ((a3 >> 1) & ((v10 & 4) == 0)) != 0;
    if ( &IcListHead != (__int64 *)IcListHead )
    {
      while ( 1 )
      {
        if ( *(int *)(v7 + 28) >= 0 && v9 != v7 )
        {
          v12 = 0;
          if ( *(_DWORD *)(v7 + 20) - *(_DWORD *)(v7 + 16) != -1 )
            break;
        }
LABEL_12:
        v7 = *(_QWORD *)v7;
        if ( &IcListHead == (__int64 *)v7 )
          goto LABEL_13;
      }
      v13 = (_DWORD *)(v7 + 140);
      while ( !*(v13 - 26) || *v13 != a2 )
      {
        ++v12;
        v13 += 50;
        if ( v12 >= *(_DWORD *)(v7 + 20) - *(_DWORD *)(v7 + 16) + 1 )
          goto LABEL_12;
      }
      if ( v11 || (unsigned __int8)IcIsActiveBothPrimaryInterrupt(v7, v12) )
      {
        v20 = 10;
        goto LABEL_31;
      }
      v19 = *(_DWORD *)(200LL * v17 + v18 + 152);
      if ( !v19 && v8 || v19 == 1 && !v8 )
      {
        v20 = 11;
LABEL_31:
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          20,
          v20,
          (__int64)&WPP_4411de5b495335ecfc7917b4f6deef37_Traceguids);
        *a4 = 1;
        return 0LL;
      }
    }
LABEL_13:
    v14 = 0;
    if ( *(_DWORD *)(v9 + 20) - *(_DWORD *)(v9 + 16) != -1 )
    {
      v15 = (_DWORD *)(v9 + 140);
      while ( !*(v15 - 26) || *v15 != v4 )
      {
        ++v14;
        v15 += 50;
        if ( v14 >= *(_DWORD *)(v9 + 20) - *(_DWORD *)(v9 + 16) + 1 )
          goto LABEL_17;
      }
      IsActiveBothPrimaryInterrupt = IcIsActiveBothPrimaryInterrupt(v9, v14);
      if ( a1 == v23 + v22 )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          20,
          12,
          (__int64)&WPP_4411de5b495335ecfc7917b4f6deef37_Traceguids);
        *a4 = 0;
        return 0LL;
      }
      if ( v11 || IsActiveBothPrimaryInterrupt )
      {
        v20 = 13;
        goto LABEL_31;
      }
      v25 = *(_DWORD *)(200LL * v22 + v24 + 152);
      if ( !v25 && v8 )
        goto LABEL_41;
      if ( v25 == 1 )
      {
        if ( !v8 )
        {
LABEL_41:
          v20 = 14;
          goto LABEL_31;
        }
      }
      else if ( !v8 && (*(_DWORD *)(v24 + 28) & 2) != 0 )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          20,
          15,
          (__int64)&WPP_4411de5b495335ecfc7917b4f6deef37_Traceguids);
        *a4 = 0;
        return 0LL;
      }
      if ( (*(_BYTE *)(v24 + 28) & 1) == 0 || (v8 & 1) == 0 )
      {
        v20 = 17;
        goto LABEL_31;
      }
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        20,
        16,
        (__int64)&WPP_4411de5b495335ecfc7917b4f6deef37_Traceguids);
    }
LABEL_17:
    *a4 = 0;
    return 0LL;
  }
LABEL_22:
  *a4 = 1;
  return 3221226021LL;
}
