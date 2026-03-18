/*
 * XREFs of KiIntSteerLogProc @ 0x1400E9FE4
 * Callers:
 *     PpmParkSteerInterrupts @ 0x1400E87E0 (PpmParkSteerInterrupts.c)
 *     KiIntSteerLogStatus @ 0x140209704 (KiIntSteerLogStatus.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall KiIntSteerLogProc(char a1)
{
  REGHANDLE v1; // rbp
  const EVENT_DESCRIPTOR *v2; // rsi
  const EVENT_DESCRIPTOR *v3; // rax
  unsigned __int64 v4; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]

  v1 = KiIntSteerEtwHandle;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE;
  v3 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  if ( a1 )
    v2 = &PPM_ETW_INTERRUPT_STEERING_PROC_RUNDOWN;
  if ( KiIntSteerEtwHandle )
  {
    LOBYTE(v3) = EtwEventEnabled(KiIntSteerEtwHandle, v2);
    if ( (_BYTE)v3 )
    {
      v4 = qword_1403D15E8[0];
      for ( i = 0; ; v4 = qword_1403D15E8[i] )
      {
        while ( v4 )
        {
          _BitScanForward64(&v6, v4);
          v4 &= ~(1LL << v6);
          *(_QWORD *)&UserData.Size = 4LL;
          v12 = 4LL;
          UserData.Ptr = (ULONGLONG)&v9;
          v7 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v6];
          v9 = v7;
          v11 = KiProcessorBlock[v7] + 11544;
          EtwWrite(v1, v2, 0LL, 2u, &UserData);
          v1 = KiIntSteerEtwHandle;
        }
        LOBYTE(v3) = ++i;
        if ( i >= (unsigned int)LOWORD(KeActiveProcessors[0]) )
          break;
      }
    }
  }
  return (char)v3;
}
