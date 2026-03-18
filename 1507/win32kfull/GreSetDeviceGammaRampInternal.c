/*
 * XREFs of GreSetDeviceGammaRampInternal @ 0x1C012AEE4
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C012AE30 (GreSetDeviceGammaRamp.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     UpdateGammaRampOnDevice @ 0x1C00FD340 (UpdateGammaRampOnDevice.c)
 */

__int64 __fastcall GreSetDeviceGammaRampInternal(__int64 a1, unsigned __int16 *a2, int a3)
{
  unsigned int updated; // ebp
  int v7; // ecx
  int v8; // r15d
  const void *v9; // rcx
  int v10; // esi
  BOOL v11; // r14d
  unsigned __int16 *v12; // r8
  signed int v13; // ecx
  unsigned int v14; // ebp
  int v15; // edx
  int v16; // r10d
  signed int v17; // eax
  int v18; // r9d
  unsigned __int16 *v19; // rdi
  _OWORD *v20; // rax
  __int64 v21; // rcx
  __int128 v22; // xmm1
  unsigned int v24; // eax
  void *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v30; // [rsp+88h] [rbp+20h]

  updated = 0;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 1) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 2132);
      v8 = 0;
      if ( (unsigned int)(v7 - 3) <= 3 )
      {
        if ( !*(_QWORD *)(a1 + 3256) || (*(_DWORD *)(a1 + 2152) & 0x10) == 0 )
        {
          if ( v7 != 3 || (*(_DWORD *)(a1 + 2196) & 0x100) == 0 )
            return updated;
          v8 = 1;
        }
        v9 = *(const void **)(a1 + 1728);
        v10 = 1;
        v11 = a3 == 0;
        if ( v9 && RtlCompareMemory(v9, a2, 0x600uLL) == 1536 )
          return 1;
        v12 = a2 + 256;
        v13 = -giIcmGammaRange;
        v14 = 2 * giIcmGammaRange;
        do
        {
          if ( v10 != 1 )
            break;
          v30 = *v12;
          v15 = HIBYTE(*(v12 - 256));
          v16 = HIBYTE(v12[256]);
          v17 = v30 >> 8;
          if ( v15 >= v13 )
          {
            v18 = v13 + v14;
            if ( v15 <= (int)(v13 + v14) && v17 >= v13 && v17 <= v18 && v16 >= v13 && v16 <= v18 )
              continue;
          }
          if ( a3 )
            v10 = 0;
          if ( v11 )
          {
            v24 = (v13 + giIcmGammaRange) << 8;
            if ( *(v12 - 256) != v24 || v30 != v24 || v12[256] != v24 )
              v11 = 0;
          }
          ++v13;
          ++v12;
        }
        while ( v13 + giIcmGammaRange < 0x100 );
        v19 = a2;
        updated = 0;
        if ( v10 )
        {
          if ( v8 && v11 )
          {
            v27 = *(_QWORD *)(a1 + 1728);
            if ( v27 )
            {
              *(_QWORD *)(a1 + 1728) = 0LL;
              Win32FreePool(v27);
LABEL_21:
              if ( v10 )
              {
                v20 = *(_OWORD **)(a1 + 1728);
                if ( v20 )
                {
                  v21 = 12LL;
                  do
                  {
                    *v20 = *(_OWORD *)v19;
                    v20[1] = *((_OWORD *)v19 + 1);
                    v20[2] = *((_OWORD *)v19 + 2);
                    v20[3] = *((_OWORD *)v19 + 3);
                    v20[4] = *((_OWORD *)v19 + 4);
                    v20[5] = *((_OWORD *)v19 + 5);
                    v20[6] = *((_OWORD *)v19 + 6);
                    v20 += 8;
                    v22 = *((_OWORD *)v19 + 7);
                    v19 += 64;
                    *(v20 - 1) = v22;
                    --v21;
                  }
                  while ( v21 );
                }
                updated = UpdateGammaRampOnDevice(a1, 1);
                if ( v11 )
                {
                  v26 = *(_QWORD *)(a1 + 1728);
                  if ( v26 )
                  {
                    *(_QWORD *)(a1 + 1728) = 0LL;
                    Win32FreePool(v26);
                  }
                }
              }
              else
              {
                return 0;
              }
              return updated;
            }
          }
          else
          {
            if ( *(_QWORD *)(a1 + 1728) )
              goto LABEL_21;
            v25 = PALLOCMEM2(0x600uLL, 1835231559LL, 0);
            if ( v25 )
            {
              *(_QWORD *)(a1 + 1728) = v25;
              goto LABEL_21;
            }
          }
          v10 = 0;
          goto LABEL_21;
        }
      }
    }
  }
  return updated;
}
