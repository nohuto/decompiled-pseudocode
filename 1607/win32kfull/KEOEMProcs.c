/*
 * XREFs of KEOEMProcs @ 0x1C00A3EB0
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KEOEMProcs(struct tagKE *a1)
{
  __int64 v2; // rbx
  __int64 (__fastcall **v3)(struct tagKE *); // rax

  if ( !xxxICO_00 )
    return 1LL;
  v2 = 0LL;
  v3 = aKEProcOEM;
  while ( (unsigned int)(*v3)(a1) )
  {
    v3 = &aKEProcOEM[++v2];
    if ( !*v3 )
      return 1LL;
  }
  return 0LL;
}
