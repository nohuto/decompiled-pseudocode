/*
 * XREFs of RtlpHpLfhSubsegmentSetUnusedBytes @ 0x18003F76C
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x180041C38 (RtlpHpLfhSubsegmentAllocateBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSetUnusedBytes(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax

  v3 = (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(a1 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)a1 >> 12);
  *(_BYTE *)(v3 + a2 - 1) = 0;
  if ( a3 == 1 )
  {
    result = 0x8000LL;
    *(_WORD *)(v3 + a2 - 2) |= 0x8000u;
  }
  else
  {
    *(_WORD *)(v3 + a2 - 2) &= 0xC000u;
    result = 0x3FFFLL;
    *(_WORD *)(v3 + a2 - 2) |= a3 & 0x3FFF;
  }
  return result;
}
