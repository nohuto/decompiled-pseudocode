/*
 * XREFs of InitAcpiPerfStates @ 0x1C001A7E0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011F34 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PCT_PTC @ 0x1C000FCE4 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSS @ 0x1C0010094 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C001030C (AcpiEval_XPSS.c)
 *     ValidatePssCore @ 0x1C001BA40 (ValidatePssCore.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  _BYTE *v2; // rdi
  int v3; // eax
  int v4; // esi
  int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  v2 = (_BYTE *)(a1 + 376);
  v3 = AcpiEval_PCT_PTC(a1, 1413697631, (_BYTE *)(a1 + 376));
  v4 = 0;
  if ( v3 < 0 )
    v4 = v3;
  v5 = v3;
  if ( (*(_DWORD *)(a1 + 248) & 0x40000000) != 0 )
  {
    v5 = AcpiEval_XPSS(a1, (_QWORD *)(a1 + 408));
    if ( v5 < 0 )
      *(_QWORD *)(a1 + 248) &= ~0x40000000uLL;
  }
  if ( (*(_DWORD *)(a1 + 248) & 0x30000000) != 0 )
  {
    v5 = AcpiEval_PSS(a1, (_QWORD *)(a1 + 400));
    if ( v5 < 0 )
    {
      *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*(_QWORD *)(a1 + 248) & 0x40000000LL) != 0 )
        v5 = 0;
    }
  }
  if ( v4 >= 0 )
  {
    if ( v5 < 0 )
      v4 = v5;
    if ( v4 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 248) & 0x40000000) == 0 )
        goto LABEL_36;
      v6 = *(_QWORD *)(a1 + 408);
      v11 = 0;
      if ( !*(_DWORD *)(v6 + 8) )
      {
        v5 = -1073741811;
LABEL_18:
        v7 = 128;
        goto LABEL_34;
      }
      v5 = ((__int64 (*)(void))ValidatePssCore)();
      if ( v5 < 0 )
        goto LABEL_18;
      if ( *v2 == 127 && *(_BYTE *)(a1 + 377) == 64 && !*(_BYTE *)(a1 + 378) && *(_BYTE *)(a1 + 379) == 64 )
      {
        if ( !*(_QWORD *)(a1 + 380) )
        {
          v5 = -1073741811;
LABEL_33:
          v7 = 32;
LABEL_34:
          v11 = v7;
          _InterlockedOr((volatile signed __int32 *)(a1 + 1056), v7);
          *(_QWORD *)(a1 + 248) &= ~0x40000000uLL;
LABEL_36:
          if ( (*(_DWORD *)(a1 + 248) & 0x30000000) == 0 )
          {
LABEL_50:
            v9 = *(_QWORD *)(a1 + 248);
            if ( (v9 & 0x40000000) == 0 && (v9 & 0x30000000) == 0 )
              v4 = v5;
            goto LABEL_53;
          }
          v8 = *(_QWORD *)(a1 + 400);
          v11 = 0;
          if ( !*(_DWORD *)(v8 + 8) )
          {
            v5 = -1073741811;
LABEL_40:
            v11 = 64;
            goto LABEL_48;
          }
          v5 = ValidatePssCore(v8);
          if ( v5 < 0 )
            goto LABEL_40;
          v5 = -1073741637;
          if ( !*(_QWORD *)(a1 + 392) || *v2 == *(_BYTE *)(a1 + 388) )
          {
            if ( *v2 == 1 )
            {
              v5 = 0;
            }
            else if ( *v2 == 127 )
            {
              goto LABEL_45;
            }
          }
          if ( v5 < 0 )
          {
            v11 = 32;
LABEL_48:
            if ( v5 < 0 )
            {
              _InterlockedOr((volatile signed __int32 *)(a1 + 1056), v11);
              *(_QWORD *)(a1 + 248) &= 0xFFFFFFFFCFFFFFFFuLL;
            }
            goto LABEL_50;
          }
LABEL_45:
          if ( !qword_1C00094F0 || (v5 = qword_1C00094F0(a1 + 376, v8, &v11), v5 >= 0) )
            v5 = 0;
          goto LABEL_48;
        }
        if ( !*(_QWORD *)(a1 + 392) )
        {
LABEL_31:
          v5 = 0;
LABEL_32:
          if ( v5 >= 0 )
            goto LABEL_36;
          goto LABEL_33;
        }
        if ( *(_BYTE *)(a1 + 388) == 127 && *(_BYTE *)(a1 + 389) == 64 && !*(_BYTE *)(a1 + 390) )
        {
          v5 = -1073741811;
          if ( *(_BYTE *)(a1 + 391) != 64 )
            goto LABEL_32;
          goto LABEL_31;
        }
      }
      v5 = -1073741811;
      goto LABEL_32;
    }
  }
LABEL_53:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)v4;
}
