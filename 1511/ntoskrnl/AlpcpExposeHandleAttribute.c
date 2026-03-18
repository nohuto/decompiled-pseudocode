/*
 * XREFs of AlpcpExposeHandleAttribute @ 0x1404292E0
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpExposeAttributes @ 0x14042C820 (AlpcpExposeAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceConnectedPort @ 0x140425270 (AlpcpReferenceConnectedPort.c)
 *     ObCompleteObjectDuplication @ 0x140480070 (ObCompleteObjectDuplication.c)
 */

__int64 __fastcall AlpcpExposeHandleAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v7; // rdi
  unsigned __int8 v9; // r13
  void *v10; // r12
  unsigned int v11; // r8d
  __int64 v12; // rdx
  int v13; // r13d
  __int64 v14; // rax
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a2 + 152);
  if ( !v7 )
    return 0LL;
  v9 = KeGetCurrentThread()->gap0[10];
  v10 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
  {
    v14 = AlpcpReferenceConnectedPort(*(_QWORD *)(a2 + 24));
    v10 = (void *)v14;
    if ( !v14 )
    {
      v13 = -1073741769;
      goto LABEL_11;
    }
    a1 = v14;
  }
  if ( (*(_DWORD *)(a1 + 256) & 0x80000) == 0 )
  {
LABEL_18:
    v13 = -1073741790;
    goto LABEL_11;
  }
  v11 = *(_DWORD *)(v7 + 4) & *(_DWORD *)(a1 + 320);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 24);
    if ( (v12 & 1) != 0 )
      v12 = 0LL;
    if ( v12 )
    {
      v15 = 0uLL;
      v16 = v11;
      v13 = ObCompleteObjectDuplication(v7 + 8, v12, v9, (char *)&v15 + 8, (char *)&v16 + 4);
      if ( v13 >= 0 )
      {
        *(_OWORD *)a3 = v15;
        *(_QWORD *)(a3 + 16) = v16;
        *a4 |= 0x10000000u;
      }
      goto LABEL_11;
    }
    goto LABEL_18;
  }
  v13 = -1073741788;
LABEL_11:
  if ( v10 )
    ObfDereferenceObject(v10);
  AlpcpDereferenceBlobEx(v7, 1);
  *(_QWORD *)(a2 + 152) = 0LL;
  return (unsigned int)v13;
}
