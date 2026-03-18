/*
 * XREFs of ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C006D910
 * Callers:
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C005F214 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 * Callees:
 *     <none>
 */

struct _devicemodeW *__fastcall GetClosestMode(struct tagGRAPHICS_DEVICE *a1, struct _devicemodeW *a2, int a3, int a4)
{
  unsigned int v4; // edi
  __int64 v5; // r15
  int v7; // r11d
  struct tagGRAPHICS_DEVICE *v8; // r8
  unsigned int v9; // edx
  int v10; // ecx
  _DWORD *v11; // rbx
  _DWORD *v12; // r14
  unsigned int v13; // r12d
  unsigned int v14; // ebp
  unsigned int v15; // esi
  DWORD dmFields; // eax
  int v17; // r9d
  unsigned int v18; // r13d
  __int64 v19; // r8
  unsigned int v20; // eax
  DWORD dmPelsWidth; // r11d
  unsigned int v22; // ecx
  unsigned int v23; // eax
  DWORD dmPelsHeight; // r9d
  unsigned int v25; // eax
  unsigned int v26; // eax
  DWORD v27; // edi
  unsigned int v28; // eax
  DWORD v29; // esi
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  DWORD dmBitsPerPel; // eax
  DWORD v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  DWORD dmDisplayFrequency; // eax
  DWORD v41; // ecx
  unsigned int v42; // eax
  int v43; // [rsp+0h] [rbp-58h]
  int v44; // [rsp+4h] [rbp-54h]
  unsigned int i; // [rsp+8h] [rbp-50h]
  unsigned int v46; // [rsp+Ch] [rbp-4Ch]
  unsigned int v48; // [rsp+68h] [rbp+10h]

