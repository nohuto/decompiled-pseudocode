/*
 * XREFs of PnpCmResourcesToBiosResources @ 0x1C00841D8
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_LL @ 0x1C000C27C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     PnpiCmResourceToBiosIoPort @ 0x1C00836D0 (PnpiCmResourceToBiosIoPort.c)
 *     PnpiCmResourceToBiosIrq @ 0x1C0083740 (PnpiCmResourceToBiosIrq.c)
 *     PnpiCmResourceToBiosAddress @ 0x1C00A0240 (PnpiCmResourceToBiosAddress.c)
 *     PnpiCmResourceToBiosAddressDouble @ 0x1C00A0320 (PnpiCmResourceToBiosAddressDouble.c)
 *     PnpiCmResourceToBiosAddressQuad @ 0x1C00A03E4 (PnpiCmResourceToBiosAddressQuad.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C00A0484 (PnpiCmResourceToBiosExtendedIrq.c)
 *     PnpiCmResourceToBiosGpioInterruptIoDescriptor @ 0x1C00A0524 (PnpiCmResourceToBiosGpioInterruptIoDescriptor.c)
 *     PnpiCmResourceToBiosIoFixedPort @ 0x1C00A0580 (PnpiCmResourceToBiosIoFixedPort.c)
 *     PnpiCmResourceToBiosMemory @ 0x1C00A05CC (PnpiCmResourceToBiosMemory.c)
 *     PnpiCmResourceToBiosMemory32Fixed @ 0x1C00A0634 (PnpiCmResourceToBiosMemory32Fixed.c)
 */

