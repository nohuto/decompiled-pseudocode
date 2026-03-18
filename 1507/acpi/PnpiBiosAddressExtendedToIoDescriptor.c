/*
 * XREFs of PnpiBiosAddressExtendedToIoDescriptor @ 0x1C007D868
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C0067DC4 (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C00068F0 (PnpiBiosValidateMemoryMapAttribute.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0067AD0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C006823C (PnpiUpdateResourceList.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C0078130 (AcpiDiagTraceMemoryReserved.c)
 */

int __fastcall PnpiBiosAddressExtendedToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned __int8 v4; // r10
  int v5; // ebp
  __int64 v6; // r15
  __int64 v9; // rsi
  int result; // eax
  char v11; // cl
  char v12; // r10
  struct _IO_RESOURCE_DESCRIPTOR *v13; // rdi
  unsigned __int16 v14; // ax
  ULONGLONG v15; // rdx
  __int64 v16; // rcx
  ULONG_PTR v17; // r8
  ULONGLONG MaximumAddress; // r10
  ULONGLONG v19; // r14
  unsigned __int8 v20; // al
  ULONGLONG v21; // r9
  NTSTATUS v22; // eax
  __int64 v23; // [rsp+40h] [rbp-38h] BYREF
  struct _IO_RESOURCE_DESCRIPTOR *v24; // [rsp+48h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+80h] [rbp+8h] BYREF

  v4 = BugCheckParameter2[4];
  v5 = 0;
  v6 = a3;
  v24 = 0LL;
  v9 = 0LL;
  v23 = 0LL;
  if ( (v4 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v12,
      v11,
      *((_QWORD *)BugCheckParameter2 + 1),
      *((_QWORD *)BugCheckParameter2 + 2),
      *((_QWORD *)BugCheckParameter2 + 3),
      *((_QWORD *)BugCheckParameter2 + 4),
      *((_QWORD *)BugCheckParameter2 + 5));
    return 0;
  }
  if ( !*((_QWORD *)BugCheckParameter2 + 5) )
    return 0;
  result = PnpiUpdateResourceList(a2 + 8 * v6, &v24);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v13 = v24;
    }
    else
    {
      result = PnpiUpdateResourceList(a2 + 8 * v6, &v23);
      if ( result < 0 )
        return result;
      v9 = v23;
      *(_BYTE *)(v23 + 1) = -127;
      v13 = (struct _IO_RESOURCE_DESCRIPTOR *)(v9 - 32);
      *(_WORD *)(v9 + 4) = 24576;
    }
    v14 = *(_WORD *)(BugCheckParameter2 + 1);
    if ( v14 < 0x35u )
      KeBugCheckEx(0xA5u, 0xFuLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, v14);
    v15 = *((_QWORD *)BugCheckParameter2 + 2);
    v16 = *((_QWORD *)BugCheckParameter2 + 1);
    v17 = *((_QWORD *)BugCheckParameter2 + 5);
    MaximumAddress = *((_QWORD *)BugCheckParameter2 + 3);
    v19 = v15 + *((_QWORD *)BugCheckParameter2 + 4);
    BugCheckParameter4 = v17;
    v20 = BugCheckParameter2[4];
    v21 = v16 + 1;
    if ( (v20 & 4) != 0 && (v20 & 8) != 0 )
    {
      if ( MaximumAddress - v15 + 1 != v17 )
        v17 = MaximumAddress - v15 + 1;
      BugCheckParameter4 = v17;
      if ( (v15 & v16) != 0 )
        v21 = 1LL;
    }
    if ( v17 > 0xFFFFFFFF && BugCheckParameter2[3] && ((AcpiOverrideAttributes & 0x80u) == 0 || v15 < 0xFFFFFFFF) )
      KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&BugCheckParameter4);
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v13->u.Port.Alignment = v21;
        v13->u.Port.Length = BugCheckParameter4;
        v13->u.Port.MinimumAddress.QuadPart = v15;
        v13->u.Port.MaximumAddress.QuadPart = MaximumAddress;
        v13->Type = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v9 + 4) |= 1u;
        *(_DWORD *)(v9 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_QWORD *)(v9 + 12) = v19;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v13->Flags |= 0x20u;
        v13->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v13->Type = 6;
        v13->u.Port.Length = BugCheckParameter4;
        v13->u.Port.Alignment = *((_DWORD *)BugCheckParameter2 + 4);
        v13->u.Port.MinimumAddress.LowPart = *((_DWORD *)BugCheckParameter2 + 6);
      }
    }
    else
    {
      result = RtlIoEncodeMemIoResource(v13, 3u, v17, v21, v15, MaximumAddress);
      if ( result < 0 )
        return result;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        *(_DWORD *)(v9 + 8) = 1;
      else
        *(_DWORD *)(v9 + 8) = v13->Type;
      *(_QWORD *)(v9 + 12) = v19;
      if ( (BugCheckParameter2[48] & 0xC) != 0 )
        v13->Flags |= 0x20u;
      if ( (BugCheckParameter2[48] & 2) != 0 )
        v13->Flags |= 8u;
      if ( (BugCheckParameter2[48] & 6) != 0 )
        v13->Flags |= 4u;
      if ( (BugCheckParameter2[5] & 1) == 0 )
        v13->Flags |= 1u;
    }
    v22 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, a2, v6, v13);
    if ( v22 < 0 )
      return v22;
    return v5;
  }
  return result;
}
