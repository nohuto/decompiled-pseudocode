/*
 * XREFs of PiDevCfgPopCopyKeyEntry @ 0x1401CEE30
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x140636F28 (PiDevCfgCopyDeviceKeys.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgPopCopyKeyEntry(_QWORD *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v5; // rcx
  void **v6; // r10

  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  v5 = (_QWORD *)a1[1];
  v6 = (void **)v5[1];
  if ( (_QWORD *)*v5 != a1 || *v6 != v5 )
    __fastfail(3u);
  a1[1] = v6;
  *v6 = a1;
  *a2 = v5[2];
  *a3 = v5[3];
  *a4 = *((_DWORD *)v5 + 8);
  ExFreePoolWithTag(v5, 0);
  return 1LL;
}
