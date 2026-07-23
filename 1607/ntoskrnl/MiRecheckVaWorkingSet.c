/*
 * XREFs of MiRecheckVaWorkingSet @ 0x14001EF78
 * Callers:
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiAcquireProperVm @ 0x1400A2B28 (MiAcquireProperVm.c)
 * Callees:
 *     MiSystemCacheVaControlArea @ 0x1400189B0 (MiSystemCacheVaControlArea.c)
 *     MiGetSystemCacheReverseMap @ 0x140019690 (MiGetSystemCacheReverseMap.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiRecheckVaWorkingSet(__int64 a1, unsigned __int64 a2)
{
  char v3; // dl
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v10; // zf

  v3 = *(_BYTE *)(a1 + 184) & 7;
  if ( !v3 )
    return a1;
  if ( a2 < qword_140326950 || a2 >= qword_140326950 + 0x8000000000LL )
  {
    if ( qword_140326CC0 && a2 >= qword_140326CC0 && a2 < qword_140326CC0 + (qword_140326CA0 << 21) )
    {
      if ( v3 != 2 || !*(_QWORD *)(MiGetSystemCacheReverseMap(a2) + 16) )
        return 0LL;
      v5 = MiSystemCacheVaControlArea(v4);
      return MiPartitionIdToPointer(*(_WORD *)(v5 + 60) & 0x3FF, v6, v7, v8) + 6592;
    }
    if ( a2 >= qword_140327F70 && a2 < qword_140327F70 + 0xF8000000000LL
      || qword_140326C70
      && a2 >= qword_140326C70
      && a2 < qword_140326C70 + (qword_140326C50 << 21)
      && (*(_BYTE *)(48 * ((*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                   - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
    {
      v10 = v3 == 3;
    }
    else
    {
      v10 = v3 == 4;
    }
  }
  else
  {
    v10 = v3 == 1;
  }
  if ( v10 )
    return a1;
  return 0LL;
}
