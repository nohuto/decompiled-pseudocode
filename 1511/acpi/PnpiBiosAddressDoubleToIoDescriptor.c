/*
 * XREFs of PnpiBiosAddressDoubleToIoDescriptor @ 0x1C006FCC4
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C001DAA8 (PnpiBiosValidateMemoryMapAttribute.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C006FBA0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C007030C (PnpiUpdateResourceList.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C0070404 (PnpiBiosAddressHandleMemoryFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C0078290 (AcpiDiagTraceMemoryReserved.c)
 */

__int64 __fastcall PnpiBiosAddressDoubleToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned __int8 v4; // bp
  unsigned int v5; // edi
  __int64 v6; // r14
  __int64 v9; // rsi
  int v10; // edx
  int v11; // r8d
  __int64 result; // rax
  struct _IO_RESOURCE_DESCRIPTOR *v13; // rdx
  unsigned __int16 v14; // ax
  unsigned int v15; // r9d
  int v16; // ecx
  int v17; // r8d
  unsigned int v18; // r11d
  unsigned int v19; // ebp
  unsigned __int8 v20; // al
  int v21; // r10d
  NTSTATUS v22; // eax
  int v23; // ecx
  struct _IO_RESOURCE_DESCRIPTOR *v24; // [rsp+40h] [rbp-38h] BYREF
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
    v23 = *(_DWORD *)(BugCheckParameter2 + 18);
    LOBYTE(v10) = v4;
    LOBYTE(v23) = BugCheckParameter2[3];
    AcpiDiagTraceMemoryReserved(
      v23,
      v10,
      v11,
      *(_DWORD *)(BugCheckParameter2 + 6),
      *(_DWORD *)(BugCheckParameter2 + 10),
      *(_DWORD *)(BugCheckParameter2 + 14),
      *(_DWORD *)(BugCheckParameter2 + 18),
      *(_DWORD *)(BugCheckParameter2 + 22));
    return 0LL;
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 22) )
    return 0LL;
  result = PnpiUpdateResourceList(a2 + 8 * v6, &v24);
  if ( (int)result < 0 )
    return result;
  if ( BugCheckParameter2[3] > 1u )
  {
    v13 = v24;
  }
  else
  {
    result = PnpiUpdateResourceList(a2 + 8 * v6, &v25);
    if ( (int)result < 0 )
      return result;
    v9 = v25;
    *(_BYTE *)(v25 + 1) = -127;
    v13 = (struct _IO_RESOURCE_DESCRIPTOR *)(v9 - 32);
    *(_WORD *)(v9 + 4) = 24576;
    *(_DWORD *)(v9 + 16) = 0;
  }
  v14 = *(_WORD *)(BugCheckParameter2 + 1);
  if ( v14 < 0x17u )
    KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, v14);
  v15 = *(_DWORD *)(BugCheckParameter2 + 10);
  v16 = *(_DWORD *)(BugCheckParameter2 + 6);
  v17 = *(_DWORD *)(BugCheckParameter2 + 22);
  v18 = *(_DWORD *)(BugCheckParameter2 + 14);
  v19 = v15 + *(_DWORD *)(BugCheckParameter2 + 18);
  v20 = BugCheckParameter2[4];
  v21 = v16 + 1;
  if ( (v20 & 4) != 0 && (v20 & 8) != 0 )
  {
    if ( v18 - v15 + 1 != v17 )
      v17 = v18 - v15 + 1;
    if ( (v15 & v16) != 0 )
      v21 = 1;
  }
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] != 1 )
    {
      if ( BugCheckParameter2[3] == 2 )
      {
        v13->Type = 6;
        v13->u.Port.Length = v17;
        v13->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 10);
        v13->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 14);
      }
      goto LABEL_18;
    }
    v13->u.Port.Alignment = v21;
    v13->u.Port.Length = v17;
    v13->u.Port.MinimumAddress.LowPart = v15;
    v13->u.Port.MaximumAddress.LowPart = v18;
    v13->u.Port.MaximumAddress.HighPart = 0;
    v13->u.Port.MinimumAddress.HighPart = 0;
    v13->Type = 1;
    if ( (BugCheckParameter2[5] & 0x20) != 0 )
      *(_WORD *)(v9 + 4) |= 1u;
    *(_DWORD *)(v9 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
    *(_DWORD *)(v9 + 12) = v19;
    if ( (BugCheckParameter2[4] & 2) == 0 )
      v13->Flags |= 0x20u;
  }
  else
  {
    v13->u.Port.Alignment = v21;
    v13->u.Port.Length = v17;
    v13->u.Port.MinimumAddress.LowPart = v15;
    v13->u.Port.MaximumAddress.LowPart = v18;
    v13->u.Port.MaximumAddress.HighPart = 0;
    v13->u.Port.MinimumAddress.HighPart = 0;
    v13->Type = 3;
    *(_DWORD *)(v9 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
    *(_DWORD *)(v9 + 12) = v19;
    PnpiBiosAddressHandleMemoryFlags(BugCheckParameter2);
  }
  v13->u.Port.Alignment = 1;
LABEL_18:
  v22 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, a2, v6, v13);
  if ( v22 < 0 )
    return (unsigned int)v22;
  return v5;
}
