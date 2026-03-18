/*
 * XREFs of ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C0107284
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C01070A4 (GreSetDeviceGammaRamp.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     UpdateGammaRampOnDevice @ 0x1C01074B0 (UpdateGammaRampOnDevice.c)
 */

__int64 __fastcall GreSetDeviceGammaRampInternal(
        _DWORD *a1,
        _OWORD *a2,
        int a3,
        int a4,
        enum _SETGAMMARAMP_FAILED_REASON *a5,
        unsigned int *a6)
{
  unsigned int updated; // edi
  _OWORD *v9; // rsi
  const void *v10; // rcx
  BOOL v11; // ebp
  __int64 v12; // rdx
  unsigned int v13; // r13d
  signed int v14; // r9d
  int v15; // r10d
  int v16; // r11d
  int v17; // ecx
  _OWORD *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int128 v21; // xmm1
  void *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // ecx

  updated = 0;
  v9 = a2;
  *(_DWORD *)a5 = 2;
  *a6 = (unsigned int)a1;
  if ( !a1 || (a1[14] & 1) == 0 )
    return updated;
  if ( (unsigned int)(a1[533] - 4) > 2 )
  {
    *(_DWORD *)a5 = 3;
    *a6 = a1[533];
    goto LABEL_35;
  }
  if ( !*((_QWORD *)a1 + 406) || (a1[538] & 0x10) == 0 )
  {
    *(_DWORD *)a5 = 4;
LABEL_35:
    if ( !a4 )
      return updated;
    goto LABEL_7;
  }
  updated = 1;
LABEL_7:
  v10 = (const void *)*((_QWORD *)a1 + 216);
  v11 = a3 == 0;
  if ( !v10 || RtlCompareMemory(v10, a2, 0x600uLL) != 1536 )
  {
    v12 = 0LL;
    v13 = 2 * giIcmGammaRange;
    while ( (updated && a3 || v11) && (unsigned int)v12 < 0x100 )
    {
      v14 = *((unsigned __int8 *)v9 + 2 * v12 + 1);
      v15 = *((unsigned __int8 *)v9 + 2 * v12 + 513);
      v16 = *((unsigned __int8 *)v9 + 2 * v12 + 1025);
      if ( updated )
      {
        if ( a3 )
        {
          v25 = v12 - giIcmGammaRange;
          if ( v14 < (int)(v12 - giIcmGammaRange)
            || (v26 = v25 + v13, v14 > (int)(v25 + v13))
            || v15 < v25
            || v15 > v26
            || v16 < v25
            || v16 > v26 )
          {
            updated = 0;
            *(_DWORD *)a5 = 5;
          }
        }
      }
      if ( v11 )
      {
        v17 = (_DWORD)v12 << 8;
        if ( *((unsigned __int16 *)v9 + v12) != (_DWORD)v12 << 8
          || *((unsigned __int16 *)v9 + v12 + 256) != v17
          || *((unsigned __int16 *)v9 + v12 + 512) != v17 )
        {
          v11 = 0;
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    if ( updated || a4 )
    {
      if ( !*((_QWORD *)a1 + 216) )
      {
        v23 = PALLOCMEM2(0x600uLL, 1835231559LL, 0);
        if ( !v23 )
        {
          *(_DWORD *)a5 = 6;
          return 0;
        }
        *((_QWORD *)a1 + 216) = v23;
      }
      v18 = (_OWORD *)*((_QWORD *)a1 + 216);
      v19 = 12LL;
      v20 = 128LL;
      do
      {
        *v18 = *v9;
        v18[1] = v9[1];
        v18[2] = v9[2];
        v18[3] = v9[3];
        v18[4] = v9[4];
        v18[5] = v9[5];
        v18[6] = v9[6];
        v18 += 8;
        v21 = v9[7];
        v9 += 8;
        *(v18 - 1) = v21;
        --v19;
      }
      while ( v19 );
      if ( updated )
      {
        updated = UpdateGammaRampOnDevice(a1, 1LL, 128LL);
        *(_DWORD *)a5 = 7;
      }
      if ( v11 )
      {
        v24 = *((_QWORD *)a1 + 216);
        *((_QWORD *)a1 + 216) = 0LL;
        Win32FreePool(v24, v12, v20);
      }
    }
  }
  return updated;
}
