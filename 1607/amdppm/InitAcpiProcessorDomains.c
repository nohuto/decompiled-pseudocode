/*
 * XREFs of InitAcpiProcessorDomains @ 0x1C00160BC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011F34 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PSD_TSD @ 0x1C000FE24 (AcpiEval_PSD_TSD.c)
 *     InitAcpiIdleDomain @ 0x1C0015FD0 (InitAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiProcessorDomains(__int64 a1)
{
  _DWORD *v2; // r8
  __int64 v3; // rcx
  int v4; // eax
  _DWORD *v5; // rcx
  int v6; // edx
  unsigned int v7; // eax
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // edx
  unsigned int v11; // eax
  _DWORD *v13; // [rsp+30h] [rbp+8h] BYREF
  _DWORD *v14; // [rsp+38h] [rbp+10h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  if ( (*(_DWORD *)(a1 + 248) & 0x7F070) != 0 )
  {
    v2 = *(_DWORD **)(a1 + 480);
    if ( v2 )
    {
      if ( (int)InitAcpiIdleDomain(a1, (unsigned int **)(a1 + 488), v2) < 0 )
        *(_QWORD *)(a1 + 488) = 0LL;
    }
  }
  v3 = *(_QWORD *)(a1 + 248);
  if ( (v3 & 0x1000000000LL) != 0 )
    *(_QWORD *)(a1 + 496) = *(_QWORD *)(a1 + 1152);
  if ( (v3 & 0xF8000000) != 0 )
  {
    v4 = AcpiEval_PSD_TSD(a1, 1146310751, &v13);
    if ( v4 < 0 )
    {
      v5 = 0LL;
      v13 = 0LL;
LABEL_22:
      *(_QWORD *)(a1 + 424) = v5;
      if ( v4 >= 0 && (*(_QWORD *)(a1 + 248) & 0x1000000000LL) == 0 )
        *(_QWORD *)(a1 + 496) = v5;
      goto LABEL_25;
    }
    v5 = v13;
    if ( *v13 == 1 )
    {
      if ( v13[1] != 5 || (v6 = v13[4], (unsigned int)(v6 - 252) > 2) && v6 != 1 || (v7 = v13[5], v7 > 0x280) || !v7 )
      {
        v4 = -1073741823;
LABEL_20:
        _InterlockedOr((volatile signed __int32 *)(a1 + 1056), 0x200u);
        v5 = v13;
        goto LABEL_22;
      }
      v4 = 0;
    }
    else
    {
      v4 = -1073741823;
    }
    if ( v4 >= 0 )
    {
      v4 = 0;
      goto LABEL_22;
    }
    goto LABEL_20;
  }
LABEL_25:
  if ( (*(_DWORD *)(a1 + 248) & 0x3000000) == 0 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 192));
  v8 = AcpiEval_PSD_TSD(a1, 1146311775, &v14);
  if ( v8 >= 0 )
  {
    v9 = v14;
    if ( *v14 == 1 )
    {
      if ( v14[1] != 5
        || (v10 = v14[4], (unsigned int)(v10 - 252) > 2) && v10 != 1
        || (v11 = v14[5], v11 > 0x280)
        || !v11 )
      {
        v8 = -1073741823;
LABEL_38:
        _InterlockedOr((volatile signed __int32 *)(a1 + 1056), 0x2000u);
        v9 = v14;
        goto LABEL_40;
      }
      v8 = 0;
    }
    else
    {
      v8 = -1073741823;
    }
    if ( v8 >= 0 )
    {
      v8 = 0;
      goto LABEL_40;
    }
    goto LABEL_38;
  }
  v9 = 0LL;
LABEL_40:
  *(_QWORD *)(a1 + 472) = v9;
  if ( v8 >= 0 && (*(_QWORD *)(a1 + 248) & 0x10F8000000LL) == 0 )
    *(_QWORD *)(a1 + 496) = v9;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 192));
}
