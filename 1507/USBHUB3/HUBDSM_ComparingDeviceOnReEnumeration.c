/*
 * XREFs of HUBDSM_ComparingDeviceOnReEnumeration @ 0x1C0019D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBDSM_ComparingDeviceOnReEnumeration(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  const void *v3; // rcx
  unsigned __int16 v4; // r9

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4089;
  v3 = (const void *)(v1 + 1716);
  if ( (*(_BYTE *)(v1 + 2448) & 4) != 0 )
  {
    if ( RtlCompareMemory(v3, (const void *)(v1 + 2512), 0x12uLL) != 18 )
    {
      v4 = 40;
LABEL_6:
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        4u,
        5u,
        v4,
        (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids);
      return 4061;
    }
  }
  else if ( RtlCompareMemory(v3, (const void *)(v1 + 1972), 0x12uLL) != 18 )
  {
    v4 = 41;
    goto LABEL_6;
  }
  return v2;
}
