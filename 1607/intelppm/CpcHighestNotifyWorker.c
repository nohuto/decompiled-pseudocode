/*
 * XREFs of CpcHighestNotifyWorker @ 0x1C001C398
 * Callers:
 *     AcpiCppcHighestNotifyWorker @ 0x1C001E8D0 (AcpiCppcHighestNotifyWorker.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001724 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001760 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002DC0 (memset.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0004498 (ProcLibTraceProcessorSpecificEvent.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00045CC (ReadGenAddrMaybeHidden.c)
 *     GetPerfDomain @ 0x1C0013CD0 (GetPerfDomain.c)
 */

__int64 __fastcall CpcHighestNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12[5]; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v13[44]; // [rsp+50h] [rbp-B0h] BYREF

  IoFreeWorkItem(a2);
  v3 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v3 + 248);
  if ( (result & 0x8000000) != 0 )
  {
    v5 = *(_QWORD *)(v3 + 224);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 104);
      if ( *(_BYTE *)(v6 + 8) != 126 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C000ECF8,
          0LL);
        if ( !*(_BYTE *)(v5 + 100)
          || (*(int (__fastcall **)(_QWORD))(qword_1C000F1F0 + 88))(*(_QWORD *)(qword_1C000F1F0 + 56)) >= 0
          && (*(int (__fastcall **)(_QWORD, _QWORD))(qword_1C000F1F0 + 104))(*(_QWORD *)(qword_1C000F1F0 + 56), 0LL) >= 0 )
        {
          GenAddrMaybeHidden = ReadGenAddrMaybeHidden(v3, (char *)(v6 + 8));
          v8 = *(_QWORD *)(v5 + 16);
          if ( GenAddrMaybeHidden < v8 )
            GenAddrMaybeHidden = *(_QWORD *)(v5 + 16);
          *(_QWORD *)(v5 + 8) = GenAddrMaybeHidden;
          v9 = 100 * GenAddrMaybeHidden / v8;
          *(_DWORD *)(v5 + 68) = v9;
          if ( (unsigned int)v9 > *(_DWORD *)(v5 + 72) )
            *(_DWORD *)(v5 + 72) = v9;
          memset(v13, 0, sizeof(v13));
          v13[0] = *(_DWORD *)(v5 + 68);
          KeInitializeAffinityEx(&v13[2]);
          GetPerfDomain((_QWORD *)v3, (__int64)v12, &v11);
          ResetEnumerationContext(v12);
          while ( !(unsigned int)EnumerateNextDevice((__int64)v12, &v11) )
          {
            v10 = v11;
            KeAddProcessorAffinityEx(&v13[2], *(unsigned int *)(v11 + 56));
            if ( v3 != v10 )
            {
              *(_QWORD *)(*(_QWORD *)(v10 + 224) + 8LL) = *(_QWORD *)(v5 + 8);
              *(_DWORD *)(*(_QWORD *)(v10 + 224) + 68LL) = *(_DWORD *)(v5 + 68);
              *(_DWORD *)(*(_QWORD *)(v10 + 224) + 72LL) = *(_DWORD *)(v5 + 72);
            }
          }
          ((void (__fastcall *)(_DWORD *))qword_1C000EEF8)(v13);
          ProcLibTraceProcessorSpecificEvent(v3, &PPM_ETW_NOTIFY_85, 0, 0LL);
        }
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                 WdfDriverGlobals,
                 qword_1C000ECF8);
      }
    }
  }
  return result;
}
