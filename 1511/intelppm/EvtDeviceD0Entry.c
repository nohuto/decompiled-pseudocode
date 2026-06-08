/*
 * XREFs of EvtDeviceD0Entry @ 0x1C00017D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C0012DA4 (ProcLibCapChange.c)
 *     AcpiEval_PPC @ 0x1C001457C (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C001D728 (AcpiEval_TPC.c)
 */

__int64 __fastcall EvtDeviceD0Entry(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C000B048);
  v2 = *(_QWORD *)(v1 + 248);
  if ( (v2 & 0x80000000) == 0 )
  {
    v3 = 0;
    if ( *(_BYTE *)(v1 + 64) )
    {
      *(_BYTE *)(v1 + 64) = 0;
      v5 = 0;
      v10 = 0;
      if ( (v2 & 0x70000000) != 0 )
      {
        v6 = AcpiEval_PPC(v1, &v10);
        v5 = v10;
        if ( v6 < 0 )
          v5 = 0;
      }
      v7 = *(_DWORD *)(v1 + 248);
      v10 = 0;
      if ( (v7 & 0x3000000) != 0 )
      {
        v8 = AcpiEval_TPC(v1, &v10);
        v9 = v10;
        if ( v8 < 0 )
          v9 = 0;
        v3 = v9;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C000DD08,
        0LL);
      if ( v5 != *(_DWORD *)(v1 + 400) || v3 != *(_DWORD *)(v1 + 448) )
      {
        ProcLibCapChange(v1, v5, v3, 100LL);
        ((void (__fastcall *)(__int64))qword_1C000E050)(v1);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C000DD08);
    }
  }
  return 0LL;
}
