/*
 * XREFs of ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x180106F60
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x18005C06C (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterNNotifiersInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@I@Z @ 0x180107140 (-RegisterNNotifiersInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@I@Z.c)
 *     ?UnRegisterNotifiers@CVisualGroup@@UEAAXXZ @ 0x180107450 (-UnRegisterNotifiers@CVisualGroup@@UEAAXXZ.c)
 *     ?HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x180128C7C (-HrMallocClear@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 */

__int64 __fastcall CVisualGroup::ProcessUpdate(
        struct CVisual ***this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  __m128i v6; // xmm6
  unsigned int *v8; // r14
  int v9; // ebx
  unsigned int *v10; // rsi
  WPF *v11; // rcx
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-68h]
  __int64 v18; // [rsp+20h] [rbp-68h]
  unsigned int v19; // [rsp+20h] [rbp-68h]
  void **v20; // [rsp+20h] [rbp-68h]
  const void *v21; // [rsp+90h] [rbp+8h] BYREF
  struct CVisual **v22; // [rsp+A0h] [rbp+18h] BYREF

  v6 = *a3;
  v21 = a4;
  CVisualGroup::UnRegisterNotifiers((CVisualGroup *)this);
  v8 = (unsigned int *)(this + 5);
  v9 = UnmarshalResourceArray(
         (WPF *)&v21,
         &a5,
         _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
         0x1Fu,
         v17,
         (unsigned int *)this + 10,
         (__int64 **)&v22,
         (__int64)a2,
         0);
  this[6] = v22;
  if ( v9 < 0 )
  {
    v19 = 225;
LABEL_18:
    v13 = v9;
    goto LABEL_19;
  }
  v10 = (unsigned int *)(this + 8);
  v9 = UnmarshalResourceArray(
         (WPF *)&v21,
         &a5,
         v6.m128i_u32[3],
         0x1Fu,
         v18,
         (unsigned int *)this + 16,
         (__int64 **)&v22,
         (__int64)a2,
         0);
  this[9] = v22;
  if ( v9 < 0 )
  {
    v19 = 240;
    goto LABEL_18;
  }
  if ( *v8 )
  {
    v12 = WPF::HrMallocClear(v11, 56LL, *v8, (unsigned __int64)(this + 7), v20);
    v9 = v12;
    if ( v12 < 0 )
    {
      v19 = 248;
LABEL_8:
      v13 = v12;
LABEL_19:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v19);
      CVisualGroup::UnRegisterNotifiers((CVisualGroup *)this);
      goto LABEL_20;
    }
  }
  if ( *v10 )
  {
    v12 = WPF::HrMallocClear(v11, 56LL, *v10, (unsigned __int64)(this + 10), v20);
    v9 = v12;
    if ( v12 < 0 )
    {
      v19 = 257;
      goto LABEL_8;
    }
  }
  v14 = CVisualGroup::RegisterNNotifiersInternal((CVisualGroup *)this, this[6], *v8);
  v9 = v14;
  if ( v14 >= 0 )
  {
    v15 = CVisualGroup::RegisterNNotifiersInternal((CVisualGroup *)this, this[9], *v10);
    v9 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x126u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x125u);
  }
  if ( v9 < 0 )
  {
    v19 = 261;
    goto LABEL_18;
  }
LABEL_20:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v9;
}
