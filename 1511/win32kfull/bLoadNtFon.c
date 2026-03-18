/*
 * XREFs of bLoadNtFon @ 0x1C01509F8
 * Callers:
 *     BmfdLoadFontFileTE @ 0x1C0108680 (BmfdLoadFontFileTE.c)
 * Callees:
 *     bConvertFontRes @ 0x1C01175F0 (bConvertFontRes.c)
 *     bBMFDIFIMETRICS @ 0x1C011AB60 (bBMFDIFIMETRICS.c)
 *     bVerifyFNTQuick @ 0x1C0122F94 (bVerifyFNTQuick.c)
 *     cParseFontResources @ 0x1C0150A5C (cParseFontResources.c)
 */

__int64 __fastcall bLoadNtFon(unsigned int *a1, int a2, PVOID *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  __int64 v7; // r12
  unsigned int v9; // ebx
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned int **v14; // rax
  unsigned int **v15; // rbx
  unsigned int *v16; // rdi
  int v17; // r8d
  __int64 v18; // r13
  unsigned int **v19; // rsi
  __int64 v20; // rcx
  int v21; // edx
  int v22; // eax
  int v23; // edx
  unsigned int v24; // eax
  int v25; // ecx
  int v26; // edx
  __int128 v27; // xmm0
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r9
  unsigned int v31; // ebx
  unsigned int v32; // [rsp+30h] [rbp-40h] BYREF
  int v33; // [rsp+34h] [rbp-3Ch]
  PVOID pv; // [rsp+38h] [rbp-38h] BYREF
  __int64 v35; // [rsp+40h] [rbp-30h] BYREF
  __int64 v36; // [rsp+48h] [rbp-28h] BYREF
  __int64 v37; // [rsp+50h] [rbp-20h]
  __int128 v38; // [rsp+58h] [rbp-18h] BYREF
  __int64 v39; // [rsp+68h] [rbp-8h]
  int v41; // [rsp+C8h] [rbp+58h]

  v3 = 0LL;
  v33 = 0;
  pv = 0LL;
  v41 = 0;
  v6 = cParseFontResources(a1, &v36, &v35, &pv);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v37 = v6;
  v9 = 0;
  v10 = 0;
  if ( v6 <= 0 )
  {
LABEL_8:
    *a3 = 0LL;
    v11 = 2LL * v9;
    if ( v11 <= 0xFFFFFFFF )
    {
      v12 = 176LL * v10;
      if ( v12 <= 0xFFFFFFFF )
      {
        v13 = (unsigned int)(v12 + 40);
        if ( (unsigned int)v12 < 0xFFFFFFD8 && (int)v11 + (int)v13 >= (unsigned int)v13 )
        {
          v14 = (unsigned int **)EngAllocMem(0, (int)v11 + (int)v13, 0x64666D42u);
          *a3 = v14;
          v15 = v14;
          if ( !v14 )
          {
            EngSetLastError(8u);
            return 0LL;
          }
          v16 = (unsigned int *)((char *)v14 + v13);
          v14[2] = a1;
          *v14 = (unsigned int *)255;
          v17 = 0;
          *((_DWORD *)v14 + 2) = 3;
          v18 = 0LL;
          *((_DWORD *)v14 + 7) = v10;
          v14[4] = 0LL;
          v32 = 0;
          if ( (int)v7 <= 0 )
          {
LABEL_22:
            *((_DWORD *)v15 + 7) += v41;
            v33 = 1;
            *((_DWORD *)v15 + 6) = 0;
          }
          else
          {
            v19 = v14 + 15;
            while ( 1 )
            {
              v39 = 0LL;
              v20 = *((_QWORD *)pv + v18);
              *(_QWORD *)&v38 = v20;
              v21 = *(unsigned __int8 *)(v20 + 2) | (*(unsigned __int8 *)(v20 + 5) << 24) | (*(unsigned __int16 *)(v20 + 3) << 8);
              *((_DWORD *)v19 - 12) = 0;
              HIDWORD(v38) = v21;
              v22 = v20 - a2;
              v23 = v35;
              LODWORD(v20) = v36;
              DWORD2(v38) = v22;
              *((_OWORD *)v19 - 5) = v38;
              *(v19 - 8) = 0LL;
              *v19 = v16;
              if ( !(unsigned int)bConvertFontRes(v20, v23, (__int64 *)&v38, (__int64)&v15[11 * v17 + 5]) )
                break;
              v16 = (unsigned int *)((char *)v16 + **v19);
              v24 = *((unsigned __int8 *)*v19 + 44);
              LOWORD(v24) = v24 - 128;
              if ( (unsigned __int16)v24 <= 8u )
              {
                v25 = 323;
                if ( _bittest(&v25, v24) )
                {
                  v39 = 0LL;
                  *(_QWORD *)&v38 = *((_QWORD *)pv + v18);
                  v26 = *(unsigned __int8 *)(v38 + 2) | (*(unsigned __int8 *)(v38 + 5) << 24) | (*(unsigned __int16 *)(v38 + 3) << 8);
                  DWORD2(v38) = v38 - a2;
                  HIDWORD(v38) = v26;
                  v27 = v38;
                  v28 = v35;
                  v29 = 88LL * (unsigned int)v7;
                  v30 = (__int64)v15 + v29 + 40;
                  *(unsigned int **)((char *)v15 + v29 + 120) = v16;
                  *(_DWORD *)((char *)v15 + v29 + 72) = 1;
                  LODWORD(v29) = v36;
                  *(_OWORD *)v30 = v27;
                  *(_QWORD *)(v30 + 16) = 0LL;
                  if ( !(unsigned int)bConvertFontRes(v29, v28, (__int64 *)&v38, v30) )
                    break;
                  ++v41;
                  v16 = (unsigned int *)((char *)v16 + **v19);
                  LODWORD(v7) = v7 + 1;
                }
              }
              ++v18;
              v17 = v32 + 1;
              v19 += 11;
              ++v32;
              if ( v18 >= v37 )
                goto LABEL_22;
            }
          }
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v39 = 0LL;
      *(_QWORD *)&v38 = *((_QWORD *)pv + v3);
      HIDWORD(v38) = *(unsigned __int8 *)(v38 + 2) | (*(unsigned __int8 *)(v38 + 5) << 24) | (*(unsigned __int16 *)(v38 + 3) << 8);
      if ( !bVerifyFNTQuick((__int64 *)&v38) )
        break;
      if ( !(unsigned int)bBMFDIFIMETRICS(v36, v35, 0LL, (__int64 *)&v38, &v32) )
        break;
      ++v10;
      if ( v9 + v32 < v9 )
        break;
      ++v3;
      v9 += v32;
      if ( v3 >= v7 )
        goto LABEL_8;
    }
  }
  EngFreeMem(pv);
  v31 = v33;
  if ( !v33 )
  {
    if ( *a3 )
    {
      EngFreeMem(*a3);
      *a3 = 0LL;
    }
  }
  return v31;
}
