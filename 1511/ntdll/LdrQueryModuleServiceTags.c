/*
 * XREFs of LdrQueryModuleServiceTags @ 0x1800C9350
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByHandle @ 0x180032760 (LdrpFindLoadedDllByHandle.c)
 */

__int64 __fastcall LdrQueryModuleServiceTags(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 result; // rax
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 *v13; // r8
  char *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17[5]; // [rsp+20h] [rbp-28h] BYREF
  int v18; // [rsp+68h] [rbp+20h] BYREF

  result = LdrpFindLoadedDllByHandle(a1, (char *)v17, &v18, a4);
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v7, v8, v9);
    v10 = v17[0];
    v11 = 0LL;
    v12 = *a3;
    v13 = *(__int64 **)(*(_QWORD *)(v17[0] + 152) + 16LL);
    while ( v13 )
    {
      if ( (unsigned int)v11 < v12 )
        *(_DWORD *)(a2 + 4 * v11) = *((_DWORD *)v13 + 2);
      v13 = (__int64 *)*v13;
      v11 = (unsigned int)(v11 + 1);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    *a3 = v11;
    LdrpDereferenceModule(v10, v14, v15, v16);
    return v12 < (unsigned int)v11 ? 0xC0000023 : 0;
  }
  return result;
}
