/*
 * XREFs of ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0069B4C
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C0060CC0 (DrvBuildDevmodeList.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     ldevUnloadImage @ 0x1C006C2D0 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C006C3D0 (ldevLoadDriver.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevGetDriverModes(
        struct tagGRAPHICS_DEVICE *a1,
        const unsigned __int16 *a2,
        void *a3,
        struct _devicemodeW **a4)
{
  unsigned int v7; // ebx
  __int64 Driver; // rax
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(void *, _QWORD, struct _devicemodeW *); // r14
  unsigned int v11; // edi
  struct _devicemodeW *v12; // rax
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rdx

  *a4 = 0LL;
  v7 = 0;
  Driver = ldevLoadDriver(a2);
  v9 = Driver;
  if ( Driver )
  {
    v10 = *(__int64 (__fastcall **)(void *, _QWORD, struct _devicemodeW *))(Driver + 392);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = v10(a3, 0LL, 0LL);
        if ( !v11 )
          break;
        if ( *(_DWORD *)(v9 + 56) < 0x30000u && v11 <= 0x10000 )
          v11 = 0x10000;
        v12 = (struct _devicemodeW *)PALLOCMEM2(v11, 1936876615LL, 0);
        *a4 = v12;
        if ( !v12 )
          break;
        v13 = v10(a3, v11, v12);
        v14 = *((_DWORD *)a1 + 40);
        v7 = v13;
        if ( (v14 & 0x800000) == 0 || v13 != -1 )
        {
          if ( (v14 & 0x4000000) != 0 )
          {
            v16 = 0;
            if ( v13 )
            {
              v17 = (__int64)*a4;
              do
              {
                v18 = v16;
                v16 += *(unsigned __int16 *)(v16 + v17 + 70) + *(unsigned __int16 *)(v16 + v17 + 68);
                if ( *(_DWORD *)(v18 + v17 + 168) != 32 )
                  v7 = 0;
              }
              while ( v16 < v7 );
            }
          }
          break;
        }
        Win32FreePool();
      }
    }
    ldevUnloadImage(v9);
    if ( v7 && ((*a4)->dmFields & 0x7C0000) != 0x7C0000 )
      return 0;
  }
  return v7;
}
