/*
 * XREFs of ndisNsiEnumerateAllSessionInformation @ 0x1C00611C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisNsiEnumerateAllSessionInformation(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  unsigned int v4; // ebp
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned int v8; // r14d
  KIRQL v9; // al
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  _QWORD *v12; // rdx

  v1 = 0;
  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 32) == 1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 40);
    v8 = *(_DWORD *)(a1 + 88);
    v9 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
    v10 = ndisCmSessionCount;
    v11 = 0;
    if ( ndisCmSessionCount )
    {
      v12 = ndisCmSession;
      do
      {
        if ( v12[2] )
        {
          if ( v3 < v8 )
          {
            if ( v6 )
              *(_DWORD *)(v6 + 4LL * v3) = v11;
            if ( v7 )
              *(_DWORD *)(v7 + 4LL * v3) = *(_DWORD *)v12;
            ++v3;
          }
          ++v4;
        }
        ++v11;
        v12 += 3;
      }
      while ( v11 < v10 );
    }
    KeReleaseSpinLock(&ndisCmSessionLock, v9);
    *(_DWORD *)(a1 + 88) = v4;
    if ( v4 > v8 )
      return 261;
    return v1;
  }
  else if ( *(_DWORD *)(a1 + 32) == 2 )
  {
    return 3221225474LL;
  }
  else
  {
    return 3221225485LL;
  }
}
