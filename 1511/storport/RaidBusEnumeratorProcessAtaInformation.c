/*
 * XREFs of RaidBusEnumeratorProcessAtaInformation @ 0x1C0009780
 * Callers:
 *     <none>
 * Callees:
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     RaidAtaIdFormatString @ 0x1C0009824 (RaidAtaIdFormatString.c)
 *     RaidSrbStatusToNtStatus @ 0x1C00110F8 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessAtaInformation(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _DWORD *a5)
{
  __int64 v5; // rbx
  unsigned int v7; // eax
  PVOID Pool; // rax
  __int64 v9; // rbx

  v5 = a1;
  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) == 1 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v7 = *(_DWORD *)(a2 + 60);
    else
      v7 = *(_DWORD *)(a2 + 16);
    if ( v7 < 0x23C )
    {
      *a4 = 1;
      *a5 = 572;
      return 3221225507LL;
    }
    else
    {
      Pool = RaidAllocatePool(NonPagedPoolNx, 0x32uLL, 0x32316152u, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
      *(_QWORD *)(a3 + 72) = Pool;
      if ( Pool )
      {
        v9 = *(_QWORD *)(v5 + 40);
        RaidAtaIdFormatString(Pool, v9 + 114, 40LL);
        RaidAtaIdFormatString(*(_QWORD *)(a3 + 72) + 41LL, v9 + 106, 8LL);
        return 0LL;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  else
  {
    LOBYTE(a1) = *(_BYTE *)(a2 + 3);
    return RaidSrbStatusToNtStatus(a1);
  }
}
