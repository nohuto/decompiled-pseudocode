/*
 * XREFs of MmGetCfgBitMapInformation @ 0x140463C6C
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x140463B1C (PspPrepareSystemDllInitBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetCfgBitMapInformation(int a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
  {
    v2 = MEMORY[0xFFFFF580108042E0];
    v3 = (__int64 *)0xFFFFF580108042D8LL;
  }
  else
  {
    v2 = MEMORY[0xFFFFF580108042C8];
    v3 = (__int64 *)0xFFFFF580108042C0LL;
  }
  v4 = *v3;
  *a2 = v2;
  return v4;
}
