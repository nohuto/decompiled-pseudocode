/*
 * XREFs of sub_1401EBDAC @ 0x1401EBDAC
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1401E9F78 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     memset @ 0x140195A80 (memset.c)
 *     HvlpSlowSendSyntheticClusterIpiEx @ 0x1401EC2B4 (HvlpSlowSendSyntheticClusterIpiEx.c)
 */

__int64 __fastcall sub_1401EBDAC(unsigned __int16 *a1, unsigned int a2)
{
  int v3; // ebx
  unsigned __int64 v4; // r15
  unsigned int v5; // ecx
  unsigned int v6; // r9d
  unsigned __int16 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r13
  char v11; // al
  __int64 v12; // rax
  unsigned int v14; // [rsp+28h] [rbp-59h]
  char v15; // [rsp+30h] [rbp-51h]
  __int64 v16; // [rsp+38h] [rbp-49h] BYREF
  __int64 v17; // [rsp+40h] [rbp-41h]
  __int64 v18; // [rsp+48h] [rbp-39h]
  _QWORD v19[11]; // [rsp+50h] [rbp-31h] BYREF

  if ( (((unsigned int)HvlpFlags >> 9) & 0xF) + 4 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
    return HvlpSlowSendSyntheticClusterIpiEx();
  v3 = 0;
  v16 = a2;
  v18 = 0LL;
  if ( a1 )
  {
    v4 = *((_QWORD *)a1 + 1);
    v5 = *a1;
    v6 = 0;
    v14 = v5;
    v7 = 0;
    v17 = 0LL;
    while ( 1 )
    {
      while ( v4 )
      {
        _BitScanForward64(&v8, v4);
        v4 &= ~(1LL << v8);
        v9 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v7 + (unsigned __int8)v8];
        v10 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v9];
        v11 = byte_1403D3CC1[2 * v9];
        v15 = v11;
        if ( (unsigned int)v10 >= v6 )
        {
          if ( 8 * (unsigned __int64)(unsigned int)(v10 + 1) > 0x58 )
          {
            v3 = -1;
            return (unsigned __int16)HvlpExtendedFastHypercall(
                                       ((v3 + 7) << 14) & 0x3FE0000 | 0x10015LL,
                                       &v16,
                                       (unsigned int)(v3 + 24)) != 0
                 ? 0xC0000001
                 : 0;
          }
          memset(&v19[v6], 0, 8LL * ((unsigned int)v10 - v6 + 1));
          v11 = v15;
          v6 = v10 + 1;
        }
        v19[v10] |= 1LL << v11;
        v5 = v14;
      }
      if ( ++v7 >= v5 )
        break;
      v4 = *(_QWORD *)&a1[4 * v7 + 4];
    }
    if ( v6 == 64 )
      v12 = -1LL;
    else
      v12 = (1LL << v6) - 1;
    v18 = v12;
    v3 = 8 * v6;
  }
  else
  {
    v17 = 1LL;
  }
  return (unsigned __int16)HvlpExtendedFastHypercall(
                             ((v3 + 7) << 14) & 0x3FE0000 | 0x10015LL,
                             &v16,
                             (unsigned int)(v3 + 24)) != 0
       ? 0xC0000001
       : 0;
}
