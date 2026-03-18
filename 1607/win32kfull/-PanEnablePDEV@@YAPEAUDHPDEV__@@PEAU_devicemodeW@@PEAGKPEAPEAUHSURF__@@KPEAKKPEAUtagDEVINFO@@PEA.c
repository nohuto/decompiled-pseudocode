/*
 * XREFs of ?PanEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0286930
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?bCreateSemaphores@@YAHPEAU_PANDEV@@@Z @ 0x1C0287E14 (-bCreateSemaphores@@YAHPEAU_PANDEV@@@Z.c)
 *     ?vDeleteSemaphores@@YAXPEAU_PANDEV@@@Z @ 0x1C02881D8 (-vDeleteSemaphores@@YAXPEAU_PANDEV@@@Z.c)
 */

struct DHPDEV__ *__fastcall PanEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  char *v14; // rax
  char *v15; // rbx
  __int64 (__fastcall **v16)(_OWORD *, unsigned __int16 *, _QWORD, HSURF *, unsigned int, unsigned int *, unsigned int, struct tagDEVINFO *, HDEV, unsigned __int16 *, void *); // r15
  __int64 v17; // rcx
  _OWORD *v18; // rdx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rdx
  DWORD dmPanningWidth; // eax
  DWORD dmPanningHeight; // eax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  WCHAR *v31; // rdi
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  unsigned int v38; // ecx
  unsigned int v39; // r10d
  __int64 v40; // rax
  int v41; // ecx
  int v42; // eax
  _OWORD v45[10]; // [rsp+80h] [rbp-138h] BYREF
  __int128 v46; // [rsp+120h] [rbp-98h]
  __int128 v47; // [rsp+130h] [rbp-88h]
  __int128 v48; // [rsp+140h] [rbp-78h]
  __int64 v49; // [rsp+150h] [rbp-68h]
  int v50; // [rsp+158h] [rbp-60h]

  v14 = (char *)PALLOCMEM2(0x658uLL, 1851879495LL, 1);
  v15 = v14;
  if ( v14 )
  {
    v16 = (__int64 (__fastcall **)(_OWORD *, unsigned __int16 *, _QWORD, HSURF *, unsigned int, unsigned int *, unsigned int, struct tagDEVINFO *, HDEV, unsigned __int16 *, void *))(v14 + 800);
    v17 = 6LL;
    v18 = v14 + 800;
    v19 = (_OWORD *)(*((_QWORD *)a9 + 227) + 64LL);
    do
    {
      *v18 = *v19;
      v18[1] = v19[1];
      v18[2] = v19[2];
      v18[3] = v19[3];
      v18[4] = v19[4];
      v18[5] = v19[5];
      v18[6] = v19[6];
      v18 += 8;
      v20 = v19[7];
      v19 += 8;
      *(v18 - 1) = v20;
      --v17;
    }
    while ( v17 );
    *v18 = *v19;
    v18[1] = v19[1];
    v18[2] = v19[2];
    *((_QWORD *)v18 + 6) = *((_QWORD *)v19 + 6);
    *((_DWORD *)v15 + 2) = a1->dmPelsWidth;
    *((_DWORD *)v15 + 3) = a1->dmPelsHeight;
    if ( (unsigned int)bCreateSemaphores((struct _PANDEV *)v15) )
    {
      dmPanningWidth = a1->dmPanningWidth;
      if ( dmPanningWidth )
      {
        *(_DWORD *)v15 = dmPanningWidth;
        dmPanningHeight = a1->dmPanningHeight;
      }
      else
      {
        *(_DWORD *)v15 = a1->dmPelsWidth;
        dmPanningHeight = a1->dmPelsHeight;
      }
      *((_DWORD *)v15 + 1) = dmPanningHeight;
      v24 = *(_OWORD *)&a1->dmDeviceName[8];
      v45[0] = *(_OWORD *)a1->dmDeviceName;
      v25 = *(_OWORD *)&a1->dmDeviceName[16];
      v45[1] = v24;
      v26 = *(_OWORD *)&a1->dmDeviceName[24];
      v45[2] = v25;
      v27 = *(_OWORD *)&a1->dmSpecVersion;
      v45[3] = v26;
      v28 = *(__int128 *)((char *)&a1->76 + 4);
      v45[4] = v27;
      v29 = *(_OWORD *)&a1->dmYResolution;
      v45[5] = v28;
      v30 = *(_OWORD *)&a1->dmFormName[5];
      v31 = &a1->dmFormName[13];
      v45[6] = v29;
      v32 = *((_QWORD *)v31 + 10);
      v33 = *(_OWORD *)v31;
      v45[7] = v30;
      v34 = *((_OWORD *)v31 + 1);
      v45[8] = v33;
      v35 = *((_OWORD *)v31 + 2);
      v45[9] = v34;
      v36 = *((_OWORD *)v31 + 3);
      v46 = v35;
      v37 = *((_OWORD *)v31 + 4);
      v47 = v36;
      v48 = v37;
      v49 = v32;
      v50 = *((_DWORD *)v31 + 22);
      v38 = *(_DWORD *)v15;
      HIDWORD(v46) = *(_DWORD *)v15;
      v39 = *((_DWORD *)v15 + 1);
      LODWORD(v47) = v39;
      if ( G_fDoubleDpi )
      {
        if ( DWORD2(v46) == 32 )
        {
          LODWORD(v47) = v39 >> 1;
          HIDWORD(v46) = v38 >> 1;
        }
      }
      v40 = (*v16)(v45, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
      if ( v40 )
      {
        v41 = *((_DWORD *)a8 + 71);
        *((_QWORD *)v15 + 4) = v40;
        *((_DWORD *)v15 + 10) = v41;
        *((_QWORD *)v15 + 6) = a9;
        *((_DWORD *)v15 + 11) = *(_DWORD *)a8;
        a6[4] = *((_DWORD *)v15 + 2);
        a6[5] = *((_DWORD *)v15 + 3);
        v42 = *(_DWORD *)a8 & 0x80420;
        *((_DWORD *)a8 + 76) = 192;
        *(_DWORD *)a8 = v42 | 0x10003;
        return (struct DHPDEV__ *)v15;
      }
      vDeleteSemaphores((struct _PANDEV *)v15);
    }
    Win32FreePool(v15, v21);
  }
  return 0LL;
}
