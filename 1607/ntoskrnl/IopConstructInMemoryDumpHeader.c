/*
 * XREFs of IopConstructInMemoryDumpHeader @ 0x1401C7070
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14013D3BC (IopInitializeOfflineCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401C6548 (IoUpdateDumpPhysicalRanges.c)
 * Callees:
 *     IoFillDumpHeader @ 0x1401C55A4 (IoFillDumpHeader.c)
 */

__int64 IopConstructInMemoryDumpHeader()
{
  __int64 result; // rax
  _DWORD *v1; // r14
  __int64 v2; // rsi

  result = (unsigned int)_InterlockedExchange(InMemData, 1);
  if ( (_DWORD)result != 1 )
  {
    dword_140328E48 = 0;
    if ( dword_140328E14
      && (result = dword_140328E30 & 1, (v1 = *(_DWORD **)&InMemData[2 * result + 2]) != 0LL)
      && (result = ((_BYTE)dword_140328E30 - 1) & 1, (v2 = *(_QWORD *)&InMemData[2 * result + 2]) != 0) )
    {
      IoFillDumpHeader((enum _NT_PRODUCT_TYPE *)(v2 + 24), 1, 332, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
      *(_QWORD *)(v2 + 4040) = qword_140328E38;
      *(_QWORD *)(v2 + 40) = PsInitialSystemProcess->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)v2, 1397967163);
      *v1 = result;
      ++dword_140328E30;
    }
    else
    {
      dword_140328E48 = -1073741823;
    }
    _InterlockedExchange(InMemData, 0);
  }
  return result;
}
