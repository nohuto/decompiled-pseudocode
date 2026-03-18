/*
 * XREFs of AlpcpAllocateBlob @ 0x14047C900
 * Callers:
 *     AlpcpCreateSection @ 0x14044E0D4 (AlpcpCreateSection.c)
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     AlpcpCreateView @ 0x14047C210 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14047C700 (AlpcpCreateSecurityContext.c)
 *     AlpcpAllocateMessage @ 0x14047CF10 (AlpcpAllocateMessage.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x14047D050 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateRegion @ 0x14047D44C (AlpcpCreateRegion.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 *     AlpcpCreateConnectionPort @ 0x1404B1C70 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  SIZE_T v3; // rdx
  __int64 v5; // r8
  _QWORD *result; // rax
  char v7; // si
  _QWORD *v8; // rbx
  char v9; // si

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 40) < v3 )
  {
    v5 = *(unsigned int *)(a1 + 4);
    if ( *(_QWORD *)(a1 + 40) )
      result = (_QWORD *)(*((__int64 (__fastcall **)(__int64, SIZE_T, __int64))&AlpcpLookasides
                          + 16 * (unsigned __int64)*(unsigned int *)(a1 + 8)
                          + 6))(
                           1LL,
                           v3,
                           v5);
    else
      result = ExAllocatePoolWithTag(PagedPool, v3, v5);
    v7 = 0;
  }
  else
  {
    result = ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v7 = 1;
  }
  v8 = result;
  if ( result )
  {
    memset(result, 0, 0x30uLL);
    v8[4] = 0LL;
    *((_BYTE *)v8 + 17) = *(_BYTE *)a1;
    result = v8 + 6;
    v8[1] = v8;
    *v8 = v8;
    v9 = (*((_BYTE *)v8 + 16) ^ (2 * v7)) & 2;
    v8[3] = 1LL;
    *((_BYTE *)v8 + 16) ^= v9;
  }
  return result;
}
