/*
 * XREFs of CpcNotifyWorker @ 0x1C001AF7C
 * Callers:
 *     AcpiCPCNotifyWorker @ 0x1C001D1D0 (AcpiCPCNotifyWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     ReadGenAddr @ 0x1C000346C (ReadGenAddr.c)
 *     ProcLibTracePccCapChange @ 0x1C0003A44 (ProcLibTracePccCapChange.c)
 *     ProcLibCapChange @ 0x1C0012DA4 (ProcLibCapChange.c)
 */

__int64 __fastcall CpcNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 GenAddr; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  int v11; // esi

  IoFreeWorkItem(a2);
  v3 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v3 + 248);
  if ( (result & 0x8000000) != 0 )
  {
    v5 = *(_QWORD *)(v3 + 224);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 96);
      if ( *(_BYTE *)(v5 + 85) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C000D9C8,
          0LL);
        if ( !*(_BYTE *)(v5 + 87)
          || (*(int (__fastcall **)(_QWORD))(qword_1C000DE68 + 88))(*(_QWORD *)(qword_1C000DE68 + 56)) >= 0
          && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C000DE68 + 104))(*(_QWORD *)(qword_1C000DE68 + 56), 0LL) >= 0 )
        {
          GenAddr = ReadGenAddr(v6 + 56);
          v8 = *(_QWORD *)(v5 + 8);
          v9 = GenAddr;
          if ( GenAddr > v8 )
            v9 = *(_QWORD *)(v5 + 8);
          if ( v9 < *(_QWORD *)(v5 + 24) )
            v9 = *(_QWORD *)(v5 + 24);
          *(_QWORD *)(v5 + 48) = v9;
          v10 = 100 * v9 / v8;
          *(_DWORD *)(v5 + 72) = v10;
          v11 = v10;
          if ( (_DWORD)v10 != *(_DWORD *)(v3 + 676) )
          {
            ProcLibCapChange(v3, *(_DWORD *)(v3 + 408), *(_DWORD *)(v3 + 456), v10);
            ((void (__fastcall *)(__int64))qword_1C000DD10)(v3);
          }
          ProcLibTracePccCapChange(v3, v11);
        }
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                 WdfDriverGlobals,
                 qword_1C000D9C8);
      }
    }
  }
  return result;
}
