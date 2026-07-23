/*
 * XREFs of PpmParkChooseCoresToUnpark @ 0x14020D7B0
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1400D2A6C (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x14020AEB0 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmEventParkNodePreference @ 0x14020C0E4 (PpmEventParkNodePreference.c)
 */

char __fastcall PpmParkChooseCoresToUnpark(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        int a8,
        _DWORD *a9)
{
  __int64 v9; // rbx
  char result; // al
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 Prcb; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // r15
  __int64 v21; // r9
  __int64 v22; // r15
  unsigned int v23; // r13d
  unsigned __int64 v24; // r8
  bool i; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // r10
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  void (__fastcall *v37)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r9
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // rcx
  unsigned __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h]
  __int64 v47; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v48; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v50[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 v51; // [rsp+88h] [rbp-78h]
  _DWORD v52[44]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v53[44]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v54[44]; // [rsp+1F0h] [rbp+F0h] BYREF
  _DWORD v55[44]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v9 = a3;
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
      v47 = a5 & (a3 ^ v13);
      if ( (unsigned __int8)PpmParkGranularity <= 1u )
      {
        v15 = a6 | v14;
      }
      else
      {
        v15 = 0LL;
        v50[0] = 0LL;
        v50[1] = (unsigned __int16 *)(a6 | v14);
        v51 = a2;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v44, v50) )
          v15 |= *(_QWORD *)(KeGetPrcb(v44) + 24920);
      }
      if ( !KiClockTimerPerCpu )
      {
        Prcb = KeGetPrcb(KiClockTimerOwner);
        if ( *(unsigned __int8 *)(Prcb + 1616) == a2 && (v9 & *(_QWORD *)(Prcb + 1608)) != 0 )
        {
          *a9 |= 0x100u;
          if ( (unsigned __int8)PpmParkGranularity <= 1u )
            v15 |= *(_QWORD *)(Prcb + 1608);
          else
            v15 |= *(_QWORD *)(Prcb + 24920);
        }
      }
      v45 = (__int64)PpmParkPreferenceHandler;
      if ( PpmParkPreferenceHandler )
      {
        v53[0] = 1310721;
        memset(&v53[1], 0, 0xA4uLL);
        v52[0] = 1310721;
        memset(&v52[1], 0, 0xA4uLL);
        v54[0] = 1310721;
        memset(&v54[1], 0, 0xA4uLL);
        v55[0] = 1310721;
        memset(&v55[1], 0, 0xA4uLL);
        if ( a2 )
          LOWORD(v53[0]) = a2 + 1;
        *(_QWORD *)&v53[2 * a2 + 2] |= v9;
        if ( LOWORD(v52[0]) <= a2 )
          LOWORD(v52[0]) = a2 + 1;
        v17 = PpmCheckTime;
        *(_QWORD *)&v52[2 * a2 + 2] |= v15;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD *))v45)(
          0LL,
          v17,
          a1,
          v53,
          v52,
          v54,
          v55);
        if ( a2 >= LOWORD(v54[0]) )
          v19 = 0LL;
        else
          v19 = *(_QWORD *)&v54[2 * a2 + 2];
        if ( a2 >= LOWORD(v55[0]) )
          v20 = 0LL;
        else
          v20 = *(_QWORD *)&v55[2 * a2 + 2];
        v46 = v20;
        PpmEventParkNodePreference(a2, v9, a1, v18, v15, v19, v20);
      }
      else
      {
        v19 = 0LL;
        v20 = 0LL;
        v46 = 0LL;
      }
      *a7 |= v9;
      v45 = v9;
      v21 = v9 & ~v19 & ~v20;
      v49 = v21;
      v22 = v9;
      v23 = a1;
      v24 = (0x101010101010101LL
           * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v44 = v24;
      for ( i = a1 == 0; !i && v23 > (unsigned int)v24; i = v23 == 0 )
      {
        if ( (v15 & v9) != 0 )
        {
          *a9 |= 0x200u;
          v9 &= v15;
        }
        v26 = v46 & v9;
        if ( (v46 & v9) != 0 )
        {
          *a9 |= 0x400u;
          v9 = v26;
        }
        if ( (v21 & v9) != 0 )
        {
          *a9 |= 0x800u;
          v9 &= v21;
        }
        if ( PopHeteroSystem == 3 )
        {
          *a9 |= 0x8000u;
          v9 = PpmHeteroRestrictToFavoredClass(v9, a2);
        }
        v27 = v47 & v9;
        if ( (v47 & v9) != 0 )
        {
          *a9 |= 0x1000u;
          v9 = v27;
        }
        v28 = v9 & ~v48;
        if ( v28 )
        {
          *a9 |= 0x2000u;
          v9 = v28;
        }
        _BitScanForward64(&v29, v9);
        v30 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v29 & 0x3F)]);
        v31 = v30;
        if ( PpmParkCoreMask )
          v32 = *(_QWORD *)(v30 + 24920);
        else
          v32 = *(_QWORD *)(v30 + 1608);
        v33 = (unsigned __int8)PpmParkGranularity;
        v24 = ~v32;
        *a7 &= ~v32;
        v34 = *a7;
        if ( v23 >= v33 )
          v23 -= v33;
        v35 = (v15 & v32) - (((v15 & v32) >> 1) & 0x5555555555555555LL);
        v36 = (0x101010101010101LL
             * (((v35 & 0x3333333333333333LL)
               + ((v35 >> 2) & 0x3333333333333333LL)
               + (((v35 & 0x3333333333333333LL) + ((v35 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        if ( (_DWORD)v36 )
        {
          v15 &= v24;
          LODWORD(v24) = v44 - v36;
          v44 = (unsigned int)(v44 - v36);
        }
        else
        {
          LODWORD(v24) = v44;
        }
        v9 &= ~*(_QWORD *)(*(_QWORD *)(v31 + 1600) + 136LL);
        v37 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(~*(_QWORD *)(v31 + 8LL * *(unsigned __int8 *)(v31 + 1616) + 24608) & v45);
        v22 &= ~*(_QWORD *)(v31 + 24920);
        v45 = (__int64)v37;
        if ( !v9 )
        {
          if ( !v37 )
          {
            if ( !v22 )
              v22 = v34;
            v37 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v22;
            v45 = v22;
          }
          v9 = (__int64)v37;
        }
        v21 = v49;
      }
      while ( !(a8 ? v23 == 0 : (_DWORD)v24 == 0) )
      {
        *a9 |= 0x4000u;
        _BitScanForward64(&v39, v15);
        v40 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v39 & 0x3F)]);
        if ( PpmParkCoreMask )
          v41 = *(_QWORD *)(v40 + 24920);
        else
          v41 = *(_QWORD *)(v40 + 1608);
        v42 = v15 & v41;
        v24 = ~v41;
        *a7 &= v24;
        v15 &= v24;
        v23 -= (unsigned __int8)PpmParkGranularity;
        LODWORD(v24) = v44
                     - ((unsigned int)((0x101010101010101LL
                                      * ((((v42 - ((v42 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                        + (((v42 - ((v42 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                        + ((((v42 - ((v42 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                          + (((v42 - ((v42 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
        v44 = (unsigned int)v24;
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
