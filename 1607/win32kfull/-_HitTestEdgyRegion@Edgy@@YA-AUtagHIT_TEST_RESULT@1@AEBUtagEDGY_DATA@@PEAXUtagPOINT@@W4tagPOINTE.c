/*
 * XREFs of ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C021FF5C
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C021F948 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C0220578 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     _GetPointerDeviceRects @ 0x1C00E3B58 (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?_GetRectForLocation@Edgy@@YA?AUtagRECT@@AEBU2@W4tagEDGY_LOCATION@@K@Z @ 0x1C021FEEC (-_GetRectForLocation@Edgy@@YA-AUtagRECT@@AEBU2@W4tagEDGY_LOCATION@@K@Z.c)
 */

_QWORD *__fastcall Edgy::_HitTestEdgyRegion(
        _QWORD *a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  unsigned int v10; // ebp
  unsigned int v11; // esi
  __int64 v12; // r12
  __int64 v13; // r11
  int v14; // r8d
  int v15; // ecx
  int *v16; // r14
  int *v17; // r14
  __int64 v18; // r11
  __int128 v20; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v21[16]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v22; // [rsp+40h] [rbp-58h] BYREF

  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  *((_DWORD *)a1 + 4) = 0;
  if ( (unsigned int)GetPointerDeviceRects(a3, &v22, 0LL) )
  {
    v10 = *a2;
    v11 = 0;
    if ( *a2 )
    {
      v12 = *((_QWORD *)a2 + 1);
      do
      {
        v13 = 32LL * v11;
        if ( *(_QWORD *)(v13 + v12) == a3 )
        {
          v14 = *(_DWORD *)(v13 + v12 + 16);
          if ( a5 == 3 )
          {
            v15 = a6 != 0 ? 2 : 0;
          }
          else
          {
            if ( a5 != 1 )
              goto LABEL_13;
            v15 = 1;
          }
          v16 = (int *)(a2 + 6);
          if ( ((v14 - 1) & 0xFFFFFFFD) != 0 )
            v16 = (int *)(a2 + 12);
          v17 = &v16[13 * v15];
          if ( v17 )
          {
            v20 = *(_OWORD *)Edgy::_GetRectForLocation((__int64)v21, &v22, v14, *v17);
            if ( PtInRect(&v20, a4) )
            {
              a1[1] = v17;
              *a1 = v12 + 32LL * v11;
              *((_DWORD *)a1 + 4) = *(_DWORD *)(v18 + v12 + 16);
              return a1;
            }
          }
        }
LABEL_13:
        ++v11;
      }
      while ( v11 < v10 );
    }
  }
  return a1;
}
