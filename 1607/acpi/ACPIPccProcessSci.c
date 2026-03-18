/*
 * XREFs of ACPIPccProcessSci @ 0x1C0051FE0
 * Callers:
 *     ACPIInterruptServiceRoutineDPC @ 0x1C002BA60 (ACPIInterruptServiceRoutineDPC.c)
 * Callees:
 *     AcpiPccCommandComplete @ 0x1C00522B4 (AcpiPccCommandComplete.c)
 *     AcpiPccPlatformNotification @ 0x1C00526DC (AcpiPccPlatformNotification.c)
 */

__int64 ACPIPccProcessSci()
{
  __int64 result; // rax
  unsigned int i; // edi
  __int64 v2; // rbx

  result = (unsigned int)AcpiPccSciReferenceCount;
  if ( AcpiPccSciReferenceCount )
  {
    result = AcpiPccLegacySubspace;
    if ( AcpiPccLegacySubspace )
    {
      result = *(unsigned int *)(AcpiPccLegacySubspace + 312);
      if ( (_DWORD)result )
      {
        result = **(unsigned __int16 **)(AcpiPccLegacySubspace + 48);
        if ( (result & 2) != 0 )
          result = AcpiPccCommandComplete(AcpiPccLegacySubspace);
      }
    }
    if ( AcpiPccSubspaces )
    {
      for ( i = 0; i < AcpiPccSubspaceCount; ++i )
      {
        result = i;
        v2 = AcpiPccSubspaces + 528LL * i;
        if ( *(_QWORD *)(v2 + 48) )
        {
          if ( *(_DWORD *)(v2 + 312) && (**(_WORD **)(v2 + 48) & 2) != 0 )
            AcpiPccCommandComplete(AcpiPccSubspaces + 528LL * i);
          result = *(_QWORD *)(v2 + 48);
          if ( (*(_WORD *)result & 8) != 0 )
            result = AcpiPccPlatformNotification((PVOID)v2);
        }
      }
    }
  }
  return result;
}
