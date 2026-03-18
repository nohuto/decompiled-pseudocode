/*
 * XREFs of AmlpValidateFirmwareMemoryAddress @ 0x1C000BAC8
 * Callers:
 *     MapPhysMem @ 0x1C000BA38 (MapPhysMem.c)
 *     AMLIValidateFirmwareMemoryAddress @ 0x1C00599D8 (AMLIValidateFirmwareMemoryAddress.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 */

__int64 __fastcall AmlpValidateFirmwareMemoryAddress(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = *a1;
  v5 = a2 + *a1;
  if ( v5 <= 4096 )
  {
    return 0;
  }
  else
  {
    v6 = MemoryInfo;
    if ( v2 < 4096 )
      v2 = 4096LL;
    v7 = 0;
    v8 = 0;
    if ( *(_QWORD *)(MemoryInfo + 8) )
    {
      v9 = 0LL;
      do
      {
        v10 = *(_QWORD *)(v6 + 24 * v9 + 16);
        if ( v5 > v10 && v2 < *(_QWORD *)(v6 + 24 * v9 + 24) + v10 )
        {
          if ( *(_DWORD *)(v6 + 24 * v9 + 32) == 1 )
            return (unsigned int)-1073741788;
          if ( *(_DWORD *)(v6 + 24 * v9 + 32) == 3 )
          {
            if ( gAllowInvalidReclaimMemoryMap )
            {
              LogError(3222536208LL);
              AcpiDiagTraceAmlError(0LL, 3222536208LL);
              PrintDebugMessage(103, *a1, a2 + *a1, 0, 0LL);
            }
            v6 = MemoryInfo;
          }
        }
        v9 = ++v8;
      }
      while ( (unsigned __int64)v8 < *(_QWORD *)(v6 + 8) );
    }
  }
  return v7;
}
