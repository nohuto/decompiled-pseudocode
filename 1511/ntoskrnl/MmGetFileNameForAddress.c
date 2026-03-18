/*
 * XREFs of MmGetFileNameForAddress @ 0x140621ED0
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x1404CEF74 (EtwpProviderArrivalCallback.c)
 *     DbgkpPostModuleMessages @ 0x1405EEEF0 (DbgkpPostModuleMessages.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 */

__int64 __fastcall MmGetFileNameForAddress(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rax
  unsigned int *v4; // rbx
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
  v4 = v3;
  if ( !v3 )
    return 3221225793LL;
  if ( (v3[12] & 0x8000) != 0 || (v6 = **((_QWORD **)v3 + 9), (*(_DWORD *)(v6 + 56) & 0x20) == 0) )
  {
    MiUnlockAndDereferenceVad(v3);
    return 3221225545LL;
  }
  else
  {
    v7 = (char *)MI_REFERENCE_CONTROL_AREA_FILE(v6);
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
