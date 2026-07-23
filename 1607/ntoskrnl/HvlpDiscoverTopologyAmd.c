/*
 * XREFs of HvlpDiscoverTopologyAmd @ 0x1407CDD80
 * Callers:
 *     HvlpDiscoverTopologyWorker @ 0x1406205F4 (HvlpDiscoverTopologyWorker.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x140007958 (MmIsThisAnNtAsSystem.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HvlpLpCpuid @ 0x1407CE184 (HvlpLpCpuid.c)
 */

char __fastcall HvlpDiscoverTopologyAmd(__int64 a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v7; // r15d
  unsigned int v8; // esi
  int v9; // eax
  unsigned int v10; // r14d
  __int16 v11; // cx
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  unsigned int v15; // [rsp+20h] [rbp-20h] BYREF
  __int64 v16; // [rsp+24h] [rbp-1Ch]
  int v17; // [rsp+2Ch] [rbp-14h]

  v15 = 0;
  *a4 = a2;
  v16 = 0LL;
  v17 = 0;
  v7 = 1;
  v8 = a1;
  LOBYTE(v9) = HvlpLpCpuid(a1, 0x80000000LL, 0LL, &v15);
  v10 = v15;
  if ( v15 < 0x80000008 )
  {
    *a3 = a2;
    goto LABEL_8;
  }
  HvlpLpCpuid(v8, 2147483656LL, 0LL, &v15);
  v11 = WORD2(v16) >> 12;
  if ( WORD2(v16) >> 12 )
  {
    *a3 = a2 >> v11;
    LOBYTE(v9) = 1 << v11;
    v7 = (unsigned __int8)(1 << v11);
  }
  else
  {
    _BitScanReverse(&v12, 2 * BYTE4(v16) + 1);
    v7 = (unsigned __int8)(1 << v12);
    v9 = a2 / v7;
    *a3 = a2 / v7;
  }
  if ( v10 >= 0x8000001E )
  {
    HvlpLpCpuid(v8, 2147483678LL, 0LL, &v15);
    LOBYTE(v9) = v16;
    *a4 = (unsigned __int8)v16 | (*a3 << 8);
LABEL_8:
    if ( v10 >= 0x8000001E )
    {
      LOBYTE(v9) = MmIsThisAnNtAsSystem();
      if ( (_BYTE)v9 )
      {
        LOBYTE(v9) = HvlpLpCpuid(v8, 2147483649LL, 0LL, &v15);
        if ( (v16 & 0x40000000000000LL) != 0 )
        {
          HvlpLpCpuid(v8, 2147483678LL, 0LL, &v15);
          v13 = BYTE1(v16) + 1;
          *a3 = a2 / (v13 * (v7 / v13));
          v9 = a2 / v13;
          *a4 = a2 / v13;
        }
      }
    }
  }
  return v9;
}
