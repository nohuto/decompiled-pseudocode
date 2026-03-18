/*
 * XREFs of CmObReferenceObjectByName @ 0x14065EAB8
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x140657574 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 */

__int64 __fastcall CmObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        char a5,
        void *a6,
        _QWORD *a7)
{
  int v7; // eax
  void *v8; // rcx
  unsigned int v9; // ebx
  _DWORD *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = ObReferenceObjectByNameEx(a1, 0LL, a3, (struct _OBJECT_TYPE *)CmKeyObjectType, a5, a6, (__int64 *)&v11);
  v8 = v11;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( *v11 == 1803104306 )
    {
      *a7 = v11;
      v8 = 0LL;
      v9 = 0;
    }
    else
    {
      v9 = -1073741816;
    }
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return v9;
}
