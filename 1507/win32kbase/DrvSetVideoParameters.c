/*
 * XREFs of DrvSetVideoParameters @ 0x1C00BC654
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C001AE98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     DrvGetDeviceFromName @ 0x1C0053CD0 (DrvGetDeviceFromName.c)
 *     GreDeviceIoControlEx @ 0x1C00665F0 (GreDeviceIoControlEx.c)
 */

__int64 __fastcall DrvSetVideoParameters(UNICODE_STRING *a1, __int64 a2, int a3, _OWORD *a4, int a5, int a6)
{
  unsigned int v10; // esi
  wchar_t *DeviceFromName; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // zf
  __int64 v17; // rax
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // rbx
  __int64 v24; // rax
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int64 v27; // r15
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // eax
  _OWORD *v31; // rax
  __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v33; // [rsp+78h] [rbp+10h]

  v10 = -5;
  DeviceFromName = 0LL;
  v12 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v12 + 24) = a1;
  *(_QWORD *)(v12 + 32) = a2;
  WdLogEvent5_WdEvent(v12);
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1, a3);
    v16 = DeviceFromName == 0LL;
  }
  else
  {
    if ( a2 )
      DeviceFromName = *(wchar_t **)(a2 + 2600);
    v16 = DeviceFromName == 0LL;
  }
  if ( v16 || DeviceFromName == (wchar_t *)-4LL )
  {
    v17 = WdLogNewEntry5_WdTrace(v14, v13, v15);
LABEL_33:
    WdLogEvent5_WdTrace(v17);
    return v10;
  }
  if ( !DeviceFromName )
  {
LABEL_32:
    v17 = WdLogNewEntry5_WdTrace(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = (int)v10;
    goto LABEL_33;
  }
  if ( a4 )
  {
    if ( a6 && (*((_DWORD *)DeviceFromName + 40) & 0x800000) == 0 )
      return 0xFFFFFFFFLL;
    v19 = PALLOCMEM2(0x2C8uLL, 1936876615LL, 0);
    v23 = v19;
    v33 = v19;
    if ( !v19 )
    {
      v24 = WdLogNewEntry5_WdTrace(v21, v20, v22);
      WdLogEvent5_WdTrace(v24);
      return 0xFFFFFFFFLL;
    }
    v25 = v19;
    v26 = a4;
    v27 = 2LL;
    v28 = 2LL;
    do
    {
      *v25 = *v26;
      v25[1] = v26[1];
      v25[2] = v26[2];
      v25[3] = v26[3];
      v25[4] = v26[4];
      v25[5] = v26[5];
      v25[6] = v26[6];
      v25 += 8;
      *(v25 - 1) = v26[7];
      v26 += 8;
      --v28;
    }
    while ( v28 );
    *v25 = *v26;
    v25[1] = v26[1];
    v25[2] = v26[2];
    v25[3] = v26[3];
    v25[4] = v26[4];
    v25[5] = v26[5];
    *((_DWORD *)v25 + 24) = *((_DWORD *)v26 + 24);
    if ( a5 )
    {
      v29 = v23[5];
      if ( v29 != 1
        && (v29 != 2 || ((v23[6] & 0x100) == 0 || v23[21] != 2) && ((v23[6] & 0x100) == 0 || v23[21] != 4 || v23[24])) )
      {
        Win32FreePool();
        return v10;
      }
    }
    v30 = GreDeviceIoControlEx(*((PDEVICE_OBJECT *)DeviceFromName + 17), 0x230020u, v23, 0x164u, v23, 0x164u, &v32, 0);
    if ( v30 )
      v30 = -5;
    v10 = v30;
    v31 = v23;
    do
    {
      *a4 = *v31;
      a4[1] = v31[1];
      a4[2] = v31[2];
      a4[3] = v31[3];
      a4[4] = v31[4];
      a4[5] = v31[5];
      a4[6] = v31[6];
      a4 += 8;
      *(a4 - 1) = v31[7];
      v31 += 8;
      --v27;
    }
    while ( v27 );
    *a4 = *v31;
    a4[1] = v31[1];
    a4[2] = v31[2];
    a4[3] = v31[3];
    a4[4] = v31[4];
    a4[5] = v31[5];
    *((_DWORD *)a4 + 24) = *((_DWORD *)v31 + 24);
    Win32FreePool();
    goto LABEL_32;
  }
  return v10;
}
