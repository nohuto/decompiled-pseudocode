/*
 * XREFs of VidSchResetGPUTimeout @ 0x1C008A30C
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C003A610 (VidSchiCheckHwProgress.c)
 *     VidSchRestartAdapter @ 0x1C008BEA0 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchResetGPUTimeout(__int64 a1)
{
  __int64 i; // r8
  __int64 result; // rax

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 56); *(_DWORD *)(result + 400) &= ~2u )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8 * i + 376) + 400LL) &= ~1u;
    result = *(_QWORD *)(a1 + 8 * i + 376);
    i = (unsigned int)(i + 1);
  }
  return result;
}
