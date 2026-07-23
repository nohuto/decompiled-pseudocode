/*
 * XREFs of CcMapAndCopyFromCache @ 0x140446260
 * Callers:
 *     CcCopyReadEx @ 0x1400327F0 (CcCopyReadEx.c)
 *     CcCompleteAsyncRead @ 0x14006E664 (CcCompleteAsyncRead.c)
 *     CcPerformReadAhead @ 0x140071EB4 (CcPerformReadAhead.c)
 * Callees:
 *     CcFreeVirtualAddress @ 0x140032AA0 (CcFreeVirtualAddress.c)
 *     CcFetchDataForRead @ 0x140032AD0 (CcFetchDataForRead.c)
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14006AD1C (CcUpdateSharedCacheMapFlag.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     CcCopyBytesToUserBuffer @ 0x1404465B0 (CcCopyBytesToUserBuffer.c)
 */

char __fastcall CcMapAndCopyFromCache(__int64 a1, __int64 a2, unsigned int a3, char a4, char *a5, _DWORD *a6, int a7)
{
  char v8; // si
  unsigned int v9; // edi
  __int64 v10; // rbx
  NTSTATUS v11; // ebp
  __int64 v12; // r15
  char *v13; // r14
  __int64 VirtualAddress; // rax
  PVOID v15; // r12
  void *v16; // rcx
  unsigned int v17; // esi
  void *Src; // [rsp+40h] [rbp-58h]
  PVOID P; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+10h] BYREF
  size_t Size; // [rsp+B0h] [rbp+18h] BYREF
  char v23; // [rsp+B8h] [rbp+20h]

  v23 = a4;
  v21 = a2;
  v8 = a4;
  v9 = a3;
  P = 0LL;
  v10 = a2;
  v11 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !a3 )
    goto LABEL_14;
  v13 = a5;
  while ( 1 )
  {
    VirtualAddress = CcGetVirtualAddress(v12, v10, (volatile signed __int32 **)&P, &Size, 0, v13 == 0LL);
    v15 = P;
    v16 = (void *)VirtualAddress;
    Src = (void *)VirtualAddress;
    if ( (*(_DWORD *)(v12 + 152) & 8) != 0 )
      break;
    if ( !CcFetchDataForRead(a1, &v21, v9, v8, a6, P, a7) )
      goto LABEL_18;
    v16 = Src;
LABEL_6:
    v17 = Size;
    v10 = v21 + (unsigned int)Size;
    if ( (unsigned int)Size > v9 )
    {
      v17 = v9;
      LODWORD(Size) = v9;
    }
    if ( v13 )
    {
      v11 = CcCopyBytesToUserBuffer(v13, v16, v17);
      if ( v11 < 0 )
        goto LABEL_19;
      v13 += v17;
    }
    CcFreeVirtualAddress((__int64)v15);
    v21 = v10;
    P = 0LL;
    v9 -= v17;
    if ( !v9 )
      goto LABEL_12;
    v8 = v23;
  }
  if ( v8 )
    goto LABEL_6;
  v15 = P;
LABEL_18:
  v11 = -1073741608;
LABEL_19:
  if ( v15 )
    CcFreeVirtualAddress((__int64)v15);
LABEL_12:
  if ( v11 == -1073741608 )
    return 0;
  if ( v11 < 0 )
  {
    CcUpdateSharedCacheMapFlag(v12, 8, 1);
    RtlRaiseStatus(v11);
  }
LABEL_14:
  if ( (*(_DWORD *)(v12 + 152) & 8) != 0 )
    CcUpdateSharedCacheMapFlag(v12, 8, 0);
  return 1;
}
