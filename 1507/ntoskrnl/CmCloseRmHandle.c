/*
 * XREFs of CmCloseRmHandle @ 0x1404EDFBC
 * Callers:
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmCloseRmHandle(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 && (*(_DWORD *)(a1 + 64) == 1 || a2 == 1) )
  {
    result = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
