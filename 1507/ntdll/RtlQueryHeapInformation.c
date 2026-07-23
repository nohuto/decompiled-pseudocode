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

NTSTATUS __cdecl RtlQueryHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS v5; // r10d

  if ( HeapInformationClass == -2147483647 )
  {
    if ( HeapInformationLength < 8 )
    {
      if ( ReturnLength )
        *ReturnLength = 8LL;
      return -1073741789;
    }
    else
    {
      *(_QWORD *)HeapInformation = &RtlpHeapFailureInfo;
      v5 = 0;
      if ( ReturnLength )
        *ReturnLength = 8LL;
    }
    return v5;
  }
  else if ( HeapInformationClass )
  {
    if ( HeapInformationClass == 2 )
    {
      if ( HeapInformationLength >= 0x58 )
        return RtlpQueryExtendedHeapInformation(HeapInformation, HeapInformationLength, ReturnLength);
      else
        return -1073741811;
    }
    else if ( HeapInformationClass == 4 )
    {
      return RtlpHpVirtQueryHeaps(HeapInformation, HeapInformationLength, ReturnLength);
    }
    else
    {
      return -1073741811;
    }
  }
  else if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    if ( HeapInformationLength >= 4 )
    {
      if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
        *(_DWORD *)HeapInformation = 2;
      else
        *(_DWORD *)HeapInformation = *((unsigned __int8 *)HeapHandle + 379);
      if ( ReturnLength )
        *ReturnLength = 4LL;
      return 0;
    }
    else
    {
      if ( ReturnLength )
        *ReturnLength = 4LL;
      return -1073741789;
    }
  }
  else
  {
    return -1073741822;
  }
}
