/*
 * XREFs of ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C0220578
 * Callers:
 *     ?_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C02202A4 (-_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     _GetPointerDeviceType @ 0x1C01C89BC (_GetPointerDeviceType.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C021FF5C (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0220158 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C0220444 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 */

void __fastcall Edgy::_StoreLastUpDataAndPost(
        Edgy *this,
        struct tagEDGY_DATA *a2,
        const struct tagPOINTERINPUTFRAME *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  const unsigned __int16 *v7; // rdx
  __int64 v8; // r8
  unsigned int *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int IsLegacyDevice; // r14d
  int PointerDeviceType; // eax
  __int64 *v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // [rsp+40h] [rbp-28h]
  _QWORD v19[3]; // [rsp+48h] [rbp-20h] BYREF

  if ( *((_DWORD *)this + 4) != 2 )
  {
    v5 = 0;
    if ( *((_DWORD *)a2 + 10) )
    {
      while ( 1 )
      {
        v6 = *((_QWORD *)a2 + 11) + 216LL * v5;
        if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v6) )
        {
          if ( (*(_DWORD *)(v6 + 68) & 0x40000) != 0 )
          {
            IsLegacyDevice = Edgy::_IsLegacyDevice(*(Edgy **)(v6 + 72), v7, v8, v9);
            if ( !IsLegacyDevice || *(_DWORD *)(v6 + 56) == 3 )
            {
              PointerDeviceType = GetPointerDeviceType(*(_QWORD *)(v6 + 72), v10, v11, v12);
              v15 = Edgy::_HitTestEdgyRegion(
                      v19,
                      (unsigned int *)this,
                      *(_QWORD *)(v6 + 72),
                      *(_QWORD *)(v6 + 96),
                      PointerDeviceType,
                      IsLegacyDevice);
              v17 = *v15;
              v18 = v15[2];
              if ( *v15 )
                break;
            }
          }
        }
        if ( ++v5 >= *((_DWORD *)a2 + 10) )
          return;
      }
      *((_QWORD *)this + 30) = *(_QWORD *)(v6 + 72);
      *((_DWORD *)this + 62) = *(_DWORD *)(v6 + 120);
      *((_QWORD *)this + 32) = *(_QWORD *)(v6 + 96);
      if ( (_DWORD)v18 == 1 )
        Edgy::_PostEdgyInertia(*(_QWORD *)(v17 + 8), 1LL, *((unsigned int *)this + 63), v16);
    }
  }
}
