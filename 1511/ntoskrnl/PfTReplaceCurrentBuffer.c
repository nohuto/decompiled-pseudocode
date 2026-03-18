/*
 * XREFs of PfTReplaceCurrentBuffer @ 0x1404D3FE0
 * Callers:
 *     PfpCopyEvent @ 0x1404D3360 (PfpCopyEvent.c)
 *     PfpLogPageAccess @ 0x1404D3960 (PfpLogPageAccess.c)
 *     PfTAcquireLogEntry @ 0x1404F3310 (PfTAcquireLogEntry.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PfTGetFreeBuffer @ 0x1404D4078 (PfTGetFreeBuffer.c)
 */

__int64 PfTReplaceCurrentBuffer()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned __int16 v6; // r8
  __int64 v7; // rcx

  v0 = PfTGetFreeBuffer();
  v3 = 0;
  if ( v0 )
  {
    if ( (*(_DWORD *)v1 & 0xF) == 1 )
    {
      v6 = *(_WORD *)(v0 + 32) + *(_WORD *)(*(_QWORD *)(v1 + 24) + 36LL);
      v7 = 0xFFFF - (unsigned int)v6;
      *(_WORD *)(v0 + 36) = v6;
      if ( (unsigned int)v7 < *(_DWORD *)(v0 + 32) )
        *(_QWORD *)(((v0 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v7) = -1LL;
    }
    v4 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)v0 = v4;
    *(_QWORD *)(v0 + 8) = v2 + 24;
    if ( *(_QWORD *)(v4 + 8) != v2 + 24 )
      __fastfail(3u);
    *(_QWORD *)(v4 + 8) = v0;
    *(_QWORD *)(v2 + 24) = v0;
    if ( *(_WORD *)(v2 + 10) <= *(_WORD *)(v2 + 8) )
      KeSetEvent(&stru_1403024F0, 0, 0);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
