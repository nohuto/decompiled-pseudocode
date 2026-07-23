/*
 * XREFs of WheapCompressErrorRecord @ 0x140230588
 * Callers:
 *     WheaReportHwError @ 0x140230000 (WheaReportHwError.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void *__fastcall WheapCompressErrorRecord(char a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int16 v5; // bp
  unsigned int i; // esi
  __int64 v7; // rax
  unsigned int *v8; // rsi
  int v9; // r14d
  unsigned int v10; // edi
  unsigned int j; // ebp
  __int64 v12; // rax
  void *result; // rax

  if ( (a1 & 2) != 0 )
  {
    v4 = (_QWORD *)(a2 + 128);
    v5 = 0;
    for ( i = 0; i < *(unsigned __int16 *)(a2 + 10); ++i )
    {
      v7 = v4[2] - *(_QWORD *)&WHEA_ERROR_PACKET_SECTION_GUID.Data1;
      if ( !v7 )
        v7 = v4[3] - *(_QWORD *)WHEA_ERROR_PACKET_SECTION_GUID.Data4;
      if ( v7 )
      {
        v4 += 9;
      }
      else
      {
        if ( *(unsigned __int16 *)(a2 + 10) - i != 1 )
          memmove(v4, v4 + 9, 72 * (*(unsigned __int16 *)(a2 + 10) - i - 1));
        ++v5;
      }
    }
    *(_WORD *)(a2 + 10) -= v5;
  }
  v8 = (unsigned int *)(a2 + 128);
  v9 = a1 & 1;
  if ( v9 )
    v10 = 72 * *(unsigned __int16 *)(a2 + 10) + 128;
  else
    v10 = *v8;
  for ( j = 0; j < *(unsigned __int16 *)(a2 + 10); v8 += 18 )
  {
    v12 = *v8;
    if ( v10 < (unsigned int)v12 )
    {
      memmove((void *)(a2 + v10), (const void *)(a2 + v12), v8[1]);
      *v8 = v10;
    }
    v10 += v8[1];
    ++j;
  }
  result = memset((void *)(a2 + v10), 0, *(_DWORD *)(a2 + 20) - v10);
  if ( v9 )
    *(_DWORD *)(a2 + 20) = v10;
  return result;
}
