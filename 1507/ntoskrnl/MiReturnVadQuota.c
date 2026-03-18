/*
 * XREFs of MiReturnVadQuota @ 0x1404B93D0
 * Callers:
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 */

signed __int64 __fastcall MiReturnVadQuota(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  signed __int64 result; // rax

  v6 = *(unsigned int *)(a1 + 52);
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v7 = v6 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31);
  result = 0x7FFFFFFFELL;
  if ( v7 < 0x7FFFFFFFELL )
  {
    result = PsReturnProcessNonPagedPoolQuota(a2, 0x88uLL);
    if ( a3 == 1 )
    {
      result = MiVadPureReserve(a1);
      if ( !(_DWORD)result )
        return PsReturnProcessPagedPoolQuota(
                 a2,
                 8
               * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)))
               + 8);
    }
  }
  return result;
}
