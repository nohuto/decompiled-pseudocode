/*
 * XREFs of StorpFlushDataBufferMdl @ 0x1C0028F14
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0005260 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpFlushDataBufferMdl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  if ( !a2 )
    return 3238002694LL;
  v3 = *(_BYTE *)(a2 + 2) == 40 ? *(_QWORD *)(a2 + 96) : *(_QWORD *)(a2 + 48);
  if ( !v3 )
    return 3238002694LL;
  if ( *(_DWORD *)v3 != 523124044 )
    return 3238002694LL;
  v4 = *(_QWORD *)(v3 + 136);
  if ( !v4 )
  {
    v4 = *(_QWORD *)(v3 + 96);
    if ( !v4 )
      return 3238002694LL;
  }
  if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
  {
    LOBYTE(a3) = 1;
    KeFlushIoBuffers(v4, 0LL, a3);
  }
  return 0LL;
}
