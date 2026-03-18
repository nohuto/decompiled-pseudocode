/*
 * XREFs of ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C022E404
 * Callers:
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C022ECE8 (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C022EE00 (-CommitRimCompleteFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     ?CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z @ 0x1C022F208 (-CopyTPPointerInputFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@PEAX@Z.c)
 *     ?CreateTPFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022F350 (-CreateTPFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERQFRAME *__fastcall AllocPointerQFrameList(unsigned int a1)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  struct tagPOINTERQFRAME *result; // rax
  struct tagPOINTERQFRAME *v5; // rcx

  if ( !a1 )
    return 0LL;
  v2 = 40 * a1;
  v3 = a1;
  if ( 40 * (unsigned __int64)a1 > 0xFFFFFFFF || !v2 )
    return 0LL;
  result = (struct tagPOINTERQFRAME *)Win32AllocPoolZInit(v2, 1366324053LL);
  if ( result && a1 )
  {
    v5 = result;
    do
    {
      *(_DWORD *)v5 = -1;
      v5 = (struct tagPOINTERQFRAME *)((char *)v5 + 40);
      --v3;
    }
    while ( v3 );
  }
  return result;
}
