/*
 * XREFs of InitAcpiCpc @ 0x1C001553C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0011CB4 (ProcLibDeviceStart.c)
 * Callees:
 *     CpcRegisterIsSupported @ 0x1C0002A50 (CpcRegisterIsSupported.c)
 *     ReadGenAddr @ 0x1C00046A0 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00046F4 (WriteGenAddr.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_CPC @ 0x1C0010ADC (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C001C988 (ValidateAcpiCPC.c)
 *     RegisterSubspaceForGenAddr @ 0x1C001DCB8 (RegisterSubspaceForGenAddr.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rbx
  unsigned int *v4; // rbp
  unsigned int v5; // r14d
  char v6; // r12
  unsigned int v7; // r15d
  __int64 v8; // rcx
  int v9; // eax
  _BYTE *v10; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192),
    0LL);
  v2 = AcpiEval_CPC(a1, (_QWORD *)(a1 + 520));
  if ( v2 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 520);
    v2 = ValidateAcpiCPC(v3);
    if ( v2 >= 0 )
    {
      if ( dword_1C000975C != 1 )
      {
        if ( *(_DWORD *)(v3 + 4) == 1 )
        {
          v4 = (unsigned int *)&CpcRegisterTable;
          v5 = 15;
        }
        else
        {
          v4 = (unsigned int *)&Cpc2RegisterTable;
          v5 = 19;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C00093A8,
          0LL);
        v6 = 0;
        v7 = 0;
        while ( 1 )
        {
          if ( *(_BYTE *)(v3 + *v4) == 10 )
          {
            v2 = RegisterSubspaceForGenAddr(a1);
            v6 = 1;
            if ( v2 < 0 )
              break;
          }
          ++v7;
          v4 += 6;
          if ( v7 >= v5 )
          {
            if ( !(unsigned __int8)CpcRegisterIsSupported(v3 + 224) || *(_BYTE *)v8 == 126 && !*(_QWORD *)(v3 + 228) )
            {
              v9 = *(_DWORD *)(v3 + 28);
              *(_QWORD *)v8 = *(_QWORD *)(v3 + 20);
              *(_DWORD *)(v8 + 8) = v9;
            }
            if ( !v6
              || (v2 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C0009848 + 88))(*(_QWORD *)(qword_1C0009848 + 56)),
                  v2 >= 0) )
            {
              if ( (unsigned __int8)CpcRegisterIsSupported(v3 + 176) )
                WriteGenAddr(v10, 1uLL);
              if ( !v6 )
                goto LABEL_24;
              v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C0009848 + 104))(
                     *(_QWORD *)(qword_1C0009848 + 56),
                     0LL);
              if ( v2 == -1073741435 )
                v2 = 0;
              if ( v2 >= 0 )
              {
LABEL_24:
                *(_QWORD *)(a1 + 328) = ReadGenAddr(v3 + 8);
                *(_QWORD *)(a1 + 336) = ReadGenAddr(v3 + 20);
                *(_QWORD *)(a1 + 344) = ReadGenAddr(v3 + 32);
                *(_QWORD *)(a1 + 352) = ReadGenAddr(v3 + 44);
              }
            }
            break;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C00093A8);
      }
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1040), 0x40000u);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)v2;
}
