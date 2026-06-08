/*
 * XREFs of CpcNotifyWorker @ 0x1C0015858
 * Callers:
 *     AcpiCPCNotifyWorker @ 0x1C0011740 (AcpiCPCNotifyWorker.c)
 * Callees:
 *     ProcLibTracePccCapChange @ 0x1C00018B0 (ProcLibTracePccCapChange.c)
 *     ReadGenAddr @ 0x1C00046A0 (ReadGenAddr.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C00126B0 (ProcLibCapChange.c)
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
  unsigned __int64 v10; // rsi

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
          qword_1C00093A8,
          0LL);
        if ( !*(_BYTE *)(v5 + 87)
          || (*(int (__fastcall **)(_QWORD))(qword_1C0009848 + 88))(*(_QWORD *)(qword_1C0009848 + 56)) >= 0
          && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C0009848 + 104))(*(_QWORD *)(qword_1C0009848 + 56), 0LL) >= 0 )
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
          if ( (unsigned int)v10 <= *(_DWORD *)(v5 + 68) )
            LODWORD(v10) = *(_DWORD *)(v5 + 68);
          *(_DWORD *)(v5 + 72) = v10;
          if ( (_DWORD)v10 != *(_DWORD *)(v3 + 668) )
          {
            ProcLibCapChange(v3, *(_DWORD *)(v3 + 400), *(_DWORD *)(v3 + 448), v10);
            ((void (__fastcall *)(__int64))qword_1C00096F0)(v3);
          }
          ProcLibTracePccCapChange(v3, v10);
        }
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                 WdfDriverGlobals,
                 qword_1C00093A8);
      }
    }
  }
  return result;
}
