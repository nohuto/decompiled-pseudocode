/*
 * XREFs of AllocateCvr @ 0x1C0085650
 * Callers:
 *     _BeginDeferWindowPos @ 0x1C0082C00 (_BeginDeferWindowPos.c)
 *     InternalBeginDeferWindowPos @ 0x1C008537C (InternalBeginDeferWindowPos.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateCvr(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( a2 <= 0 || (unsigned __int64)a2 > 0xC30C30 )
    return 0LL;
  v4 = (void *const)a1 == gSMWP
     ? Win32AllocPool(168LL * (unsigned int)a2, 2004054869LL)
     : Win32AllocPoolWithQuota(168LL * (unsigned int)a2, 2004054869LL);
  if ( !v4 )
    return 0LL;
  *(_DWORD *)(a1 + 24) &= ~4u;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 40) = v4;
  result = 1LL;
  *(_DWORD *)(a1 + 32) = a2;
  return result;
}
