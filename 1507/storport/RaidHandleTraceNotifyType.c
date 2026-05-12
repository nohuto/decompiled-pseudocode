/*
 * XREFs of RaidHandleTraceNotifyType @ 0x1C002EFDC
 * Callers:
 *     StorPortNotification @ 0x1C0004A70 (StorPortNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     PortTraceInitGlobalLogger @ 0x1C003AF50 (PortTraceInitGlobalLogger.c)
 *     PortTraceInitTracing @ 0x1C003B1A4 (PortTraceInitTracing.c)
 *     PortTraceErrorWritePacket @ 0x1C003B3F0 (PortTraceErrorWritePacket.c)
 *     PortTraceErrorFreeDriver @ 0x1C0055BD4 (PortTraceErrorFreeDriver.c)
 */

void __fastcall RaidHandleTraceNotifyType(__int64 a1, int a2, _QWORD *a3)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  NTSTATUS TraceInformation; // eax
  CHAR *v9; // rbx
  void (__fastcall *v10)(_QWORD); // rax
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  unsigned int v15; // r11d
  __int64 v16; // rdx
  PCCH v17; // r10
  unsigned int v18; // r9d
  __int64 v19; // r8

  if ( a2 > 2003 )
  {
    v11 = a2 - 2004;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1995;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 == 1 )
              _InterlockedExchange((volatile __int32 *)(a3[1] - 16LL), 0);
          }
          else
          {
            v15 = *((_DWORD *)a3 + 2);
            v16 = 0LL;
            v17 = (PCCH)*a3;
            if ( v15 <= 0xF0 )
            {
              v18 = 0;
              if ( *((_DWORD *)v17 + 20) )
              {
                while ( 1 )
                {
                  v19 = *(_QWORD *)(*((_QWORD *)v17 + 7) + 8LL * v18);
                  if ( !*(_DWORD *)(v19 + 16)
                    && !_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 16), 1, 0) )
                  {
                    break;
                  }
                  if ( ++v18 >= *((_DWORD *)v17 + 20) )
                    goto LABEL_30;
                }
                *(_DWORD *)(v19 + 20) = v15;
                v16 = v19 + 32;
              }
            }
LABEL_30:
            a3[2] = v16;
          }
        }
        else
        {
          PortTraceErrorWritePacket(a3);
        }
      }
      else
      {
        vDbgPrintExWithPrefix("StorMiniport: ", 0xDu, 0, (PCCH)*a3, (va_list)a3[1]);
      }
    }
    else
    {
      RtlInitUnicodeString((PUNICODE_STRING)*a3, (PCWSTR)a3[1]);
    }
  }
  else
  {
    if ( a2 == 2003 )
    {
      TraceInformation = WmiQueryTraceInformation(
                           *(TRACE_INFORMATION_CLASS *)a3,
                           (PVOID)a3[1],
                           *((_DWORD *)a3 + 4),
                           (PULONG)a3[3],
                           (PVOID)a3[4]);
      goto LABEL_11;
    }
    v4 = a2 - 1000;
    if ( !v4 )
    {
      PortTraceInitTracing(a3);
      return;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 999;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 == 1 )
            *((_DWORD *)a3 + 3) = IoWMIRegistrationControl((PDEVICE_OBJECT)*a3, *((_DWORD *)a3 + 2));
        }
        else
        {
          PortTraceInitGlobalLogger(a3);
        }
        return;
      }
      TraceInformation = WmiTraceMessageVa(*a3, *((unsigned int *)a3 + 2), a3[2], *((unsigned __int16 *)a3 + 12), a3[4]);
LABEL_11:
      *((_DWORD *)a3 + 10) = TraceInformation;
      return;
    }
    v9 = (CHAR *)*a3;
    PortTraceErrorFreeDriver(*a3);
    v10 = (void (__fastcall *)(_QWORD))*((_QWORD *)v9 + 2);
    if ( v10 )
      v10(*((_QWORD *)v9 + 1));
    ExFreePoolWithTag(v9, 0);
  }
}
