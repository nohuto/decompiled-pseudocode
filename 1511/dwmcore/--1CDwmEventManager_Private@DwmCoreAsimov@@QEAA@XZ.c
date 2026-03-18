/*
 * XREFs of ??1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ @ 0x1801391B8
 * Callers:
 *     ??1CDwmEventManager@DwmCoreAsimov@@QEAA@XZ @ 0x1800BA3E8 (--1CDwmEventManager@DwmCoreAsimov@@QEAA@XZ.c)
 * Callees:
 *     ?PostEvent@UsageEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180016F10 (-PostEvent@UsageEventData@DwmCoreAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?RemoveAll@?$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@UUsageEventData@DwmCoreAsimov@@@4@@ATL@@QEAAXXZ @ 0x180139AF8 (-RemoveAll@-$CAtlMap@_KUUsageEventData@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTrait.c)
 *     ?RemoveAll@?$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@W4HwFlipState@DwmCoreAsimov@@@4@@ATL@@QEAAXXZ @ 0x180139BA4 (-RemoveAll@-$CAtlMap@_KW4HwFlipState@DwmCoreAsimov@@V-$CElementTraits@_K@ATL@@V-$CElementTraits@.c)
 */

void __fastcall DwmCoreAsimov::CDwmEventManager_Private::~CDwmEventManager_Private(
        DwmCoreAsimov::CDwmEventManager_Private *this)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rsi
  _QWORD *v7; // r9
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rax
  time_t v11; // rax
  const struct _TlgProvider_t *v12; // rdx
  void **v13; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+28h] [rbp-30h]
  void *v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  time_t v17; // [rsp+40h] [rbp-18h]

  if ( *(_QWORD *)this )
  {
    if ( *((_QWORD *)this + 22) && (v2 = *((_DWORD *)this + 46), v3 = 0LL, v2) )
    {
      v4 = *((_QWORD *)this + 21);
      while ( !*(_QWORD *)(v4 + 8 * v3) )
      {
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= v2 )
          goto LABEL_7;
      }
      v5 = *(_QWORD *)(v4 + 8 * v3);
    }
    else
    {
LABEL_7:
      v5 = 0LL;
    }
    v16 = 0LL;
    v17 = 0LL;
    v13 = &DwmCoreAsimov::UsageEventData::`vftable';
    v15 = &unk_18016D648;
    if ( v5 )
    {
      do
      {
        v6 = *(_QWORD *)(v5 + 48);
        v7 = (_QWORD *)v5;
        if ( !v6 )
        {
          v8 = *((_DWORD *)this + 46);
          v9 = *(_DWORD *)(v5 + 56) % v8 + 1;
          do
          {
            if ( (unsigned int)v9 >= v8 )
              break;
            v10 = *((_QWORD *)this + 21);
            if ( *(_QWORD *)(v10 + 8 * v9) )
              v6 = *(_QWORD *)(v10 + 8 * v9);
            v9 = (unsigned int)(v9 + 1);
          }
          while ( !v6 );
        }
        v14 = *(_DWORD *)(v5 + 16);
        v5 = v6;
        v15 = (void *)v7[3];
        v16 = v7[4];
        v17 = v7[5];
        v11 = time(0LL);
        v12 = *(const struct _TlgProvider_t **)this;
        v17 = v11;
        DwmCoreAsimov::UsageEventData::PostEvent((LPCWSTR *)&v13, v12);
      }
      while ( v6 );
    }
  }
  ATL::CAtlMap<unsigned __int64,DwmCoreAsimov::UsageEventData,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<DwmCoreAsimov::UsageEventData>>::RemoveAll((char *)this + 168);
  ATL::CAtlMap<unsigned __int64,enum DwmCoreAsimov::HwFlipState,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<enum DwmCoreAsimov::HwFlipState>>::RemoveAll((char *)this + 96);
  ATL::CAtlMap<enum DwmCoreAsimov::DwmEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmCoreAsimov::DwmEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo>>::RemoveAll((char *)this + 24);
}
