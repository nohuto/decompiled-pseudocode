/*
 * XREFs of PspSetJobTimeLimitCallback @ 0x1406C4E34
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryRuntimeProcess @ 0x14042E5E8 (PsQueryRuntimeProcess.c)
 */

__int64 __fastcall PspSetJobTimeLimitCallback(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 768) & 2) == 0 )
  {
    PsQueryRuntimeProcess(a1, &v6, a3, a4);
    *a2 += v6 * (unsigned __int64)KeMaximumIncrement;
  }
  return 0LL;
}
