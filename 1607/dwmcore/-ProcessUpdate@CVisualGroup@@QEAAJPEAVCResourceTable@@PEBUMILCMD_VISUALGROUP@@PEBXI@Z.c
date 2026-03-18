/*
 * XREFs of ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x18010E174
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResourceTable@@_N@Z @ 0x1800ADA54 (-UnmarshalResourceArray@@YAJAEAPEBEAEAIIW4MIL_RESOURCE_TYPE@@_J1AEAPEAPEAVCResource@@PEAVCResour.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x180141154 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801411E4 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 */

__int64 __fastcall CVisualGroup::ProcessUpdate(
        CVisualGroup *this,
        struct CResourceTable *a2,
        __m128i *a3,
        unsigned int *a4,
        unsigned int a5)
{
  __m128i v6; // xmm6
  struct CVisual **v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-31h]
  __int64 v15; // [rsp+28h] [rbp-31h]
  struct CVisual **v16; // [rsp+58h] [rbp-1h] BYREF
  unsigned int *v17; // [rsp+60h] [rbp+7h] BYREF
  struct CVisual **v18; // [rsp+68h] [rbp+Fh] BYREF
  __m128i v19; // [rsp+70h] [rbp+17h]
  unsigned int v20; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v21; // [rsp+D0h] [rbp+77h] BYREF

  v6 = *a3;
  v17 = a4;
  v8 = 0LL;
  v19 = v6;
  CVisualGroup::ClearVisualGroupData(this);
  v9 = UnmarshalResourceArray(
         &v17,
         &a5,
         _mm_cvtsi128_si32(_mm_srli_si128(v6, 8)),
         32LL,
         v14,
         &v21,
         (__int64 **)&v16,
         (__int64)a2,
         0);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA9u);
  }
  else
  {
    v11 = UnmarshalResourceArray(&v17, &a5, v19.m128i_u32[3], 32LL, v15, &v20, (__int64 **)&v18, (__int64)a2, 0);
    v8 = v18;
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB8u);
    }
    else
    {
      v12 = CVisualGroup::InitializeVisualGroupData(this, v16, v21, v18, v20);
      v10 = v12;
      if ( v12 >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xBBu);
    }
  }
  CVisualGroup::ClearVisualGroupData(this);
LABEL_8:
  if ( v16 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CVisual **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v16);
  if ( v8 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CVisual **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v8);
  CResource::NotifyOnChanged(this, 0, 0LL);
  return v10;
}
