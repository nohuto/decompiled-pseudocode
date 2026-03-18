/*
 * XREFs of VidSchiProcessIsrVSync @ 0x1C000D420
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000CBB0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C001C3D8 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     Template_pqx @ 0x1C001D444 (Template_pqx.c)
 */

__int64 __fastcall VidSchiProcessIsrVSync(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r12d
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned __int64 v13; // rbx
  __int64 v14; // r15
  LARGE_INTEGER v15; // rdx
  signed __int64 v16; // rax
  LARGE_INTEGER v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  ADAPTER_RENDER *v20; // rcx
  int v21; // eax
  ULONGLONG GpuClockCounter; // rcx
  PSLIST_ENTRY v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  PSLIST_ENTRY v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // r9d
  char v30; // r10
  char v31; // r11
  __int64 v32; // rax
  char *v33; // r8
  int v34; // edx
  int v35; // edx
  unsigned int v36; // ecx
  int v37; // edx
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  int v43; // edx
  __int64 v44; // rdx
  char *v45; // r8
  int v46; // ecx
  int v47; // ecx
  unsigned int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  __int64 v57; // rdx
  int v58; // ecx
  int v59; // ecx
  unsigned int v60; // eax
  int v61; // ecx
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // ecx
  int v66; // eax
  _QWORD *v67; // rax
  __int64 v68; // rax
  int v69; // [rsp+30h] [rbp-78h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp-68h] BYREF
  LARGE_INTEGER v72; // [rsp+48h] [rbp-60h]
  _DXGK_GPUCLOCKDATA v73; // [rsp+50h] [rbp-58h] BYREF

  v5 = *(_DWORD *)(a2 + 8);
  v6 = 0;
  v7 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1984LL);
  v69 = 0;
  v11 = *(_DWORD *)(v10 + 104);
  if ( !v11 )
  {
LABEL_5:
    v7 = -1;
    goto LABEL_6;
  }
  v10 = *(_QWORD *)(v10 + 136);
  while ( *(_DWORD *)(1016LL * v7 + v10 + 956) != v5 )
  {
    if ( ++v7 >= v11 )
      goto LABEL_5;
  }
  if ( v7 != -1 && v7 < *(_DWORD *)(a1 + 40) )
  {
    _mm_lfence();
    LODWORD(v13) = 1;
    v14 = *(_QWORD *)(a1 + 8LL * v7 + 2592);
    if ( _InterlockedExchange((volatile __int32 *)(v14 + 14716), 0) )
    {
      v72 = KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( !*(_QWORD *)(v14 + 14696) )
        *(union _LARGE_INTEGER *)(v14 + 14696) = PerformanceFrequency;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 14728), 0LL, 0LL);
      v17 = v72;
      v18 = v16;
      v19 = v72.QuadPart - *(_QWORD *)(v14 + 14640);
      if ( v18 )
      {
        if ( v19 > v18 )
        {
          v15.QuadPart = (v72.QuadPart - *(_QWORD *)(v14 + 14640)) % v18;
          v13 = v19 / v18;
          if ( !(unsigned int)(v19 / v18) )
          {
LABEL_26:
            v23 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v14 + 15136));
            v26 = v23;
            if ( v23 )
            {
              LODWORD(v23->Next) = *(_DWORD *)a2;
              *((_DWORD *)&v23[4].Next + 3) = a3;
              v23[2].Next = (struct _SLIST_ENTRY *)a1;
              HIDWORD(v23[4].Next) = v7;
              *((_DWORD *)&v23[4].Next + 2) = v5;
              LOBYTE(v23[5].Next) = 0;
              if ( *(_DWORD *)a2 == 7 )
              {
                v27 = *(unsigned int *)(a2 + 16);
                if ( (unsigned int)v27 >= 8 )
                {
                  v67 = (_QWORD *)WdLogNewEntry5_WdAssertion(v27, v24, v10, v25);
                  v67[3] = a1;
                  v67[4] = *(unsigned int *)(a2 + 8);
                  v67[5] = *(unsigned int *)(a2 + 16);
                  WdLogEvent5_WdAssertion(v67);
                }
                else
                {
                  v28 = *(_QWORD *)(a1 + 16);
                  v29 = 0;
                  v30 = *(_BYTE *)(v28 + 1918);
                  v31 = *(_BYTE *)(v28 + 1919);
                  if ( (_DWORD)v27 )
                  {
                    do
                    {
                      if ( v30 )
                      {
                        v32 = *(_QWORD *)(a2 + 24) + 96LL * v6;
                        if ( *(_DWORD *)(v32 + 4) )
                        {
                          LOBYTE(v26[5].Next) |= 1 << *(_DWORD *)v32;
                          v33 = (char *)v26 + 40 * v29;
                          *((_QWORD *)v33 + 11) = *(_QWORD *)(v32 + 8);
                          *((_WORD *)v33 + 48) = *(_WORD *)(v32 + 20);
                          *((_WORD *)v33 + 50) = *(_WORD *)(v32 + 24);
                          *((_WORD *)v33 + 49) = *(_WORD *)(v32 + 28);
                          *((_WORD *)v33 + 51) = *(_WORD *)(v32 + 32);
                          *((_WORD *)v33 + 52) = *(_WORD *)(v32 + 36);
                          v34 = *((_DWORD *)v33 + 30);
                          *((_WORD *)v33 + 54) = *(_WORD *)(v32 + 40);
                          *((_WORD *)v33 + 53) = *(_WORD *)(v32 + 44);
                          *((_WORD *)v33 + 55) = *(_WORD *)(v32 + 48);
                          *((_WORD *)v33 + 56) = *(_WORD *)(v32 + 36);
                          *((_WORD *)v33 + 58) = *(_WORD *)(v32 + 40);
                          *((_WORD *)v33 + 57) = *(_WORD *)(v32 + 44);
                          *((_WORD *)v33 + 59) = *(_WORD *)(v32 + 48);
                          *((_DWORD *)v33 + 30) ^= (*(_DWORD *)(v32 + 16) ^ v34) & 1;
                          v35 = *((_DWORD *)v33 + 30) ^ (*((_DWORD *)v33 + 30) ^ *(_DWORD *)(v32 + 16)) & 2;
                          *((_DWORD *)v33 + 30) = v35;
                          v36 = *(_DWORD *)(v32 + 52);
                          if ( v36 > 1 )
                            *((_DWORD *)v33 + 30) = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)(8 * v36 - 8)) & 0x18;
                          else
                            *((_DWORD *)v33 + 30) = v35 & 0xFFFFFFE7;
                          *((_DWORD *)v33 + 30) ^= (*((_DWORD *)v33 + 30) ^ (4 * *(_DWORD *)(v32 + 56))) & 4;
                          v37 = *((_DWORD *)v33 + 30) ^ (*((_DWORD *)v33 + 30) ^ (32 * *(_DWORD *)(v32 + 72))) & 0x60;
                          *((_DWORD *)v33 + 30) = v37;
                          v38 = v37 ^ ((unsigned __int8)v37 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v32 + 76) << 7)) & 0x80;
                          *((_DWORD *)v33 + 30) = v38;
                          v39 = v38 ^ ((unsigned __int16)v38 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v32 + 76) << 7)) & 0x100;
                          *((_DWORD *)v33 + 30) = v39;
                          v40 = v39 ^ ((unsigned __int16)v39 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v32 + 76) << 7)) & 0x200;
                          *((_DWORD *)v33 + 30) = v40;
                          v41 = v40 ^ ((unsigned __int16)v40 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v32 + 80) << 10)) & 0x1C00;
                          *((_DWORD *)v33 + 30) = v41;
                          v42 = v41 ^ ((unsigned __int16)v41 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v32 + 84) << 13)) & 0x2000;
                          *((_DWORD *)v33 + 30) = v42;
                          v43 = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v32 + 88) << 14)) & 0x4000;
                          *((_DWORD *)v33 + 30) = v43;
                          *((_DWORD *)v33 + 30) = v43 ^ (v43 ^ (*(_DWORD *)(v32 + 92) << 15)) & 0x18000;
                          goto LABEL_48;
                        }
                      }
                      else if ( v31 )
                      {
                        v44 = *(_QWORD *)(a2 + 24) + 112LL * v6;
                        if ( *(_DWORD *)(v44 + 4) )
                        {
                          LOBYTE(v26[5].Next) |= 1 << *(_DWORD *)v44;
                          v45 = (char *)v26 + 40 * v29;
                          *((_QWORD *)v45 + 11) = *(_QWORD *)(v44 + 8);
                          *((_WORD *)v45 + 48) = *(_WORD *)(v44 + 20);
                          *((_WORD *)v45 + 50) = *(_WORD *)(v44 + 24);
                          *((_WORD *)v45 + 49) = *(_WORD *)(v44 + 28);
                          *((_WORD *)v45 + 51) = *(_WORD *)(v44 + 32);
                          *((_WORD *)v45 + 52) = *(_WORD *)(v44 + 36);
                          v46 = *((_DWORD *)v45 + 30);
                          *((_WORD *)v45 + 54) = *(_WORD *)(v44 + 40);
                          *((_WORD *)v45 + 53) = *(_WORD *)(v44 + 44);
                          *((_WORD *)v45 + 55) = *(_WORD *)(v44 + 48);
                          *((_WORD *)v45 + 56) = *(_WORD *)(v44 + 52);
                          *((_WORD *)v45 + 58) = *(_WORD *)(v44 + 56);
                          *((_WORD *)v45 + 57) = *(_WORD *)(v44 + 60);
                          *((_WORD *)v45 + 59) = *(_WORD *)(v44 + 64);
                          *((_DWORD *)v45 + 30) ^= (*(_DWORD *)(v44 + 16) ^ v46) & 1;
                          v47 = *((_DWORD *)v45 + 30) ^ (*((_DWORD *)v45 + 30) ^ *(_DWORD *)(v44 + 16)) & 2;
                          *((_DWORD *)v45 + 30) = v47;
                          v48 = *(_DWORD *)(v44 + 68);
                          if ( v48 > 1 )
                            *((_DWORD *)v45 + 30) = v47 ^ ((unsigned __int8)v47 ^ (unsigned __int8)(8 * v48 - 8)) & 0x18;
                          else
                            *((_DWORD *)v45 + 30) = v47 & 0xFFFFFFE7;
                          *((_DWORD *)v45 + 30) ^= (*((_DWORD *)v45 + 30) ^ (4 * *(_DWORD *)(v44 + 72))) & 4;
                          v49 = *((_DWORD *)v45 + 30) ^ (*((_DWORD *)v45 + 30) ^ (32 * *(_DWORD *)(v44 + 88))) & 0x60;
                          *((_DWORD *)v45 + 30) = v49;
                          v50 = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v44 + 92) << 7)) & 0x80;
                          *((_DWORD *)v45 + 30) = v50;
                          v51 = v50 ^ ((unsigned __int16)v50 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v44 + 92) << 7)) & 0x100;
                          *((_DWORD *)v45 + 30) = v51;
                          v52 = v51 ^ ((unsigned __int16)v51 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v44 + 92) << 7)) & 0x200;
                          *((_DWORD *)v45 + 30) = v52;
                          v53 = v52 ^ ((unsigned __int16)v52 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v44 + 96) << 10)) & 0x1C00;
                          *((_DWORD *)v45 + 30) = v53;
                          v54 = v53 ^ ((unsigned __int16)v53 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v44 + 100) << 13)) & 0x2000;
                          *((_DWORD *)v45 + 30) = v54;
                          v55 = v54 ^ ((unsigned __int16)v54 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v44 + 104) << 14)) & 0x4000;
                          *((_DWORD *)v45 + 30) = v55;
                          v56 = *(_DWORD *)(v44 + 108);
                          goto LABEL_47;
                        }
                      }
                      else
                      {
                        v57 = *(_QWORD *)(a2 + 24) + 104LL * v6;
                        if ( *(_DWORD *)(v57 + 4) )
                        {
                          LOBYTE(v26[5].Next) |= 1 << *(_DWORD *)v57;
                          v45 = (char *)v26 + 40 * v29;
                          *((_QWORD *)v45 + 11) = *(_QWORD *)(v57 + 8);
                          *((_WORD *)v45 + 48) = *(_WORD *)(v57 + 20);
                          *((_WORD *)v45 + 50) = *(_WORD *)(v57 + 24);
                          *((_WORD *)v45 + 49) = *(_WORD *)(v57 + 28);
                          *((_WORD *)v45 + 51) = *(_WORD *)(v57 + 32);
                          *((_WORD *)v45 + 52) = *(_WORD *)(v57 + 36);
                          v58 = *((_DWORD *)v45 + 30);
                          *((_WORD *)v45 + 54) = *(_WORD *)(v57 + 40);
                          *((_WORD *)v45 + 53) = *(_WORD *)(v57 + 44);
                          *((_WORD *)v45 + 55) = *(_WORD *)(v57 + 48);
                          *((_WORD *)v45 + 56) = *(_WORD *)(v57 + 52);
                          *((_WORD *)v45 + 58) = *(_WORD *)(v57 + 56);
                          *((_WORD *)v45 + 57) = *(_WORD *)(v57 + 60);
                          *((_WORD *)v45 + 59) = *(_WORD *)(v57 + 64);
                          *((_DWORD *)v45 + 30) ^= (*(_DWORD *)(v57 + 16) ^ v58) & 1;
                          v59 = *((_DWORD *)v45 + 30) ^ (*(_DWORD *)(v57 + 16) ^ *((_DWORD *)v45 + 30)) & 2;
                          *((_DWORD *)v45 + 30) = v59;
                          v60 = *(_DWORD *)(v57 + 68);
                          if ( v60 > 1 )
                            *((_DWORD *)v45 + 30) = v59 ^ ((unsigned __int8)v59 ^ (unsigned __int8)(8 * v60 - 8)) & 0x18;
                          else
                            *((_DWORD *)v45 + 30) = v59 & 0xFFFFFFE7;
                          *((_DWORD *)v45 + 30) ^= (*((_DWORD *)v45 + 30) ^ (4 * *(_DWORD *)(v57 + 72))) & 4;
                          v61 = *((_DWORD *)v45 + 30) ^ (*((_DWORD *)v45 + 30) ^ (32 * *(_DWORD *)(v57 + 76))) & 0x60;
                          *((_DWORD *)v45 + 30) = v61;
                          v62 = v61 ^ ((unsigned __int8)v61 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v57 + 80) << 7)) & 0x80;
                          *((_DWORD *)v45 + 30) = v62;
                          v63 = v62 ^ ((unsigned __int16)v62 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v57 + 80) << 7)) & 0x100;
                          *((_DWORD *)v45 + 30) = v63;
                          v64 = v63 ^ ((unsigned __int16)v63 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v57 + 80) << 7)) & 0x200;
                          *((_DWORD *)v45 + 30) = v64;
                          v65 = v64 ^ ((unsigned __int16)v64 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v57 + 84) << 10)) & 0x1C00;
                          *((_DWORD *)v45 + 30) = v65;
                          v66 = v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v57 + 88) << 13)) & 0x2000;
                          *((_DWORD *)v45 + 30) = v66;
                          v55 = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v57 + 92) << 14)) & 0x4000;
                          *((_DWORD *)v45 + 30) = v55;
                          v56 = *(_DWORD *)(v57 + 96);
