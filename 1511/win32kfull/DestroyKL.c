/*
 * XREFs of DestroyKL @ 0x1C0112E20
 * Callers:
 *     CleanupKeyboardLayouts @ 0x1C0113870 (CleanupKeyboardLayouts.c)
 * Callees:
 *     DestroyKF @ 0x1C0112EB0 (DestroyKF.c)
 */

__int64 __fastcall DestroyKL(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 i; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rax

  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) = *(_QWORD *)(a1 + 24);
  if ( HMAssignmentUnlock(a1 + 48) )
  {
    v2 = HMAssignmentUnlock(a1 + 56);
    if ( v2 )
      DestroyKF(v2);
  }
  if ( *(_QWORD *)(a1 + 96) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 88); i = (unsigned int)(i + 1) )
    {
      v6 = (_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * i);
      if ( !*v6 )
        break;
      v7 = HMAssignmentUnlock(v6);
      if ( v7 )
        DestroyKF(v7);
    }
    Win32FreePool(*(_QWORD *)(a1 + 96));
  }
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
    Win32FreePool(v3);
  if ( a1 == gpKL )
    gpKL = 0LL;
  return HMFreeObject(a1);
}
