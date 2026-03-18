/*
 * XREFs of VidSchResetFlipQueueTimeout @ 0x1C008A2D0
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C003A610 (VidSchiCheckHwProgress.c)
 *     VidSchRestartAdapter @ 0x1C008BEA0 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchResetFlipQueueTimeout(__int64 a1)
{
  __int64 i; // r8
  __int64 j; // r9
  __int64 result; // rax
  _DWORD *v4; // r10

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 124); j = (unsigned int)(j + 1) )
    {
      result = *(_QWORD *)(a1 + 8 * i + 2592);
      v4 = *(_DWORD **)(result + 8 * j + 24);
      if ( v4 )
        *v4 &= ~1u;
    }
  }
  return result;
}
