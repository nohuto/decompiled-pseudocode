/*
 * XREFs of ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x18010C52C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18014D864 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessStartPointUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_STARTPOINTUPDATE *a3)
{
  unsigned int v3; // r12d
  char *v4; // r13
  struct ID2D1Ink *v5; // rdi
  struct ID2D1InkStyle *v6; // rbx
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  __int64 v10; // r14
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1Ink *v12; // rbx
  struct ID2D1InkStyle *v14; // [rsp+70h] [rbp+8h] BYREF
  struct ID2D1Ink *v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = a2;
  v3 = *((_DWORD *)this + 38);
  v4 = (char *)this + 240;
  v5 = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  v7 = 0;
  v14 = 0LL;
  v8 = 0;
  *((_DWORD *)this + 62) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 60) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 61) = *((_DWORD *)a3 + 3);
  if ( v3 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v10 + *((_QWORD *)this + 16)), &v15, &v14);
      v7 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v12 = v15;
      (*(void (__fastcall **)(struct ID2D1Ink *, char *))(*(_QWORD *)v15 + 32LL))(v15, v4);
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v12 + 16LL))(v12);
      v6 = v14;
      v5 = 0LL;
      v15 = 0LL;
      if ( v14 )
      {
        (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v14 + 16LL))(v14);
        v6 = 0LL;
        v14 = 0LL;
      }
      ++v8;
      v10 += 8LL;
      if ( v8 >= v3 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x72u);
    v5 = v15;
    v6 = v14;
  }
  else
  {
LABEL_7:
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
