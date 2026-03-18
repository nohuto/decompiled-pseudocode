/*
 * XREFs of ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x1800F5274
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18012DA5C (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessStartPointUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_STARTPOINTUPDATE *a3)
{
  unsigned int v3; // r13d
  struct ID2D1Ink *v4; // rsi
  struct ID2D1InkStyle *v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  __int64 v9; // r15
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1Ink *v11; // rdi
  struct ID2D1InkStyle *v13; // [rsp+70h] [rbp+8h] BYREF
  struct ID2D1Ink *v14; // [rsp+78h] [rbp+10h] BYREF

  v14 = a2;
  v3 = *((_DWORD *)this + 20);
  v4 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  v6 = 0;
  v7 = 0;
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 43) = *((_DWORD *)a3 + 3);
  if ( v3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v9 + *((_QWORD *)this + 7)), &v14, &v13);
      v6 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v11 = v14;
      (*(void (__fastcall **)(struct ID2D1Ink *, char *))(*(_QWORD *)v14 + 32LL))(v14, (char *)this + 168);
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v11 + 16LL))(v11);
      v5 = v13;
      v4 = 0LL;
      v14 = 0LL;
      if ( v13 )
      {
        (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v13 + 16LL))(v13);
        v5 = 0LL;
        v13 = 0LL;
      }
      ++v7;
      v9 += 8LL;
      if ( v7 >= v3 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x72u);
    v4 = v14;
    v5 = v13;
  }
  else
  {
LABEL_7:
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
