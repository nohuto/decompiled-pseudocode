/*
 * XREFs of CmObReferenceObjectByName @ 0x140606CB0
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140438760 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFE48 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 */

__int64 __fastcall CmObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        _QWORD *a7)
{
  int v7; // eax
  void *v8; // rcx
  unsigned int v9; // ebx
  _DWORD *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = ObReferenceObjectByNameEx(a1, a2, a3, (struct _OBJECT_TYPE *)CmKeyObjectType, a5, a6, &v11);
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
