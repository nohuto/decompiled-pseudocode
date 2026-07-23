/*
 * XREFs of MiComparePteProtections @ 0x1401E8F90
 * Callers:
 *     MiCheckSecuredVad @ 0x14040B2AC (MiCheckSecuredVad.c)
 *     MiSecureVad @ 0x140429950 (MiSecureVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140014158 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140014170 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 */

__int64 __fastcall MiComparePteProtections(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v6; // ebx
  _KPROCESS *Process; // r12
  KIRQL v11; // r14
  int v12; // ecx
  bool v14; // zf
  unsigned __int64 v15; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v16[8]; // [rsp+58h] [rbp-40h] BYREF
  int v17; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+18h] BYREF

  v6 = 0;
  v15 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = MiLockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  while ( a2 <= a3 )
  {
    MiQueryAddressState(a2, v11, a1, (__int64)Process, 0, &v15, &v17, (__int64 *)v16, &v18);
    v12 = v17;
    if ( !v17 )
    {
      if ( (_DWORD)v18 )
        goto LABEL_8;
      v14 = ((*(_DWORD *)(a1 + 48) >> 3) & 0x1F) == 0;
      v12 = (*(_DWORD *)(a1 + 48) >> 3) & 0x1F;
      v17 = v12;
      if ( v14 )
        goto LABEL_8;
    }
    if ( a5 == 1 )
    {
      if ( v12 != a4 )
        goto LABEL_8;
    }
    else if ( v12 == -1
           || (v12 & 0xFFFFFFF8) == 0x10
           || (a4 != 1 ? (v14 = (v12 & 4) == 0) : (v14 = (v12 & 7) == 0), v14) )
    {
LABEL_8:
      v6 = -1073741755;
      break;
    }
    a2 = v16[0];
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].IdealNode[12]);
  return v6;
}
