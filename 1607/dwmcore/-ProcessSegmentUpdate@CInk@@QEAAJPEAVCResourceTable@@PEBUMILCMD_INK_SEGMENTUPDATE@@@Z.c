/*
 * XREFs of ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x18010C854
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18014D864 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessSegmentUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_SEGMENTUPDATE *a3)
{
  struct ID2D1Ink *v4; // rdi
  struct ID2D1InkStyle *v5; // rbx
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v8; // r12d
  __int64 v10; // rdx
  int v11; // eax
  int v12; // xmm1_4
  __int64 v13; // r14
  int ID2D1InkAndInkStyle; // eax
  __int64 v15; // rbx
  bool v16; // cf
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int128 v21; // [rsp+30h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-20h]
  struct ID2D1InkStyle *v23; // [rsp+A0h] [rbp+40h] BYREF
  struct CResourceTable *v24; // [rsp+A8h] [rbp+48h]
  struct ID2D1Ink *v25; // [rsp+B0h] [rbp+50h] BYREF

  v24 = a2;
  v4 = 0LL;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 26);
  v7 = 0;
  v21 = *(_OWORD *)((char *)a3 + 12);
  v8 = 0;
  v10 = 9LL * *((unsigned int *)a3 + 2);
  DWORD1(v22) = *((_DWORD *)a3 + 8);
  v11 = *((_DWORD *)a3 + 11);
  LODWORD(v22) = *((_DWORD *)a3 + 7);
  v12 = *((_DWORD *)a3 + 9);
  HIDWORD(v22) = *((_DWORD *)a3 + 10);
  v25 = 0LL;
  DWORD2(v22) = v12;
  v23 = 0LL;
  *(_OWORD *)(v6 + 4 * v10) = v21;
  *(_OWORD *)(v6 + 4 * v10 + 16) = v22;
  *(_DWORD *)(v6 + 4 * v10 + 32) = v11;
  LODWORD(v24) = *((_DWORD *)this + 38);
  if ( (_DWORD)v24 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v13 + *((_QWORD *)this + 16)), &v25, &v23);
      v7 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v4 = v25;
      v15 = *((unsigned int *)a3 + 2);
      v16 = (unsigned int)v15 < (*(unsigned int (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v25 + 80LL))(v25);
      v17 = *((_QWORD *)this + 26);
      if ( v16 )
      {
        v18 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 64LL))(
                v4,
                (unsigned int)v15,
                v17 + 36 * v15,
                1LL);
        v7 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xD7u);
          goto LABEL_20;
        }
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64))(*(_QWORD *)v4 + 48LL))(
                v4,
                v17 + 36 * v15,
                1LL);
        v7 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xDEu);
          goto LABEL_20;
        }
      }
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
      v5 = v23;
      v4 = 0LL;
      v25 = 0LL;
      if ( v23 )
      {
        (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v23 + 16LL))(v23);
        v5 = 0LL;
        v23 = 0LL;
      }
      ++v8;
      v13 += 8LL;
      if ( v8 >= (unsigned int)v24 )
        goto LABEL_12;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0xD2u);
    v4 = v25;
LABEL_20:
    v5 = v23;
  }
  else
  {
LABEL_12:
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
