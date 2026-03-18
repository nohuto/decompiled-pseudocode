/*
 * XREFs of DestroyKL @ 0x1C0134260
 * Callers:
 *     CleanupKeyboardLayouts @ 0x1C0134F60 (CleanupKeyboardLayouts.c)
 * Callees:
 *     DestroyKF @ 0x1C01342F0 (DestroyKF.c)
 */

__int64 __fastcall DestroyKL(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 i; // rdi
  _QWORD *v8; // rcx
  __int64 v9; // rax

  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) = *(_QWORD *)(a1 + 24);
  if ( HMAssignmentUnlock(a1 + 48) )
  {
    v4 = HMAssignmentUnlock(a1 + 56);
    if ( v4 )
      DestroyKF(v4);
  }
  if ( *(_QWORD *)(a1 + 96) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 88); i = (unsigned int)(i + 1) )
    {
      v8 = (_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * i);
      if ( !*v8 )
        break;
      v9 = HMAssignmentUnlock(v8);
      if ( v9 )
        DestroyKF(v9);
    }
    Win32FreePool(*(_QWORD *)(a1 + 96), v2, v3);
  }
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
    Win32FreePool(v5, v2, v3);
  if ( a1 == gpKL )
    gpKL = 0LL;
  return HMFreeObject(a1);
}
