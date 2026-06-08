/*
 * XREFs of AcquirePccInterface @ 0x1C001D720
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C001D640 (InitAcpiLegacyPcc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00062C0 (memset.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  signed int v3; // ebx
  char v4; // cl
  unsigned int v5; // ecx
  __int64 v6; // rax
  int v8; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+28h] [rbp-20h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0009398,
    0LL);
  if ( qword_1C0009800 )
  {
    v3 = 0;
  }
  else
  {
    dword_1C00097D8 = -1;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
           WdfDriverGlobals,
           v2,
           &GUID_PCC_INTERFACE_STANDARD,
           &unk_1C00097B8,
           128,
           1,
           0LL);
    if ( v3 >= 0 )
    {
      v3 = -1073741811;
      if ( *(_DWORD *)qword_1C0009800 == 609239875
        && *(_WORD *)(qword_1C0009800 + 4) >= 0x28u
        && ((v4 = *(_BYTE *)(qword_1C0009800 + 6)) == 0 && *(_BYTE *)(qword_1C0009800 + 7) >= 6u
         || v4 == 1 && !*(_BYTE *)(qword_1C0009800 + 7)) )
      {
        v5 = *(_DWORD *)(qword_1C0009800 + 36);
        if ( v5 <= *(_DWORD *)(qword_1C0009800 + 28) )
          v3 = v5 < *(_DWORD *)(qword_1C0009800 + 32) ? 0xC000000D : 0;
      }
      if ( v3 < 0 )
        goto LABEL_15;
      if ( dword_1C000974C == 1 )
      {
        dword_1C0009778 = -1;
        v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
        LOWORD(v9) = 1;
        LOWORD(v8) = 88;
        v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, int, int, _QWORD))(WdfFunctions_01015 + 1048))(
               WdfDriverGlobals,
               v6,
               &GUID_PCC_INTERFACE_INTERNAL,
               &unk_1C0009758,
               v8,
               v9,
               0LL);
      }
      if ( v3 < 0 )
      {
LABEL_15:
        ((void (__fastcall *)(__int64))qword_1C00097D0)(qword_1C00097C0);
        memset(&unk_1C00097B8, 0, 0x80uLL);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0009398);
  return (unsigned int)v3;
}
