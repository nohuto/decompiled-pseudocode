/*
 * XREFs of PopCreateDumpMdl @ 0x1403A1C80
 * Callers:
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x1401198BC (MmMapMemoryDumpMdlEx.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1401E66D8 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x1401E6AE0 (_PopInternalError.c)
 */

void __fastcall PopCreateDumpMdl(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 Number; // r11
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  _QWORD *i; // rax

  Number = KeGetCurrentPrcb()->Number;
  if ( a3 >= a4 )
    PopInternalError(0xA1445uLL);
  v6 = *(unsigned int *)(a1 + 292);
  v7 = a4 - a3;
  if ( v7 < v6 )
    v6 = v7;
  *(_QWORD *)a2 = 0LL;
  *(_WORD *)(a2 + 10) = 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 44) = 0;
  *(_DWORD *)(a2 + 40) = (_DWORD)v6 << 12;
  *(_WORD *)(a2 + 8) = 8 * ((((v6 << 12) + 4095) >> 12) + 6);
  for ( i = (_QWORD *)(a2 + 48); v6; --v6 )
    *i++ = a3++;
  MmMapMemoryDumpMdlEx(*(_QWORD *)((Number << 7) + *(_QWORD *)(a1 + 272) + 8), v6, a2, 0LL);
  *(_WORD *)(a2 + 10) |= 1u;
  if ( (*(_DWORD *)(a2 + 40) & 0xFFF) != 0 )
  {
    PopInternalAddToDumpFile(a2, 0x30u, 0LL);
    KeBugCheckEx(0xA0u, 0x106uLL, 0xAuLL, a2, 0LL);
  }
}
