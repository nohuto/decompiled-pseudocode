/*
 * XREFs of XEPATHOBJ_vConstructHPATHWrap @ 0x1C0279920
 * Callers:
 *     <none>
 * Callees:
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C025B43C (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 */

void __fastcall XEPATHOBJ_vConstructHPATHWrap(_QWORD *a1, struct HPATH__ *a2)
{
  a1[1] = 0LL;
  CAutoTGO::vGuard((CAutoTGO *)(a1 + 11), a1, XEPATHOBJ_vDestructWrap);
  EPATHOBJ::vLock((EPATHOBJ *)a1, a2);
}
