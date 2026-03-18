/*
 * XREFs of PnpiBiosAddressToIoDescriptor @ 0x1C00843F0
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

__int64 __fastcall PnpiBiosAddressToIoDescriptor(
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
  __int64 v15; // rdi
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // r13
  unsigned __int16 v18; // r15
  __int64 v19; // r8
  int v20; // r12d
  unsigned __int8 v21; // al
  int v22; // r15d
  int v23; // edx
  int v24; // eax
  int v25; // ecx
  unsigned __int16 v26; // [rsp+40h] [rbp-48h]
  _QWORD v27[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v28; // [rsp+90h] [rbp+8h] BYREF
  __int64 v29; // [rsp+98h] [rbp+10h]
  unsigned int v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v4 = BugCheckParameter2[4];
  v5 = 0;
  v28 = 0LL;
  v7 = 0LL;
  v27[0] = 0LL;
  if ( (v4 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    v25 = *((unsigned __int16 *)BugCheckParameter2 + 6);
    LOBYTE(v8) = v4;
    LOBYTE(v25) = BugCheckParameter2[3];
    AcpiDiagTraceMemoryReserved(
      v25,
      v8,
      v9,
      *((unsigned __int16 *)BugCheckParameter2 + 3),
      *((_WORD *)BugCheckParameter2 + 4),
      *((_WORD *)BugCheckParameter2 + 5),
      *((_WORD *)BugCheckParameter2 + 6),
      *((_WORD *)BugCheckParameter2 + 7));
    return 0LL;
  }
  if ( !*((_WORD *)BugCheckParameter2 + 7) )
    return 0LL;
  v12 = v11 + 8 * v10;
  result = PnpiUpdateResourceList(v12, v27);
  if ( (int)result < 0 )
    return result;
  if ( BugCheckParameter2[3] <= 1u )
  {
    result = PnpiUpdateResourceList(v12, &v28);
    if ( (int)result < 0 )
      return result;
    v7 = v28;
    *(_BYTE *)(v28 + 1) = -127;
    v15 = v7 - 32;
    *(_WORD *)(v7 + 4) = 24576;
    *(_DWORD *)(v7 + 16) = 0;
  }
  else
  {
    v15 = v27[0];
  }
  v16 = *(_WORD *)(BugCheckParameter2 + 1);
  if ( v16 < 0xDu )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v14,
      13,
      11,
      (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
      v16);
    KeBugCheckEx(
      0xA5u,
      0xFuLL,
      (ULONG_PTR)BugCheckParameter2,
      *BugCheckParameter2,
      *(unsigned __int16 *)(BugCheckParameter2 + 1));
  }
  v17 = *((_WORD *)BugCheckParameter2 + 4);
  v18 = *((_WORD *)BugCheckParameter2 + 5);
  v19 = (unsigned int)*((unsigned __int16 *)BugCheckParameter2 + 3) + 1;
  v20 = *((unsigned __int16 *)BugCheckParameter2 + 7);
  v26 = v17 + *((_WORD *)BugCheckParameter2 + 6);
  v21 = BugCheckParameter2[4];
  LODWORD(v27[0]) = *((unsigned __int16 *)BugCheckParameter2 + 3) + 1;
  LOWORD(v28) = v18;
  if ( (v21 & 4) != 0 && (v21 & 8) != 0 )
  {
    v22 = v18 - v17 + 1;
    if ( v22 != v20 )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        12,
        (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids);
      v19 = LODWORD(v27[0]);
      v20 = v22;
    }
    if ( (v17 & *((_WORD *)BugCheckParameter2 + 3)) != 0 )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        13,
        (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids);
      v18 = v28;
      v19 = 1LL;
    }
    else
    {
      v18 = v28;
    }
  }
  v23 = BugCheckParameter2[3];
  if ( BugCheckParameter2[3] )
  {
    if ( BugCheckParameter2[3] == 1 )
    {
      *(_DWORD *)(v15 + 12) = v19;
      *(_DWORD *)(v15 + 8) = v20;
      *(_DWORD *)(v15 + 16) = v17;
      *(_DWORD *)(v15 + 24) = v18;
      *(_DWORD *)(v15 + 28) = 0;
      *(_DWORD *)(v15 + 20) = 0;
      *(_BYTE *)(v15 + 1) = 1;
      if ( (BugCheckParameter2[5] & 0x20) != 0 )
        *(_WORD *)(v7 + 4) |= 1u;
      *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
      *(_DWORD *)(v7 + 12) = v26;
      if ( (BugCheckParameter2[4] & 2) == 0 )
        *(_WORD *)(v15 + 4) |= 0x20u;
      *(_DWORD *)(v15 + 12) = 1;
    }
    else if ( BugCheckParameter2[3] == 2 )
    {
      *(_BYTE *)(v15 + 1) = 6;
      *(_DWORD *)(v15 + 12) = *((unsigned __int16 *)BugCheckParameter2 + 4);
      *(_DWORD *)(v15 + 16) = *((unsigned __int16 *)BugCheckParameter2 + 5);
      *(_DWORD *)(v15 + 8) = v20;
    }
    else
    {
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v23,
        13,
        14,
        (__int64)&WPP_b366b17187f636b05bbda43c678c6b68_Traceguids,
        BugCheckParameter2[3]);
    }
  }
  else
  {
    *(_DWORD *)(v15 + 12) = v19;
    *(_DWORD *)(v15 + 8) = v20;
    *(_DWORD *)(v15 + 16) = v17;
    *(_DWORD *)(v15 + 24) = v18;
    *(_DWORD *)(v15 + 28) = 0;
    *(_DWORD *)(v15 + 20) = 0;
    *(_BYTE *)(v15 + 1) = 3;
    *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
    *(_DWORD *)(v7 + 12) = v26;
    PnpiBiosAddressHandleMemoryFlags(BugCheckParameter2, v15, v19, 1LL);
    *(_DWORD *)(v15 + 12) = 1;
  }
  v24 = PnpiBiosAddressHandleGlobalFlags(BugCheckParameter2, v29, v30, v15);
  if ( v24 < 0 )
    return (unsigned int)v24;
  return v5;
}
