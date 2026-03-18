/*
 * XREFs of RawQueryInformation @ 0x1406C6F38
 * Callers:
 *     RawDispatch @ 0x14040B7FC (RawDispatch.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x14001A6C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 */

__int64 __fastcall RawQueryInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v7; // ebx
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 200);
  if ( v3 && *(_QWORD *)(a3 + 48) == v3
    || ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u) )
  {
    if ( *(_DWORD *)(a3 + 16) == 14 )
    {
      if ( *(_DWORD *)(a3 + 8) >= 8u )
      {
        **(_QWORD **)(a2 + 24) = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 104LL);
        *(_DWORD *)(a3 + 8) -= 8;
        v7 = 0;
        *(_QWORD *)(a2 + 56) = 8LL;
      }
      else
      {
        *(_QWORD *)(a2 + 56) = 0LL;
        v7 = -2147483643;
      }
    }
    else
    {
      v7 = -1073741808;
    }
    v8 = *(_QWORD *)(a1 + 200);
    if ( !v8 || *(_QWORD *)(a3 + 48) != v8 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 216), 1u);
  }
  else
  {
    v7 = -1073741202;
  }
  *(_DWORD *)(a2 + 48) = v7;
  IofCompleteRequest((PIRP)a2, 1);
  return v7;
}
