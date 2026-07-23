/*
 * XREFs of EtwTraceFreezeThawProcess @ 0x1406A1804
 * Callers:
 *     PsThawProcess @ 0x140501050 (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140501490 (PsFreezeProcess.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceFreezeThawProcess(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  __int16 v4; // ax
  int v6; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]
  int v10; // [rsp+54h] [rbp-14h]

  v6 = *(_DWORD *)(a1 + 744);
  v7.Ptr = (ULONGLONG)&v6;
  v7.Reserved = 0;
  v7.Size = 4;
  v8 = a1 + 776;
  v10 = 0;
  v9 = 8;
  if ( (dword_1402FD528 & 2) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)&ProcessFreezeEvent;
    if ( !a2 )
      v3 = &ProcessThawEvent;
    EtwWrite(EtwpPsProvRegHandle, v3, 0LL, 2u, &v7);
  }
  v4 = 804;
  if ( !a2 )
    v4 = 805;
  return EtwTraceKernelEvent((int)&v7, 1, 0x40000002u, v4, 5249282);
}
