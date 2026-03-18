/*
 * XREFs of ExpInitSystemPhase0 @ 0x14076ADE4
 * Callers:
 *     ExInitSystem @ 0x14076AC48 (ExInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     ExpRngInitializeSystem @ 0x14076B0AC (ExpRngInitializeSystem.c)
 *     ExpUpdateProductSuiteType @ 0x14076B2E0 (ExpUpdateProductSuiteType.c)
 */

char ExpInitSystemPhase0()
{
  int v0; // eax
  __int16 *v1; // r10
  __int16 *v2; // rcx
  int v3; // edx
  int v4; // r8d
  __int16 *v5; // rcx
  int v6; // edx
  int v7; // r8d
  __int16 *v8; // rcx
  int v9; // edx
  int v10; // r8d
  __int16 *v11; // rcx
  int v12; // edx
  int v13; // r8d
  __int16 *v14; // rcx
  int v15; // edx
  int v16; // r8d
  __int16 *v17; // rcx
  int v18; // edx
  int v19; // r8d
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // rcx
  char result; // al
  __int16 *v24; // rcx
  int v25; // edx
  int v26; // r8d
  __int16 *v27; // rcx
  int v28; // edx
  int v29; // r8d
  __int16 *v30; // rcx
  int v31; // edx
  int v32; // r8d
  __int16 *v33; // rcx
  int v34; // edx
  int v35; // r8d
  __int16 *v36; // rcx
  int v37; // edx
  int v38; // r8d
  __int16 *v39; // rcx
  int v40; // edx
  int v41; // r8d
  __int16 *v42; // rcx
  int v43; // edx
  int v44; // r8d
  __int16 *v45; // rcx
  int v46; // edx
  int v47; // r8d
  __int16 *v48; // rcx
  int v49; // edx
  int v50; // r8d
  __int16 *v51; // rcx
  int v52; // edx
  int v53; // r8d

  ExpTimeout = -40000000LL;
  ExpEnvironmentLock.Count = 1;
  qword_1402D61A8 = (__int64)&ExpSystemResourcesList;
  ExpSystemResourcesList = (__int64)&ExpSystemResourcesList;
  ExpEnvironmentLock.Event.Header.WaitListHead.Blink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  ExpEnvironmentLock.Event.Header.WaitListHead.Flink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  qword_1402D6128 = (__int64)&ExNPagedLookasideListHead;
  ExNPagedLookasideListHead = (__int64)&ExNPagedLookasideListHead;
  qword_1402D6138 = (__int64)&ExPagedLookasideListHead;
  ExPagedLookasideListHead = (__int64)&ExPagedLookasideListHead;
  qword_1402D62D8 = (__int64)&ExpFirmwareTableProviderListHead;
  ExpFirmwareTableProviderListHead = (__int64)&ExpFirmwareTableProviderListHead;
  ExpEnvironmentLock.Owner = 0LL;
  ExpEnvironmentLock.Contention = 0;
  LOWORD(ExpEnvironmentLock.Event.Header.Lock) = 1;
  ExpEnvironmentLock.Event.Header.Size = 6;
  ExpEnvironmentLock.Event.Header.SignalState = 0;
  ExNPagedLookasideLock = 0LL;
  ExPagedLookasideLock = 0LL;
  ExInitializeResourceLite(&ExpFirmwareTableResource);
  ExpConDrvLoadLock = 0LL;
  qword_1406FBA20 = 0LL;
  qword_1406FBAF8 = 0LL;
  if ( CmSuiteBufferType == 7 && CmSuiteBuffer )
  {
    v0 = dword_140306608;
    v1 = &CmSuiteBuffer;
    do
    {
      v2 = v1;
      do
      {
        v3 = *(unsigned __int16 *)((char *)v2 + (char *)L"Small Business" - (char *)v1);
        v4 = (unsigned __int16)*v2 - v3;
        if ( v4 )
          break;
        ++v2;
      }
      while ( v3 );
      if ( v4 )
      {
        v5 = v1;
        do
        {
          v6 = *(unsigned __int16 *)((char *)v5 + (char *)L"Small Business(Restricted)" - (char *)v1);
          v7 = (unsigned __int16)*v5 - v6;
          if ( v7 )
            break;
          ++v5;
        }
        while ( v6 );
        if ( v7 )
        {
          v8 = v1;
          do
          {
            v9 = *(unsigned __int16 *)((char *)v8 + (char *)L"Enterprise" - (char *)v1);
            v10 = (unsigned __int16)*v8 - v9;
            if ( v10 )
              break;
            ++v8;
          }
          while ( v9 );
          if ( v10 )
          {
            v11 = v1;
            do
            {
              v12 = *(unsigned __int16 *)((char *)v11 + (char *)L"CommunicationServer" - (char *)v1);
              v13 = (unsigned __int16)*v11 - v12;
              if ( v13 )
                break;
              ++v11;
            }
            while ( v12 );
            if ( v13 )
            {
              v14 = v1;
              do
              {
                v15 = *(unsigned __int16 *)((char *)v14 + (char *)L"BackOffice" - (char *)v1);
                v16 = (unsigned __int16)*v14 - v15;
                if ( v16 )
                  break;
                ++v14;
              }
              while ( v15 );
              if ( v16 )
              {
                v17 = v1;
                do
                {
                  v18 = *(unsigned __int16 *)((char *)v17 + (char *)L"Terminal Server" - (char *)v1);
                  v19 = (unsigned __int16)*v17 - v18;
                  if ( v19 )
                    break;
                  ++v17;
                }
                while ( v18 );
                if ( v19 )
                {
                  v24 = v1;
                  do
                  {
                    v25 = *(unsigned __int16 *)((char *)v24 + (char *)L"EmbeddedNT" - (char *)v1);
                    v26 = (unsigned __int16)*v24 - v25;
                    if ( v26 )
                      break;
                    ++v24;
                  }
                  while ( v25 );
                  if ( v26 )
                  {
                    v27 = v1;
                    do
                    {
                      v28 = *(unsigned __int16 *)((char *)v27 + (char *)L"DataCenter" - (char *)v1);
                      v29 = (unsigned __int16)*v27 - v28;
                      if ( v29 )
                        break;
                      ++v27;
                    }
                    while ( v28 );
                    if ( v29 )
                    {
                      v30 = v1;
                      do
                      {
                        v31 = *(unsigned __int16 *)((char *)v30 + (char *)L"Personal" - (char *)v1);
                        v32 = (unsigned __int16)*v30 - v31;
                        if ( v32 )
                          break;
                        ++v30;
                      }
                      while ( v31 );
                      if ( v32 )
                      {
                        v33 = v1;
                        do
                        {
                          v34 = *(unsigned __int16 *)((char *)v33 + (char *)L"Blade" - (char *)v1);
                          v35 = (unsigned __int16)*v33 - v34;
                          if ( v35 )
                            break;
                          ++v33;
                        }
                        while ( v34 );
                        if ( v35 )
                        {
                          v36 = v1;
                          do
                          {
                            v37 = *(unsigned __int16 *)((char *)v36 + (char *)L"Embedded(Restricted)" - (char *)v1);
                            v38 = (unsigned __int16)*v36 - v37;
                            if ( v38 )
                              break;
                            ++v36;
                          }
                          while ( v37 );
                          if ( v38 )
                          {
                            v39 = v1;
                            do
                            {
                              v40 = *(unsigned __int16 *)((char *)v39 + (char *)L"Security Appliance" - (char *)v1);
                              v41 = (unsigned __int16)*v39 - v40;
                              if ( v41 )
                                break;
                              ++v39;
                            }
                            while ( v40 );
                            if ( v41 )
                            {
                              v42 = v1;
                              do
                              {
                                v43 = *(unsigned __int16 *)((char *)v42 + (char *)L"Storage Server" - (char *)v1);
                                v44 = (unsigned __int16)*v42 - v43;
                                if ( v44 )
                                  break;
                                ++v42;
                              }
                              while ( v43 );
                              if ( v44 )
                              {
                                v45 = v1;
                                do
                                {
                                  v46 = *(unsigned __int16 *)((char *)v45 + (char *)L"Compute Server" - (char *)v1);
                                  v47 = (unsigned __int16)*v45 - v46;
                                  if ( v47 )
                                    break;
                                  ++v45;
                                }
                                while ( v46 );
                                if ( v47 )
                                {
                                  v48 = v1;
                                  do
                                  {
                                    v49 = *(unsigned __int16 *)((char *)v48 + (char *)L"WH Server" - (char *)v1);
                                    v50 = (unsigned __int16)*v48 - v49;
                                    if ( v50 )
                                      break;
                                    ++v48;
                                  }
                                  while ( v49 );
                                  if ( v50 )
                                  {
                                    v51 = v1;
                                    do
                                    {
                                      v52 = *(unsigned __int16 *)((char *)v51 + (char *)L"PhoneNT" - (char *)v1);
                                      v53 = (unsigned __int16)*v51 - v52;
                                      if ( v53 )
                                        break;
                                      ++v51;
                                    }
                                    while ( v52 );
                                    if ( v53 )
                                      goto LABEL_30;
                                    v0 |= 0x10000u;
                                  }
                                  else
                                  {
                                    v0 |= 0x8000u;
                                  }
                                }
                                else
                                {
                                  v0 |= 0x4000u;
                                }
                              }
                              else
                              {
                                v0 |= 0x2000u;
                              }
                            }
                            else
                            {
                              v0 |= 0x1000u;
                            }
                          }
                          else
                          {
                            v0 |= 0x800u;
                          }
                        }
                        else
                        {
                          v0 |= 0x400u;
                        }
                      }
                      else
                      {
                        v0 |= 0x200u;
                      }
                    }
                    else
                    {
                      v0 |= 0x80u;
                    }
                  }
                  else
                  {
                    v0 |= 0x40u;
                  }
                }
                else
                {
                  v0 |= 0x10u;
                }
              }
              else
              {
                v0 |= 4u;
              }
            }
            else
            {
              v0 |= 8u;
            }
          }
          else
          {
            v0 |= 2u;
          }
        }
        else
        {
          v0 |= 0x20u;
        }
      }
      else
      {
        v0 |= 1u;
      }
      dword_140306608 = v0;
LABEL_30:
      v20 = -1LL;
      do
        ++v20;
      while ( v1[v20] );
      v1 += v20 + 1;
    }
    while ( *v1 );
  }
  ExpUpdateProductSuiteType(0LL);
  ExpRngInitializeSystem();
  v21 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v22 = (unsigned int)ExGenRandom(1);
  result = 1;
  RtlpHeapKey = v21 | v22;
  return result;
}
