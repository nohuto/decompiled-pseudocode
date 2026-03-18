/*
 * XREFs of ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A7A78
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C00A54D0 (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C00A60DC (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0121D24 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetRealOwner(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  bool i; // zf

  v1 = *((_QWORD *)a1 + 13);
  v2 = *((_QWORD *)a1 + 11);
  for ( i = a1 == (struct tagWND *)v1; !i; i = v1 == v2 )
  {
    a1 = (struct tagWND *)v1;
    if ( !v1 )
      break;
    v1 = *(_QWORD *)(v1 + 88);
  }
  return a1;
}
