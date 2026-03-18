/*
 * XREFs of GetRegistrySettings @ 0x1C000D7E4
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001570 (NVMeHwFindAdapter.c)
 * Callees:
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C000D5EC (ReadMultiSzRegistryValueAndCompareId.c)
 *     __security_check_cookie @ 0x1C000E9C0 (__security_check_cookie.c)
 *     memset @ 0x1C000EE00 (memset.c)
 */

char __fastcall GetRegistrySettings(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // r9
  unsigned int v4; // edx
  __int64 i; // r8
  char v6; // cl
  unsigned int v7; // ecx
  __int64 j; // rdx
  char v9; // al
  unsigned int v10; // ecx
  __int64 k; // rdx
  char v12; // al
  unsigned int v13; // eax
  char *v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r8
  void *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r8
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  unsigned int v40; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+54h] [rbp-ACh] BYREF
  void *v42; // [rsp+60h] [rbp-A0h] BYREF
  char v43[32]; // [rsp+68h] [rbp-98h] BYREF
  char v44[16]; // [rsp+88h] [rbp-78h] BYREF
  char v45[16]; // [rsp+98h] [rbp-68h] BYREF
  char v46[16]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-48h] BYREF
  char v48[24]; // [rsp+C0h] [rbp-40h] BYREF
  char v49[24]; // [rsp+D8h] [rbp-28h] BYREF
  char v50[24]; // [rsp+F0h] [rbp-10h] BYREF
  char v51[24]; // [rsp+108h] [rbp+8h] BYREF
  char v52[24]; // [rsp+120h] [rbp+20h] BYREF
  char v53[24]; // [rsp+138h] [rbp+38h] BYREF
  char v54[24]; // [rsp+150h] [rbp+50h] BYREF
  char v55[24]; // [rsp+168h] [rbp+68h] BYREF
  char v56[24]; // [rsp+180h] [rbp+80h] BYREF
  char v57[32]; // [rsp+198h] [rbp+98h] BYREF
  char v58[32]; // [rsp+1B8h] [rbp+B8h] BYREF
  char v59[32]; // [rsp+1D8h] [rbp+D8h] BYREF
  char v60[32]; // [rsp+1F8h] [rbp+F8h] BYREF
  char v61[24]; // [rsp+218h] [rbp+118h] BYREF
  char v62[32]; // [rsp+230h] [rbp+130h] BYREF
  char v63[16]; // [rsp+250h] [rbp+150h] BYREF
  char v64[16]; // [rsp+260h] [rbp+160h] BYREF
  char v65[16]; // [rsp+270h] [rbp+170h] BYREF
  char v66[24]; // [rsp+280h] [rbp+180h] BYREF

  strcpy(v43, "VEN_vvvv&DEV_dddd&REV_rr");
  strcpy(v63, "MaxTransferSize");
  strcpy(v49, "IoSubmissionQueueCount");
  strcpy(v48, "IoCompletionQueueCount");
  strcpy(v66, "InterruptCoalescingTime");
  strcpy(v45, "IoQueueDepth");
  strcpy(v57, "InterruptCoalescingEntry");
  strcpy(v54, "ArbitrationBurst");
  strcpy(v62, "ContiguousMemoryFromAnyNode");
  strcpy(v65, "ShutdownTimeout");
  Size = 512LL;
  strcpy(v56, "DisableDeallocate");
  strcpy(v50, "DeallocateMaxLbaCount");
  strcpy(v61, "ControllerBasicInit");
  strcpy(v44, "AsyncEventMask");
  strcpy(v46, "IdlePowerMode");
  v47 = 0x657A6953676F4CLL;
  strcpy(v64, "DiagnosticFlags");
  strcpy(v55, "IoStripeAlignment");
  strcpy(v52, "MedPowerFxIdleTimeout");
  strcpy(v58, "LowestPowerFxIdleTimeout");
  strcpy(v53, "MedPowerD3IdleTimeout");
  LOBYTE(v2) = aLowestpowerres[24];
  strcpy(v60, "LowestPowerD3IdleTimeout");
  strcpy(v51, "MedPowerResumeLatency");
  strcpy(v59, "LowestPowerResumeLatency");
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 52) &= 0xFFFFFFF8;
    *(_QWORD *)(a1 + 28) = 0LL;
    *(_DWORD *)(a1 + 80) = -1;
    *(_DWORD *)(a1 + 84) = -1;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 16711680;
    *(_QWORD *)(a1 + 44) = 0LL;
    *(_BYTE *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 60) = 0;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_DWORD *)(a1 + 64) = 100;
    *(_DWORD *)(a1 + 68) = 50;
    *(_DWORD *)(a1 + 72) = 3000;
    *(_DWORD *)(a1 + 76) = 1000;
    v2 = StorPortAllocateRegistryBuffer(a1, &Size);
    v42 = (void *)v2;
    v3 = (void *)v2;
    if ( v2 )
    {
      v4 = *(unsigned __int16 *)(a1 + 4);
      for ( i = 3LL; i >= 0; --i )
      {
        v6 = v4;
        v4 >>= 4;
        v43[i + 4] = `HexFromUshort'::`2'::hexDigits[v6 & 0xF];
      }
      v7 = *(unsigned __int16 *)(a1 + 6);
      for ( j = 3LL; j >= 0; --j )
      {
        v9 = v7;
        v7 >>= 4;
        v43[j + 13] = `HexFromUshort'::`2'::hexDigits[v9 & 0xF];
      }
      v10 = *(unsigned __int8 *)(a1 + 8);
      for ( k = 1LL; k >= 0; --k )
      {
        v12 = v10;
        v10 >>= 4;
        v43[k + 22] = `HexFromUshort'::`2'::hexDigits[v12 & 0xF];
      }
      v13 = 0;
      v14 = v43;
      v15 = 29;
      do
      {
        if ( !*v14 )
          break;
        ++v13;
        ++v14;
      }
      while ( v13 < 0x1D );
      if ( v13 < 0x1D )
        v15 = v13;
      HIDWORD(Size) = Size;
      if ( (Size & 3) != 0 )
      {
        if ( (_DWORD)Size )
          memset(v3, 0, (unsigned int)Size);
      }
      else if ( (unsigned int)Size >> 2 )
      {
        memset(v3, 0, 4LL * ((unsigned int)Size >> 2));
      }
      v40 = 0;
      LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                     a1,
                     (__int64)v63,
                     i,
                     (__int64 *)&v42,
                     (unsigned int *)&Size,
                     (unsigned int *)&Size + 1,
                     (__int64)v43,
                     v15,
                     &v40);
      if ( (_BYTE)v2 == 1 )
      {
        LODWORD(v2) = v40;
        if ( v40 )
        {
          if ( v40 > 0x800 )
            LODWORD(v2) = 2048;
          LODWORD(v2) = (_DWORD)v2 << 10;
          *(_DWORD *)(a1 + 28) = v2;
        }
      }
      if ( v42 )
      {
        HIDWORD(Size) = Size;
        if ( (Size & 3) != 0 )
        {
          if ( (_DWORD)Size )
            memset(v42, 0, (unsigned int)Size);
        }
        else if ( (unsigned int)Size >> 2 )
        {
          memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
        }
        v40 = 0;
        LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                       a1,
                       (__int64)v45,
                       v16,
                       (__int64 *)&v42,
                       (unsigned int *)&Size,
                       (unsigned int *)&Size + 1,
                       (__int64)v43,
                       v15,
                       &v40);
        if ( (_BYTE)v2 == 1 )
        {
          LOBYTE(v2) = v40;
          if ( v40 )
            *(_DWORD *)(a1 + 32) = v40;
        }
        if ( v42 )
        {
          HIDWORD(Size) = Size;
          if ( (Size & 3) != 0 )
          {
            if ( (_DWORD)Size )
              memset(v42, 0, (unsigned int)Size);
          }
          else if ( (unsigned int)Size >> 2 )
          {
            memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
          }
          v40 = 0;
          LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                         a1,
                         (__int64)v49,
                         v17,
                         (__int64 *)&v42,
                         (unsigned int *)&Size,
                         (unsigned int *)&Size + 1,
                         (__int64)v43,
                         v15,
                         &v40);
          if ( (_BYTE)v2 == 1 )
          {
            LOBYTE(v2) = v40;
            if ( v40 )
              *(_WORD *)(a1 + 36) = v40;
          }
          if ( v42 )
          {
            HIDWORD(Size) = Size;
            if ( (Size & 3) != 0 )
            {
              if ( (_DWORD)Size )
                memset(v42, 0, (unsigned int)Size);
            }
            else if ( (unsigned int)Size >> 2 )
            {
              memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
            }
            v40 = 0;
            LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                           a1,
                           (__int64)v48,
                           v18,
                           (__int64 *)&v42,
                           (unsigned int *)&Size,
                           (unsigned int *)&Size + 1,
                           (__int64)v43,
                           v15,
                           &v40);
            if ( (_BYTE)v2 == 1 )
            {
              LOBYTE(v2) = v40;
              if ( v40 )
                *(_WORD *)(a1 + 38) = v40;
            }
            if ( v42 )
            {
              HIDWORD(Size) = Size;
              if ( (Size & 3) != 0 )
              {
                if ( (_DWORD)Size )
                  memset(v42, 0, (unsigned int)Size);
              }
              else if ( (unsigned int)Size >> 2 )
              {
                memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
              }
              v40 = 0;
              LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                             a1,
                             (__int64)v66,
                             v19,
                             (__int64 *)&v42,
                             (unsigned int *)&Size,
                             (unsigned int *)&Size + 1,
                             (__int64)v43,
                             v15,
                             &v40);
              if ( (_BYTE)v2 == 1 )
              {
                LOBYTE(v2) = v40;
                if ( v40 )
                  *(_BYTE *)(a1 + 40) = v40;
              }
              if ( v42 )
              {
                HIDWORD(Size) = Size;
                if ( (Size & 3) != 0 )
                {
                  if ( (_DWORD)Size )
                    memset(v42, 0, (unsigned int)Size);
                }
                else if ( (unsigned int)Size >> 2 )
                {
                  memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                }
                v40 = 0;
                LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                               a1,
                               (__int64)v57,
                               v20,
                               (__int64 *)&v42,
                               (unsigned int *)&Size,
                               (unsigned int *)&Size + 1,
                               (__int64)v43,
                               v15,
                               &v40);
                if ( (_BYTE)v2 == 1 )
                {
                  LOBYTE(v2) = v40;
                  if ( v40 )
                    *(_BYTE *)(a1 + 41) = v40;
                }
                if ( v42 )
                {
                  HIDWORD(Size) = Size;
                  if ( (Size & 3) != 0 )
                  {
                    if ( (_DWORD)Size )
                      memset(v42, 0, (unsigned int)Size);
                  }
                  else if ( (unsigned int)Size >> 2 )
                  {
                    memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                  }
                  v40 = 0;
                  LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                 a1,
                                 (__int64)v54,
                                 v21,
                                 (__int64 *)&v42,
                                 (unsigned int *)&Size,
                                 (unsigned int *)&Size + 1,
                                 (__int64)v43,
                                 v15,
                                 &v40);
                  if ( (_BYTE)v2 == 1 )
                  {
                    LOBYTE(v2) = v40;
                    if ( v40 )
                      *(_BYTE *)(a1 + 42) = v40;
                  }
                  if ( v42 )
                  {
                    HIDWORD(Size) = Size;
                    if ( (Size & 3) != 0 )
                    {
                      if ( (_DWORD)Size )
                        memset(v42, 0, (unsigned int)Size);
                    }
                    else if ( (unsigned int)Size >> 2 )
                    {
                      memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                    }
                    v40 = 0;
                    LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                   a1,
                                   (__int64)v62,
                                   v22,
                                   (__int64 *)&v42,
                                   (unsigned int *)&Size,
                                   (unsigned int *)&Size + 1,
                                   (__int64)v43,
                                   v15,
                                   &v40);
                    if ( (_BYTE)v2 == 1 && v40 )
                      *(_DWORD *)(a1 + 52) |= 2u;
                    if ( v42 )
                    {
                      HIDWORD(Size) = Size;
                      if ( (Size & 3) != 0 )
                      {
                        if ( (_DWORD)Size )
                          memset(v42, 0, (unsigned int)Size);
                      }
                      else if ( (unsigned int)Size >> 2 )
                      {
                        memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                      }
                      v40 = 0;
                      LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                     a1,
                                     (__int64)v65,
                                     v23,
                                     (__int64 *)&v42,
                                     (unsigned int *)&Size,
                                     (unsigned int *)&Size + 1,
                                     (__int64)v43,
                                     v15,
                                     &v40);
                      if ( (_BYTE)v2 == 1 && v40 )
                      {
                        LOBYTE(v2) = v40;
                        if ( v40 > 0xFF )
                          LOBYTE(v2) = -1;
                        *(_BYTE *)(a1 + 43) = v2;
                      }
                      if ( v42 )
                      {
                        HIDWORD(Size) = Size;
                        if ( (Size & 3) != 0 )
                        {
                          if ( (_DWORD)Size )
                            memset(v42, 0, (unsigned int)Size);
                        }
                        else if ( (unsigned int)Size >> 2 )
                        {
                          memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                        }
                        v40 = 0;
                        LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                       a1,
                                       (__int64)v50,
                                       v24,
                                       (__int64 *)&v42,
                                       (unsigned int *)&Size,
                                       (unsigned int *)&Size + 1,
                                       (__int64)v43,
                                       v15,
                                       &v40);
                        if ( (_BYTE)v2 == 1 )
                        {
                          LOBYTE(v2) = v40;
                          if ( v40 )
                            *(_DWORD *)(a1 + 44) = v40;
                        }
                        if ( v42 )
                        {
                          HIDWORD(Size) = Size;
                          if ( (Size & 3) != 0 )
                          {
                            if ( (_DWORD)Size )
                              memset(v42, 0, (unsigned int)Size);
                          }
                          else if ( (unsigned int)Size >> 2 )
                          {
                            memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                          }
                          v40 = 0;
                          LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (__int64)v56,
                                         v25,
                                         (__int64 *)&v42,
                                         (unsigned int *)&Size,
                                         (unsigned int *)&Size + 1,
                                         (__int64)v43,
                                         v15,
                                         &v40);
                          if ( (_BYTE)v2 == 1 && v40 )
                            *(_DWORD *)(a1 + 52) |= 1u;
                          if ( v42 )
                          {
                            HIDWORD(Size) = Size;
                            if ( (Size & 3) != 0 )
                            {
                              if ( (_DWORD)Size )
                                memset(v42, 0, (unsigned int)Size);
                            }
                            else if ( (unsigned int)Size >> 2 )
                            {
                              memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                            }
                            v40 = 0;
                            LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (__int64)v61,
                                           v26,
                                           (__int64 *)&v42,
                                           (unsigned int *)&Size,
                                           (unsigned int *)&Size + 1,
                                           (__int64)v43,
                                           v15,
                                           &v40);
                            if ( (_BYTE)v2 == 1 && v40 )
                              *(_DWORD *)(a1 + 52) |= 4u;
                            if ( v42 )
                            {
                              HIDWORD(Size) = Size;
                              if ( (Size & 3) != 0 )
                              {
                                if ( (_DWORD)Size )
                                  memset(v42, 0, (unsigned int)Size);
                              }
                              else if ( (unsigned int)Size >> 2 )
                              {
                                memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                              }
                              v40 = 0;
                              LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (__int64)v44,
                                             v27,
                                             (__int64 *)&v42,
                                             (unsigned int *)&Size,
                                             (unsigned int *)&Size + 1,
                                             (__int64)v43,
                                             v15,
                                             &v40);
                              if ( (_BYTE)v2 == 1 )
                              {
                                LOBYTE(v2) = v40;
                                if ( v40 )
                                {
                                  LOBYTE(v2) = v40 & 0x1F;
                                  *(_BYTE *)(a1 + 56) = v40 & 0x1F;
                                }
                              }
                              if ( v42 )
                              {
                                HIDWORD(Size) = Size;
                                if ( (Size & 3) != 0 )
                                {
                                  if ( (_DWORD)Size )
                                    memset(v42, 0, (unsigned int)Size);
                                }
                                else if ( (unsigned int)Size >> 2 )
                                {
                                  memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                                }
                                v40 = 0;
                                LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (__int64)v46,
                                               v28,
                                               (__int64 *)&v42,
                                               (unsigned int *)&Size,
                                               (unsigned int *)&Size + 1,
                                               (__int64)v43,
                                               v15,
                                               &v40);
                                if ( (_BYTE)v2 == 1 )
                                {
                                  LOBYTE(v2) = v40;
                                  if ( v40 < 6 )
                                    *(_DWORD *)(a1 + 60) = v40;
                                }
                                if ( v42 )
                                {
                                  HIDWORD(Size) = Size;
                                  if ( (Size & 3) != 0 )
                                  {
                                    if ( (_DWORD)Size )
                                      memset(v42, 0, (unsigned int)Size);
                                  }
                                  else if ( (unsigned int)Size >> 2 )
                                  {
                                    memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                                  }
                                  v40 = 0;
                                  if ( ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (__int64)v64,
                                         v29,
                                         (__int64 *)&v42,
                                         (unsigned int *)&Size,
                                         (unsigned int *)&Size + 1,
                                         (__int64)v43,
                                         v15,
                                         &v40) == 1
                                    && v40 )
                                  {
                                    *(_DWORD *)(a1 + 88) = v40;
                                  }
                                  LODWORD(v2) = *(_DWORD *)(a1 + 88);
                                  if ( (v2 & 2) != 0 )
                                    *(_DWORD *)(a1 + 92) = 0x100000;
                                  if ( v42 )
                                  {
                                    HIDWORD(Size) = Size;
                                    if ( (Size & 3) != 0 )
                                    {
                                      if ( (_DWORD)Size )
                                        memset(v42, 0, (unsigned int)Size);
                                    }
                                    else if ( (unsigned int)Size >> 2 )
                                    {
                                      memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                                    }
                                    v40 = 0;
                                    if ( ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (__int64)&v47,
                                           v30,
                                           (__int64 *)&v42,
                                           (unsigned int *)&Size,
                                           (unsigned int *)&Size + 1,
                                           (__int64)v43,
                                           v15,
                                           &v40) == 1
                                      && v40 )
                                    {
                                      *(_DWORD *)(a1 + 92) = v40 << 10;
                                    }
                                    LODWORD(v2) = -1431655765 * *(_DWORD *)(a1 + 92);
                                    v32 = v42;
                                    *(_DWORD *)(a1 + 11424) = *(_DWORD *)(a1 + 92) / 0x18u;
                                    if ( v32 )
                                    {
                                      HIDWORD(Size) = Size;
                                      if ( (Size & 3) != 0 )
                                      {
                                        if ( (_DWORD)Size )
                                          memset(v32, 0, (unsigned int)Size);
                                      }
                                      else if ( (unsigned int)Size >> 2 )
                                      {
                                        memset(v32, 0, 4LL * ((unsigned int)Size >> 2));
                                      }
                                      v40 = 0;
                                      LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                                     a1,
                                                     (__int64)v55,
                                                     v31,
                                                     (__int64 *)&v42,
                                                     (unsigned int *)&Size,
                                                     (unsigned int *)&Size + 1,
                                                     (__int64)v43,
                                                     v15,
                                                     &v40);
                                      if ( (_BYTE)v2 == 1 )
                                      {
                                        LOBYTE(v2) = v40;
                                        if ( v40 )
                                        {
                                          LODWORD(v2) = v40 << 10;
                                          if ( ((v40 << 10) & 0xFFF) == 0 )
                                            *(_DWORD *)(a1 + 48) = v2;
                                        }
                                      }
                                      if ( v42 )
                                      {
                                        HIDWORD(Size) = Size;
                                        if ( (Size & 3) != 0 )
                                        {
                                          if ( (_DWORD)Size )
                                            memset(v42, 0, (unsigned int)Size);
                                        }
                                        else if ( (unsigned int)Size >> 2 )
                                        {
                                          memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                                        }
                                        v40 = 0;
                                        LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                                       a1,
                                                       (__int64)v52,
                                                       v33,
                                                       (__int64 *)&v42,
                                                       (unsigned int *)&Size,
                                                       (unsigned int *)&Size + 1,
                                                       (__int64)v43,
                                                       v15,
                                                       &v40);
                                        if ( (_BYTE)v2 == 1 )
                                        {
                                          LOBYTE(v2) = v40;
                                          *(_DWORD *)(a1 + 64) = v40;
                                        }
                                        if ( v42 )
                                        {
                                          HIDWORD(Size) = Size;
                                          if ( (Size & 3) != 0 )
                                          {
                                            if ( (_DWORD)Size )
                                              memset(v42, 0, (unsigned int)Size);
                                          }
                                          else if ( (unsigned int)Size >> 2 )
                                          {
                                            memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                                          }
                                          v40 = 0;
                                          LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                                         a1,
                                                         (__int64)v58,
                                                         v34,
                                                         (__int64 *)&v42,
                                                         (unsigned int *)&Size,
                                                         (unsigned int *)&Size + 1,
                                                         (__int64)v43,
                                                         v15,
                                                         &v40);
                                          if ( (_BYTE)v2 == 1 )
                                          {
                                            LOBYTE(v2) = v40;
                                            *(_DWORD *)(a1 + 68) = v40;
                                          }
                                          if ( v42 )
                                          {
                                            HIDWORD(Size) = Size;
                                            if ( (Size & 3) != 0 )
                                            {
                                              if ( (_DWORD)Size )
                                                memset(v42, 0, (unsigned int)Size);
                                            }
                                            else if ( (unsigned int)Size >> 2 )
                                            {
                                              memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                                            }
                                            v40 = 0;
                                            LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                                           a1,
                                                           (__int64)v53,
                                                           v35,
                                                           (__int64 *)&v42,
                                                           (unsigned int *)&Size,
                                                           (unsigned int *)&Size + 1,
                                                           (__int64)v43,
                                                           v15,
                                                           &v40);
                                            if ( (_BYTE)v2 == 1 )
                                            {
                                              LOBYTE(v2) = v40;
                                              *(_DWORD *)(a1 + 72) = v40;
                                            }
                                            if ( v42 )
                                            {
                                              HIDWORD(Size) = Size;
                                              if ( (Size & 3) != 0 )
                                              {
                                                if ( (_DWORD)Size )
                                                  memset(v42, 0, (unsigned int)Size);
                                              }
                                              else if ( (unsigned int)Size >> 2 )
                                              {
                                                memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                                              }
                                              v40 = 0;
                                              LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                                             a1,
                                                             (__int64)v60,
                                                             v36,
                                                             (__int64 *)&v42,
                                                             (unsigned int *)&Size,
                                                             (unsigned int *)&Size + 1,
                                                             (__int64)v43,
                                                             v15,
                                                             &v40);
                                              if ( (_BYTE)v2 == 1 )
                                              {
                                                LOBYTE(v2) = v40;
                                                *(_DWORD *)(a1 + 76) = v40;
                                              }
                                              if ( v42 )
                                              {
                                                HIDWORD(Size) = Size;
                                                if ( (Size & 3) != 0 )
                                                {
                                                  if ( (_DWORD)Size )
                                                    memset(v42, 0, (unsigned int)Size);
                                                }
                                                else if ( (unsigned int)Size >> 2 )
                                                {
                                                  memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                                                }
                                                v40 = 0;
                                                LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                                               a1,
                                                               (__int64)v51,
                                                               v37,
                                                               (__int64 *)&v42,
                                                               (unsigned int *)&Size,
                                                               (unsigned int *)&Size + 1,
                                                               (__int64)v43,
                                                               v15,
                                                               &v40);
                                                if ( (_BYTE)v2 == 1 )
                                                {
                                                  LOBYTE(v2) = v40;
                                                  *(_DWORD *)(a1 + 80) = v40;
                                                }
                                                if ( v42 )
                                                {
                                                  HIDWORD(Size) = Size;
                                                  if ( (Size & 3) != 0 )
                                                  {
                                                    if ( (_DWORD)Size )
                                                      memset(v42, 0, (unsigned int)Size);
                                                  }
                                                  else if ( (unsigned int)Size >> 2 )
                                                  {
                                                    memset(v42, 0, 4LL * ((unsigned int)Size >> 2));
                                                  }
                                                  v40 = 0;
                                                  LOBYTE(v2) = ReadMultiSzRegistryValueAndCompareId(
                                                                 a1,
                                                                 (__int64)v59,
                                                                 v38,
                                                                 (__int64 *)&v42,
                                                                 (unsigned int *)&Size,
                                                                 (unsigned int *)&Size + 1,
                                                                 (__int64)v43,
                                                                 v15,
                                                                 &v40);
                                                  if ( (_BYTE)v2 == 1 )
                                                  {
                                                    LOBYTE(v2) = v40;
                                                    *(_DWORD *)(a1 + 84) = v40;
                                                  }
                                                  if ( v42 )
                                                    LOBYTE(v2) = StorPortFreeRegistryBuffer(a1, v42);
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
  return v2;
}
