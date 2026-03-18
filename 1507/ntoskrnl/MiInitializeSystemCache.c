/*
 * XREFs of MiInitializeSystemCache @ 0x1407C9B74
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     MiMakeLinkedListPte @ 0x140225C20 (MiMakeLinkedListPte.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407CAA28 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x1407CBDF8 (MiInitializeDynamicRegion.c)
 */

__int64 MiInitializeSystemCache()
{
  unsigned int v0; // ebx
  __int64 result; // rax

  qword_14034EEA0 = 0xFFFFF6C000000000uLL;
  v0 = 0;
  qword_14034EE90 = MiMakeLinkedListPte((__int64)((((unsigned __int64)&qword_14034EE90 >> 9) & 0x7FFFFFFFF8LL)
                                                - 0x3FFFFFFFF9LL) >> 3);
  qword_14034EE98 = qword_14034EE90;
  qword_14034EEA8 = 0LL;
  result = MiInitializeDynamicRegion(8LL, 0xFFFFB00000000000uLL, 0x100000000000LL);
  if ( (_DWORD)result )
  {
    byte_14034FE18 = byte_14034FE18 & 0xF8 | 2;
    LOBYTE(v0) = (unsigned int)MiInitializeSystemWorkingSetList(dword_14034FD40, 0x100000000LL) != 0;
    return v0;
  }
  return result;
}
