/*
 * XREFs of PnpiBiosAddressToIoDescriptor @ 0x1C006F148
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C001DAA8 (PnpiBiosValidateMemoryMapAttribute.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C006FBA0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C007030C (PnpiUpdateResourceList.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C0070404 (PnpiBiosAddressHandleMemoryFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C0078290 (AcpiDiagTraceMemoryReserved.c)
 */

__int64 __fastcall PnpiBiosAddressToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned __int8 v4; // bp
  unsigned int v5; // edi
  __int64 v6; // r15
  __int64 v9; // rsi
  int v10; // edx
  int v11; // r8d
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  int v15; // r14d
  unsigned __int16 v16; // r10
  unsigned __int8 v17; // al
  unsigned __int16 v18; // r11
  int v19; // r8d
  int v20; // r9d
  unsigned __int16 v21; // bp
  int v22; // eax
  int v23; // ecx
  __int64 v24; // [rsp+40h] [rbp-38h] BYREF
  __int64 v25; // [rsp+80h] [rbp+8h] BYREF

  v4 = BugCheckParameter2[4];
  v5 = 0;
  v6 = a3;
  v25 = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  if ( (v4 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    v23 = *((unsigned __int16 *)BugCheckParameter2 + 6);
    LOBYTE(v10) = v4;
    LOBYTE(v23) = BugCheckParameter2[3];
    AcpiDiagTraceMemoryReserved(
      v23,
      v10,
      v11,
      *((unsigned __int16 *)BugCheckParameter2 + 3),
      *((_WORD *)BugCheckParameter2 + 4),
      *((_WORD *)BugCheckParameter2 + 5),
      *((_WORD *)BugCheckParameter2 + 6),
      *((_WORD *)BugCheckParameter2 + 7));
    return 0LL;
  }
  if ( !*((_WORD *)BugCheckParameter2 + 7) )
    return 0LL;
  result = PnpiUpdateResourceList(a2 + 8 * v6, &v24);
  if ( (int)result < 0 )
    return result;
  if ( BugCheckParameter2[3] <= 1u )
  {
    result = PnpiUpdateResourceList(a2 + 8 * v6, &v25);
    if ( (int)result < 0 )
      return result;
    v9 = v25;
    *(_BYTE *)(v25 + 1) = -127;
    v13 = v9 - 32;
    *(_WORD *)(v9 + 4) = 24576;
    *(_DWORD *)(v9 + 16) = 0;
  }
  else
  {
    v13 = v24;
  }
  v14 = *(_WORD *)(BugCheckParameter2 + 1);
  if ( v14 < 0xDu )
    KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, v14);
  v15 = *((unsigned __int16 *)BugCheckParameter2 + 3);
  v16 = *((_WORD *)BugCheckParameter2 + 4);
  v17 = BugCheckParameter2[4];
  v18 = v16 + *((_WORD *)BugCheckParameter2 + 6);
  v19 = *((unsigned __int16 *)BugCheckParameter2 + 7);
  v20 = v15 + 1;
  v21 = *((_WORD *)BugCheckParameter2 + 5);
  if ( (v17 & 4) != 0 && (v17 & 8) != 0 )
  {
    if ( v21 - v16 + 1 != v19 )
      v19 = v21 - v16 + 1;
    if ( (v16 & (unsigned __int16)v15) != 0 )
      v20 = 1;
  }
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] != 1 )
    {
      if ( BugCheckParameter2[3] == 2 )
      {
        *(_BYTE *)(v13 + 1) = 6;
        *(_DWORD *)(v13 + 12) = *((unsigned __int16 *)BugCheckParameter2 + 4);
        *(_DWORD *)(v13 + 16) = *((unsigned __int16 *)BugCheckParameter2 + 5);
        *(_DWORD *)(v13 + 8) = v19;
      }
      goto LABEL_18;
    }
    *(_DWORD *)(v13 + 12) = v20;
    *(_DWORD *)(v13 + 8) = v19;
    *(_DWORD *)(v13 + 16) = v16;
    *(_DWORD *)(v13 + 24) = v21;
    *(_DWORD *)(v13 + 28) = 0;
    *(_DWORD *)(v13 + 20) = 0;
    *(_BYTE *)(v13 + 1) = 1;
    if ( (BugCheckParameter2[5] & 0x20) != 0 )
      *(_WORD *)(v9 + 4) |= 1u;
    *(_DWORD *)(v9 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
    *(_DWORD *)(v9 + 12) = v18;
    if ( (BugCheckParameter2[4] & 2) == 0 )
      *(_WORD *)(v13 + 4) |= 0x20u;
  }
  else
  {
    *(_DWORD *)(v13 + 12) = v20;
    *(_DWORD *)(v13 + 8) = v19;
    *(_DWORD *)(v13 + 16) = v16;
    *(_DWORD *)(v13 + 24) = v21;
    *(_DWORD *)(v13 + 28) = 0;
    *(_DWORD *)(v13 + 20) = 0;
    *(_BYTE *)(v13 + 1) = 3;
    *(_DWORD *)(v9 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
    *(_DWORD *)(v9 + 12) = v18;
    PnpiBiosAddressHandleMemoryFlags(BugCheckParameter2);
  }
  *(_DWORD *)(v13 + 12) = 1;
LABEL_18:
  v22 = PnpiBiosAddressHandleGlobalFlags(BugCheckParameter2, a2, (unsigned int)v6, v13);
  if ( v22 < 0 )
    return (unsigned int)v22;
  return v5;
}
