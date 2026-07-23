/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x14054739C
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x14040C0E0 (AlpcpCreateView.c)
 *     AlpcpUnlockBlob @ 0x1404F14C0 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(unsigned __int64 *Object, __int64 a2, _QWORD *a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v7; // r14
  int v8; // ebx
  ULONG_PTR v9; // r9
  ULONG_PTR v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 40);
  v7 = *(_QWORD *)(v3 + 16);
  AlpcpLockForCachedReferenceBlob(v7);
  v8 = AlpcpCreateView(v7, Object, &v11);
  if ( v8 >= 0 )
  {
    v9 = v11;
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2] = 0LL;
    *(_DWORD *)a3 = 24;
    a3[2] = *(_QWORD *)(v9 + 40);
    a3[1] = *(_QWORD *)(v9 + 48);
    *(_QWORD *)(a2 + 40) = v9;
    ++*(_DWORD *)(v9 + 76);
    --*(_DWORD *)(v3 + 76);
  }
  AlpcpUnlockBlob(v7);
  if ( *(_QWORD *)(a2 + 40) != v3 )
    AlpcpDereferenceBlobEx(v3, 1);
  return (unsigned int)v8;
}
