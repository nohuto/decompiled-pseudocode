/*
 * XREFs of ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022A01C
 * Callers:
 *     ?_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C0229D4C (-_OnEnterIdle@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     _GetPointerDeviceType @ 0x1C01CD408 (_GetPointerDeviceType.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB140 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C0229A04 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0229C00 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C0229EE8 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
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
  int IsLegacyDevice; // r14d
  int PointerDeviceType; // eax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp-28h]
  _QWORD v15[3]; // [rsp+48h] [rbp-20h] BYREF

  if ( *((_DWORD *)this + 4) != 2 )
  {
    v5 = 0;
    if ( *((_DWORD *)a2 + 6) )
    {
      while ( 1 )
      {
        v6 = *((_QWORD *)a2 + 9) + 216LL * v5;
        if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)v6) )
        {
          if ( (*(_DWORD *)(v6 + 68) & 0x40000) != 0 )
          {
            IsLegacyDevice = Edgy::_IsLegacyDevice(*(Edgy **)(v6 + 72), v7, v8, v9);
            if ( !IsLegacyDevice || *(_DWORD *)(v6 + 56) == 3 )
            {
              PointerDeviceType = GetPointerDeviceType(*(_QWORD *)(v6 + 72));
              v12 = Edgy::_HitTestEdgyRegion(
                      v15,
                      (unsigned int *)this,
                      *(_QWORD *)(v6 + 72),
                      *(_QWORD *)(v6 + 96),
                      PointerDeviceType,
                      IsLegacyDevice);
              v13 = *v12;
              v14 = v12[2];
              if ( *v12 )
                break;
            }
          }
        }
        if ( ++v5 >= *((_DWORD *)a2 + 6) )
          return;
      }
      *((_QWORD *)this + 30) = *(_QWORD *)(v6 + 72);
      *((_DWORD *)this + 62) = *(_DWORD *)(v6 + 120);
      *((_QWORD *)this + 32) = *(_QWORD *)(v6 + 96);
      if ( (_DWORD)v14 == 1 )
        Edgy::_PostEdgyInertia(*(_QWORD *)(v13 + 8), 1u, *((_DWORD *)this + 63));
    }
  }
}
