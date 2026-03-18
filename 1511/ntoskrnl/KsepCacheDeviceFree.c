/*
 * XREFs of KsepCacheDeviceFree @ 0x1404FA2C0
 * Callers:
 *     KsepDbCacheReadDevice @ 0x1404FA314 (KsepDbCacheReadDevice.c)
 *     KseQueryDeviceData @ 0x1404FA6D4 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x14061D040 (KseQueryDeviceDataList.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1403B8B6C (KsepStringFree.c)
 */

void __fastcall KsepCacheDeviceFree(_QWORD *a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx

  if ( a1 )
  {
    v1 = a1 + 7;
    v3 = (_QWORD *)a1[7];
    while ( v3 != v1 )
    {
      v4 = v3;
      v3 = (_QWORD *)*v3;
      KsepStringFree(v4 + 2);
      KsepPoolFreePaged((void *)v4[5]);
      KsepPoolFreePaged(v4);
    }
    KsepStringFree(a1 + 5);
    KsepPoolFreePaged(a1);
  }
}
