/*
 * XREFs of GetRegistrySettings @ 0x1C000EF68
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00048B0 (NVMeHwFindAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     NVMeZeroMemory @ 0x1C000505C (NVMeZeroMemory.c)
 *     GetStringLength @ 0x1C000FA50 (GetStringLength.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C000FA6C (ReadMultiSzRegistryValueAndCompareId.c)
 *     UlongToHex @ 0x1C000FC08 (UlongToHex.c)
 */

char __fastcall GetRegistrySettings(__int64 a1)
{
  __int64 v1; // rax
  int StringLength; // edi
  void *v4; // r10
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  void *v21; // rcx
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  unsigned int v31; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp+Bh] BYREF
  unsigned int v33; // [rsp+60h] [rbp+Fh] BYREF
  void *v34; // [rsp+68h] [rbp+17h] BYREF
  char v35[32]; // [rsp+70h] [rbp+1Fh] BYREF

  LOBYTE(v1) = aVenVvvvDevDddd[24];
  strcpy(v35, "VEN_vvvv&DEV_dddd&REV_rr");
  v32 = 512;
  v33 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 52) &= 0xFFFFFFF8;
    *(_QWORD *)(a1 + 28) = 0LL;
    *(_DWORD *)(a1 + 64) = -1;
    *(_DWORD *)(a1 + 80) = -1;
    *(_DWORD *)(a1 + 84) = -1;
    *(_DWORD *)(a1 + 96) = -1;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 16711680;
    *(_QWORD *)(a1 + 44) = 0LL;
    *(_BYTE *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 60) = 0;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_DWORD *)(a1 + 68) = 50;
    *(_DWORD *)(a1 + 72) = 3000;
    *(_DWORD *)(a1 + 76) = 1000;
    v1 = StorPortAllocateRegistryBuffer(a1, &v32);
    v34 = (void *)v1;
    if ( v1 )
    {
      UlongToHex(&v35[4], *(unsigned __int16 *)(a1 + 4), 4LL);
      UlongToHex(&v35[13], *(unsigned __int16 *)(a1 + 6), 4LL);
      UlongToHex(&v35[22], *(unsigned __int8 *)(a1 + 8), 2LL);
      StringLength = GetStringLength(v35, 29LL);
      v33 = v32;
      NVMeZeroMemory(v4, v32);
      v31 = 0;
      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                     a1,
                     (unsigned int)"MaxTransferSize",
                     v5,
                     (unsigned int)&v34,
                     (__int64)&v32,
                     (__int64)&v33,
                     (__int64)v35,
                     StringLength,
                     (__int64)&v31);
      if ( (_BYTE)v1 == 1 )
      {
        LODWORD(v1) = v31;
        if ( v31 )
        {
          if ( v31 > 0x800 )
            LODWORD(v1) = 2048;
          LODWORD(v1) = (_DWORD)v1 << 10;
          *(_DWORD *)(a1 + 28) = v1;
        }
      }
      if ( v34 )
      {
        v33 = v32;
        NVMeZeroMemory(v34, v32);
        v31 = 0;
        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                       a1,
                       (unsigned int)"IoQueueDepth",
                       v6,
                       (unsigned int)&v34,
                       (__int64)&v32,
                       (__int64)&v33,
                       (__int64)v35,
                       StringLength,
                       (__int64)&v31);
        if ( (_BYTE)v1 == 1 )
        {
          LOBYTE(v1) = v31;
          if ( v31 )
            *(_DWORD *)(a1 + 32) = v31;
        }
        if ( v34 )
        {
          v33 = v32;
          NVMeZeroMemory(v34, v32);
          v31 = 0;
          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                         a1,
                         (unsigned int)"IoSubmissionQueueCount",
                         v7,
                         (unsigned int)&v34,
                         (__int64)&v32,
                         (__int64)&v33,
                         (__int64)v35,
                         StringLength,
                         (__int64)&v31);
          if ( (_BYTE)v1 == 1 )
          {
            LOBYTE(v1) = v31;
            if ( v31 )
              *(_WORD *)(a1 + 36) = v31;
          }
          if ( v34 )
          {
            v33 = v32;
            NVMeZeroMemory(v34, v32);
            v31 = 0;
            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                           a1,
                           (unsigned int)"IoCompletionQueueCount",
                           v8,
                           (unsigned int)&v34,
                           (__int64)&v32,
                           (__int64)&v33,
                           (__int64)v35,
                           StringLength,
                           (__int64)&v31);
            if ( (_BYTE)v1 == 1 )
            {
              LOBYTE(v1) = v31;
              if ( v31 )
                *(_WORD *)(a1 + 38) = v31;
            }
            if ( v34 )
            {
              v33 = v32;
              NVMeZeroMemory(v34, v32);
              v31 = 0;
              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                             a1,
                             (unsigned int)"InterruptCoalescingTime",
                             v9,
                             (unsigned int)&v34,
                             (__int64)&v32,
                             (__int64)&v33,
                             (__int64)v35,
                             StringLength,
                             (__int64)&v31);
              if ( (_BYTE)v1 == 1 )
              {
                LOBYTE(v1) = v31;
                if ( v31 )
                  *(_BYTE *)(a1 + 40) = v31;
              }
              if ( v34 )
              {
                v33 = v32;
                NVMeZeroMemory(v34, v32);
                v31 = 0;
                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                               a1,
                               (unsigned int)"InterruptCoalescingEntry",
                               v10,
                               (unsigned int)&v34,
                               (__int64)&v32,
                               (__int64)&v33,
                               (__int64)v35,
                               StringLength,
                               (__int64)&v31);
                if ( (_BYTE)v1 == 1 )
                {
                  LOBYTE(v1) = v31;
                  if ( v31 )
                    *(_BYTE *)(a1 + 41) = v31;
                }
                if ( v34 )
                {
                  v33 = v32;
                  NVMeZeroMemory(v34, v32);
                  v31 = 0;
                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                 a1,
                                 (unsigned int)"ArbitrationBurst",
                                 v11,
                                 (unsigned int)&v34,
                                 (__int64)&v32,
                                 (__int64)&v33,
                                 (__int64)v35,
                                 StringLength,
                                 (__int64)&v31);
                  if ( (_BYTE)v1 == 1 )
                  {
                    LOBYTE(v1) = v31;
                    if ( v31 )
                      *(_BYTE *)(a1 + 42) = v31;
                  }
                  if ( v34 )
                  {
                    v33 = v32;
                    NVMeZeroMemory(v34, v32);
                    v31 = 0;
                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                   a1,
                                   (unsigned int)"ContiguousMemoryFromAnyNode",
                                   v12,
                                   (unsigned int)&v34,
                                   (__int64)&v32,
                                   (__int64)&v33,
                                   (__int64)v35,
                                   StringLength,
                                   (__int64)&v31);
                    if ( (_BYTE)v1 == 1 && v31 )
                      *(_DWORD *)(a1 + 52) |= 2u;
                    if ( v34 )
                    {
                      v33 = v32;
                      NVMeZeroMemory(v34, v32);
                      v31 = 0;
                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                     a1,
                                     (unsigned int)"ShutdownTimeout",
                                     v13,
                                     (unsigned int)&v34,
                                     (__int64)&v32,
                                     (__int64)&v33,
                                     (__int64)v35,
                                     StringLength,
                                     (__int64)&v31);
                      if ( (_BYTE)v1 == 1 )
                      {
                        LOBYTE(v1) = v31;
                        if ( v31 )
                        {
                          if ( v31 > 0xFF )
                            LOBYTE(v1) = -1;
                          *(_BYTE *)(a1 + 43) = v1;
                        }
                      }
                      if ( v34 )
                      {
                        v33 = v32;
                        NVMeZeroMemory(v34, v32);
                        v31 = 0;
                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                       a1,
                                       (unsigned int)"DeallocateMaxLbaCount",
                                       v14,
                                       (unsigned int)&v34,
                                       (__int64)&v32,
                                       (__int64)&v33,
                                       (__int64)v35,
                                       StringLength,
                                       (__int64)&v31);
                        if ( (_BYTE)v1 == 1 )
                        {
                          LOBYTE(v1) = v31;
                          if ( v31 )
                            *(_DWORD *)(a1 + 44) = v31;
                        }
                        if ( v34 )
                        {
                          v33 = v32;
                          NVMeZeroMemory(v34, v32);
                          v31 = 0;
                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (unsigned int)"DisableDeallocate",
                                         v15,
                                         (unsigned int)&v34,
                                         (__int64)&v32,
                                         (__int64)&v33,
                                         (__int64)v35,
                                         StringLength,
                                         (__int64)&v31);
                          if ( (_BYTE)v1 == 1 && v31 )
                            *(_DWORD *)(a1 + 52) |= 1u;
                          if ( v34 )
                          {
                            v33 = v32;
                            NVMeZeroMemory(v34, v32);
                            v31 = 0;
                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (unsigned int)"ControllerBasicInit",
                                           v16,
                                           (unsigned int)&v34,
                                           (__int64)&v32,
                                           (__int64)&v33,
                                           (__int64)v35,
                                           StringLength,
                                           (__int64)&v31);
                            if ( (_BYTE)v1 == 1 && v31 )
                              *(_DWORD *)(a1 + 52) |= 4u;
                            if ( v34 )
                            {
                              v33 = v32;
                              NVMeZeroMemory(v34, v32);
                              v31 = 0;
                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (unsigned int)"AsyncEventMask",
                                             v17,
                                             (unsigned int)&v34,
                                             (__int64)&v32,
                                             (__int64)&v33,
                                             (__int64)v35,
                                             StringLength,
                                             (__int64)&v31);
                              if ( (_BYTE)v1 == 1 )
                              {
                                LOBYTE(v1) = v31;
                                if ( v31 )
                                {
                                  LOBYTE(v1) = v31 & 0x1F;
                                  *(_BYTE *)(a1 + 56) = v31 & 0x1F;
                                }
                              }
                              if ( v34 )
                              {
                                v33 = v32;
                                NVMeZeroMemory(v34, v32);
                                v31 = 0;
                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (unsigned int)"IdlePowerMode",
                                               v18,
                                               (unsigned int)&v34,
                                               (__int64)&v32,
                                               (__int64)&v33,
                                               (__int64)v35,
                                               StringLength,
                                               (__int64)&v31);
                                if ( (_BYTE)v1 == 1 )
                                {
                                  LOBYTE(v1) = v31;
                                  if ( v31 < 6 )
                                    *(_DWORD *)(a1 + 60) = v31;
                                }
                                if ( v34 )
                                {
                                  v33 = v32;
                                  NVMeZeroMemory(v34, v32);
                                  v31 = 0;
                                  if ( (unsigned __int8)ReadMultiSzRegistryValueAndCompareId(
                                                          a1,
                                                          (unsigned int)"DiagnosticFlags",
                                                          v19,
                                                          (unsigned int)&v34,
                                                          (__int64)&v32,
                                                          (__int64)&v33,
                                                          (__int64)v35,
                                                          StringLength,
                                                          (__int64)&v31) == 1
                                    && v31 )
                                  {
                                    *(_DWORD *)(a1 + 88) = v31;
                                  }
                                  LODWORD(v1) = *(_DWORD *)(a1 + 88);
                                  if ( (v1 & 2) != 0 )
                                    *(_DWORD *)(a1 + 92) = 0x100000;
                                  if ( v34 )
                                  {
                                    v33 = v32;
                                    NVMeZeroMemory(v34, v32);
                                    v31 = 0;
                                    if ( (unsigned __int8)ReadMultiSzRegistryValueAndCompareId(
                                                            a1,
                                                            (unsigned int)"LogSize",
                                                            v20,
                                                            (unsigned int)&v34,
                                                            (__int64)&v32,
                                                            (__int64)&v33,
                                                            (__int64)v35,
                                                            StringLength,
                                                            (__int64)&v31) == 1
                                      && v31 )
                                    {
                                      *(_DWORD *)(a1 + 92) = v31 << 10;
                                    }
                                    LODWORD(v1) = -1431655765 * *(_DWORD *)(a1 + 92);
                                    v21 = v34;
                                    *(_DWORD *)(a1 + 3248) = *(_DWORD *)(a1 + 92) / 0x18u;
                                    if ( v21 )
                                    {
                                      v33 = v32;
                                      NVMeZeroMemory(v21, v32);
                                      v31 = 0;
                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                     a1,
                                                     (unsigned int)"IoStripeAlignment",
                                                     v22,
                                                     (unsigned int)&v34,
                                                     (__int64)&v32,
                                                     (__int64)&v33,
                                                     (__int64)v35,
                                                     StringLength,
                                                     (__int64)&v31);
                                      if ( (_BYTE)v1 == 1 )
                                      {
                                        LOBYTE(v1) = v31;
                                        if ( v31 )
                                        {
                                          LODWORD(v1) = v31 << 10;
                                          if ( ((v31 << 10) & 0xFFF) == 0 )
                                            *(_DWORD *)(a1 + 48) = v1;
                                        }
                                      }
                                      if ( v34 )
                                      {
                                        v33 = v32;
                                        NVMeZeroMemory(v34, v32);
                                        v31 = 0;
                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                       a1,
                                                       (unsigned int)"MedPowerFxIdleTimeout",
                                                       v23,
                                                       (unsigned int)&v34,
                                                       (__int64)&v32,
                                                       (__int64)&v33,
                                                       (__int64)v35,
                                                       StringLength,
                                                       (__int64)&v31);
                                        if ( (_BYTE)v1 == 1 )
                                        {
                                          LOBYTE(v1) = v31;
                                          *(_DWORD *)(a1 + 64) = v31;
                                        }
                                        if ( v34 )
                                        {
                                          v33 = v32;
                                          NVMeZeroMemory(v34, v32);
                                          v31 = 0;
                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                         a1,
                                                         (unsigned int)"LowestPowerFxIdleTimeout",
                                                         v24,
                                                         (unsigned int)&v34,
                                                         (__int64)&v32,
                                                         (__int64)&v33,
                                                         (__int64)v35,
                                                         StringLength,
                                                         (__int64)&v31);
                                          if ( (_BYTE)v1 == 1 )
                                          {
                                            LOBYTE(v1) = v31;
                                            *(_DWORD *)(a1 + 68) = v31;
                                          }
                                          if ( v34 )
                                          {
                                            v33 = v32;
                                            NVMeZeroMemory(v34, v32);
                                            v31 = 0;
                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                           a1,
                                                           (unsigned int)"MedPowerD3IdleTimeout",
                                                           v25,
                                                           (unsigned int)&v34,
                                                           (__int64)&v32,
                                                           (__int64)&v33,
                                                           (__int64)v35,
                                                           StringLength,
                                                           (__int64)&v31);
                                            if ( (_BYTE)v1 == 1 )
                                            {
                                              LOBYTE(v1) = v31;
                                              *(_DWORD *)(a1 + 72) = v31;
                                            }
                                            if ( v34 )
                                            {
                                              v33 = v32;
                                              NVMeZeroMemory(v34, v32);
                                              v31 = 0;
                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                             a1,
                                                             (unsigned int)"LowestPowerD3IdleTimeout",
                                                             v26,
                                                             (unsigned int)&v34,
                                                             (__int64)&v32,
                                                             (__int64)&v33,
                                                             (__int64)v35,
                                                             StringLength,
                                                             (__int64)&v31);
                                              if ( (_BYTE)v1 == 1 )
                                              {
                                                LOBYTE(v1) = v31;
                                                *(_DWORD *)(a1 + 76) = v31;
                                              }
                                              if ( v34 )
                                              {
                                                v33 = v32;
                                                NVMeZeroMemory(v34, v32);
                                                v31 = 0;
                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                               a1,
                                                               (unsigned int)"MedPowerResumeLatency",
                                                               v27,
                                                               (unsigned int)&v34,
                                                               (__int64)&v32,
                                                               (__int64)&v33,
                                                               (__int64)v35,
                                                               StringLength,
                                                               (__int64)&v31);
                                                if ( (_BYTE)v1 == 1 )
                                                {
                                                  LOBYTE(v1) = v31;
                                                  *(_DWORD *)(a1 + 80) = v31;
                                                }
                                                if ( v34 )
                                                {
                                                  v33 = v32;
                                                  NVMeZeroMemory(v34, v32);
                                                  v31 = 0;
                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                 a1,
                                                                 (unsigned int)"LowestPowerResumeLatency",
                                                                 v28,
                                                                 (unsigned int)&v34,
                                                                 (__int64)&v32,
                                                                 (__int64)&v33,
                                                                 (__int64)v35,
                                                                 StringLength,
                                                                 (__int64)&v31);
                                                  if ( (_BYTE)v1 == 1 )
                                                  {
                                                    LOBYTE(v1) = v31;
                                                    *(_DWORD *)(a1 + 84) = v31;
                                                  }
                                                  if ( v34 )
                                                  {
                                                    v33 = v32;
                                                    NVMeZeroMemory(v34, v32);
                                                    v31 = 0;
                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                   a1,
                                                                   (unsigned int)"HostMemoryBufferBytes",
                                                                   v29,
                                                                   (unsigned int)&v34,
                                                                   (__int64)&v32,
                                                                   (__int64)&v33,
                                                                   (__int64)v35,
                                                                   StringLength,
                                                                   (__int64)&v31);
                                                    if ( (_BYTE)v1 == 1 )
                                                    {
                                                      LOBYTE(v1) = v31;
                                                      *(_DWORD *)(a1 + 96) = v31;
                                                    }
                                                    if ( v34 )
                                                      LOBYTE(v1) = StorPortFreeRegistryBuffer(a1);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
