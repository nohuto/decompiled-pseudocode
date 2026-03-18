/*
 * XREFs of ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x180114B0C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003FE30 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801148AC (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessSegmentCountUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_SEGMENTCOUNTUPDATE *a3)
{
  int v3; // r13d
  struct ID2D1Ink *v4; // r14
  struct ID2D1InkStyle *v5; // rdi
  unsigned int v6; // esi
  int v7; // r13d
  unsigned int v9; // r12d
  __int64 v10; // r15
  int ID2D1InkAndInkStyle; // eax
  int v12; // eax
  int v14; // eax
  struct ID2D1InkStyle *v15; // [rsp+80h] [rbp+8h] BYREF
  struct CResourceTable *v16; // [rsp+88h] [rbp+10h]
  const struct MILCMD_INK_SEGMENTCOUNTUPDATE *v17; // [rsp+90h] [rbp+18h]
  struct ID2D1Ink *v18; // [rsp+98h] [rbp+20h] BYREF

  v17 = a3;
  v16 = a2;
  v3 = *((_DWORD *)a3 + 2);
  v4 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v6 = 0;
  v15 = 0LL;
  v7 = v3 - *((_DWORD *)this + 40);
  if ( v7 >= 0 )
  {
    v14 = DynArrayImpl<0>::Grow((__int64)this + 136, 0x24u, v7, 0, 0LL);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xA3u);
      return v6;
    }
  }
  else
  {
    v9 = 0;
    LODWORD(v16) = *((_DWORD *)this + 20);
    if ( (_DWORD)v16 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v10 + *((_QWORD *)this + 7)), &v18, &v15);
        v6 = ID2D1InkAndInkStyle;
        if ( ID2D1InkAndInkStyle < 0 )
          break;
        v4 = v18;
        v12 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD))(*(_QWORD *)v18 + 56LL))(v18, (unsigned int)-v7);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x9Bu);
          goto LABEL_16;
        }
        (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
        v5 = v15;
        v4 = 0LL;
        v18 = 0LL;
        if ( v15 )
        {
          (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v15 + 16LL))(v15);
          v5 = 0LL;
          v15 = 0LL;
        }
        ++v9;
        v10 += 8LL;
        if ( v9 >= (unsigned int)v16 )
          goto LABEL_9;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x99u);
      v4 = v18;
LABEL_16:
      v5 = v15;
      goto LABEL_10;
    }
  }
LABEL_9:
  *((_DWORD *)this + 40) = *((_DWORD *)v17 + 2);
  CResource::NotifyOnChanged(this, 0, 0LL);
LABEL_10:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
