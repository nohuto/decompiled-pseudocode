/*
 * XREFs of MmGetCfgBitMapInformation @ 0x140465A04
 * Callers:
 *     PspPrepareSystemDllInitBlock @ 0x1404658B4 (PspPrepareSystemDllInitBlock.c)
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
    v2 = MEMORY[0xFFFFF58010804288];
    v3 = (__int64 *)0xFFFFF58010804280LL;
  }
  else
  {
    v2 = MEMORY[0xFFFFF58010804270];
    v3 = (__int64 *)0xFFFFF58010804268LL;
  }
  v4 = *v3;
  *a2 = v2;
  return v4;
}
