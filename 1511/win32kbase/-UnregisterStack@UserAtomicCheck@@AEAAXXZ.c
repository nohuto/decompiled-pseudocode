/*
 * XREFs of ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     HMDestroyUnlockedObject @ 0x1C0041660 (HMDestroyUnlockedObject.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0041FB4 (--1UserAtomicCheck@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall UserAtomicCheck::UnregisterStack(UserAtomicCheck *this)
{
  unsigned int v1; // edx

  if ( gpAtomickCheckStacks )
  {
    v1 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v1 << 6) + gpAtomickCheckStacks) != *((_DWORD *)this + 1) )
      {
        if ( ++v1 >= gdwAtomicCheckLogSize )
          return;
      }
      *(_DWORD *)(((unsigned __int64)v1 << 6) + gpAtomickCheckStacks) = 0;
    }
  }
}