  v4 = -1;
  v5 = 0LL;
  v7 = a3;
  v8 = a1;
  v9 = -1;
  v10 = -1;
  v44 = -1;
  v11 = 0LL;
  v48 = -1;
  v12 = 0LL;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  if ( !a2->dmDisplayFrequency )
    a2->dmDisplayFrequency = 60;
  if ( !a2->dmBitsPerPel )
    a2->dmBitsPerPel = 32;
  dmFields = a2->dmFields;
  v17 = dmFields & 0x80;
  v43 = v17;
  if ( (dmFields & 0x80) == 0 )
    a2->dmDisplayOrientation = 0;
  if ( (dmFields & 0x20000000) == 0 )
    a2->dmDisplayFixedOutput = 0;
  for ( i = 0; i < 2; ++i )
  {
    if ( v12 && !v10 )
    {
      v31 = v12[43];
      v32 = v12[44];
      if ( v31 < v32 )
      {
        if ( v31 >= 0x1E0 && v32 >= 0x280 )
        {
LABEL_53:
          if ( v12[46] >= 0x3Cu )
            return (struct _devicemodeW *)v12;
        }
      }
      else if ( v31 >= 0x280 && v32 >= 0x1E0 )
      {
        goto LABEL_53;
      }
      v10 = v48;
    }
    v18 = 0;
    v46 = *((_DWORD *)v8 + 48);
    if ( !v46 )
      continue;
    while ( 1 )
    {
      if ( v7 && *(_DWORD *)(v5 + *((_QWORD *)v8 + 25)) )
        goto LABEL_47;
      v19 = *(_QWORD *)(v5 + *((_QWORD *)v8 + 25) + 8);
      if ( a4 && ((LOBYTE(a2->dmDisplayFlags) ^ *(_BYTE *)(v19 + 180)) & 2) != 0 )
        goto LABEL_68;
      if ( !v17 )
        break;
      v10 = v48;
      v20 = dwOrientationDiffTable[4 * *(unsigned int *)(v19 + 84) + a2->dmDisplayOrientation];
      v9 = v44;
      if ( v48 >= v20 )
      {
        if ( v48 > v20 )
          v11 = (_DWORD *)v19;
        break;
      }
LABEL_46:
      v8 = a1;
LABEL_47:
      ++v18;
      v5 += 16LL;
      if ( v18 >= v46 )
        goto LABEL_64;
    }
    dmPelsWidth = a2->dmPelsWidth;
    if ( dmPelsWidth && v11 != (_DWORD *)v19 )
    {
      v22 = *(_DWORD *)(v19 + 172);
      if ( dmPelsWidth < v22 )
        v23 = v22 - dmPelsWidth;
      else
        v23 = dmPelsWidth - v22;
      if ( v13 < v23 )
        goto LABEL_67;
      if ( v13 > v23 )
        v11 = (_DWORD *)v19;
    }
    dmPelsHeight = a2->dmPelsHeight;
    if ( dmPelsHeight )
    {
      if ( v11 == (_DWORD *)v19 )
        goto LABEL_28;
      v34 = *(_DWORD *)(v19 + 176);
      if ( dmPelsHeight < v34 )
        v35 = v34 - dmPelsHeight;
      else
        v35 = dmPelsHeight - v34;
      if ( v14 < v35 )
        goto LABEL_70;
      if ( v14 > v35 )
        v11 = (_DWORD *)v19;
    }
    if ( v11 != (_DWORD *)v19 )
    {
      dmBitsPerPel = a2->dmBitsPerPel;
      v37 = *(_DWORD *)(v19 + 168);
      v38 = dmBitsPerPel < v37 ? v37 - dmBitsPerPel : dmBitsPerPel - v37;
      if ( v4 < v38 )
        goto LABEL_70;
      if ( v4 > v38 )
        v11 = (_DWORD *)v19;
      if ( v11 != (_DWORD *)v19 )
      {
        v39 = a2->dmDisplayFixedOutput != *(_DWORD *)(v19 + 88);
        if ( v9 < v39 )
          goto LABEL_70;
        if ( v9 > v39 )
          v11 = (_DWORD *)v19;
        if ( v11 != (_DWORD *)v19 )
        {
          dmDisplayFrequency = a2->dmDisplayFrequency;
          v41 = *(_DWORD *)(v19 + 184);
          v42 = dmDisplayFrequency < v41 ? v41 - dmDisplayFrequency : dmDisplayFrequency - v41;
          if ( v15 < v42 )
            goto LABEL_70;
          if ( v15 > v42 )
            v11 = (_DWORD *)v19;
          if ( v11 != (_DWORD *)v19 )
          {
LABEL_70:
            v17 = v43;
LABEL_67:
            v7 = a3;
LABEL_68:
            v10 = v48;
            goto LABEL_46;
          }
        }
      }
    }
LABEL_28:
    if ( !v11
      || !i
      && (v11[43] > dmPelsWidth && dmPelsWidth
       || v11[44] > dmPelsHeight && dmPelsHeight
       || v11[46] > a2->dmDisplayFrequency) )
    {
      goto LABEL_70;
    }
    v12 = v11;
    v10 = dwOrientationDiffTable[4 * *(unsigned int *)(v19 + 84) + a2->dmDisplayOrientation];
    v25 = *(_DWORD *)(v19 + 172);
    v48 = v10;
    if ( dmPelsWidth < v25 )
      v13 = v25 - dmPelsWidth;
    else
      v13 = dmPelsWidth - v25;
    v26 = *(_DWORD *)(v19 + 176);
    if ( dmPelsHeight < v26 )
      v14 = v26 - dmPelsHeight;
    else
      v14 = dmPelsHeight - v26;
    v27 = a2->dmBitsPerPel;
    v28 = *(_DWORD *)(v19 + 168);
    if ( v27 < v28 )
      v4 = v28 - v27;
    else
      v4 = v27 - v28;
    v29 = a2->dmDisplayFrequency;
    v30 = *(_DWORD *)(v19 + 184);
    v9 = a2->dmDisplayFixedOutput != *(_DWORD *)(v19 + 88);
    v44 = v9;
    if ( v29 < v30 )
      v15 = v30 - v29;
    else
      v15 = v29 - v30;
    if ( v10 || v4 || v13 || v14 || a2->dmDisplayFixedOutput != *(_DWORD *)(v19 + 88) || v15 )
    {
      v17 = v43;
      v7 = a3;
      goto LABEL_46;
    }
LABEL_64:
    v17 = v43;
    v5 = 0LL;
    v8 = a1;
    v7 = a3;
  }
  return (struct _devicemodeW *)v12;
}
