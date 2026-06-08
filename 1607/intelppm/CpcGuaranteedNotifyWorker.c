/*
 * XREFs of CpcGuaranteedNotifyWorker @ 0x1C001C23C
 * Callers:
 *     AcpiCppcGuaranteedNotifyWorker @ 0x1C001E8C0 (AcpiCppcGuaranteedNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     ProcLibTracePccCapChange @ 0x1C0004474 (ProcLibTracePccCapChange.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00045CC (ReadGenAddrMaybeHidden.c)
 *     ProcLibCapChange @ 0x1C00154EC (ProcLibCapChange.c)
 */

__int64 __fastcall CpcGuaranteedNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rsi

  IoFreeWorkItem(a2);
  v3 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v3 + 248);
  if ( (result & 0x8000000) != 0 )
  {
    v5 = *(_QWORD *)(v3 + 224);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 104);
      if ( *(_BYTE *)(v5 + 97) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C000ECF8,
          0LL);
        if ( !*(_BYTE *)(v5 + 99)
          || (*(int (__fastcall **)(_QWORD))(qword_1C000F1F0 + 88))(*(_QWORD *)(qword_1C000F1F0 + 56)) >= 0
          && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C000F1F0 + 104))(*(_QWORD *)(qword_1C000F1F0 + 56), 0LL) >= 0 )
        {
          GenAddrMaybeHidden = ReadGenAddrMaybeHidden(v3, (char *)(v6 + 56));
          v8 = *(_QWORD *)(v5 + 16);
          v9 = GenAddrMaybeHidden;
          if ( GenAddrMaybeHidden > v8 )
            v9 = *(_QWORD *)(v5 + 16);
          if ( v9 < *(_QWORD *)(v5 + 32) )
            v9 = *(_QWORD *)(v5 + 32);
          *(_QWORD *)(v5 + 56) = v9;
          v10 = 100 * v9 / v8;
          if ( (unsigned int)v10 <= *(_DWORD *)(v5 + 80) )
            LODWORD(v10) = *(_DWORD *)(v5 + 80);
          *(_DWORD *)(v5 + 84) = v10;
          if ( (_DWORD)v10 != *(_DWORD *)(v3 + 684) )
          {
            ProcLibCapChange(v3, *(_DWORD *)(v3 + 416), *(_DWORD *)(v3 + 464), v10);
            ((void (__fastcall *)(__int64))qword_1C000F090)(v3);
          }
          ProcLibTracePccCapChange(v3, v10);
        }
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                 WdfDriverGlobals,
                 qword_1C000ECF8);
      }
    }
  }
  return result;
}
