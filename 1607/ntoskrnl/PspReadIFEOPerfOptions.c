/*
 * XREFs of PspReadIFEOPerfOptions @ 0x1404720CC
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x140472194 (RtlQueryImageFileKeyOption.c)
 */

unsigned __int64 __fastcall PspReadIFEOPerfOptions(HANDLE KeyHandle, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned int v5; // [rsp+48h] [rbp+10h]

  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 1u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 2u;
  if ( (int)RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL) >= 0 )
    *(_DWORD *)a2 |= 4u;
  result = RtlQueryImageFileKeyOption(KeyHandle, 4, 0LL);
  if ( (result & 0x80000000) == 0LL )
  {
    result = (unsigned __int64)v5 >> 2;
    *(_DWORD *)(a2 + 4) |= 1u;
    *(_QWORD *)(a2 + 24) = result;
  }
  return result;
}
