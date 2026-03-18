/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x1C0033390
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0034490 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  PERESOURCE v5; // r9
  PERESOURCE v6; // r9
  PERESOURCE v7; // r9
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  result = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8);
  if ( !(_DWORD)result )
    return GreLockVisRgn(a1);
  v5 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    result = ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v5 = ghsemDynamicModeChange;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(v3, &LockAcquireShared, v4, v5);
  }
  v6 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    result = ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
    v6 = ghsemGreLock;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      result = Template_pz(v3, &LockAcquireShared, v4, v6);
  }
  v7 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    result = ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
    v7 = ghsemDCVisRgn;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pz(v3, &LockAcquireShared, v4, v7);
  }
  return result;
}
