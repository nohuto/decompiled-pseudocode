/*
 * XREFs of ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x18010C68C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18014D864 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessSegmentCountUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_SEGMENTCOUNTUPDATE *a3)
{
  int v3; // r12d
  struct ID2D1Ink *v4; // rsi
  struct ID2D1InkStyle *v5; // rbx
  unsigned int v6; // edi
  int v7; // r12d
  const struct MILCMD_INK_SEGMENTCOUNTUPDATE *v8; // r15
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  __int64 v12; // r15
  int ID2D1InkAndInkStyle; // eax
  int v14; // eax
  int v15; // eax
  struct ID2D1Ink *v17; // [rsp+70h] [rbp+8h] BYREF
  struct ID2D1InkStyle *v18; // [rsp+78h] [rbp+10h] BYREF
  const struct MILCMD_INK_SEGMENTCOUNTUPDATE *v19; // [rsp+80h] [rbp+18h]

  v19 = a3;
  v18 = a2;
  v3 = *((_DWORD *)a3 + 2);
  v4 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  v6 = 0;
  v18 = 0LL;
  v7 = v3 - *((_DWORD *)this + 58);
  v8 = a3;
  if ( v7 < 0 )
  {
    v10 = *((_DWORD *)this + 38);
    v11 = 0;
    if ( v10 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v12 + *((_QWORD *)this + 16)), &v17, &v18);
        v6 = ID2D1InkAndInkStyle;
        if ( ID2D1InkAndInkStyle < 0 )
          break;
        v4 = v17;
        v14 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, (unsigned int)-v7);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x9Bu);
          goto LABEL_12;
        }
        (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
        v17 = 0LL;
        v5 = v18;
        if ( v18 )
        {
          (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v18 + 16LL))(v18);
          v5 = 0LL;
          v18 = 0LL;
        }
        ++v11;
        v12 += 8LL;
        if ( v11 >= v10 )
        {
          v8 = v19;
          goto LABEL_14;
        }
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x99u);
      v4 = v17;
LABEL_12:
      v5 = v18;
      goto LABEL_16;
    }
LABEL_14:
    *((_DWORD *)this + 58) = *((_DWORD *)v8 + 2);
    CResource::NotifyOnChanged(this, 0, 0LL);
    goto LABEL_18;
  }
  v15 = DynArrayImpl<0>::Grow((__int64)this + 208, 0x24u, v7, 0, 0LL);
  v6 = v15;
  if ( v15 >= 0 )
    goto LABEL_14;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xA3u);
LABEL_16:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_18:
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
