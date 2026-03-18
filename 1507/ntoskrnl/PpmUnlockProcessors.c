/*
 * XREFs of PpmUnlockProcessors @ 0x140235DB4
 * Callers:
 *     PpmIdleSelectStates @ 0x140160AB0 (PpmIdleSelectStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall PpmUnlockProcessors(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v2; // r14
  unsigned __int64 v5; // r9
  unsigned __int16 i; // r10
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned __int32 v12; // eax
  unsigned __int32 v13; // edi
  signed __int32 v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned __int16 v20; // cx
  __int64 v21; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v22[21]; // [rsp+38h] [rbp-E0h] BYREF

  v21 = 1310721LL;
  memset(v22, 0, 0xA0uLL);
  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v5 = *((_QWORD *)a2 + 1);
  for ( i = 0; ; v5 = *(_QWORD *)&a2[4 * i + 4] )
  {
    while ( v5 )
    {
      _BitScanForward64(&v8, v5);
      v5 &= ~(1LL << v8);
      v9 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v8];
      if ( (unsigned int)v9 >= (unsigned int)KeNumberProcessors_0 )
      {
        v10 = 0LL;
      }
      else
      {
        _mm_lfence();
        v10 = KiProcessorBlock[v9];
      }
      v11 = *(_QWORD *)(v10 + 23808);
      _m_prefetchw((const void *)(v10 + 23872));
      v12 = *(_DWORD *)(v10 + 23872);
      do
      {
        v13 = v12;
        v14 = v12 ^ (v12 ^ (v12 - 1)) & 0xFFFFFF;
        if ( (v14 & 0xFFFFFF) == 0 )
        {
          if ( HIBYTE(v12) == 5 )
          {
            v14 = v14 & 0xFFFFFF | 0x4000000;
          }
          else if ( HIBYTE(v12) == 7 )
          {
            v14 = v14 & 0xFFFFFF | 0x6000000;
          }
        }
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 23872), v14, v12);
      }
      while ( v12 != v13 );
      if ( HIBYTE(v14) == 6 )
      {
        v15 = KiProcessorIndexToNumberMappingTable[v9] & 0x3F;
        v16 = (unsigned int)KiProcessorIndexToNumberMappingTable[v9] >> 6;
        if ( (unsigned __int16)v21 <= (unsigned int)v16 )
          LOWORD(v21) = v16 + 1;
        v17 = (unsigned int)v16;
        v18 = v22[v16];
        _bittestandset64(&v18, v15);
        v22[v17] = v18;
      }
      _InterlockedAnd64(
        (volatile signed __int64 *)(v11
                                  + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6)
                                  + 64),
        ~(1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F)));
      v19 = KiProcessorIndexToNumberMappingTable[v9];
      if ( *a1 > v19 >> 6 )
        *(_QWORD *)&a1[4 * (v19 >> 6) + 4] &= ~(1LL << (v19 & 0x3F));
    }
    result = ++i;
    if ( i >= (unsigned int)*a2 )
      break;
  }
  v20 = 0;
  if ( (_WORD)v21 )
  {
    while ( 1 )
    {
      result = v20;
      if ( v22[v20] )
        break;
      if ( ++v20 >= (unsigned __int16)v21 )
        return result;
    }
    return HalRequestIpi(0LL, &v21);
  }
  return result;
}
