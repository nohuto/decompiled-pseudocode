/*
 * XREFs of ?Read@ComLock@XWinRT@@QEAA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@XZ @ 0x180006ECC
 * Callers:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180006F08 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::ComLock::Read(RTL_SRWLOCK *a1, __int64 a2)
{
  bool v2; // zf
  int Ptr; // eax

  v2 = LODWORD(a1->Ptr) == 1;
  *(_QWORD *)a2 = a1;
  if ( v2 )
  {
    Ptr = (int)a1[1].Ptr;
    if ( Ptr >= 0 )
      LODWORD(a1[1].Ptr) = Ptr + 1;
  }
  else
  {
    AcquireSRWLockShared(a1 + 1);
  }
  *(_DWORD *)(a2 + 8) = 0;
  return a2;
}
