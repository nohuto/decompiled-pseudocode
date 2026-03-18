/*
 * XREFs of AMLIFindNameSpaceObject @ 0x1C0018D3C
 * Callers:
 *     ACPIIoctlEnumChildren @ 0x1C0018F24 (ACPIIoctlEnumChildren.c)
 * Callees:
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C0016AE0 (GetBaseObject.c)
 *     FindNSObjMainNoLock @ 0x1C0018E60 (FindNSObjMainNoLock.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall AMLIFindNameSpaceObject(__int64 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  size_t v7; // rbx
  _BYTE *PoolWithTag; // rdi
  __int64 BaseObject; // rax
  __int64 v10; // rbp
  __int64 v11; // rax
  KIRQL v12; // bl
  unsigned int NSObjMainNoLock; // esi
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  __int64 *v17; // r8
  void *v18; // rbx
  _BYTE P[128]; // [rsp+30h] [rbp-C8h] BYREF

  v7 = -1LL;
  do
    ++v7;
  while ( a4[v7] );
  if ( v7 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, a4, v7);
  PoolWithTag[v7] = 0;
  if ( (*(_BYTE *)(*a1 + 56) & 4) != 0 )
  {
    NSObjMainNoLock = -1073741738;
  }
  else
  {
    BaseObject = GetBaseObject(*a1);
    v10 = BaseObject;
    if ( (gDebugger & 8) != 0 )
    {
      ObjectPath = GetObjectPath(BaseObject);
      CurrentThread = (unsigned int)KeGetCurrentThread();
      v17 = qword_1C00254F0;
      v18 = (void *)ObjectPath;
      if ( ObjectPath )
        LODWORD(v17) = ObjectPath;
      PrintDebugMessage(53, CurrentThread, (_DWORD)v17, 0, 0LL);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
    }
    v11 = *(_QWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_WORD *)(a2 + 2) = 2;
    *(_DWORD *)(v11 + 24) = 0;
    *(_WORD *)(*(_QWORD *)(a2 + 8) + 2LL) = 2;
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) = 0LL;
    v12 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    NSObjMainNoLock = FindNSObjMainNoLock(PoolWithTag);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v12);
    DereferenceObjectEx(v10);
  }
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return NSObjMainNoLock;
}
