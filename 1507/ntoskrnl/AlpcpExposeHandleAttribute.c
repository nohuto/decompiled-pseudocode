/*
 * XREFs of AlpcpExposeHandleAttribute @ 0x14047CDC0
 * Callers:
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpExposeAttributes @ 0x140480310 (AlpcpExposeAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpReferenceConnectedPort @ 0x14051FCC0 (AlpcpReferenceConnectedPort.c)
 *     ObCompleteObjectDuplication @ 0x14053E31C (ObCompleteObjectDuplication.c)
 */

__int64 __fastcall AlpcpExposeHandleAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  ULONG_PTR v7; // rdi
  unsigned __int8 v9; // r12
  void *v10; // r15
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // r12d
  signed __int64 v14; // rax
  bool v15; // cc
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v17; // rax
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h] BYREF

  v7 = *(_QWORD *)(a2 + 152);
  if ( !v7 )
    return 0LL;
  v9 = KeGetCurrentThread()->gap0[10];
  v10 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
  {
    v17 = AlpcpReferenceConnectedPort(*(_QWORD *)(a2 + 24));
    v10 = (void *)v17;
    if ( !v17 )
    {
      v13 = -1073741769;
      goto LABEL_11;
    }
    a1 = v17;
  }
  if ( (*(_DWORD *)(a1 + 256) & 0x80000) == 0 )
  {
LABEL_21:
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
      v18 = 0uLL;
      v19 = v11;
      v13 = ObCompleteObjectDuplication(v7 + 8, v12, v9, (char *)&v18 + 8, (char *)&v19 + 4);
      if ( v13 >= 0 )
      {
        *(_OWORD *)a3 = v18;
        *(_QWORD *)(a3 + 16) = v19;
        *a4 |= 0x10000000u;
      }
      goto LABEL_11;
    }
    goto LABEL_21;
  }
  v13 = -1073741788;
LABEL_11:
  if ( v10 )
    ObfDereferenceObject(v10);
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 24), 0xFFFFFFFFFFFFFFFFuLL);
  v15 = v14 <= 1;
  BugCheckParameter4 = v14 - 1;
  if ( v15 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, v7, 0x21uLL, BugCheckParameter4);
    AlpcpDestroyBlob(v7);
  }
  *(_QWORD *)(a2 + 152) = 0LL;
  return (unsigned int)v13;
}
