/*
 * XREFs of PpmParkChooseCoresToUnpark @ 0x140241F7C
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1400E9C10 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmEventParkNodePreference @ 0x140240C9C (PpmEventParkNodePreference.c)
 */

char __fastcall PpmParkChooseCoresToUnpark(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7,
        int a8,
        _DWORD *a9)
{
  unsigned int v10; // edx
  unsigned __int64 v11; // rbx
  char result; // al
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  int v16; // r10d
  unsigned __int64 v17; // r8
  unsigned __int16 v18; // r9
  unsigned int v19; // r10d
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r15
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // r8
  unsigned int v31; // r10d
  unsigned __int64 i; // r11
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v46; // [rsp+44h] [rbp-BCh]
  unsigned int v47; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v48; // [rsp+58h] [rbp-A8h]
  __int64 v49; // [rsp+68h] [rbp-98h]
  unsigned __int64 v50; // [rsp+70h] [rbp-90h]
  _DWORD v51[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v52[21]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v53[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v54[21]; // [rsp+138h] [rbp+38h] BYREF
  _DWORD v55[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  _QWORD v56[21]; // [rsp+1E8h] [rbp+E8h] BYREF
  _DWORD v57[2]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v58[21]; // [rsp+298h] [rbp+198h] BYREF

  v10 = a1;
  v11 = a3;
  if ( a1 )
  {
    v13 = a3 & a4;
    v48 = v13;
    if ( (unsigned int)((0x101010101010101LL
                       * ((((a3 - ((a3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((a3 - ((a3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((a3 - ((a3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((a3 - ((a3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 != a1
      || v13 )
    {
      v14 = a5 & v13;
      v49 = a5 & (v11 ^ v13);
      if ( (unsigned __int8)PpmParkGranularity <= 1u )
      {
        v15 = a6 | v14;
      }
      else
      {
        v15 = 0LL;
        v16 = a2;
        v17 = a6 | v14;
        v18 = a2;
LABEL_8:
        v19 = v16 + 1;
        while ( 1 )
        {
          if ( v17 )
          {
            _BitScanForward64(&v20, v17);
            v16 = v18;
            v17 &= ~(1LL << v20);
            v21 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v18 + (unsigned __int8)v20];
            if ( (unsigned int)v21 >= (unsigned int)KeNumberProcessors_0 )
            {
              v22 = 0LL;
            }
            else
            {
              _mm_lfence();
              v22 = KiProcessorBlock[v21];
            }
            v15 |= *(_QWORD *)(v22 + 24792);
            goto LABEL_8;
          }
          if ( ++v18 >= v19 )
            break;
          v17 = *(_QWORD *)(8LL * v18 + 8);
        }
        v10 = a1;
      }
      if ( !KiClockTimerPerCpu )
      {
        if ( KiClockTimerOwner >= (unsigned int)KeNumberProcessors_0 )
        {
          v23 = 0LL;
        }
        else
        {
          _mm_lfence();
          v23 = KiProcessorBlock[KiClockTimerOwner];
        }
        if ( *(unsigned __int8 *)(v23 + 1616) == a2 && (v11 & *(_QWORD *)(v23 + 1608)) != 0 )
        {
          *a9 |= 0x100u;
          if ( (unsigned __int8)PpmParkGranularity <= 1u )
            v15 |= *(_QWORD *)(v23 + 1608);
          else
            v15 |= *(_QWORD *)(v23 + 24792);
        }
      }
      v24 = (unsigned __int64)PpmParkPreferenceHandler;
      if ( PpmParkPreferenceHandler )
      {
        v53[1] = 0;
        v53[0] = 1310721;
        memset(v54, 0, 0xA0uLL);
        v51[1] = 0;
        v51[0] = 1310721;
        memset(v52, 0, 0xA0uLL);
        v55[1] = 0;
        v55[0] = 1310721;
        memset(v56, 0, 0xA0uLL);
        v57[1] = 0;
        v57[0] = 1310721;
        memset(v58, 0, 0xA0uLL);
        if ( a2 )
          LOWORD(v53[0]) = a2 + 1;
        v54[a2] |= v11;
        if ( LOWORD(v51[0]) <= a2 )
          LOWORD(v51[0]) = a2 + 1;
        v25 = PpmCheckTime;
        v52[a2] |= v15;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD *))v24)(
          0LL,
          v25,
          a1,
          v53,
          v51,
          v55,
          v57);
        if ( a2 >= LOWORD(v55[0]) )
          v24 = 0LL;
        else
          v24 = v56[a2];
        if ( a2 >= LOWORD(v57[0]) )
          v27 = 0LL;
        else
          v27 = v58[a2];
        PpmEventParkNodePreference(a2, v11, a1, v26, v15, v24, v27);
        v10 = a1;
      }
      else
      {
        v27 = 0LL;
      }
      *a7 |= v11;
      v28 = v11 & ~v24 & ~v27;
      v50 = v28;
      v29 = v11;
      v30 = v11;
      v31 = v10;
      for ( i = (0x101010101010101LL
               * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
            v31;
            v28 = v50 )
      {
        if ( v31 <= (unsigned int)i )
          break;
        if ( (v15 & v11) != 0 )
        {
          *a9 |= 0x200u;
          v11 &= v15;
        }
        if ( (v27 & v11) != 0 )
        {
          *a9 |= 0x400u;
          v11 &= v27;
        }
        if ( (v28 & v11) != 0 )
        {
          *a9 |= 0x800u;
          v11 &= v28;
        }
        if ( (v49 & v11) != 0 )
        {
          *a9 |= 0x1000u;
          v11 &= v49;
        }
        if ( (v11 & ~v48) != 0 )
        {
          *a9 |= 0x2000u;
          v11 &= ~v48;
        }
        _BitScanForward64(&v33, v11);
        v46 = KiProcessorNumberToIndexMappingTable[64 * a2 + (v33 & 0x3F)];
        if ( v46 >= (unsigned int)KeNumberProcessors_0 )
        {
          v34 = 0LL;
        }
        else
        {
          _mm_lfence();
          v34 = KiProcessorBlock[v46];
        }
        if ( PpmParkCoreMask )
          v35 = *(_QWORD *)(v34 + 24792);
        else
          v35 = *(_QWORD *)(v34 + 1608);
        v36 = ~v35;
        *a7 &= ~v35;
        if ( v31 >= (unsigned __int8)PpmParkGranularity )
          v31 -= (unsigned __int8)PpmParkGranularity;
        v37 = (v15 & v35) - (((v15 & v35) >> 1) & 0x5555555555555555LL);
        v38 = (0x101010101010101LL
             * (((v37 & 0x3333333333333333LL)
               + ((v37 >> 2) & 0x3333333333333333LL)
               + (((v37 & 0x3333333333333333LL) + ((v37 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        if ( (_DWORD)v38 )
        {
          v15 &= v36;
          LODWORD(i) = i - v38;
        }
        v11 &= ~*(_QWORD *)(*(_QWORD *)(v34 + 1600) + 136LL);
        v29 &= ~*(_QWORD *)(v34 + 8LL * *(unsigned __int8 *)(v34 + 1616) + 24608);
        v30 &= ~*(_QWORD *)(v34 + 24792);
        if ( !v11 )
        {
          if ( !v29 )
          {
            if ( !v30 )
              v30 = *a7;
            v29 = v30;
          }
          v11 = v29;
        }
      }
      while ( !(a8 ? v31 == 0 : (_DWORD)i == 0) )
      {
        *a9 |= 0x4000u;
        _BitScanForward64(&v40, v15);
        v47 = KiProcessorNumberToIndexMappingTable[64 * a2 + (v40 & 0x3F)];
        if ( v47 >= (unsigned int)KeNumberProcessors_0 )
        {
          v41 = 0LL;
        }
        else
        {
          _mm_lfence();
          v41 = KiProcessorBlock[v47];
        }
        if ( PpmParkCoreMask )
          v42 = *(_QWORD *)(v41 + 24792);
        else
          v42 = *(_QWORD *)(v41 + 1608);
        v43 = v15 & v42;
        v44 = ~v42;
        *a7 &= v44;
        v15 &= v44;
        v31 -= (unsigned __int8)PpmParkGranularity;
        LODWORD(i) = i
                   - ((unsigned int)((0x101010101010101LL
                                    * ((((v43 - ((v43 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                      + (((v43 - ((v43 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                      + ((((v43 - ((v43 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                        + (((v43 - ((v43 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
      }
      return a1;
    }
    else
    {
      result = a1;
      *a7 &= ~a3;
    }
  }
  else
  {
    *a7 |= a3;
    return 0;
  }
  return result;
}