LABEL_47:
                          *((_DWORD *)v45 + 30) = v55 ^ (v55 ^ (v56 << 15)) & 0x18000;
LABEL_48:
                          ++v29;
                        }
                      }
                      ++v6;
                    }
                    while ( v6 < *(_DWORD *)(a2 + 16) );
                  }
                }
              }
              else
              {
                LOBYTE(v23[5].Next) = 1;
                v68 = *(_QWORD *)(a2 + 16);
                *((_QWORD *)&v26[5].Next + 1) = v68;
                v69 = v68;
              }
              LODWORD(v26[4].Next) = *(_DWORD *)(v14 + 14648);
              *((_QWORD *)&v26[2].Next + 1) = *(_QWORD *)(v14 + 14640);
              v26[3].Next = *(struct _SLIST_ENTRY **)(v14 + 14656);
              *((_QWORD *)&v26[3].Next + 1) = a4;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1872), v26 + 1);
            }
            goto LABEL_6;
          }
        }
      }
    }
    else
    {
      v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( !*(_QWORD *)(v14 + 14696) )
        *(union _LARGE_INTEGER *)(v14 + 14696) = PerformanceFrequency;
    }
    *(_DWORD *)(v14 + 14648) += v13;
    *(LARGE_INTEGER *)(v14 + 14640) = v17;
    if ( *(_BYTE *)(v14 + 8) )
    {
      v20 = *(ADAPTER_RENDER **)(a1 + 8);
      memset(&v73, 0, 24);
      v21 = ADAPTER_RENDER::DdiCalibrateGpuClock(v20, v15.LowPart, v18, &v73);
      GpuClockCounter = 0LL;
      if ( v21 >= 0 )
        GpuClockCounter = v73.GpuClockCounter;
      *(_QWORD *)(v14 + 14656) = GpuClockCounter;
    }
    else
    {
      *(_QWORD *)(v14 + 14656) = 0LL;
    }
    goto LABEL_26;
  }
LABEL_6:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_pqx(v69, (unsigned int)&EventVSyncInterrupt, v10, *(_QWORD *)(a1 + 16), v5, v69);
  return v7;
}
