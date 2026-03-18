/*
 * XREFs of PnpiBiosAddressDoubleToIoDescriptor @ 0x1C0085F40
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C000C344 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0085D3C (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C0086790 (PnpiUpdateResourceList.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C0086804 (PnpiBiosAddressHandleMemoryFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C0097C9C (AcpiDiagTraceMemoryReserved.c)
 */

__int64 __fastcall PnpiBiosAddressDoubleToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned __int8 v4; // di
  unsigned int v5; // esi
  __int64 v7; // rbp
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 result; // rax
  int v14; // edx
  struct _IO_RESOURCE_DESCRIPTOR *v15; // rdi
  unsigned __int16 v16; // ax
  __int64 v17; // r8
  unsigned int v18; // r15d
  __int64 v19; // r9
  unsigned int v20; // r14d
  unsigned __int8 v21; // al
  unsigned int v22; // r14d
  int v23; // edx
  NTSTATUS v24; // eax
  int v25; // ecx
  unsigned int v26; // [rsp+40h] [rbp-48h]
  int v27; // [rsp+44h] [rbp-44h]
  struct _IO_RESOURCE_DESCRIPTOR *v28; // [rsp+48h] [rbp-40h] BYREF
  __int64 v29; // [rsp+90h] [rbp+8h] BYREF
  __int64 v30; // [rsp+98h] [rbp+10h]
  unsigned int v31; // [rsp+A0h] [rbp+18h]

  v31 = a3;
  v30 = a2;
  v4 = BugCheckParameter2[4];
  v5 = 0;
  v29 = 0LL;
  v7 = 0LL;
  v28 = 0LL;
  if ( (v4 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    v25 = *(_DWORD *)(BugCheckParameter2 + 18);
    LOBYTE(v8) = v4;
    LOBYTE(v25) = BugCheckParameter2[3];
    AcpiDiagTraceMemoryReserved(
      v25,
      v8,
      v9,
      *(_DWORD *)(BugCheckParameter2 + 6),
      *(_DWORD *)(BugCheckParameter2 + 10),
      *(_DWORD *)(BugCheckParameter2 + 14),
      *(_DWORD *)(BugCheckParameter2 + 18),
      *(_DWORD *)(BugCheckParameter2 + 22));
    return 0LL;
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 22) )
    return 0LL;
  v12 = v11 + 8 * v10;
  result = PnpiUpdateResourceList(v12, &v28);
  if ( (int)result < 0 )
    return result;
  if ( BugCheckParameter2[3] > 1u )
  {
    v15 = v28;
  }
  else
  {
    result = PnpiUpdateResourceList(v12, &v29);
    if ( (int)result < 0 )
      return result;
    v7 = v29;
    *(_BYTE *)(v29 + 1) = -127;
    v15 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
    *(_WORD *)(v7 + 4) = 24576;
    *(_DWORD *)(v7 + 16) = 0;
  }
  v16 = *(_WORD *)(BugCheckParameter2 + 1);
  if ( v16 < 0x17u )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      13,
      15,
      (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
      v16);
    KeBugCheckEx(
      0xA5u,
      0xFuLL,
      (ULONG_PTR)BugCheckParameter2,
      *BugCheckParameter2,
      *(unsigned __int16 *)(BugCheckParameter2 + 1));
  }
  v17 = *(unsigned int *)(BugCheckParameter2 + 10);
  v18 = *(_DWORD *)(BugCheckParameter2 + 22);
  v19 = (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 6) + 1);
  v20 = *(_DWORD *)(BugCheckParameter2 + 14);
  v27 = v17 + *(_DWORD *)(BugCheckParameter2 + 18);
  v21 = BugCheckParameter2[4];
  LODWORD(v28) = *(_DWORD *)(BugCheckParameter2 + 6) + 1;
  LODWORD(v29) = v17;
  v26 = v20;
  if ( (v21 & 4) != 0 && (v21 & 8) != 0 )
  {
    v22 = v20 - v17 + 1;
    if ( v22 != v18 )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        16,
        (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids);
      v17 = (unsigned int)v29;
      v18 = v22;
      v19 = (unsigned int)v28;
    }
    if ( ((unsigned int)v17 & *(_DWORD *)(BugCheckParameter2 + 6)) != 0 )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        17,
        (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids);
      v17 = (unsigned int)v29;
      v20 = v26;
      v19 = 1LL;
    }
    else
    {
      v20 = v26;
    }
  }
  v23 = BugCheckParameter2[3];
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] == 1 )
    {
      v15->u.Port.Alignment = v19;
      v15->u.Port.Length = v18;
      v15->u.Port.MinimumAddress.LowPart = v17;
      v15->u.Port.MaximumAddress.LowPart = v20;
      v15->u.Port.MaximumAddress.HighPart = 0;
      v15->u.Port.MinimumAddress.HighPart = 0;
      v15->Type = 1;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        *(_WORD *)(v7 + 4) |= 1u;
      *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
      *(_DWORD *)(v7 + 12) = v27;
      if ( (BugCheckParameter2[4] & 2) == 0 )
        v15->Flags |= 0x20u;
      v15->u.Port.Alignment = 1;
    }
    else if ( BugCheckParameter2[3] == 2 )
    {
      v15->Type = 6;
      v15->u.Port.Length = v18;
      v15->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 10);
      v15->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 14);
    }
    else
    {
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v23,
        13,
        18,
        (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
        BugCheckParameter2[3]);
    }
  }
  else
  {
    v15->u.Port.Alignment = v19;
    v15->u.Port.Length = v18;
    v15->u.Port.MinimumAddress.LowPart = v17;
    v15->u.Port.MaximumAddress.LowPart = v20;
    v15->u.Port.MaximumAddress.HighPart = 0;
    v15->u.Port.MinimumAddress.HighPart = 0;
    v15->Type = 3;
    *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
    *(_DWORD *)(v7 + 12) = v27;
    PnpiBiosAddressHandleMemoryFlags(BugCheckParameter2, v15, v17, v19);
    v15->u.Port.Alignment = 1;
  }
  v24 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v30, v31, v15);
  if ( v24 < 0 )
    return (unsigned int)v24;
  return v5;
}