__int64 __fastcall PnpCmResourcesToBiosResources(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 v4; // r14
  unsigned int v5; // ebx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  int v10; // edi
  int v11; // r9d
  unsigned __int16 v12; // r12
  int v13; // edx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // edx
  unsigned int v19; // eax
  _BYTE *v20; // rcx
  char v22; // al
  __int16 v23; // ax
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // edx
  int v29; // ecx
  _BYTE *i; // rax

  v4 = *a3;
  v5 = 0;
  v7 = a4;
  v8 = (unsigned __int64)a3;
  v10 = 0;
  while ( 1 )
  {
    if ( (v4 & 0x80u) != 0 )
    {
      if ( v8 >= (unsigned __int64)&a3[v7 - 2] )
        goto LABEL_24;
      v11 = 11;
      v12 = *(_WORD *)(v8 + 1) + 3;
    }
    else
    {
      v11 = 10;
      v12 = (v4 & 7) + 1;
      v4 &= 0x78u;
    }
    WPP_RECORDER_SF_LL(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      14,
      v11,
      (__int64)&WPP_2f8d8659459e3c6d1af86231b3e917f2_Traceguids,
      v4,
      v12);
    if ( v4 == 120 )
      break;
    if ( v4 > 0x85u )
    {
      switch ( v4 )
      {
        case 0x86u:
          v14 = PnpiCmResourceToBiosMemory32Fixed(v8, a2);
          goto LABEL_13;
        case 0x87u:
          v14 = PnpiCmResourceToBiosAddressDouble(v8, a2);
          goto LABEL_13;
        case 0x88u:
          v14 = PnpiCmResourceToBiosAddress(v8, a2);
          goto LABEL_13;
        case 0x89u:
          v14 = PnpiCmResourceToBiosExtendedIrq(a1, v8, a2);
          goto LABEL_13;
        case 0x8Au:
          v14 = PnpiCmResourceToBiosAddressQuad(v8, a2);
          goto LABEL_13;
        case 0x8Cu:
          v14 = PnpiCmResourceToBiosGpioInterruptIoDescriptor(v8, a2);
          goto LABEL_13;
        case 0x8Eu:
          v28 = *(_DWORD *)(a2 + 16);
          v29 = 0;
          if ( !v28 )
            return (unsigned int)-1073741823;
          for ( i = (_BYTE *)(a2 + 20); *i != 0x84; i += 20 )
          {
            if ( ++v29 >= v28 )
              return (unsigned int)-1073741823;
          }
          *i = 0;
          goto LABEL_21;
      }
LABEL_65:
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        14,
        13,
        (__int64)&WPP_2f8d8659459e3c6d1af86231b3e917f2_Traceguids,
        v4);
      goto LABEL_14;
    }
    switch ( v4 )
    {
      case 0x85u:
        *(_BYTE *)(v8 + 3) = 0;
        v24 = 0;
        *(_QWORD *)(v8 + 4) = 0LL;
        *(_QWORD *)(v8 + 12) = 0LL;
        v25 = *(_DWORD *)(a2 + 16);
        if ( v25 )
        {
          v26 = a2 + 20;
          while ( *(_BYTE *)v26 != 3 )
          {
            ++v24;
            v26 += 20LL;
            if ( v24 >= v25 )
              goto LABEL_21;
          }
          *(_DWORD *)(v8 + 16) = *(_DWORD *)(v26 + 12);
          v27 = *(_DWORD *)(v26 + 4);
          *(_DWORD *)(v8 + 8) = v27;
          *(_DWORD *)(v8 + 4) = v27;
          *(_BYTE *)(v8 + 3) = (*(_BYTE *)(v26 + 2) & 1) == 0;
          *(_BYTE *)v26 = 0;
        }
        goto LABEL_21;
      case 0x20u:
        v14 = PnpiCmResourceToBiosIrq(v8, a2);
        goto LABEL_13;
      case 0x28u:
        *(_BYTE *)(v8 + 1) = 0;
        v15 = 0;
        v16 = *(_DWORD *)(a2 + 16);
        if ( v16 )
        {
          v17 = a2 + 20;
          while ( *(_BYTE *)v17 != 4 )
          {
            ++v15;
            v17 += 20LL;
            if ( v15 >= v16 )
              goto LABEL_21;
          }
          *(_BYTE *)(v8 + 1) = 1 << *(_DWORD *)(v17 + 4);
          *(_BYTE *)(v8 + 2) = 0;
          v22 = 0;
          if ( (*(_BYTE *)(v17 + 2) & 8) != 0 )
            v22 = 4;
          *(_BYTE *)(v8 + 2) = v22;
          v23 = *(_WORD *)(v17 + 2);
          if ( (v23 & 0x10) != 0 )
          {
            *(_BYTE *)(v8 + 2) |= 0x20u;
          }
          else if ( (v23 & 0x20) != 0 )
          {
            *(_BYTE *)(v8 + 2) |= 0x40u;
          }
          else if ( (v23 & 0x40) != 0 )
          {
            *(_BYTE *)(v8 + 2) |= 0x60u;
          }
          *(_BYTE *)v17 = 0;
        }
LABEL_21:
        v10 = 0;
        goto LABEL_15;
    }
    if ( v4 != 48 && v4 != 56 )
    {
      if ( v4 == 64 )
      {
        v14 = PnpiCmResourceToBiosIoPort(v8, a2);
LABEL_13:
        v10 = v14;
        goto LABEL_14;
      }
      if ( v4 == 72 )
      {
        v14 = PnpiCmResourceToBiosIoFixedPort(v8, a2);
        goto LABEL_13;
      }
      if ( v4 != 112 )
      {
        if ( v4 == 129 )
        {
          v14 = PnpiCmResourceToBiosMemory(v8, a2);
          goto LABEL_13;
        }
        goto LABEL_65;
      }
    }
LABEL_14:
    if ( v10 < 0 )
      return (unsigned int)v10;
LABEL_15:
    v8 += v12;
    if ( v8 >= (unsigned __int64)&a3[a4] )
      goto LABEL_24;
    v4 = *(_BYTE *)v8;
    v7 = a4;
  }
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    14,
    12,
    (__int64)&WPP_2f8d8659459e3c6d1af86231b3e917f2_Traceguids);
LABEL_24:
  v18 = *(_DWORD *)(a2 + 16);
  v19 = 0;
  if ( v18 )
  {
    v20 = (_BYTE *)(a2 + 20);
    do
    {
      if ( !*v20 )
        break;
      ++v19;
      v20 += 20;
    }
    while ( v19 < v18 );
  }
  if ( v19 == v18 )
    return (unsigned int)-1073741823;
  return v5;
}
