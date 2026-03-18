/*
 * XREFs of PnpiBiosAddressQuadToIoDescriptor @ 0x1C009F3C4
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C000C344 (PnpiBiosValidateMemoryMapAttribute.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_x @ 0x1C0055F8C (WPP_RECORDER_SF_x.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0085D3C (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiUpdateResourceList @ 0x1C0086790 (PnpiUpdateResourceList.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C0086804 (PnpiBiosAddressHandleMemoryFlags.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C0097C9C (AcpiDiagTraceMemoryReserved.c)
 */

int __fastcall PnpiBiosAddressQuadToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned __int8 v4; // r10
  int v5; // r14d
  __int64 v7; // rsi
  int result; // eax
  char v9; // cl
  unsigned int v10; // r8d
  char v11; // r10
  __int64 v12; // r11
  const void **v13; // rdi
  int v14; // edx
  int v15; // r8d
  struct _IO_RESOURCE_DESCRIPTOR *v16; // rdi
  unsigned __int16 v17; // ax
  ULONGLONG v18; // r9
  unsigned __int8 v19; // cl
  ULONGLONG v20; // r10
  ULONG_PTR v21; // r8
  ULONGLONG v22; // r15
  ULONGLONG MaximumAddress; // r12
  ULONG_PTR v24; // r12
  int v25; // edx
  int Type; // eax
  NTSTATUS v27; // eax
  unsigned __int64 v28; // [rsp+40h] [rbp-20h]
  __int64 v29; // [rsp+48h] [rbp-18h] BYREF
  struct _IO_RESOURCE_DESCRIPTOR *v30; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR Length; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+48h]
  unsigned int v33; // [rsp+B0h] [rbp+50h]

  v33 = a3;
  v32 = a2;
  v4 = BugCheckParameter2[4];
  v5 = 0;
  v29 = 0LL;
  v7 = 0LL;
  if ( (v4 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v11,
      v9,
      *(_QWORD *)(BugCheckParameter2 + 6),
      *(_QWORD *)(BugCheckParameter2 + 14),
      *(_QWORD *)(BugCheckParameter2 + 22),
      *(_QWORD *)(BugCheckParameter2 + 30),
      *(_QWORD *)(BugCheckParameter2 + 38));
    return 0;
  }
  if ( !*(_QWORD *)(BugCheckParameter2 + 38) )
    return 0;
  v13 = (const void **)(v12 + 8LL * v10);
  result = PnpiUpdateResourceList(v13, &v30, v10);
  if ( result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v16 = v30;
    }
    else
    {
      result = PnpiUpdateResourceList(v13, &v29, v15);
      if ( result < 0 )
        return result;
      v7 = v29;
      *(_BYTE *)(v29 + 1) = -127;
      v16 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
    }
    v17 = *(_WORD *)(BugCheckParameter2 + 1);
    if ( v17 < 0x2Bu )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        19,
        (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
        v17);
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v18 = *(_QWORD *)(BugCheckParameter2 + 14);
    v19 = BugCheckParameter2[4];
    v20 = *(_QWORD *)(BugCheckParameter2 + 6) + 1LL;
    v21 = *(_QWORD *)(BugCheckParameter2 + 38);
    v22 = v18 + *(_QWORD *)(BugCheckParameter2 + 30);
    MaximumAddress = *(_QWORD *)(BugCheckParameter2 + 22);
    Length = v21;
    v29 = v20;
    v28 = v18;
    v30 = (struct _IO_RESOURCE_DESCRIPTOR *)MaximumAddress;
    if ( (v19 & 4) != 0 && (v19 & 8) != 0 )
    {
      v24 = MaximumAddress - v18 + 1;
      if ( v24 != v21 )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          13,
          20,
          (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids);
        v18 = v28;
        v21 = v24;
        v20 = v29;
        Length = v24;
      }
      if ( (v18 & *(_QWORD *)(BugCheckParameter2 + 6)) != 0 )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          13,
          21,
          (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids);
        v21 = Length;
        v20 = 1LL;
        v18 = v28;
        v29 = 1LL;
      }
      MaximumAddress = (ULONGLONG)v30;
    }
    if ( v21 > 0xFFFFFFFF && BugCheckParameter2[3] )
    {
      WPP_RECORDER_SF_x(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        22,
        (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
        v21);
      if ( (AcpiOverrideAttributes & 0x80u) == 0 || (v18 = v28, v28 < 0xFFFFFFFF) )
        KeBugCheckEx(0xA5u, 0x14uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, (ULONG_PTR)&Length);
      v21 = Length;
      v20 = v29;
    }
    v25 = BugCheckParameter2[3];
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v16->u.Port.Alignment = v20;
        v16->u.Port.Length = Length;
        v16->u.Port.MinimumAddress.QuadPart = v18;
        v16->u.Port.MaximumAddress.QuadPart = MaximumAddress;
        v16->Type = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v7 + 4) |= 1u;
        *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_QWORD *)(v7 + 12) = v22;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v16->Flags |= 0x20u;
        v16->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v16->Type = 6;
        v16->u.Port.Length = Length;
        v16->u.Port.Alignment = *(_DWORD *)(BugCheckParameter2 + 14);
        v16->u.Port.MinimumAddress.LowPart = *(_DWORD *)(BugCheckParameter2 + 22);
      }
      else
      {
        LOBYTE(v25) = 2;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          13,
          23,
          (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      result = RtlIoEncodeMemIoResource(v16, 3u, v21, v20, v18, MaximumAddress);
      if ( result < 0 )
        return result;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        Type = 1;
      else
        Type = v16->Type;
      *(_DWORD *)(v7 + 8) = Type;
      *(_QWORD *)(v7 + 12) = v22;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v16);
    }
    v27 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v32, v33, v16);
    if ( v27 < 0 )
      return v27;
    return v5;
  }
  return result;
}
