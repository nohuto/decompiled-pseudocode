/*
 * XREFs of ACPIBuildProcessDevicePhaseCid @ 0x1C00072C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIConvertStringDelimitation @ 0x1C00079AC (ACPIConvertStringDelimitation.c)
 *     ACPIBuildCompleteCommon @ 0x1C000B874 (ACPIBuildCompleteCommon.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCid(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // ebp
  char **v5; // rax
  int v6; // ebp
  char **v7; // rax
  __int64 v8; // r14
  __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 40);
  ACPIConvertStringDelimitation(v1);
  if ( v1 )
  {
    v4 = 0;
    if ( AcpiInternalDeviceFlagTable )
    {
      v5 = &AcpiInternalDeviceFlagTable;
      while ( !strstr((const char *)v1, *v5) )
      {
        v5 = &(&AcpiInternalDeviceFlagTable)[4 * ++v4];
        if ( !*v5 )
          goto LABEL_6;
      }
      v10 = 4LL * v4;
      _InterlockedOr64((volatile signed __int64 *)v3, (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v10 + 1]);
      _InterlockedOr64((volatile signed __int64 *)(v3 + 904), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v10 + 2]);
    }
  }
LABEL_6:
  if ( (*(_QWORD *)v3 & 0x200000000000LL) != 0 )
  {
    if ( *(_QWORD *)(v3 + 552) )
    {
      v6 = 0;
      if ( AcpiInternalDeviceFlagTable )
      {
        v7 = &AcpiInternalDeviceFlagTable;
        v8 = 0LL;
        do
        {
          if ( strstr(*(const char **)(v3 + 552), *v7) )
            _InterlockedAnd64((volatile signed __int64 *)v3, ~(unsigned __int64)(&AcpiInternalDeviceFlagTable)[v8 + 3]);
          v8 = 4LL * (unsigned int)++v6;
          v7 = &(&AcpiInternalDeviceFlagTable)[v8];
        }
        while ( (&AcpiInternalDeviceFlagTable)[v8] );
      }
    }
  }
  if ( (*(_DWORD *)v3 & 0x2000000) != 0 )
    v1 &= (unsigned __int128)-(__int128)(unsigned __int64)_InterlockedCompareExchange64(
                                                            (volatile signed __int64 *)(v3 + 192),
                                                            v1,
                                                            0LL) >> 64;
  if ( v1 )
    ExFreePoolWithTag((PVOID)v1, 0);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, 10LL);
  return 0LL;
}
