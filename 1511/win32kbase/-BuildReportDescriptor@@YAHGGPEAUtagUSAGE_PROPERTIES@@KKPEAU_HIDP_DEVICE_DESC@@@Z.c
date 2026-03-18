/*
 * XREFs of ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00C8228
 * Callers:
 *     RIMIDE_InitializeDeviceInjection @ 0x1C00C8808 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C00C8900 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     rimHidP_GetCollectionDescription @ 0x1C00C4488 (rimHidP_GetCollectionDescription.c)
 *     ?BuildDeviceHeader@@YAHPEAEKPEAKGG@Z @ 0x1C00C7E78 (-BuildDeviceHeader@@YAHPEAEKPEAKGG@Z.c)
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C00C7EF4 (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 */

__int64 __fastcall BuildReportDescriptor(
        unsigned __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int128 v5; // xmm0
  unsigned int v6; // r15d
  __int128 v7; // xmm1
  struct tagUSAGE_PROPERTIES *v8; // r12
  unsigned int v10; // edi
  char v11; // si
  unsigned __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // r14d
  unsigned __int8 *v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // r13d
  struct tagUSAGE_PROPERTIES *v18; // r14
  __int128 v19; // xmm1
  unsigned int v20; // r14d
  unsigned int v21; // eax
  unsigned int v22; // ecx
  int v23; // r13d
  unsigned int v24; // r14d
  __int64 v25; // r15
  unsigned int v26; // r12d
  unsigned int v27; // edi
  unsigned int v28; // eax
  unsigned int v29; // r14d
  char v30; // si
  __int128 v31; // xmm1
  unsigned int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v39; // [rsp+30h] [rbp-61h]
  unsigned int v40; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-45h] BYREF
  unsigned int v42; // [rsp+50h] [rbp-41h]
  unsigned int v43; // [rsp+54h] [rbp-3Dh]
  int v44; // [rsp+58h] [rbp-39h] BYREF
  unsigned int v45; // [rsp+5Ch] [rbp-35h]
  __int128 v46; // [rsp+68h] [rbp-29h] BYREF
  __int128 v47; // [rsp+78h] [rbp-19h]
  _OWORD v48[5]; // [rsp+88h] [rbp-9h] BYREF
  char v49; // [rsp+F0h] [rbp+5Fh]

  v49 = a2;
  v5 = *(_OWORD *)a3;
  v6 = a5;
  v7 = *((_OWORD *)a3 + 1);
  v8 = a3;
  v40 = 0;
  v41 = 0;
  v10 = 0;
  v11 = 0;
  v44 = 1;
  v48[0] = v5;
  v48[1] = v7;
  if ( !a5 )
  {
    if ( a1 == 13 && (unsigned __int16)(a2 - 4) <= 1u )
    {
      v12 = 35LL * a4;
      if ( v12 <= 0xFFFFFFFF )
      {
        v6 = 1;
        LOBYTE(a5) = 1;
        v13 = 11;
        goto LABEL_9;
      }
      return 0LL;
    }
    v6 = 1;
    LOBYTE(a5) = 1;
  }
  v12 = 35LL * v6 * a4;
  if ( v12 > 0xFFFFFFFF )
    return 0LL;
  v13 = v6 + 1;
LABEL_9:
  v14 = v13 + v12 + 12;
  v42 = v14;
  if ( !v14 )
    return 0LL;
  v15 = (unsigned __int8 *)Win32AllocPoolZInit(v14);
  if ( v15 )
  {
    BuildDeviceHeader(v15, v14, &v40, a1, v49);
    v16 = a4;
    v17 = 0;
    if ( a4 )
    {
      v18 = v8;
      do
      {
        if ( *(_WORD *)v18 == 1 )
        {
          v19 = *((_OWORD *)v18 + 1);
          v46 = *(_OWORD *)v18;
          v47 = v19;
          v10 = BuildMainItem(v15, v42, &v40, &v46, (__int64)v48, v39, &v44, &v41);
          if ( !v10 )
            goto LABEL_37;
          v11 += v41;
          v16 = a4;
        }
        ++v17;
        v18 = (struct tagUSAGE_PROPERTIES *)((char *)v18 + 32);
      }
      while ( v17 < v16 );
      if ( v10 )
      {
        v20 = v40;
        v21 = v6 - 1;
        v22 = v40;
        v43 = v6 - 1;
        v45 = v40;
        v23 = 0;
        v15[v40] = -64;
        v24 = v20 + 1;
        v40 = v24;
        if ( v6 != 1 )
        {
          v25 = gulCollectionOffset;
          v26 = v42;
          while ( 1 )
          {
            if ( !v10 )
            {
LABEL_27:
              LOBYTE(v6) = a5;
              v8 = a3;
              v40 = v24;
              goto LABEL_28;
            }
            if ( v22 <= (unsigned int)v25 )
              goto LABEL_25;
            v27 = v22 - v25 + 1;
            if ( v26 - v24 <= v27 )
              break;
            memmove(&v15[v24], &v15[v25], v27);
            v22 = v45;
            v24 += v27;
            v21 = v43;
            v10 = 1;
LABEL_26:
            if ( ++v23 >= v21 )
              goto LABEL_27;
          }
          v21 = v43;
LABEL_25:
          v10 = 0;
          goto LABEL_26;
        }
LABEL_28:
        v28 = a4;
        v29 = 0;
        v30 = v6 * v11;
        do
        {
          if ( !*(_WORD *)v8 )
          {
            v31 = *((_OWORD *)v8 + 1);
            v46 = *(_OWORD *)v8;
            v47 = v31;
            v10 = BuildMainItem(v15, v42, &v40, &v46, (__int64)v48, v39, &v44, &v41);
            if ( !v10 )
              goto LABEL_37;
            v30 += v41;
            v28 = a4;
          }
          ++v29;
          v8 = (struct tagUSAGE_PROPERTIES *)((char *)v8 + 32);
        }
        while ( v29 < v28 );
        if ( v10 )
        {
          v32 = v40;
          if ( (v30 & 7) != 0 )
          {
            v15[v40] = 117;
            v33 = v32 + 1;
            v15[v33] = 8 - (v30 & 7);
            v34 = (unsigned int)(v33 + 1);
            v15[v34] = -107;
            v35 = (unsigned int)(v34 + 1);
            v15[v35] = 1;
            v36 = (unsigned int)(v35 + 1);
            v15[v36] = -127;
            v37 = (unsigned int)(v36 + 1);
            v15[v37] = 3;
            v32 = v37 + 1;
          }
          v15[v32] = -64;
          v10 = (int)rimHidP_GetCollectionDescription((__int64)v15, v32 + 1) >= 0;
        }
      }
    }
LABEL_37:
    Win32FreePool();
  }
  return v10;
}
