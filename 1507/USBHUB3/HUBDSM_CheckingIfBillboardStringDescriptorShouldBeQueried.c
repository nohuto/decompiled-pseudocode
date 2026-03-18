/*
 * XREFs of HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried @ 0x1C0018E90
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_LogBillboardEvent @ 0x1C0021CB4 (HUBDTX_LogBillboardEvent.c)
 */

__int64 __fastcall HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)(v1 + 2616);
  if ( v2 )
  {
    if ( *(_BYTE *)(*(_QWORD *)v2 + 3LL) )
    {
      return 4089;
    }
    else
    {
      v3 = 4061;
      HUBDTX_LogBillboardEvent(v1, 0LL);
    }
  }
  else
  {
    return 4061;
  }
  return v3;
}
