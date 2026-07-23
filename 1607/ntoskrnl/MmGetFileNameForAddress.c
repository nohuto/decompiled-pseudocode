/*
 * XREFs of MmGetFileNameForAddress @ 0x140656BF4
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 *     DbgkpPostModuleMessages @ 0x140618BD4 (DbgkpPostModuleMessages.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 */

__int64 __fastcall MmGetFileNameForAddress(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  char *v4; // rbx
  __int64 v6; // rcx
  char *v7; // r14
  unsigned int v8; // ebp
  SIZE_T i; // rdx
  int v10; // edi
  const void **PoolWithTag; // rax
  const void **v12; // rbx
  unsigned int v13; // eax
  SIZE_T NumberOfBytes; // [rsp+60h] [rbp+18h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = MiObtainReferencedVad(a1, &v15);
  v4 = (char *)v3;
  if ( !v3 )
    return 3221225793LL;
  if ( (*(_DWORD *)(v3 + 48) & 0x8000) != 0 || (v6 = **(_QWORD **)(v3 + 72), (*(_DWORD *)(v6 + 56) & 0x20) == 0) )
  {
    MiUnlockAndDereferenceVad((char *)v3);
    return 3221225545LL;
  }
  else
  {
    v7 = (char *)MiReferenceControlAreaFile(v6);
    MiUnlockAndDereferenceVad(v4);
    v8 = 1040;
    for ( i = 1040LL; ; i = (unsigned int)NumberOfBytes )
    {
      PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, i, 0x20206D4Du);
      v12 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v10 = -1073741801;
        goto LABEL_11;
      }
      LODWORD(NumberOfBytes) = 0;
      v10 = ObQueryNameStringMode(v7, (__int64)PoolWithTag, v8, &NumberOfBytes, 0);
      if ( v10 >= 0 )
        break;
      ExFreePoolWithTag(v12, 0);
      if ( (unsigned int)NumberOfBytes <= v8 )
        goto LABEL_11;
      v8 = NumberOfBytes;
    }
    v13 = *(unsigned __int16 *)v12;
    *(_WORD *)(a2 + 2) = v13;
    *(_WORD *)a2 = v13;
    *(_QWORD *)(a2 + 8) = v12;
    memmove(v12, v12[1], v13);
LABEL_11:
    ObfDereferenceObject(v7);
    return (unsigned int)v10;
  }
}
