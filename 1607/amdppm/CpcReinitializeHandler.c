/*
 * XREFs of CpcReinitializeHandler @ 0x1C00030A0
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddr @ 0x1C0005EB0 (WriteGenAddr.c)
 *     WriteGenAddrHidden @ 0x1C00060E0 (WriteGenAddrHidden.c)
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CpcReinitializeHandler(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( *((_BYTE *)a1 + 92) )
  {
    v2 = a1[13];
    v3 = *a1;
    if ( *(_BYTE *)(v3 + 66) )
      WriteGenAddrHidden(*(unsigned int *)(v3 + 68), v2 + 176, 1LL);
    else
      WriteGenAddr(v2 + 176, 1LL);
  }
  if ( *((_BYTE *)a1 + 102) )
  {
    if ( !*(_BYTE *)(*a1 + 66) )
      ((void (*)(void))qword_1C0009550)();
  }
}
