/*
 * XREFs of UsbDevice_InitializeEndpointContext @ 0x1C0031154
 * Callers:
 *     UsbDevice_ReconfigureEndpoint @ 0x1C003143C (UsbDevice_ReconfigureEndpoint.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C0032110 (UsbDevice_UcxEvtEndpointsConfigure.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C0022364 (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C00223A0 (Endpoint_GetMaxPrimaryStreams.c)
 */

__int64 __fastcall UsbDevice_InitializeEndpointContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r8d
  char v7; // al
  __int64 v8; // rax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned __int8 v12; // dl
  int v13; // ecx
  unsigned __int8 v14; // al
  int v15; // r8d
  int v16; // eax
  int v17; // ecx
  char v18; // al
  int MaxPrimaryStreams; // eax
  _DWORD *v20; // r10
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v23; // r10
  int v24; // r11d
  unsigned int v25; // r11d
  signed __int64 v26[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  *(_DWORD *)(a3 + 4) ^= (*(_DWORD *)(a3 + 4) ^ (8 * *(_DWORD *)(a2 + 120))) & 0x38;
  *(_WORD *)(a3 + 6) = *(_WORD *)(a2 + 100) & 0x7FF;
  v7 = *(_BYTE *)(a2 + 99) & 3;
  *(_OWORD *)v26 = *(_OWORD *)(*(_QWORD *)a2 + 232LL);
  if ( v7 == 1
    || ((v7 == 3) & _bittest64(v26, 0x34u)) != 0
    && *(char *)(a2 + 98) < 0
    && (v8 = *(_QWORD *)(a2 + 16), *(_WORD *)(v8 + 124) == 1529)
    && *(_WORD *)(v8 + 126) == 4353
    && *(_DWORD *)(v8 + 36) > 1u )
  {
    v9 = 0;
  }
  else
  {
    v9 = 3;
  }
  v10 = *(_DWORD *)(a3 + 4) ^ (*(_DWORD *)(a3 + 4) ^ (2 * v9)) & 6;
  *(_DWORD *)(a3 + 4) = v10;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = *(_BYTE *)(a2 + 102);
  switch ( v11 )
  {
    case 0:
      if ( ((((v10 >> 3) & 7) - 3) & 0xFFFFFFFB) == 0 )
        goto LABEL_11;
      goto LABEL_26;
    case 1:
      v13 = (v10 >> 3) & 7;
      if ( ((v13 - 3) & 0xFFFFFFFB) == 0 )
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 4u )
          {
            if ( v12 >= 8u )
            {
LABEL_11:
              if ( v12 >= 0x10u )
                *(_BYTE *)(a3 + 2) = 8 - (v12 < 0x20u);
              else
                *(_BYTE *)(a3 + 2) = 6;
              goto LABEL_24;
            }
            *(_BYTE *)(a3 + 2) = 5;
          }
          else
          {
            *(_BYTE *)(a3 + 2) = 4;
          }
        }
        else
        {
          *(_BYTE *)(a3 + 2) = 3;
        }
LABEL_24:
        *(_BYTE *)(a3 + 3) = 0;
        goto LABEL_25;
      }
      if ( ((v13 - 1) & 0xFFFFFFFB) == 0 )
      {
        *(_WORD *)(a3 + 2) = 3;
LABEL_25:
        v5 = *(unsigned __int16 *)(a3 + 6);
        *(_WORD *)(a3 + 18) = v5;
      }
LABEL_26:
      *(_DWORD *)(a2 + 152) = *(unsigned __int16 *)(a3 + 6);
      break;
    case 2:
      if ( ((((v10 >> 3) & 7) - 1) & 0xFFFFFFF9) == 0 )
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 6u )
            *(_BYTE *)(a3 + 2) = 5;
          else
            *(_BYTE *)(a3 + 2) = v12 - 1;
        }
        else
        {
          *(_BYTE *)(a3 + 2) = 0;
        }
        v14 = (*(_WORD *)(a2 + 100) >> 11) & 3;
        *(_BYTE *)(a3 + 3) = 0;
        v15 = v14;
        v16 = *(unsigned __int16 *)(a3 + 6);
        *(_BYTE *)(a3 + 5) = v15;
        v5 = v16 * (v15 + 1);
        *(_WORD *)(a3 + 18) = v5;
      }
      *(_DWORD *)(a2 + 152) = *(unsigned __int16 *)(a3 + 6) * (*(unsigned __int8 *)(a3 + 5) + 1);
      break;
    case 3:
      v17 = (v10 >> 3) & 7;
      if ( ((v17 - 1) & 0xFFFFFFF9) == 0 )
      {
        if ( v12 >= 2u )
        {
          if ( v12 >= 6u )
            *(_BYTE *)(a3 + 2) = 5;
          else
            *(_BYTE *)(a3 + 2) = v12 - 1;
        }
        else
        {
          *(_BYTE *)(a3 + 2) = 0;
        }
        v18 = *(_BYTE *)(a2 + 106);
        if ( v18 >= 0 )
        {
          v5 = *(unsigned __int16 *)(a2 + 107);
          *(_DWORD *)a3 ^= (*(_DWORD *)a3 ^ ((unsigned __int8)v18 << 8)) & 0x300;
        }
        else
        {
          v5 = *(_DWORD *)(a2 + 113);
          *(_DWORD *)a3 &= 0xFFFFFCFF;
        }
        *(_WORD *)(a3 + 18) = v5;
        *(_BYTE *)(a3 + 3) = BYTE2(v5);
      }
      if ( ((v17 - 1) & 0xFFFFFFFB) != 0 )
        *(_DWORD *)(a2 + 152) = *(unsigned __int16 *)(a3 + 6) * (*(unsigned __int8 *)(a3 + 5) + 1);
      else
        *(_DWORD *)(a2 + 152) = v5;
      *(_BYTE *)(a3 + 5) = *(_BYTE *)(a2 + 105);
      break;
  }
  if ( *(_BYTE *)(a3 + 2) > 7u && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 232LL) & 0x10000LL) != 0 )
    *(_BYTE *)(a3 + 2) = 7;
  *(_DWORD *)(a2 + 148) = *(unsigned __int8 *)(a3 + 5);
  *(_WORD *)(a3 + 16) = v5 >> 1;
  MaxPrimaryStreams = Endpoint_GetMaxPrimaryStreams(a2);
  *v20 ^= (*v20 ^ (MaxPrimaryStreams << 10)) & 0x7C00;
  result = Endpoint_GetDequeuePointer(v21, 0);
  *(_QWORD *)(v23 + 8) = result;
  if ( (v24 & 0x7C00) != 0 )
    v25 = v24 | 0x8000;
  else
    v25 = v24 & 0xFFFF7FFF;
  *(_DWORD *)v23 = v25;
  return result;
}
