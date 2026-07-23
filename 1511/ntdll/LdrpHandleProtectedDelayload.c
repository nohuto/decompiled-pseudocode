/*
 * XREFs of LdrpHandleProtectedDelayload @ 0x180032120
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x180031DC0 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     LdrpGetDelayloadExportDll @ 0x1800104CC (LdrpGetDelayloadExportDll.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     LdrpResolveDelayloadAddress @ 0x1800323F0 (LdrpResolveDelayloadAddress.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     RtlGuardCheckImageBase @ 0x1800399B0 (RtlGuardCheckImageBase.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180072458 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800823DC (LdrpRedirectDelayloadFailure.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
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
  unsigned int v18; // r13d
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  PVOID v24; // [rsp+40h] [rbp-4A8h] BYREF
  int v25[2]; // [rsp+48h] [rbp-4A0h]
  __int64 v26; // [rsp+50h] [rbp-498h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-490h]
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
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, (__int64)&v24, a6);
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
    v18 = 0;
    if ( (_DWORD)v15 )
    {
      v19 = Heap;
      v27 = (__int64 *)Heap;
      v20 = v13 - Heap;
      v33 = v13 - Heap;
      do
      {
        *v19 = 0LL;
        if ( v18 == (_DWORD)v14
          || *(_QWORD *)((char *)v19 + v20) - *(_QWORD *)(*(_QWORD *)v25 + 48LL) < (unsigned __int64)*(unsigned int *)(*(_QWORD *)v25 + 64LL) )
        {
          v21 = LdrpResolveDelayloadAddress(
                  v25[0],
                  (int)v24,
                  v29[0],
                  (unsigned int)v13 + 8 * v18,
                  HashTable,
                  (__int64)&v26);
          *v27 = v21;
          if ( v18 == (_DWORD)v14 )
          {
            v12 = v26;
            v10 = *(_QWORD *)&Heap[8 * (unsigned int)v14];
          }
        }
        ++v18;
        v19 = ++v27;
        v20 = v33;
        HashTable = v30;
      }
      while ( v18 < (unsigned int)v15 );
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
  LdrpDereferenceModule(v24);
  return v10;
}
