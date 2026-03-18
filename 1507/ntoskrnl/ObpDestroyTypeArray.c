/*
 * XREFs of ObpDestroyTypeArray @ 0x1406ACB04
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1406AC240 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1406AC304 (ObGetObjectInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDestroyTypeArray(_QWORD *P)
{
  __int64 i; // rdi
  __int64 v3; // rcx

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    {
      v3 = P[i + 1];
      if ( v3 )
        ObfDereferenceObject((PVOID)(v3 + 80));
    }
    ExFreePoolWithTag(P, 0x7241624Fu);
  }
}
