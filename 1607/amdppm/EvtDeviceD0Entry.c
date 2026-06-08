/*
 * XREFs of EvtDeviceD0Entry @ 0x1C0001200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PPC @ 0x1C00105D0 (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C00108E0 (AcpiEval_TPC.c)
 *     ProcLibCapChange @ 0x1C0012990 (ProcLibCapChange.c)
 */

__int64 __fastcall EvtDeviceD0Entry(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0009048);
  v2 = *(_QWORD *)(v1 + 248);
  if ( (v2 & 0x80000000) == 0 )
  {
    v3 = 0;
    if ( *(_BYTE *)(v1 + 64) )
    {
      *(_BYTE *)(v1 + 64) = 0;
      v4 = 0;
      v10 = 0;
      if ( (v2 & 0x70000000) != 0 )
      {
        v5 = AcpiEval_PPC(v1, &v10);
        v4 = v10;
        if ( v5 < 0 )
          v4 = 0;
      }
      v6 = *(_DWORD *)(v1 + 248);
      v10 = 0;
      if ( (v6 & 0x3000000) != 0 )
      {
        v7 = AcpiEval_TPC(v1, &v10);
        v8 = v10;
        if ( v7 < 0 )
          v8 = 0;
        v3 = v8;
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00093A8,
        0LL);
      if ( v4 != *(_DWORD *)(v1 + 416) || v3 != *(_DWORD *)(v1 + 464) )
      {
        ProcLibCapChange(v1, v4, v3, 100LL);
        ((void (__fastcall *)(__int64))qword_1C0009740)(v1);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C00093A8);
    }
  }
  return 0LL;
}
