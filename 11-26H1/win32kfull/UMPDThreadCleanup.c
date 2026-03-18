/*
 * XREFs of UMPDThreadCleanup @ 0x1400D6E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400D6EAC (-GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z @ 0x1400D6ED0 (-vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z.c)
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D6FD0 (-FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ.c)
 *     ?Dereference@UMPDOBJ@@QEAAXXZ @ 0x140290C80 (-Dereference@UMPDOBJ@@QEAAXXZ.c)
 */

void __fastcall UMPDThreadCleanup(struct _GRETHREAD *a1)
{
  struct _GRETHREAD *i; // rbx
  struct UMPDOBJ *ThreadCurrentUMPDObj; // rax
  UMPDOBJ *v3; // rdi
  void *v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  char **v7; // rcx

  for ( i = a1; ; a1 = i )
  {
    ThreadCurrentUMPDObj = UMPDOBJ::GetThreadCurrentUMPDObj(a1);
    v3 = ThreadCurrentUMPDObj;
    if ( !ThreadCurrentUMPDObj )
      break;
    v5 = (char *)ThreadCurrentUMPDObj + 40;
    v6 = *((_QWORD *)v3 + 5);
    if ( *(UMPDOBJ **)(v6 + 8) != (UMPDOBJ *)((char *)v3 + 40) || (v7 = (char **)*((_QWORD *)v3 + 6), *v7 != v5) )
      __fastfail(3u);
    *v7 = (char *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    UMPDOBJ::FreeNonCachedUserMem(v3);
    UMPDOBJ::Dereference(v3);
  }
  vUMPDCachedResourceCleanup(i);
  v4 = (void *)*((_QWORD *)i + 8);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)i + 8) = 0LL;
  }
}
