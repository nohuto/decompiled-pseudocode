/*
 * XREFs of RtlQueryHeapInformation @ 0x180081940
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x180095B50 (RtlQueryProcessHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800EA040 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpReadProcessHeaps @ 0x1800ED91C (RtlpReadProcessHeaps.c)
 * Callees:
 *     RtlpHpTagQueryTags @ 0x180081A70 (RtlpHpTagQueryTags.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800EA6A4 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceSerialize @ 0x1800F885C (RtlpHpStackTraceSerialize.c)
 */

__int64 __fastcall RtlQueryHeapInformation(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned int v6; // r10d

  if ( a2 == -2147483647 )
  {
    if ( a4 < 8 )
    {
      if ( a5 )
        *a5 = 8LL;
      return (unsigned int)-1073741789;
    }
    else
    {
      *a3 = &RtlpHeapFailureInfo;
      v6 = 0;
      if ( a5 )
        *a5 = 8LL;
    }
    return v6;
  }
  else if ( a2 )
  {
    switch ( a2 )
    {
      case 4:
        return RtlpHpTagQueryTags(a3, a4, a5);
      case 2:
        if ( a4 >= 0x58 )
          return RtlpQueryExtendedHeapInformation(a3, a4, a5);
        else
          return 3221225485LL;
      case 5:
        return RtlpHpStackTraceSerialize(a3, a4);
      default:
        return 3221225485LL;
    }
  }
  else if ( *(_DWORD *)(a1 + 16) == -571548178 || (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    if ( a4 >= 4 )
    {
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
        *(_DWORD *)a3 = 2;
      else
        *(_DWORD *)a3 = *(unsigned __int8 *)(a1 + 387);
      if ( a5 )
        *a5 = 4LL;
      return 0LL;
    }
    else
    {
      if ( a5 )
        *a5 = 4LL;
      return 3221225507LL;
    }
  }
  else
  {
    return 3221225474LL;
  }
}
