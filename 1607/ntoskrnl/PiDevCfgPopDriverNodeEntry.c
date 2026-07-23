/*
 * XREFs of PiDevCfgPopDriverNodeEntry @ 0x1401CEE88
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063CA4C (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgPopDriverNodeEntry(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax

  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  v2 = (_QWORD *)a1[1];
  v3 = (_QWORD *)v2[1];
  if ( (_QWORD *)*v2 != a1 || (_QWORD *)*v3 != v2 )
    __fastfail(3u);
  a1[1] = v3;
  *v3 = a1;
  if ( a2 )
    *a2 = v2[2];
  ExFreePoolWithTag(v2, 0);
  return 1LL;
}
