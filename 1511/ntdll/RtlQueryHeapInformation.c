/*
 * XREFs of RtlQueryHeapInformation @ 0x18007FDC0
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x180094380 (RtlQueryProcessHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800E0EE0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpReadProcessHeaps @ 0x1800E47AC (RtlpReadProcessHeaps.c)
 * Callees:
 *     RtlpHpTagQueryTags @ 0x18007FED8 (RtlpHpTagQueryTags.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800E13A4 (RtlpQueryExtendedHeapInformation.c)
 */

NTSTATUS __cdecl RtlQueryHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS v6; // r10d

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
      v6 = 0;
      if ( ReturnLength )
        *ReturnLength = 8LL;
    }
    return v6;
  }
  else if ( HeapInformationClass )
  {
    if ( HeapInformationClass == 4 )
    {
      return RtlpHpTagQueryTags(HeapInformation, HeapInformationLength, ReturnLength);
    }
    else if ( HeapInformationClass == 2 )
    {
      if ( HeapInformationLength >= 0x58 )
        return RtlpQueryExtendedHeapInformation(HeapInformation, HeapInformationLength, ReturnLength);
      else
        return -1073741811;
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
