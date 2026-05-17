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
  int v7; // r14d
  __int64 v9; // r13
  __int64 v10; // r12
  int DelayloadExportDll; // eax
  int v12; // esi
  char *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdi
  _BYTE *Heap; // rbx
  void (__fastcall *v17)(__int64 *, __int64, char *, __int64, _QWORD); // rdx
  __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // rcx
  char *v21; // rax
  __int64 v22; // rax
  __int64 v24; // [rsp+40h] [rbp-4A8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-4A0h]
  int v26; // [rsp+50h] [rbp-498h] BYREF
  char **v27; // [rsp+58h] [rbp-490h]
  _BYTE *v28; // [rsp+60h] [rbp-488h]
  __int64 v29; // [rsp+68h] [rbp-480h]
  void (__fastcall *v30)(__int64 *, __int64, char *, __int64, _QWORD); // [rsp+70h] [rbp-478h]
  __int64 v31; // [rsp+78h] [rbp-470h]
  __int64 v32; // [rsp+80h] [rbp-468h]
  __int64 v33; // [rsp+88h] [rbp-460h]
  __int64 v34; // [rsp+90h] [rbp-458h]
  __int64 v35; // [rsp+98h] [rbp-450h]
  _BYTE v36[1024]; // [rsp+A0h] [rbp-448h] BYREF

  v34 = a4;
  v7 = a3;
  v32 = a3;
  v29 = a2;
  v9 = a1;
  v25 = a1;
  v31 = a5;
  v10 = 0LL;
  DelayloadExportDll = LdrpGetDelayloadExportDll(a1, a2, &v24, a6);
  v12 = DelayloadExportDll;
  if ( DelayloadExportDll < 0 )
    return LdrpRedirectDelayloadFailure(v9, 0, a2, v7, a4, a5, DelayloadExportDll);
  RtlGuardCheckImageBase(*(_QWORD *)(v24 + 48));
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
    Heap = (_BYTE *)RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 0x40000), 8LL * (unsigned int)v15);
  else
    Heap = v36;
  v28 = Heap;
  if ( Heap )
  {
    if ( g_ShimsEnabled )
      v17 = (void (__fastcall *)(__int64 *, __int64, char *, __int64, _QWORD))(__ROR8__(
                                                                                 g_pfnSE_GetProcAddressForCaller,
                                                                                 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]);
    else
      v17 = 0LL;
    v30 = v17;
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
          || *(_QWORD *)((char *)v19 + v20) - *(_QWORD *)(v25 + 48) < (unsigned __int64)*(unsigned int *)(v25 + 64) )
        {
          v21 = LdrpResolveDelayloadAddress(v25, v24, v29, (__int64)&v13[8 * v18], v17, &v26);
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
        v17 = v30;
      }
      while ( (unsigned int)v18 < (unsigned int)v15 );
    }
    v9 = v25;
  }
  else
  {
    v12 = -1073741801;
  }
  if ( v12 < 0 )
  {
    v22 = LdrpRedirectDelayloadFailure(v9, v24, v29, v32, v34, v31, v12);
    v10 = v22;
    v35 = v22;
    if ( v22 )
    {
      if ( (unsigned int)(v12 + 1073741512) <= 1 || v12 == -1073740671 )
        *(_QWORD *)&Heap[8 * (unsigned int)v14] = v22;
    }
  }
  LdrpWriteBackProtectedDelayLoad(v9, v13, Heap, (unsigned int)v15);
  if ( v36 != Heap )
    RtlFreeHeap(LdrpHeap, 0LL, Heap);
  LdrpDereferenceModule(v24);
  return v10;
}
