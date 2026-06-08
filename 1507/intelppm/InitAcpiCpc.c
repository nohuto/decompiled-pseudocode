/*
 * XREFs of InitAcpiCpc @ 0x1C0012F2C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0012314 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     ReadGenAddr @ 0x1C000346C (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C00035CC (WriteGenAddr.c)
 *     CpcRegisterIsSupported @ 0x1C0003C80 (CpcRegisterIsSupported.c)
 *     AcpiEval_CPC @ 0x1C0014148 (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C001B0CC (ValidateAcpiCPC.c)
 *     RegisterSubspaceForGenAddr @ 0x1C001D164 (RegisterSubspaceForGenAddr.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // edi
  __int64 v4; // rbx
  const char *v5; // rbp
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
  v2 = AcpiEval_CPC(a1, a1 + 528);
  if ( v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 528);
    v2 = ValidateAcpiCPC(v4);
    if ( v2 >= 0 )
    {
      if ( dword_1C000DD7C != 1 )
      {
        if ( *(_DWORD *)(v4 + 4) == 1 )
        {
          v5 = "\b";
          v6 = 15;
        }
        else
        {
          v5 = (const char *)&Cpc2RegisterTable;
          v6 = 19;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C000D9C8,
          0LL);
        v7 = 0;
        v8 = 0;
        while ( 1 )
        {
          if ( *(_BYTE *)(v4 + *(unsigned int *)v5) == 10 )
          {
            v2 = RegisterSubspaceForGenAddr(a1);
            v7 = 1;
            if ( v2 < 0 )
              break;
          }
          ++v8;
          v5 += 24;
          if ( v8 >= v6 )
          {
            if ( !(unsigned __int8)CpcRegisterIsSupported(v4 + 224) || *(_BYTE *)v9 == 126 && !*(_QWORD *)(v4 + 228) )
            {
              v10 = *(_DWORD *)(v4 + 28);
              *(_QWORD *)v9 = *(_QWORD *)(v4 + 20);
              *(_DWORD *)(v9 + 8) = v10;
            }
            if ( !v7
              || (v2 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C000DE68 + 88))(*(_QWORD *)(qword_1C000DE68 + 56)),
                  v2 >= 0) )
            {
              if ( (unsigned __int8)CpcRegisterIsSupported(v4 + 176) )
                WriteGenAddr(v11, 1LL);
              if ( !v7 )
                goto LABEL_25;
              v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C000DE68 + 104))(
                     *(_QWORD *)(qword_1C000DE68 + 56),
                     0LL);
              if ( v2 == -1073741435 )
                v2 = 0;
              if ( v2 >= 0 )
              {
LABEL_25:
                *(_QWORD *)(a1 + 336) = ReadGenAddr(v4 + 8);
                *(_QWORD *)(a1 + 344) = ReadGenAddr(v4 + 20);
                *(_QWORD *)(a1 + 352) = ReadGenAddr(v4 + 32);
                *(_QWORD *)(a1 + 360) = ReadGenAddr(v4 + 44);
              }
            }
            break;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1C000D9C8);
      }
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1048), 0x40000u);
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 192));
  return (unsigned int)v2;
}
