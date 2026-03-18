/*
 * XREFs of PopMirrorPhysicalMemory @ 0x14039EA74
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 */

__int64 __fastcall PopMirrorPhysicalMemory(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx

  v2 = 0;
  if ( qword_1402DE0C0 )
  {
    v3 = (a2 + 4095) >> 12;
    if ( !v3 )
      LODWORD(v3) = 1;
    RtlClearBits((PRTL_BITMAP)(qword_1402DE0C0 + 48), a1 >> 12, v3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
