/*
 * XREFs of PnpCmResourcesToBiosResources @ 0x1C0072DA8
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0007D8C (ACPIInitStartDevice.c)
 * Callees:
 *     PnpiCmResourceToBiosIrq @ 0x1C0072EDC (PnpiCmResourceToBiosIrq.c)
 *     PnpiCmResourceToBiosIoPort @ 0x1C0072F30 (PnpiCmResourceToBiosIoPort.c)
 *     PnpiCmResourceToBiosAddress @ 0x1C007E7E8 (PnpiCmResourceToBiosAddress.c)
 *     PnpiCmResourceToBiosAddressDouble @ 0x1C007E8C8 (PnpiCmResourceToBiosAddressDouble.c)
 *     PnpiCmResourceToBiosAddressQuad @ 0x1C007E98C (PnpiCmResourceToBiosAddressQuad.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C007EA2C (PnpiCmResourceToBiosExtendedIrq.c)
 *     PnpiCmResourceToBiosGpioInterruptIoDescriptor @ 0x1C007EACC (PnpiCmResourceToBiosGpioInterruptIoDescriptor.c)
 *     PnpiCmResourceToBiosIoFixedPort @ 0x1C007EB28 (PnpiCmResourceToBiosIoFixedPort.c)
 *     PnpiCmResourceToBiosMemory @ 0x1C007EB74 (PnpiCmResourceToBiosMemory.c)
 *     PnpiCmResourceToBiosMemory32 @ 0x1C007EBDC (PnpiCmResourceToBiosMemory32.c)
 */

__int64 __fastcall PnpCmResourcesToBiosResources(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  unsigned __int8 v8; // dl
  unsigned __int64 v9; // rdi
  int v11; // r10d
  unsigned __int16 v12; // bp
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  _BYTE *v19; // rsi
  char v21; // cl
  __int16 v22; // ax
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned int v26; // edx
  int v27; // ecx
  _BYTE *i; // rax

  v4 = 0;
  v5 = a4;
  v8 = *a3;
  v9 = (unsigned __int64)a3;
  v11 = 0;
  while ( 1 )
  {
    if ( (v8 & 0x80u) == 0 )
    {
      v12 = (v8 & 7) + 1;
      v8 &= 0x78u;
      goto LABEL_4;
    }
    if ( v9 >= (unsigned __int64)&a3[v5 - 2] )
      break;
    v12 = *(_WORD *)(v9 + 1) + 3;
LABEL_4:
    if ( v8 == 120 )
      break;
    if ( v8 > 0x86u )
    {
      switch ( v8 )
      {
        case 0x87u:
          v13 = PnpiCmResourceToBiosAddressDouble(v9, a2, 4LL);
          goto LABEL_11;
        case 0x88u:
          v13 = PnpiCmResourceToBiosAddress(v9, a2, 4LL);
          goto LABEL_11;
        case 0x89u:
          v13 = PnpiCmResourceToBiosExtendedIrq(a1, v9, a2);
          goto LABEL_11;
        case 0x8Au:
          v13 = PnpiCmResourceToBiosAddressQuad(v9, a2, 4LL);
          goto LABEL_11;
        case 0x8Cu:
          v13 = PnpiCmResourceToBiosGpioInterruptIoDescriptor(v9, a2, 4LL);
          goto LABEL_11;
        case 0x8Eu:
          v26 = *(_DWORD *)(a2 + 16);
          v27 = 0;
          if ( !v26 )
            return (unsigned int)-1073741823;
          for ( i = (_BYTE *)(a2 + 20); *i != 0x84; i += 20 )
          {
            if ( ++v27 >= v26 )
              return (unsigned int)-1073741823;
          }
          *i = 0;
          goto LABEL_19;
      }
    }
    else
    {
      switch ( v8 )
      {
        case 0x86u:
          *(_BYTE *)(v9 + 3) = 0;
          v23 = 0;
          *(_QWORD *)(v9 + 4) = 0LL;
          v24 = *(_DWORD *)(a2 + 16);
          if ( v24 )
          {
            v25 = a2 + 20;
            while ( *(_BYTE *)v25 != 3 )
            {
              ++v23;
              v25 += 20LL;
              if ( v23 >= v24 )
                goto LABEL_19;
            }
            *(_DWORD *)(v9 + 4) = *(_DWORD *)(v25 + 4);
            *(_DWORD *)(v9 + 8) = *(_DWORD *)(v25 + 12) >> 8;
            *(_BYTE *)(v9 + 3) = (*(_BYTE *)(v25 + 2) & 1) == 0;
            *(_BYTE *)v25 = 0;
          }
          goto LABEL_19;
        case 0x20u:
          v13 = PnpiCmResourceToBiosIrq(v9, a2, 4LL);
          goto LABEL_11;
        case 0x28u:
          *(_BYTE *)(v9 + 1) = 0;
          v14 = 0;
          v15 = *(_DWORD *)(a2 + 16);
          if ( v15 )
          {
            v16 = a2 + 20;
            while ( *(_BYTE *)v16 != 4 )
            {
              ++v14;
              v16 += 20LL;
              if ( v14 >= v15 )
                goto LABEL_19;
            }
            *(_BYTE *)(v9 + 1) = 1 << *(_DWORD *)(v16 + 4);
            *(_BYTE *)(v9 + 2) = 0;
            v21 = 0;
            if ( (*(_BYTE *)(v16 + 2) & 8) != 0 )
              v21 = 4;
            *(_BYTE *)(v9 + 2) = v21;
            v22 = *(_WORD *)(v16 + 2);
            if ( (v22 & 0x10) != 0 )
            {
              *(_BYTE *)(v9 + 2) |= 0x20u;
            }
            else if ( (v22 & 0x20) != 0 )
            {
              *(_BYTE *)(v9 + 2) |= 0x40u;
            }
            else if ( (v22 & 0x40) != 0 )
            {
              *(_BYTE *)(v9 + 2) |= 0x60u;
            }
            *(_BYTE *)v16 = 0;
          }
LABEL_19:
          v11 = 0;
          goto LABEL_13;
        case 0x40u:
          v13 = PnpiCmResourceToBiosIoPort(v9, a2, 4LL);
LABEL_11:
          v11 = v13;
          break;
        case 0x48u:
          v13 = PnpiCmResourceToBiosIoFixedPort(v9, a2, 4LL);
          goto LABEL_11;
        case 0x81u:
          v13 = PnpiCmResourceToBiosMemory(v9, a2, 4LL);
          goto LABEL_11;
        case 0x85u:
          v13 = PnpiCmResourceToBiosMemory32(v9, a2, 4LL);
          goto LABEL_11;
      }
    }
    if ( v11 < 0 )
      return (unsigned int)v11;
LABEL_13:
    v9 += v12;
    if ( v9 >= (unsigned __int64)&a3[v5] )
      break;
    v8 = *(_BYTE *)v9;
  }
  v17 = *(_DWORD *)(a2 + 16);
  v18 = 0;
  if ( v17 )
  {
    v19 = (_BYTE *)(a2 + 20);
    do
    {
      if ( !*v19 )
        break;
      ++v18;
      v19 += 20;
    }
    while ( v18 < v17 );
  }
  if ( v18 == v17 )
    return (unsigned int)-1073741823;
  return v4;
}
