/*
 * XREFs of ?PruneModesByDisplayDeviceCaps@@YAKPEAUtagGRAPHICS_DEVICE@@KPEAUtagDEVMODEMARK@@@Z @ 0x1C0065940
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C005FCF0 (DrvBuildDevmodeList.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ?GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z @ 0x1C006532C (-GetMonitorCapability@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@PEAU_FREQUENCY_RAGE@@E@Z.c)
 *     ?PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z @ 0x1C0065C1C (-PruneMode@@YAHPEAU_devicemodeW@@PEAUtagModeCap@@HPEAU_FREQUENCY_RAGE@@K@Z.c)
 *     UpdateMonitorDevices @ 0x1C0066420 (UpdateMonitorDevices.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PruneModesByDisplayDeviceCaps(struct tagGRAPHICS_DEVICE *a1, __int64 a2, struct tagDEVMODEMARK *a3)
{
  int v3; // eax
  unsigned int v5; // edi
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  int v9; // eax
  _DWORD *v10; // rsi
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // r15
  struct tagModeCap *v14; // r8
  unsigned int v15; // edi
  __int64 v16; // r11
  __int64 v17; // r10
  unsigned int MonitorCapability; // eax
  PVOID v19; // rcx
  bool v20; // cf
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r12d
  struct tagDEVMODEMARK *v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // r14
  struct tagModeCap *v29; // r10
  __int64 v30; // r13
  int v31; // edx
  int v32; // eax
  unsigned int v34; // edx
  __int64 v35; // r9
  struct tagModeCap *v36; // [rsp+30h] [rbp-49h]
  struct tagModeCap *v37; // [rsp+30h] [rbp-49h]
  unsigned int v38; // [rsp+38h] [rbp-41h]
  unsigned int v39; // [rsp+3Ch] [rbp-3Dh]
  unsigned int v40; // [rsp+40h] [rbp-39h]
  unsigned int v41; // [rsp+48h] [rbp-31h] BYREF
  int v42; // [rsp+4Ch] [rbp-2Dh]
  unsigned int v43; // [rsp+50h] [rbp-29h]
  int v44; // [rsp+54h] [rbp-25h]
  int v45; // [rsp+58h] [rbp-21h]
  int v46; // [rsp+5Ch] [rbp-1Dh]
  unsigned int v47; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v48; // [rsp+64h] [rbp-15h]
  unsigned int v49; // [rsp+68h] [rbp-11h]
  unsigned int v50; // [rsp+6Ch] [rbp-Dh]
  unsigned int v51; // [rsp+70h] [rbp-9h]
  unsigned int v52; // [rsp+74h] [rbp-5h]
  PVOID Object; // [rsp+78h] [rbp-1h] BYREF
  struct _DEVICE_OBJECT *v54; // [rsp+80h] [rbp+7h] BYREF
  unsigned __int8 v55; // [rsp+E0h] [rbp+67h]
  unsigned int v56; // [rsp+E0h] [rbp+67h]
  unsigned int v57; // [rsp+E8h] [rbp+6Fh]
  int v59; // [rsp+F8h] [rbp+7Fh]
  int v60; // [rsp+F8h] [rbp+7Fh]

  v57 = a2;
  v3 = *((_DWORD *)a1 + 40);
  v5 = a2;
  if ( (v3 & 0x800000) != 0 )
  {
    v55 = 1;
    v7 = 0;
  }
  else
  {
    v55 = 0;
    v7 = 56;
  }
  v43 = 0;
  v8 = -1;
  v41 = v7;
  v38 = -1;
  v44 = -1;
  v39 = 0;
  v45 = 0;
  v40 = -1;
  v46 = -1;
  v42 = -1;
  *((_DWORD *)a1 + 40) = v3 & 0xF7FFFFFF;
  UpdateMonitorDevices(0xFFFFFFFFLL, a2);
  v9 = *((_DWORD *)a1 + 56);
  if ( v9 )
  {
    v10 = PALLOCMEM2((unsigned int)(868 * v9), 1986356295LL, 1);
    if ( !v10 )
      return v5;
    v11 = *((unsigned int *)a1 + 56);
    v12 = 0;
    v13 = 0LL;
    v59 = 0;
    v14 = (struct tagModeCap *)&v10[v11];
    v36 = v14;
    if ( !(_DWORD)v11 )
      goto LABEL_52;
    v15 = 0;
    while ( 1 )
    {
      v10[v13] = 0;
      v16 = *((_QWORD *)a1 + 29);
      v17 = (unsigned int)v13 + 4 * v13;
      if ( (*(_BYTE *)(v16 + 4 * v17) & 3) == 3 )
      {
        if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, struct _DEVICE_OBJECT **))qword_1C01014A8)(
                    v16 + 8 + 4 * v17,
                    *(unsigned int *)(v16 + 4 * v17 + 4),
                    &Object,
                    &v54) < 0 )
        {
          v12 = v59;
          v14 = v36;
          goto LABEL_23;
        }
        MonitorCapability = GetMonitorCapability(v54, v36, (struct _FREQUENCY_RAGE *)&v47, v55);
        v19 = Object;
        if ( v7 <= v47 )
          v7 = v47;
        v20 = v8 < v48;
        v10[v13] = MonitorCapability;
        if ( !v20 )
          v8 = v48;
        v21 = v38;
        if ( v15 <= v49 )
          v15 = v49;
        v41 = v7;
        if ( v38 >= v50 )
          v21 = v50;
        v38 = v21;
        v44 = v21;
        v22 = v39;
        v42 = v8;
        if ( v39 <= v51 )
          v22 = v51;
        v39 = v22;
        v45 = v22;
        v23 = v40;
        v43 = v15;
        if ( v40 >= v52 )
          v23 = v52;
        v40 = v23;
        v46 = v23;
        ObfDereferenceObject(v19);
        v12 = v59;
        v14 = v36;
      }
      v24 = (unsigned int)v10[v13];
      v12 += v24;
      v59 = v12;
      v14 = (struct tagModeCap *)((char *)v14 + 24 * v24);
      v36 = v14;
LABEL_23:
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *((_DWORD *)a1 + 56) )
      {
        v5 = v57;
        if ( v12 )
          goto LABEL_25;
LABEL_52:
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
        {
LABEL_25:
          v25 = 0;
          if ( !v5 )
            goto LABEL_39;
          v26 = a3;
          while ( 1 )
          {
            v27 = *((unsigned int *)a1 + 56);
            --v5;
            v28 = 0LL;
            Object = (PVOID)v27;
            v29 = (struct tagModeCap *)&v10[v27];
            v37 = v29;
            v30 = *((_QWORD *)v26 + 2 * v5 + 1);
            if ( !(_DWORD)v27 )
              goto LABEL_36;
            v60 = *((_DWORD *)a1 + 40) & 0x800000;
            while ( 1 )
            {
              v31 = v10[v28];
              v32 = 0;
              v56 = v31;
              if ( v31 )
              {
                v32 = PruneMode(
                        (struct _devicemodeW *)v30,
                        v29,
                        v31,
                        (struct _FREQUENCY_RAGE *)&v41,
                        *(_DWORD *)(*((_QWORD *)a1 + 29) + 20 * v28));
                LODWORD(v27) = (_DWORD)Object;
                v29 = (struct tagModeCap *)((char *)v37 + 24 * v56);
                v37 = v29;
              }
              if ( !v60 || *(unsigned __int16 *)(v30 + 70) + *(unsigned __int16 *)(v30 + 68) != 244 )
                goto LABEL_55;
              if ( (*(_DWORD *)(v30 + 240) & 1) == 0 )
                break;
LABEL_34:
              v28 = (unsigned int)(v28 + 1);
              if ( (unsigned int)v28 >= (unsigned int)v27 )
              {
                v26 = a3;
                goto LABEL_36;
              }
            }
            v32 = 1;
LABEL_55:
            if ( !v32 )
              goto LABEL_34;
            v26 = a3;
            *((_DWORD *)a3 + 4 * v5) = 1;
            *((_DWORD *)a1 + 40) |= 0x8000000u;
LABEL_36:
            if ( (_DWORD)v28 == *((_DWORD *)a1 + 56) )
              ++v25;
            if ( !v5 )
            {
LABEL_39:
              v5 = v25;
              break;
            }
          }
        }
        Win32FreePool();
        return v5;
      }
    }
  }
  if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
    return v5;
  v34 = 0;
  while ( v5 )
  {
    v35 = *((_QWORD *)a3 + 2 * --v5 + 1);
    if ( *(unsigned __int16 *)(v35 + 68) + *(unsigned __int16 *)(v35 + 70) != 244 || (*(_DWORD *)(v35 + 240) & 1) != 0 )
    {
      ++v34;
    }
    else
    {
      *((_DWORD *)a3 + 4 * v5) = 1;
      *((_DWORD *)a1 + 40) |= 0x8000000u;
    }
  }
  return v34;
}
