/*
 * XREFs of IopConstructInMemoryDumpHeader @ 0x1401F4568
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140163F28 (IopInitializeOfflineCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F3AD8 (IoUpdateDumpPhysicalRanges.c)
 * Callees:
 *     IoFillDumpHeader @ 0x1401F2BD0 (IoFillDumpHeader.c)
 */

__int64 IopConstructInMemoryDumpHeader()
{
  __int64 result; // rax
  _DWORD *v1; // r14
  __int64 v2; // rsi

  result = (unsigned int)_InterlockedExchange(InMemData, 1);
  if ( (_DWORD)result != 1 )
  {
    dword_140353B88 = 0;
    if ( dword_140353B54
      && (result = dword_140353B70 & 1, (v1 = *(_DWORD **)&InMemData[2 * result + 2]) != 0LL)
      && (result = ((_BYTE)dword_140353B70 - 1) & 1, (v2 = *(_QWORD *)&InMemData[2 * result + 2]) != 0) )
    {
      IoFillDumpHeader((_DWORD *)(v2 + 24), 1, 332, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
      *(_QWORD *)(v2 + 4040) = qword_140353B78;
      *(_QWORD *)(v2 + 40) = PsInitialSystemProcess->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)v2, 1397967163);
      *v1 = result;
      ++dword_140353B70;
    }
    else
    {
      dword_140353B88 = -1073741823;
    }
    _InterlockedExchange(InMemData, 0);
  }
  return result;
}
