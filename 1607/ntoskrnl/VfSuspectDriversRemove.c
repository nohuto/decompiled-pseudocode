/*
 * XREFs of VfSuspectDriversRemove @ 0x140716490
 * Callers:
 *     VfRemoveVerifierEntry @ 0x140721048 (VfRemoveVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1406FE42C (VfDriverLock.c)
 *     ViSuspectDriversLookupEntry @ 0x1407166C4 (ViSuspectDriversLookupEntry.c)
 */

__int64 __fastcall VfSuspectDriversRemove(PCUNICODE_STRING String2)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  void *v4; // rcx
  _QWORD *v6; // rdx
  void **v7; // rax

  v2 = 0;
  VfDriverLock();
  v3 = ViSuspectDriversLookupEntry(String2);
  v4 = (void *)v3;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 16) == *(_DWORD *)(v3 + 20) )
    {
      v6 = *(_QWORD **)v3;
      v7 = *(void ***)(v3 + 8);
      if ( *(void **)(*(_QWORD *)v4 + 8LL) != v4 || *v7 != v4 )
        __fastfail(3u);
      *v7 = v6;
      v6[1] = v7;
      ExFreePoolWithTag(v4, 0x44536656u);
    }
    else
    {
      v2 = -1073741554;
    }
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v2;
}
