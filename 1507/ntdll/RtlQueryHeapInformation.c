/*
 * XREFs of RtlQueryHeapInformation @ 0x180078AA0
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800C36B0 (RtlQueryProcessHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800D8EF0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpReadProcessHeaps @ 0x1800DF05C (RtlpReadProcessHeaps.c)
 * Callees:
 *     RtlpQueryExtendedHeapInformation @ 0x1800D9644 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpVirtQueryHeaps @ 0x1800EB6B4 (RtlpHpVirtQueryHeaps.c)
 */

__int64 __fastcall RtlQueryHeapInformation(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned int v5; // r10d

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
      v5 = 0;
      if ( a5 )
        *a5 = 8LL;
    }
    return v5;
  }
  else if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( a4 >= 0x58 )
        return RtlpQueryExtendedHeapInformation(a3, a4, a5);
      else
        return 3221225485LL;
    }
    else if ( a2 == 4 )
    {
      return RtlpHpVirtQueryHeaps(a3, a4, a5);
    }
    else
    {
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
        *(_DWORD *)a3 = *(unsigned __int8 *)(a1 + 379);
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
