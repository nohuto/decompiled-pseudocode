/*
 * XREFs of ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C0081238
 * Callers:
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C002C830 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::MirrorWindowOrg(DC *this)
{
  _DWORD *v1; // r8
  int v2; // r9d

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  if ( (v1[78] & 1) != 0 )
  {
    v2 = v1[86];
    if ( v2 )
      v1[80] = v1[79] - v1[82] * (*((_DWORD *)this + 358) - *((_DWORD *)this + 356) - 1) / v2;
  }
  else
  {
    v1[80] = v1[79];
  }
}
