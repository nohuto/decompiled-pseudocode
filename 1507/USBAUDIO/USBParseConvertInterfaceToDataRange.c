/*
 * XREFs of USBParseConvertInterfaceToDataRange @ 0x1C001FDDC
 * Callers:
 *     USBParseGetAudioStreamingDataranges @ 0x1C0020288 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C001D778 (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C001D7B8 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C001D874 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C001D8E8 (USBParseGetEndpointDescriptor.c)
 */

__int64 __fastcall USBParseConvertInterfaceToDataRange(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  unsigned int v3; // edi
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax
  PUSB_COMMON_DESCRIPTOR v8; // rbp
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax
  unsigned __int8 *p_bLength; // rbx
  PUSB_COMMON_DESCRIPTOR EndpointDescriptor; // rax
  unsigned int v12; // r12d
  int v13; // r13d
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // r12
  PUSB_COMMON_DESCRIPTOR v15; // rax
  PUSB_COMMON_DESCRIPTOR v16; // rcx
  PUSB_COMMON_DESCRIPTOR v17; // rax
  PUSB_COMMON_DESCRIPTOR v18; // rdx
  UCHAR bLength; // al
  unsigned int v20; // ecx
  GUID v21; // xmm0
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned __int8 *v25; // rdx
  int v26; // eax
  __int16 v27; // r8
  __int16 v28; // r8
  unsigned __int8 v29; // al
  BOOL v30; // r8d
  unsigned __int64 v31; // rax
  unsigned int v32; // ebx
  unsigned __int8 v33; // al
  __int64 v34; // rax
  __int64 v35; // rbp
  int v37; // ecx
  _DWORD *PoolWithTag; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned __int8 *v41; // rbp
  unsigned int v42; // ecx

  v3 = 0;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(a1, a2, a3, 7uLL);
  v8 = AudioSpecificInterface;
  if ( !AudioSpecificInterface )
    return v3;
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                (unsigned __int16 *)&a1->bLength,
                                (char *)&AudioSpecificInterface->bLength + AudioSpecificInterface->bLength,
                                36,
                                8uLL);
  p_bLength = &DescriptorInConfiguration->bLength;
  if ( !DescriptorInConfiguration )
    return v3;
  *(_QWORD *)(a3 + 152) = DescriptorInConfiguration;
  *(_DWORD *)(a3 + 208) = *(unsigned __int16 *)&v8[2].bDescriptorType;
  *(_QWORD *)(a3 + 136) = a2;
  *(_DWORD *)(a3 + 104) = DescriptorInConfiguration[3].bLength;
  EndpointDescriptor = USBParseGetEndpointDescriptor(a1, a2, 0);
  *(_QWORD *)(a3 + 168) = EndpointDescriptor;
  if ( !EndpointDescriptor )
    return (unsigned int)-1073741668;
  v12 = 15;
  *(_DWORD *)(a3 + 212) = (unsigned __int16)EndpointDescriptor[2];
  if ( (EndpointDescriptor[1].bDescriptorType & 0xC) == 4 )
  {
    v13 = EndpointDescriptor[4].bLength & 0xF;
    NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
    v15 = USBParseFindDescriptorInConfiguration(
            (unsigned __int16 *)&a1->bLength,
            (char *)(*(_QWORD *)(a3 + 168) + **(unsigned __int8 **)(a3 + 168)),
            5,
            7uLL);
    v16 = v15;
    if ( !v15 || (v15[1].bLength & 0xF) != v13 || NextAudioInterface && v15 > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
      v16 = 0LL;
    *(_QWORD *)(a3 + 176) = v16;
    v12 = 15;
  }
  v17 = USBParseGetEndpointDescriptor(a1, a2, 1);
  *(_QWORD *)(a3 + 160) = v17;
  v18 = v17;
  if ( v17 )
  {
    if ( *(char *)(*(_QWORD *)(a3 + 168) + 2LL) < 0
      || (bLength = v17[2].bLength) == 0
      || !*(_WORD *)&v18[2].bDescriptorType
      || !*(_QWORD *)(a3 + 176) && (unsigned __int8)(bLength - 1) <= 1u )
    {
      v20 = *(unsigned __int16 *)&v8[2].bDescriptorType;
      if ( v20 > 0x1001 )
      {
        v22 = v20 - 4098;
        if ( !v22 )
        {
          v21 = KSDATAFORMAT_SUBTYPE_AC3_AUDIO;
          goto LABEL_39;
        }
        v23 = v22 - 4095;
        if ( !v23 )
        {
          v21 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF;
          goto LABEL_39;
        }
        v24 = v23 - 2;
        if ( !v24 )
        {
          v21 = (GUID)KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF;
          goto LABEL_39;
        }
        if ( v24 == 252 )
        {
          v21 = (GUID)KSDATAFORMAT_SUBTYPE_WMA_SPDIF;
          goto LABEL_39;
        }
      }
      else
      {
        if ( v20 == 4097 )
        {
          v21 = (GUID)KSDATAFORMAT_SUBTYPE_MPEG;
          goto LABEL_39;
        }
        if ( *(_WORD *)&v8[2].bDescriptorType )
        {
          if ( *(unsigned __int16 *)&v8[2].bDescriptorType <= 2u )
          {
            v21 = KSDATAFORMAT_SUBTYPE_PCM;
            goto LABEL_39;
          }
          switch ( v20 )
          {
            case 3u:
              v21 = KSDATAFORMAT_SUBTYPE_IEEE_FLOAT;
              goto LABEL_39;
            case 4u:
              v21 = (GUID)KSDATAFORMAT_SUBTYPE_ALAW;
              goto LABEL_39;
            case 5u:
              v21 = (GUID)KSDATAFORMAT_SUBTYPE_MULAW;
LABEL_39:
              *(GUID *)(a3 + 32) = v21;
              *(_QWORD *)a3 = 88LL;
              *(_QWORD *)(a3 + 8) = 0LL;
              *(GUID *)(a3 + 16) = KSDATAFORMAT_TYPE_AUDIO;
              *(GUID *)(a3 + 48) = KSDATAFORMAT_SPECIFIER_WAVEFORMATEX;
              v25 = &a1->bLength + a1->wTotalLength;
              v26 = *(_WORD *)&v8[2].bDescriptorType & 0xF000;
              if ( !v26 )
              {
                *(_DWORD *)(a3 + 64) = p_bLength[4];
                *(_DWORD *)(a3 + 68) = 8 * p_bLength[5];
                *(_DWORD *)(a3 + 72) = 8 * p_bLength[5];
                v27 = *(_WORD *)&v8[2].bDescriptorType & 0xF000;
                if ( *p_bLength < 8u || &p_bLength[*p_bLength] > v25 )
                  goto LABEL_70;
                if ( v27 )
                {
                  if ( v27 == 4096 )
                  {
LABEL_63:
                    v33 = p_bLength[8];
LABEL_66:
                    if ( v33 )
                      v34 = 3 * (unsigned int)v33 + 8;
                    else
                      v34 = 14LL;
                    v30 = &p_bLength[v34] <= v25;
                    goto LABEL_71;
                  }
LABEL_64:
                  if ( v27 == 0x2000 )
                    goto LABEL_65;
LABEL_70:
                  v30 = 0;
LABEL_71:
                  v31 = (unsigned __int64)(p_bLength + 8);
                  v32 = p_bLength[7];
LABEL_72:
                  v35 = v31 & -(__int64)v30;
                  if ( v35 )
                  {
                    v37 = *(unsigned __int8 *)(v31 & -(__int64)v30)
                        + ((*(unsigned __int8 *)((v31 & -(__int64)v30) + 1)
                          + (*(unsigned __int8 *)((v31 & -(__int64)v30) + 2) << 8)) << 8);
                    *(_DWORD *)(a3 + 76) = v37;
                    *(_DWORD *)(a3 + 80) = v37;
                    *(_DWORD *)(a3 + 108) = v32;
                    if ( v32 )
                    {
                      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v32, 0x41627845u);
                      *(_QWORD *)(a3 + 120) = PoolWithTag;
                      if ( PoolWithTag )
                      {
                        *PoolWithTag = *(_DWORD *)(a3 + 76);
                        if ( v32 > 1 )
                        {
                          v39 = 4LL;
                          v40 = v32 - 1;
                          v41 = (unsigned __int8 *)(v35 + 4);
                          do
                          {
                            v42 = *(v41 - 1) + ((*v41 + (v41[1] << 8)) << 8);
                            *(_DWORD *)(v39 + *(_QWORD *)(a3 + 120)) = v42;
                            if ( v42 < *(_DWORD *)(a3 + 76) )
                              *(_DWORD *)(a3 + 76) = v42;
                            if ( v42 > *(_DWORD *)(a3 + 80) )
                              *(_DWORD *)(a3 + 80) = v42;
                            v41 += 3;
                            v39 += 4LL;
                            --v40;
                          }
                          while ( v40 );
                        }
                      }
                      else
                      {
                        return (unsigned int)-1073741670;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(a3 + 80) = *(unsigned __int8 *)((v31 & -(__int64)v30) + 3)
                                           + ((*(unsigned __int8 *)((v31 & -(__int64)v30) + 4)
                                             + (*(unsigned __int8 *)((v31 & -(__int64)v30) + 5) << 8)) << 8);
                    }
                    return v3;
                  }
                  return 3221225628LL;
                }
LABEL_65:
                v33 = p_bLength[7];
                goto LABEL_66;
              }
              if ( v26 != 4096 )
              {
                if ( v26 != 0x2000 )
                  return 3221225628LL;
                *(_DWORD *)(a3 + 64) = 2;
                *(_DWORD *)(a3 + 68) = 16;
                *(_DWORD *)(a3 + 72) = 16;
                v27 = *(_WORD *)&v8[2].bDescriptorType & 0xF000;
                if ( *p_bLength < 8u || &p_bLength[*p_bLength] > v25 )
                  goto LABEL_70;
                if ( v27 )
                {
                  if ( v27 == 4096 )
                    goto LABEL_63;
                  goto LABEL_64;
                }
                goto LABEL_65;
              }
              *(_QWORD *)(a3 + 64) = 6LL;
              *(_DWORD *)(a3 + 72) = 0;
              v28 = *(_WORD *)&v8[2].bDescriptorType & 0xF000;
              if ( *p_bLength >= 9u && &p_bLength[*p_bLength] <= v25 )
              {
                switch ( v28 )
                {
                  case 0:
                    goto LABEL_53;
                  case 0x1000:
                    v29 = p_bLength[8];
LABEL_54:
                    if ( v29 )
                      v12 = 3 * (v29 + 3);
                    v30 = &p_bLength[v12] <= v25;
                    goto LABEL_58;
                  case 0x2000:
LABEL_53:
                    v29 = p_bLength[7];
                    goto LABEL_54;
                }
              }
              v30 = 0;
LABEL_58:
              v31 = (unsigned __int64)(p_bLength + 9);
              v32 = p_bLength[8];
              goto LABEL_72;
          }
        }
      }
      return (unsigned int)-1073741198;
    }
  }
  return (unsigned int)-1073741438;
}
