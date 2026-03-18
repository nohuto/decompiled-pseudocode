/*
 * XREFs of PpmParkChooseCoresToUnpark @ 0x1401F3EC0
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140076518 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PpmEventParkNodePreference @ 0x1401F2178 (PpmEventParkNodePreference.c)
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
  unsigned __int64 v9; // rbx
  char result; // al
  unsigned __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 Prcb; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r13
  __int64 v20; // r15
  unsigned int v21; // edx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r15
  unsigned int v24; // r13d
  unsigned __int64 v25; // r8
  bool i; // zf
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  void (__fastcall *v38)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r9
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v46; // [rsp+50h] [rbp-B0h]
  __int64 v47; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v48; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v49; // [rsp+68h] [rbp-98h]
  __int64 v50; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v51[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 v52; // [rsp+88h] [rbp-78h]
  _DWORD v53[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v54[21]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v55[2]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v56[21]; // [rsp+148h] [rbp+48h] BYREF
  _DWORD v57[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v58[21]; // [rsp+1F8h] [rbp+F8h] BYREF
  _DWORD v59[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _QWORD v60[21]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v9 = a3;
  v45 = a1;
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
      v50 = a5 & (a3 ^ v13);
      if ( (unsigned __int8)PpmParkGranularity <= 1u )
      {
        v15 = a6 | v14;
      }
      else
      {
        v15 = 0LL;
        v51[0] = 0LL;
        v51[1] = (unsigned __int16 *)(a6 | v14);
        v52 = a2;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v44, v51) )
          v15 |= *(_QWORD *)(KeGetPrcb(v44) + 24792);
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
            v15 |= *(_QWORD *)(Prcb + 24792);
        }
      }
      v46 = (unsigned __int64)PpmParkPreferenceHandler;
      if ( PpmParkPreferenceHandler )
      {
        v55[1] = 0;
        v55[0] = 1310721;
        memset(v56, 0, 0xA0uLL);
        v53[1] = 0;
        v53[0] = 1310721;
        memset(v54, 0, 0xA0uLL);
        v57[1] = 0;
        v57[0] = 1310721;
        memset(v58, 0, 0xA0uLL);
        v59[1] = 0;
        v59[0] = 1310721;
        memset(v60, 0, 0xA0uLL);
        if ( a2 )
          LOWORD(v55[0]) = a2 + 1;
        v56[a2] |= v9;
        if ( LOWORD(v53[0]) <= a2 )
          LOWORD(v53[0]) = a2 + 1;
        v17 = PpmCheckTime;
        v54[a2] |= v15;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD *))v46)(
          0LL,
          v17,
          a1,
          v55,
          v53,
          v57,
          v59);
        if ( a2 >= LOWORD(v57[0]) )
          v19 = 0LL;
        else
          v19 = v58[a2];
        if ( a2 >= LOWORD(v59[0]) )
          v20 = 0LL;
        else
          v20 = v60[a2];
        v47 = v20;
        PpmEventParkNodePreference(a2, v9, v45, v18, v15, v19, v20);
      }
      else
      {
        v19 = 0LL;
        v20 = 0LL;
        v47 = 0LL;
      }
      v21 = v45;
      *a7 |= v9;
      v46 = v9;
      v22 = v9 & ~v19 & ~v20;
      v49 = v22;
      v23 = v9;
      v24 = v21;
      v25 = (0x101010101010101LL
           * ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v15 - ((v15 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v15 - ((v15 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      v44 = v25;
      for ( i = v21 == 0; !i && v24 > (unsigned int)v25; i = v24 == 0 )
      {
        if ( (v15 & v9) != 0 )
        {
          *a9 |= 0x200u;
          v9 &= v15;
        }
        v27 = v47 & v9;
        if ( (v47 & v9) != 0 )
        {
          *a9 |= 0x400u;
          v9 = v27;
        }
        if ( (v22 & v9) != 0 )
        {
          *a9 |= 0x800u;
          v9 &= v22;
        }
        v28 = v50 & v9;
        if ( (v50 & v9) != 0 )
        {
          *a9 |= 0x1000u;
          v9 = v28;
        }
        v29 = v9 & ~v48;
        if ( v29 )
        {
          *a9 |= 0x2000u;
          v9 = v29;
        }
        _BitScanForward64(&v30, v9);
        v31 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v30 & 0x3F)]);
        v32 = v31;
        if ( PpmParkCoreMask )
          v33 = *(_QWORD *)(v31 + 24792);
        else
          v33 = *(_QWORD *)(v31 + 1608);
        v34 = (unsigned __int8)PpmParkGranularity;
        v25 = ~v33;
        *a7 &= ~v33;
        v35 = *a7;
        if ( v24 >= v34 )
          v24 -= v34;
        v36 = (v15 & v33) - (((v15 & v33) >> 1) & 0x5555555555555555LL);
        v37 = (0x101010101010101LL
             * (((v36 & 0x3333333333333333LL)
               + ((v36 >> 2) & 0x3333333333333333LL)
               + (((v36 & 0x3333333333333333LL) + ((v36 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        if ( (_DWORD)v37 )
        {
          v15 &= v25;
          LODWORD(v25) = v44 - v37;
          v44 = (unsigned int)(v44 - v37);
        }
        else
        {
          LODWORD(v25) = v44;
        }
        v9 &= ~*(_QWORD *)(*(_QWORD *)(v32 + 1600) + 136LL);
        v38 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(~*(_QWORD *)(v32 + 8LL * *(unsigned __int8 *)(v32 + 1616) + 24608) & v46);
        v23 &= ~*(_QWORD *)(v32 + 24792);
        v46 = (unsigned __int64)v38;
        if ( !v9 )
        {
          if ( !v38 )
          {
            if ( !v23 )
              v23 = v35;
            v38 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v23;
            v46 = v23;
          }
          v9 = (unsigned __int64)v38;
        }
        v22 = v49;
      }
      while ( !(a8 ? v24 == 0 : (_DWORD)v25 == 0) )
      {
        *a9 |= 0x4000u;
        _BitScanForward64(&v40, v15);
        v41 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v40 & 0x3F)]);
        if ( PpmParkCoreMask )
          v42 = *(_QWORD *)(v41 + 24792);
        else
          v42 = *(_QWORD *)(v41 + 1608);
        v43 = v15 & v42;
        v25 = ~v42;
        *a7 &= v25;
        v15 &= v25;
        v24 -= (unsigned __int8)PpmParkGranularity;
        LODWORD(v25) = v44
                     - ((unsigned int)((0x101010101010101LL
                                      * ((((v43 - ((v43 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                        + (((v43 - ((v43 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                        + ((((v43 - ((v43 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                          + (((v43 - ((v43 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
        v44 = (unsigned int)v25;
      }
      return v45;
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
