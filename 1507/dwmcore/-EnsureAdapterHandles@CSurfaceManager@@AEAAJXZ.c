/*
 * XREFs of ?EnsureAdapterHandles@CSurfaceManager@@AEAAJXZ @ 0x180087BF0
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180092308 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18004005C (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180054B38 (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseAdapterHandles@CSurfaceManager@@AEAAXXZ @ 0x180087B30 (-ReleaseAdapterHandles@CSurfaceManager@@AEAAXXZ.c)
 *     ?Construct@AdapterHandleInfo@CSurfaceManager@@QEAAJPEAVCDXGIAdapterLimited@@@Z @ 0x18008A1F0 (-Construct@AdapterHandleInfo@CSurfaceManager@@QEAAJPEAVCDXGIAdapterLimited@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSurfaceManager::EnsureAdapterHandles(CSurfaceManager *this)
{
  int v1; // edi
  int DXGIEnumeration; // eax
  CSurfaceManager::AdapterHandleInfo *v4; // rsi
  __int64 v5; // rbp
  struct CDXGIAdapterLimited *v6; // r15
  int v7; // eax
  int v8; // eax
  CSurfaceManager::AdapterHandleInfo *v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v10 = 0LL;
  if ( !*((_BYTE *)this + 584) )
  {
    DXGIEnumeration = CDisplayManager::GetDXGIEnumeration(this, &v10);
    v4 = v10;
    v1 = DXGIEnumeration;
    if ( DXGIEnumeration < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIEnumeration, 0x19Bu);
    }
    else
    {
      v5 = 0LL;
      if ( *((_DWORD *)v10 + 22) )
      {
        while ( 1 )
        {
          v6 = *(struct CDXGIAdapterLimited **)(*((_QWORD *)v4 + 8) + 8 * v5);
          v7 = DynArrayImpl<0>::AddMultiple((__int64)this + 520, 0x10u, 1, &v10);
          v1 = v7;
          if ( v7 < 0 )
            break;
          v8 = CSurfaceManager::AdapterHandleInfo::Construct(v10, v6);
          v1 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1A9u);
            goto LABEL_8;
          }
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= *((_DWORD *)v4 + 22) )
            goto LABEL_7;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1A4u);
      }
      else
      {
LABEL_7:
        *((_BYTE *)this + 584) = 1;
      }
    }
LABEL_8:
    if ( v1 < 0 )
      CSurfaceManager::ReleaseAdapterHandles(this);
    if ( v4 )
      (*(void (__fastcall **)(CSurfaceManager::AdapterHandleInfo *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return (unsigned int)v1;
}
