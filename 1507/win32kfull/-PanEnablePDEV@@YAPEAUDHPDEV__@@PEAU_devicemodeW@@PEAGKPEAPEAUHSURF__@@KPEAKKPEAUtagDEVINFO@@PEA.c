/*
 * XREFs of ?PanEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0287F10
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?bCreateSemaphores@@YAHPEAU_PANDEV@@@Z @ 0x1C02893F8 (-bCreateSemaphores@@YAHPEAU_PANDEV@@@Z.c)
 *     ?vDeleteSemaphores@@YAXPEAU_PANDEV@@@Z @ 0x1C02897BC (-vDeleteSemaphores@@YAXPEAU_PANDEV@@@Z.c)
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
  char *v14; // rbx
  __int64 v15; // rdx
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  DWORD dmPanningWidth; // eax
  DWORD dmPanningHeight; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  WCHAR *v28; // rdi
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  unsigned int v35; // ecx
  unsigned int v36; // r10d
  __int64 v37; // rax
  int v38; // ecx
  int v39; // eax
  _OWORD v42[10]; // [rsp+80h] [rbp-138h] BYREF
  __int128 v43; // [rsp+120h] [rbp-98h]
  __int128 v44; // [rsp+130h] [rbp-88h]
  __int128 v45; // [rsp+140h] [rbp-78h]
  __int64 v46; // [rsp+150h] [rbp-68h]
  int v47; // [rsp+158h] [rbp-60h]

  v14 = (char *)PALLOCMEM2(0x658uLL, 1851879495LL, 1);
  if ( v14 )
  {
    v15 = 6LL;
    v16 = (_OWORD *)(*((_QWORD *)a9 + 227) + 64LL);
    v17 = v14 + 800;
    do
    {
      *v17 = *v16;
      v17[1] = v16[1];
      v17[2] = v16[2];
      v17[3] = v16[3];
      v17[4] = v16[4];
      v17[5] = v16[5];
      v17[6] = v16[6];
      v17 += 8;
      v18 = v16[7];
      v16 += 8;
      *(v17 - 1) = v18;
      --v15;
    }
    while ( v15 );
    *v17 = *v16;
    v17[1] = v16[1];
    v17[2] = v16[2];
    *((_QWORD *)v17 + 6) = *((_QWORD *)v16 + 6);
    *((_DWORD *)v14 + 2) = a1->dmPelsWidth;
    *((_DWORD *)v14 + 3) = a1->dmPelsHeight;
    if ( (unsigned int)bCreateSemaphores((struct _PANDEV *)v14) )
    {
      dmPanningWidth = a1->dmPanningWidth;
      if ( dmPanningWidth )
      {
        *(_DWORD *)v14 = dmPanningWidth;
        dmPanningHeight = a1->dmPanningHeight;
      }
      else
      {
        *(_DWORD *)v14 = a1->dmPelsWidth;
        dmPanningHeight = a1->dmPelsHeight;
      }
      *((_DWORD *)v14 + 1) = dmPanningHeight;
      v21 = *(_OWORD *)&a1->dmDeviceName[8];
      v42[0] = *(_OWORD *)a1->dmDeviceName;
      v22 = *(_OWORD *)&a1->dmDeviceName[16];
      v42[1] = v21;
      v23 = *(_OWORD *)&a1->dmDeviceName[24];
      v42[2] = v22;
      v24 = *(_OWORD *)&a1->dmSpecVersion;
      v42[3] = v23;
      v25 = *(__int128 *)((char *)&a1->76 + 4);
      v42[4] = v24;
      v26 = *(_OWORD *)&a1->dmYResolution;
      v42[5] = v25;
      v27 = *(_OWORD *)&a1->dmFormName[5];
      v28 = &a1->dmFormName[13];
      v42[6] = v26;
      v29 = *((_QWORD *)v28 + 10);
      v30 = *(_OWORD *)v28;
      v42[7] = v27;
      v31 = *((_OWORD *)v28 + 1);
      v42[8] = v30;
      v32 = *((_OWORD *)v28 + 2);
      v42[9] = v31;
      v33 = *((_OWORD *)v28 + 3);
      v43 = v32;
      v34 = *((_OWORD *)v28 + 4);
      v44 = v33;
      v45 = v34;
      v46 = v29;
      v47 = *((_DWORD *)v28 + 22);
      v35 = *(_DWORD *)v14;
      HIDWORD(v43) = *(_DWORD *)v14;
      v36 = *((_DWORD *)v14 + 1);
      LODWORD(v44) = v36;
      if ( G_fDoubleDpi )
      {
        if ( DWORD2(v43) == 32 )
        {
          LODWORD(v44) = v36 >> 1;
          HIDWORD(v43) = v35 >> 1;
        }
      }
      v37 = (*((__int64 (__fastcall **)(_OWORD *, unsigned __int16 *, _QWORD, HSURF *, unsigned int, unsigned int *, unsigned int, struct tagDEVINFO *, HDEV, unsigned __int16 *, void *))v14
             + 100))(
              v42,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              a10,
              a11);
      if ( v37 )
      {
        v38 = *((_DWORD *)a8 + 71);
        *((_QWORD *)v14 + 4) = v37;
        *((_DWORD *)v14 + 10) = v38;
        *((_QWORD *)v14 + 6) = a9;
        *((_DWORD *)v14 + 11) = *(_DWORD *)a8;
        a6[4] = *((_DWORD *)v14 + 2);
        a6[5] = *((_DWORD *)v14 + 3);
        v39 = *(_DWORD *)a8 & 0x80420;
        *((_DWORD *)a8 + 76) = 192;
        *(_DWORD *)a8 = v39 | 0x10003;
        return (struct DHPDEV__ *)v14;
      }
      vDeleteSemaphores((struct _PANDEV *)v14);
    }
    Win32FreePool(v14);
  }
  return 0LL;
}
