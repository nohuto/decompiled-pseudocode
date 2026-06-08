/*
 * XREFs of InitAcpiThrottleStates @ 0x1C001B74C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PCT_PTC @ 0x1C000FA78 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_TSS @ 0x1C0010424 (AcpiEval_TSS.c)
 *     InitAcpi1ThrottleStates @ 0x1C001B8DC (InitAcpi1ThrottleStates.c)
 */

__int64 __fastcall InitAcpiThrottleStates(__int64 a1)
{
  int inited; // ebx
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // rdx
  _BYTE *v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // r10
  _DWORD *v9; // r9

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  inited = -1073741823;
  if ( (*(_DWORD *)(a1 + 248) & 0x3000000) != 0 )
  {
    inited = 0;
    v3 = AcpiEval_PCT_PTC(a1, 1129599071, (_BYTE *)(a1 + 416));
    if ( v3 < 0 )
      inited = v3;
    v4 = AcpiEval_TSS(a1, (_QWORD *)(a1 + 440));
    if ( v4 < 0 )
      inited = v4;
    if ( inited >= 0 )
      goto LABEL_11;
    *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFCFFFFFFuLL;
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x300000LL) != 0 )
  {
    inited = InitAcpi1ThrottleStates(a1);
    if ( inited < 0 )
    {
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFFFCFFFFFuLL;
      goto LABEL_32;
    }
LABEL_11:
    v5 = *(_DWORD **)(a1 + 440);
    v6 = (_BYTE *)(a1 + 416);
    v7 = 0;
    if ( a1 == -416 || !v5 )
    {
      inited = -1073741823;
    }
    else
    {
      if ( *v5 > 1u )
      {
        v8 = 0LL;
        v9 = v5 + 7;
        while ( *(v9 - 1) < v5[5 * v8 + 1] && *v9 <= v5[5 * v8 + 2] )
        {
          v8 = (unsigned int)(v8 + 1);
          v9 += 5;
          if ( (unsigned int)(v8 + 1) >= *v5 )
            goto LABEL_18;
        }
        goto LABEL_24;
      }
LABEL_18:
      if ( v5[1] != 100 )
      {
LABEL_24:
        v7 = 2048;
        inited = -1073741823;
LABEL_30:
        _InterlockedOr((volatile signed __int32 *)(a1 + 1040), v7);
        goto LABEL_32;
      }
      inited = -1073741637;
      if ( !*(_QWORD *)(a1 + 432) || *v6 == *(_BYTE *)(a1 + 428) )
      {
        if ( *v6 == 1 )
        {
          inited = 0;
        }
        else if ( *v6 == 127 )
        {
          inited = 0;
          goto LABEL_29;
        }
      }
      if ( inited >= 0 )
        goto LABEL_31;
      v7 = 1024;
    }
LABEL_29:
    if ( inited < 0 )
      goto LABEL_30;
LABEL_31:
    inited = 0;
  }
LABEL_32:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)inited;
}
