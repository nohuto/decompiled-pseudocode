/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x180016B20
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180016DF0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001651C (LdrpDereferenceModule.c)
 *     LdrpResolveDelayloadAddress @ 0x180016A40 (LdrpResolveDelayloadAddress.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180066C84 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlGuardCheckImageBase @ 0x18006F6E4 (RtlGuardCheckImageBase.c)
 *     LdrpRedirectDelayloadFailure @ 0x180077574 (LdrpRedirectDelayloadFailure.c)
 *     LdrpGetDelayloadExportDll @ 0x18007A108 (LdrpGetDelayloadExportDll.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpHandleProtectedDelayload(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v9; // r13
  __int64 v10; // r12
  int DelayloadExportDll; // eax
  int v12; // esi
  char *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdi
  _BYTE *Heap; // rbx
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // rdx
  __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // rcx
  char *v21; // rax
  __int64 v22; // rax
  PVOID v24; // [rsp+40h] [rbp-4A8h] BYREF
  int v25[2]; // [rsp+48h] [rbp-4A0h]
  __int64 v26; // [rsp+50h] [rbp-498h] BYREF
  char **v27; // [rsp+58h] [rbp-490h]
  _BYTE *v28; // [rsp+60h] [rbp-488h]
  int v29[2]; // [rsp+68h] [rbp-480h]
  _RTL_DYNAMIC_HASH_TABLE *v30; // [rsp+70h] [rbp-478h]
  __int64 v31; // [rsp+78h] [rbp-470h]
  __int64 v32; // [rsp+80h] [rbp-468h]
  __int64 v33; // [rsp+88h] [rbp-460h]
  __int64 v34; // [rsp+90h] [rbp-458h]
  __int64 v35; // [rsp+98h] [rbp-450h]
  _BYTE BaseAddress[1024]; // [rsp+A0h] [rbp-448h] BYREF

  v34 = a4;
  v32 = a3;
  *(_QWORD *)v29 = a2;
  v9 = a1;
  *(_QWORD *)v25 = a1;
  v31 = a5;
  v10 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &v24, a6);
  v12 = DelayloadExportDll;
  if ( DelayloadExportDll < 0 )
    return LdrpRedirectDelayloadFailure(v9, 0LL, a2, a3, a4, a5, DelayloadExportDll);
  RtlGuardCheckImageBase(*((_QWORD *)v24 + 6));
  v13 = (char *)(*(_QWORD *)(v9 + 48) + *(unsigned int *)(a2 + 12));
  v14 = (a5 - (__int64)v13) >> 3;
  LODWORD(v15) = 0;
  if ( *(_QWORD *)v13 )
  {
    do
      v15 = (unsigned int)(v15 + 1);
    while ( *(_QWORD *)&v13[8 * v15] );
  }
  if ( (unsigned int)v15 > 0x80 )
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 8LL * (unsigned int)v15);
  else
    Heap = BaseAddress;
  v28 = Heap;
  if ( Heap )
  {
    if ( g_ShimsEnabled )
      HashTable = (_RTL_DYNAMIC_HASH_TABLE *)(__ROR8__(
                                                g_pfnSE_GetProcAddressForCaller,
                                                64 - ((unsigned __int8)MEMORY[0x7FFE0330] & 0x3Fu)) ^ (unsigned int)MEMORY[0x7FFE0330]);
    else
      HashTable = 0LL;
    v30 = HashTable;
    v18 = 0LL;
    if ( (_DWORD)v15 )
    {
      v19 = Heap;
      v27 = (char **)Heap;
      v20 = v13 - Heap;
      v33 = v13 - Heap;
      do
      {
        *v19 = 0LL;
        if ( (_DWORD)v18 == (_DWORD)v14
          || *(_QWORD *)((char *)v19 + v20) - *(_QWORD *)(*(_QWORD *)v25 + 48LL) < (unsigned __int64)*(unsigned int *)(*(_QWORD *)v25 + 64LL) )
        {
          v21 = LdrpResolveDelayloadAddress(
                  *(__int64 *)v25,
                  v24,
                  *(__int64 *)v29,
                  (__int64)&v13[8 * v18],
                  HashTable,
                  (int *)&v26);
          *v27 = v21;
          if ( (_DWORD)v18 == (_DWORD)v14 )
          {
            v12 = v26;
            v10 = *(_QWORD *)&Heap[8 * (unsigned int)v14];
          }
        }
        v18 = (unsigned int)(v18 + 1);
        v19 = ++v27;
        v20 = v33;
        HashTable = v30;
      }
      while ( (unsigned int)v18 < (unsigned int)v15 );
    }
    v9 = *(_QWORD *)v25;
  }
  else
  {
    v12 = -1073741801;
  }
  if ( v12 < 0 )
  {
    v22 = LdrpRedirectDelayloadFailure(v9, v24, *(_QWORD *)v29, v32, v34, v31, v12);
    v10 = v22;
    v35 = v22;
    if ( v22 )
    {
      if ( (unsigned int)(v12 + 1073741512) <= 1 || v12 == -1073740671 )
        *(_QWORD *)&Heap[8 * (unsigned int)v14] = v22;
    }
  }
  LdrpWriteBackProtectedDelayLoad(v9, v13, Heap, (unsigned int)v15);
  if ( BaseAddress != Heap )
    RtlFreeHeap(LdrpHeap, 0, Heap);
  LdrpDereferenceModule((char *)v24);
  return v10;
}
