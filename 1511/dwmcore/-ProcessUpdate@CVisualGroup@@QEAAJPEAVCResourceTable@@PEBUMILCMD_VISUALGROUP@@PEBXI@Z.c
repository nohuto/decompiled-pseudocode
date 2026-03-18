/*
 * XREFs of ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1800F9040
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800AA970 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     ?RegisterNNotifiersInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@I@Z @ 0x1801248C0 (-RegisterNNotifiersInternal@CVisualGroup@@AEAAJPEAPEAVCVisual@@I@Z.c)
 *     ?UnRegisterNotifiers@CVisualGroup@@UEAAXXZ @ 0x180124A50 (-UnRegisterNotifiers@CVisualGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CVisualGroup::ProcessUpdate(
        CVisualGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        const void *a4,
        unsigned int a5)
{
  __m128i v6; // xmm6
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+20h] [rbp-68h]
  const void *v14; // [rsp+90h] [rbp+8h] BYREF
  __int64 *v15; // [rsp+A0h] [rbp+18h] BYREF

  v6 = *a3;
  v14 = a4;
  CVisualGroup::UnRegisterNotifiers(this);
  v8 = UnmarshalResourceArray(
         (WPF *)&v14,
         &a5,
         _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
         0x1Fu,
         v12,
         (unsigned int *)this + 10,
         &v15,
         (__int64)a2,
         0);
  *((_QWORD *)this + 6) = v15;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xDFu);
LABEL_11:
    CVisualGroup::UnRegisterNotifiers(this);
    goto LABEL_12;
  }
  v8 = UnmarshalResourceArray(
         (WPF *)&v14,
         &a5,
         v6.m128i_u32[3],
         0x1Fu,
         v13,
         (unsigned int *)this + 14,
         &v15,
         (__int64)a2,
         0);
  *((_QWORD *)this + 8) = v15;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xEEu);
    goto LABEL_11;
  }
  v9 = CVisualGroup::RegisterNNotifiersInternal(this, *((struct CVisual ***)this + 6), *((_DWORD *)this + 10));
  v8 = v9;
  if ( v9 >= 0 )
  {
    v10 = CVisualGroup::RegisterNNotifiersInternal(this, *((struct CVisual ***)this + 8), *((_DWORD *)this + 14));
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x112u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x111u);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF1u);
    goto LABEL_11;
  }
LABEL_12:
  CResource::NotifyOnChanged(this, 0, 0LL);
  return (unsigned int)v8;
}
