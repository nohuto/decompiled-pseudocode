/*
 * XREFs of PspWriteTebIdealProcessor @ 0x14045836C
 * Callers:
 *     PspUserThreadStartup @ 0x140457F30 (PspUserThreadStartup.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140071E68 (KeGetProcessorNumberFromIndex.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2)
{
  _KPROCESS *v3; // r13
  _PROCESSOR_NUMBER *v4; // rsi
  char v5; // r14
  char v6; // r15
  _PROCESSOR_NUMBER *v7; // r13
  _PROCESSOR_NUMBER v8; // eax
  signed __int32 v9[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v10; // [rsp+20h] [rbp-A8h]
  char v11; // [rsp+21h] [rbp-A7h]
  _PROCESSOR_NUMBER v12; // [rsp+24h] [rbp-A4h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+30h] [rbp-98h]
  _PROCESSOR_NUMBER *v15; // [rsp+38h] [rbp-90h]
  _PROCESSOR_NUMBER *v16; // [rsp+40h] [rbp-88h]
  _PROCESSOR_NUMBER *v17; // [rsp+48h] [rbp-80h]
  _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+50h] [rbp-78h]
  __int64 v19; // [rsp+58h] [rbp-70h]
  _BYTE v20[48]; // [rsp+60h] [rbp-68h] BYREF

  v14 = a1;
  v19 = a2;
  v12 = 0;
  v16 = *(_PROCESSOR_NUMBER **)(a2 + 240);
  v17 = v16;
  v3 = *(_KPROCESS **)(a2 + 544);
  p_ProcNumber = &ProcNumber;
  v4 = v16 + 2048;
  if ( !v3[1].ActiveProcessors.Bitmap[7] )
    v4 = 0LL;
  v15 = v4;
  v5 = 0;
  v10 = 0;
  if ( a2 != a1 )
  {
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 1704)) )
      return;
    v5 = 1;
    v10 = 1;
    a1 = v14;
  }
  v6 = 0;
  v11 = 0;
  if ( v3 != *(_KPROCESS **)(a1 + 184) )
  {
    KiStackAttachProcess(v3, 0, (__int64)v20);
    v6 = 1;
    v11 = 1;
  }
  KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &ProcNumber);
  v7 = v16;
  while ( 1 )
  {
    ProcNumber.Reserved = ProcNumber.Number;
    v8 = ProcNumber;
    v7[1489] = ProcNumber;
    if ( v4 )
    {
      LOWORD(v14) = v8.Group;
      BYTE2(v14) = v8.Number & 0x1F;
      BYTE3(v14) = v8.Reserved & 0x1F;
      v4[989] = (_PROCESSOR_NUMBER)v14;
    }
    _InterlockedOr(v9, 0);
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &v12);
    if ( v12.Group == ProcNumber.Group && v12.Number == ProcNumber.Number )
      break;
    ProcNumber = v12;
  }
  if ( v6 )
    KiUnstackDetachProcess((struct _KTHREAD *)v20, 0);
  if ( v5 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 1704));
}
