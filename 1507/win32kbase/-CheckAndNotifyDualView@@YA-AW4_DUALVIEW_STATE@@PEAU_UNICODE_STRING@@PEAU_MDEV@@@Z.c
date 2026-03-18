/*
 * XREFs of ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00627D8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     DrvGetDeviceFromName @ 0x1C0053CD0 (DrvGetDeviceFromName.c)
 *     DrvBuildDevmodeList @ 0x1C005FCF0 (DrvBuildDevmodeList.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00639D0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00652A0 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     GreDeviceIoControlEx @ 0x1C00665F0 (GreDeviceIoControlEx.c)
 */

__int64 __fastcall CheckAndNotifyDualView(UNICODE_STRING *a1, __int64 a2)
{
  wchar_t *v2; // r8
  int v5; // ecx
  int v6; // r12d
  int v7; // r13d
  int v8; // edi
  char *v9; // rsi
  wchar_t *i; // rbx
  __int64 v11; // rbp
  unsigned __int16 v12; // ax
  int v13; // edx
  unsigned int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  BOOL v18; // eax
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // edi
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  char *v26; // rbx
  __int64 v27; // r15
  char *v28; // r14
  int v29; // eax
  unsigned int v30; // eax
  wchar_t **v31; // rcx
  unsigned int *v32; // r14
  __int64 v33; // r15
  struct tagGRAPHICS_DEVICE **v34; // rbx
  int v35; // [rsp+40h] [rbp-48h]
  unsigned int v36; // [rsp+44h] [rbp-44h] BYREF
  __int64 v37[8]; // [rsp+48h] [rbp-40h] BYREF
  unsigned int v38; // [rsp+A0h] [rbp+18h] BYREF
  int v39; // [rsp+A8h] [rbp+20h]

  v2 = gpGraphicsDeviceList;
  v38 = 0;
  v5 = 0;
  v35 = 0;
  v6 = 0;
  v39 = 0;
  v7 = 0;
  v8 = 1;
  if ( !gpGraphicsDeviceList )
    return 0LL;
  do
  {
    if ( (*((_DWORD *)v2 + 40) & 0x20800000) != 0 )
      ++v5;
    v2 = (wchar_t *)*((_QWORD *)v2 + 16);
  }
  while ( v2 );
  if ( !v5 )
    return 0LL;
  v9 = (char *)PALLOCMEM2((unsigned int)(16 * v5), 1936876615LL, 1);
  if ( !v9 )
    return 3LL;
  i = gpGraphicsDeviceList;
  v11 = 0LL;
  if ( gpGraphicsDeviceList )
  {
    do
    {
      v12 = -1;
      if ( !gForceDisconnect )
        v12 = gProtocolType;
      if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v12, &v36, &v38) )
      {
        v22 = 3;
        goto LABEL_41;
      }
      v13 = 0;
      if ( v38 )
        v8 = 0;
      if ( a2 )
      {
        v14 = *(_DWORD *)(a2 + 20);
        if ( v14 )
        {
          v15 = (__int64 *)(a2 + 32);
          v16 = v14;
          do
          {
            v17 = *v15;
            v15 += 4;
            if ( *(wchar_t **)(v17 + 2600) == i )
              v13 = 1;
            --v16;
          }
          while ( v16 );
        }
        v18 = v38 && !v13;
        v35 |= v18;
      }
      v19 = *((_DWORD *)i + 40);
      if ( (v19 & 0x20800000) != 0 && (v19 & 0x2000008) == 0 )
      {
        v20 = v39;
        if ( (v19 & 0x800000) != 0 )
          v20 = 1;
        v21 = 2LL * (unsigned int)v11;
        v39 = v20;
        *(_QWORD *)&v9[8 * v21] = i;
        *(_DWORD *)&v9[8 * v21 + 12] = v38 != 0;
        v11 = (unsigned int)(v11 + 1);
        *(_DWORD *)&v9[8 * v21 + 8] = v13 != 0;
      }
      i = (wchar_t *)*((_QWORD *)i + 16);
    }
    while ( i );
    if ( v8 )
    {
      for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
      {
        v29 = *((_DWORD *)i + 40);
        if ( (v29 & 0x2000008) == 0 )
        {
          if ( (v29 & 0x20800000) == 0 )
            break;
          v22 = 1;
          *((_DWORD *)v9 + 3) = 1;
          goto LABEL_29;
        }
      }
    }
  }
  v22 = 1;
LABEL_29:
  if ( a1 )
  {
    i = DrvGetDeviceFromName(a1, 0);
    if ( !i )
      goto LABEL_36;
    v30 = 0;
    if ( !(_DWORD)v11 )
      goto LABEL_36;
    v31 = (wchar_t **)v9;
    while ( i != *v31 )
    {
      ++v30;
      v31 += 2;
      if ( v30 >= (unsigned int)v11 )
        goto LABEL_36;
    }
    if ( *(_DWORD *)&v9[16 * v30 + 8] == *(_DWORD *)&v9[16 * v30 + 12] && a2 )
      goto LABEL_36;
    v6 = 1;
    v7 = 1;
  }
  else
  {
    if ( !(_DWORD)v11 )
    {
LABEL_36:
      v22 = 0;
      goto LABEL_37;
    }
    v23 = v9 + 8;
    v24 = (unsigned int)v11;
    do
    {
      if ( *v23 != v23[1] || !a2 )
        v6 = 1;
      v23 += 4;
      --v24;
    }
    while ( v24 );
  }
  if ( !v6 )
    goto LABEL_36;
  if ( v7 )
  {
    v22 = 3;
    if ( a2 )
    {
      v32 = (unsigned int *)(v9 + 8);
      v33 = (unsigned int)v11;
      do
      {
        DrvUpdateAttachFlag((struct tagGRAPHICS_DEVICE *)i, *v32);
        v32 += 4;
        --v33;
      }
      while ( v33 );
    }
  }
  else if ( !a1 )
  {
    v26 = v9;
    v27 = (unsigned int)v11;
    v28 = v9 + 12;
    do
    {
      GreDeviceIoControlEx(*(PDEVICE_OBJECT *)(*(_QWORD *)v26 + 136LL), 0x23048Cu, v28, 4u, 0LL, 0, (__int64)v37, 0);
      v28 += 16;
      v26 += 16;
      --v27;
    }
    while ( v27 );
  }
LABEL_37:
  if ( v39 )
  {
    if ( v6 || v35 )
      v22 = 1;
    else
      v22 = 2;
  }
  else if ( (_DWORD)v11 )
  {
    v34 = (struct tagGRAPHICS_DEVICE **)v9;
    do
    {
      DrvBuildDevmodeList(*v34, 1, 0);
      v34 += 2;
      --v11;
    }
    while ( v11 );
  }
LABEL_41:
  Win32FreePool();
  return v22;
}
