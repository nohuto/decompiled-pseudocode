/*
 * XREFs of ?grow@?$KArray@PEAX@Rtl@@AEAA_N_K@Z @ 0x1C00A7034
 * Callers:
 *     ??0BindState@Ndis@@QEAA@XZ @ 0x1C00A6D60 (--0BindState@Ndis@@QEAA@XZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00A6DB8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Rtl::KArray<void *>::grow(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(unsigned int *)(a1 + 4);
  if ( v2 >= a2 )
    return 1;
  if ( a2 < 4 )
    a2 = 4LL;
  if ( a2 < (unsigned int)v2 + ((unsigned int)v2 >> 1) )
    a2 = (unsigned int)v2 + ((unsigned int)v2 >> 1);
  return Rtl::KArray<void *>::reserve(a1, a2);
}
