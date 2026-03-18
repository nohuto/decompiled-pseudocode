/*
 * XREFs of ?PanDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0287DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PanDisableSurface(struct DHPDEV__ *a1)
{
  SURFOBJ *v2; // rcx
  HSURF hsurf; // rbx
  SURFOBJ *v4; // rcx
  HSURF v5; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = *((_QWORD *)a1 + 11);
  v6 = *((_QWORD *)a1 + 12);
  v8 = *((_QWORD *)a1 + 13);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v7);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
  v2 = (SURFOBJ *)*((_QWORD *)a1 + 8);
  hsurf = v2->hsurf;
  EngUnlockSurface(v2);
  EngDeleteSurface(hsurf);
  v4 = (SURFOBJ *)*((_QWORD *)a1 + 10);
  if ( v4 )
  {
    v5 = v4->hsurf;
    EngUnlockSurface(v4);
    EngDeleteSurface(v5);
  }
  EngDeleteSurface(*((HSURF *)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 9));
  (*((void (__fastcall **)(_QWORD))a1 + 104))(*((_QWORD *)a1 + 4));
}
