/*
 * XREFs of HvlpFastFlushAddressSpaceTbEx @ 0x140270A04
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14017EA3C (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlpExtendedFastHypercall @ 0x14017ECA0 (HvlpExtendedFastHypercall.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTbEx(__int64 a1, unsigned __int16 *a2, char a3)
{
  int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // r15
  unsigned int v8; // r9d
  unsigned __int16 v9; // si
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r13
  char v13; // al
  __int64 v14; // rax
  unsigned int v16; // [rsp+28h] [rbp-59h]
  char v17; // [rsp+30h] [rbp-51h]
  _QWORD v18[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v19; // [rsp+48h] [rbp-39h]
  __int64 v20; // [rsp+50h] [rbp-31h]
  _QWORD v21[10]; // [rsp+58h] [rbp-29h] BYREF

  v4 = 0;
  v5 = a3 == 0 ? 4 : 0;
  if ( !a1 )
    v5 = (unsigned int)v5 | 2;
  v18[0] = a1;
  v18[1] = v5;
  v20 = 0LL;
  if ( a2 )
  {
    v6 = *a2;
    v7 = *((_QWORD *)a2 + 1);
    v8 = 0;
    v16 = v6;
    v9 = 0;
    v19 = 0LL;
    while ( 1 )
    {
      while ( v7 )
      {
        _BitScanForward64(&v10, v7);
        v7 &= ~(1LL << v10);
        v11 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v9 + (unsigned __int8)v10];
        v12 = (unsigned __int8)HvlpVirtualProcessorMapping[2 * v11];
        v13 = byte_1403D3CC1[2 * v11];
        v17 = v13;
        if ( (unsigned int)v12 >= v8 )
        {
          if ( 8 * (unsigned __int64)(unsigned int)(v12 + 1) > 0x50 )
          {
            v4 = -1;
            return HvlpExtendedFastHypercall(((v4 + 7) << 14) & 0x3FE0000 | 0x10013LL, v18, (unsigned int)(v4 + 32));
          }
          memset(&v21[v8], 0, 8LL * ((unsigned int)v12 - v8 + 1));
          v13 = v17;
          v8 = v12 + 1;
        }
        v21[v12] |= 1LL << v13;
        v6 = v16;
      }
      if ( ++v9 >= v6 )
        break;
      v7 = *(_QWORD *)&a2[4 * v9 + 4];
    }
    if ( v8 == 64 )
      v14 = -1LL;
    else
      v14 = (1LL << v8) - 1;
    v20 = v14;
    v4 = 8 * v8;
  }
  else
  {
    v19 = 1LL;
  }
  return HvlpExtendedFastHypercall(((v4 + 7) << 14) & 0x3FE0000 | 0x10013LL, v18, (unsigned int)(v4 + 32));
}
