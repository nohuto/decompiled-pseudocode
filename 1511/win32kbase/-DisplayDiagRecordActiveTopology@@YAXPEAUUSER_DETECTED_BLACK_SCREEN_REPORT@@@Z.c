/*
 * XREFs of ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1C00AA368
 * Callers:
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00AA460 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     DrvQueryDisplayConfig @ 0x1C004C1B0 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C004C2C0 (DrvGetDisplayConfigBufferSizes.c)
 */

void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  int DisplayConfigBufferSizes; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  v8 = 0;
  v2 = 0LL;
  v3 = 0LL;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(2u, (__int64)&v9, (__int64)&v8);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes >= 0 )
  {
    v5 = v9;
    v6 = v8;
    *((_DWORD *)a1 + 5) = v9;
    *((_DWORD *)a1 + 6) = v6;
    if ( v5 )
    {
      v2 = Win32AllocPool();
      v6 = v8;
    }
    if ( v6 )
      v3 = Win32AllocPool();
    if ( v2 && v3 )
    {
      v7 = DrvQueryDisplayConfig(2u, &v9, v2, (__int64)&v8, v3, 0LL);
      *((_DWORD *)a1 + 4) = v7;
      if ( v7 >= 0 )
      {
        *((_QWORD *)a1 + 4) = v2;
        v2 = 0LL;
        *((_QWORD *)a1 + 5) = v3;
        v3 = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 4) = 14;
    }
    if ( v2 )
      Win32FreePool();
    if ( v3 )
      Win32FreePool();
  }
}
