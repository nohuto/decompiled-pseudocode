/*
 * XREFs of RtlpMuiRegCreateLanguages @ 0x1800F4310
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1800F6178 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _SafeAllocBlob @ 0x1800144BC (_SafeAllocBlob.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguages(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  result = SafeAllocBlob(0x18u, 4u, 0x1Cu, 0, 0, &v2);
  if ( result )
  {
    *(_DWORD *)result = v2;
    *(_QWORD *)(result + 16) = result + 24;
    *(_DWORD *)(result + 4) = 4;
  }
  return result;
}
