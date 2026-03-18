/*
 * XREFs of ACPIExtListIsMemberOfRelation @ 0x1C003AD4C
 * Callers:
 *     ACPIDetectDockDevices @ 0x1C0016AE8 (ACPIDetectDockDevices.c)
 *     ACPIDetectEjectDevices @ 0x1C0036CF8 (ACPIDetectEjectDevices.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIExtListIsMemberOfRelation(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v4; // ecx
  _QWORD *v5; // rdx

  v2 = 0;
  if ( a2 )
  {
    v4 = *a2;
    if ( *a2 )
    {
      v5 = a2 + 2;
      while ( *v5 != a1 )
      {
        ++v2;
        ++v5;
        if ( v2 >= v4 )
          goto LABEL_6;
      }
      LOBYTE(v2) = 1;
    }
    else
    {
LABEL_6:
      LOBYTE(v2) = 0;
    }
  }
  return v2;
}
