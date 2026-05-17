/*
 * XREFs of RtlWoW64GetCurrentCpuArea @ 0x180067550
 * Callers:
 *     <none>
 * Callees:
 *     RtlWoW64GetCpuAreaInfo @ 0x1800675D0 (RtlWoW64GetCpuAreaInfo.c)
 */

__int64 __fastcall RtlWoW64GetCurrentCpuArea(_WORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v8; // [rsp+44h] [rbp-14h]

  result = RtlWoW64GetCpuAreaInfo(NtCurrentTeb()->TlsSlots[1], 0LL, v7);
  if ( (int)result >= 0 )
  {
    if ( a1 )
      *a1 = v8;
    if ( a2 )
      *a2 = v7[0];
    if ( a3 )
      *a3 = *(_QWORD *)v7[1];
    return 0LL;
  }
  return result;
}
