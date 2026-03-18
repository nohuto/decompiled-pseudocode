/*
 * XREFs of KiSendFreeze @ 0x140206BC0
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140205F0C (KeFreezeExecution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSendFreeze(unsigned __int16 *a1, char a2)
{
  unsigned __int64 v2; // r10
  int v5; // r11d
  unsigned __int16 i; // r9
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  signed __int32 v12; // eax
  unsigned int v13; // ebx

  v2 = *((_QWORD *)a1 + 1);
  v5 = 0;
  for ( i = 0; ; v2 = *(_QWORD *)&a1[4 * i + 4] )
  {
    while ( v2 )
    {
      _BitScanForward64(&v8, v2);
      v2 &= ~(1LL << v8);
      v9 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v8];
      v10 = v9;
      v11 = KiProcessorBlock[v9];
      v12 = 0;
      if ( a2 )
      {
        while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 11528), 5, v12) )
        {
          do
          {
            _mm_pause();
            v12 = *(_DWORD *)(v11 + 11528);
          }
          while ( v12 );
        }
LABEL_12:
        ++v5;
      }
      else
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 11528), 5, 0) )
          goto LABEL_12;
        v13 = KiProcessorIndexToNumberMappingTable[v10];
        if ( *a1 > v13 >> 6 )
          *(_QWORD *)&a1[4 * (v13 >> 6) + 4] &= ~(1LL << (v13 & 0x3F));
      }
    }
    result = ++i;
    if ( i >= (unsigned int)*a1 )
      break;
  }
  if ( v5 )
    return HalSendNMI(a1);
  return result;
}
