/*
 * XREFs of VerifierIoWMIWriteEvent @ 0x1406D0F30
 * Callers:
 *     <none>
 * Callees:
 *     IoWMIWriteEvent @ 0x1400E2250 (IoWMIWriteEvent.c)
 *     WmiVerifierCopyEvent @ 0x14020CDA0 (WmiVerifierCopyEvent.c)
 *     WmiVerifierTakeEventOwnership @ 0x14020CDF4 (WmiVerifierTakeEventOwnership.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VerifierIoWMIWriteEvent(__int64 a1)
{
  unsigned int *v2; // rcx
  unsigned int v3; // ebx
  PVOID v4; // rax
  PVOID v5; // rsi
  int v6; // eax
  void *v7; // rcx

  if ( WmiVerifierTakeEventOwnership(a1) )
  {
    v4 = WmiVerifierCopyEvent(v2);
    v5 = v4;
    if ( v4 )
    {
      v6 = pXdvIoWMIWriteEvent(v4);
      v7 = (void *)a1;
      v3 = v6;
      if ( v6 < 0 )
        v7 = v5;
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)pXdvIoWMIWriteEvent(v2);
  }
  return v3;
}
