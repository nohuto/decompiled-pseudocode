/*
 * XREFs of CmCloseRmHandle @ 0x1404D1FC8
 * Callers:
 *     CmpTryToRundownHive @ 0x14010B8A0 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
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
