/*
 * XREFs of RmpActivityHostRemoveAllAcquiredResourceSets @ 0x18004118C
 * Callers:
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x18003D6D0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmpActivityHostRemoveAllAcquiredResourceSets(__int64 a1)
{
  _QWORD *i; // rsi
  __int64 result; // rax

  for ( i = (_QWORD *)(a1 + 608);
        (_QWORD *)*i != i;
        result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*i - 1384LL) + 32LL))(*i - 1384LL, 0LL) )
  {
    ;
  }
  return result;
}
