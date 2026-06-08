/*
 * XREFs of InitAcpiCpc @ 0x1C0015588
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001403C (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00045CC (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0004714 (WriteGenAddrMaybeHidden.c)
 *     CpcRegisterIsSupported @ 0x1C0004900 (CpcRegisterIsSupported.c)
 *     AcpiEval_CPC @ 0x1C0016900 (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C001C820 (ValidateAcpiCPC.c)
 *     RegisterSubspaceForGenAddr @ 0x1C001E654 (RegisterSubspaceForGenAddr.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // esi
  __int64 v4; // rbx
  unsigned int *v5; // rbp
  unsigned int v6; // r14d
  char v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rcx
  int v10; // eax
  _BYTE *v11; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  v2 = AcpiEval_CPC(a1, a1 + 536);
  if ( v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 536);
    v2 = ValidateAcpiCPC(v4);
    if ( v2 >= 0 )
    {
      if ( dword_1C000F104 != 1 )
      {
        if ( *(_DWORD *)(v4 + 4) == 1 )
        {
          v5 = (unsigned int *)&CpcRegisterTable;
          v6 = 15;
        }
        else
        {
          v5 = (unsigned int *)&Cpc2RegisterTable;
          v6 = 19;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C000ECF8,
          0LL);
        v7 = 0;
        v8 = 0;
        while ( 1 )
        {
          if ( *(_BYTE *)(v4 + *v5) == 10 )
          {
            v2 = RegisterSubspaceForGenAddr(a1);
            v7 = 1;
            if ( v2 < 0 )
              break;
          }
          ++v8;
          v5 += 6;
          if ( v8 >= v6 )
          {
            if ( !(unsigned __int8)CpcRegisterIsSupported(v4 + 224) || *(_BYTE *)v9 == 126 && !*(_QWORD *)(v4 + 228) )
            {
              v10 = *(_DWORD *)(v4 + 28);
              *(_QWORD *)v9 = *(_QWORD *)(v4 + 20);
              *(_DWORD *)(v9 + 8) = v10;
            }
            if ( !v7
              || (v2 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C000F1F0 + 88))(*(_QWORD *)(qword_1C000F1F0 + 56)),
                  v2 >= 0) )
            {
              if ( (unsigned __int8)CpcRegisterIsSupported(v4 + 176) )
                WriteGenAddrMaybeHidden(a1, v11, 1LL);
              if ( !v7 )
                goto LABEL_25;
              v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C000F1F0 + 104))(
                     *(_QWORD *)(qword_1C000F1F0 + 56),
                     0LL);
              if ( v2 == -1073741435 )
                v2 = 0;
              if ( v2 >= 0 )
              {
LABEL_25:
                *(_QWORD *)(a1 + 344) = ReadGenAddrMaybeHidden(a1, (char *)(v4 + 8));
                *(_QWORD *)(a1 + 352) = ReadGenAddrMaybeHidden(a1, (char *)(v4 + 20));
                *(_QWORD *)(a1 + 360) = ReadGenAddrMaybeHidden(a1, (char *)(v4 + 32));
                *(_QWORD *)(a1 + 368) = ReadGenAddrMaybeHidden(a1, (char *)(v4 + 44));
              }
            }
            break;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C000ECF8);
      }
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1056), 0x40000u);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)v2;
}
