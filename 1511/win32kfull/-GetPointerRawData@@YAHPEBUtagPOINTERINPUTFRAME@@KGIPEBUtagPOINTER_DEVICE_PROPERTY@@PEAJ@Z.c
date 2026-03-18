/*
 * XREFs of ?GetPointerRawData@@YAHPEBUtagPOINTERINPUTFRAME@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01F8BC4
 * Callers:
 *     ?GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F8C2C (-GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     ExtractPointerPropertyValues @ 0x1C01CBB80 (ExtractPointerPropertyValues.c)
 */

__int64 __fastcall GetPointerRawData(
        const struct tagPOINTERINPUTFRAME *a1,
        unsigned int a2,
        USHORT a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        int *a6)
{
  __int64 i; // r8

  if ( a2 && a2 <= *((_DWORD *)a1 + 8) )
  {
    for ( i = *((_QWORD *)a1 + 8); i && *(_DWORD *)(i + 4) != a2; i = *(_QWORD *)(i + 24) )
      ;
  }
  else
  {
    i = 0LL;
  }
  if ( i )
    return ExtractPointerPropertyValues(
             *((struct tagHID_POINTER_DEVICE_INFO **)a1 + 11),
             a3,
             *(_DWORD *)(i + 8),
             *(CHAR **)(i + 16),
             a4,
             (__int64)a5,
             (__int64)a6);
  else
    return 0LL;
}
