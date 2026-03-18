/*
 * XREFs of ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x180114D0C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801148AC (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessSegmentUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_SEGMENTUPDATE *a3)
{
  struct ID2D1Ink *v4; // rsi
  struct ID2D1InkStyle *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  const struct MILCMD_INK_SEGMENTUPDATE *v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // xmm1_4
  __int64 v13; // r15
  int ID2D1InkAndInkStyle; // eax
  __int64 v15; // r14
  bool v16; // cf
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int128 v21; // [rsp+30h] [rbp-38h]
  __int128 v22; // [rsp+40h] [rbp-28h]
  struct ID2D1InkStyle *v23; // [rsp+B0h] [rbp+48h] BYREF
  struct CResourceTable *v24; // [rsp+B8h] [rbp+50h]
  const struct MILCMD_INK_SEGMENTUPDATE *v25; // [rsp+C0h] [rbp+58h]
  struct ID2D1Ink *v26; // [rsp+C8h] [rbp+60h] BYREF

  v25 = a3;
  v24 = a2;
  v4 = 0LL;
  v5 = 0LL;
  v6 = *((_QWORD *)this + 17);
  v7 = 0;
  v21 = *(_OWORD *)((char *)a3 + 12);
  v8 = 0;
  v9 = a3;
  v10 = 9LL * *((unsigned int *)a3 + 2);
  DWORD1(v22) = *((_DWORD *)a3 + 8);
  v11 = *((_DWORD *)a3 + 11);
  LODWORD(v22) = *((_DWORD *)a3 + 7);
  v12 = *((_DWORD *)a3 + 9);
  HIDWORD(v22) = *((_DWORD *)a3 + 10);
  v26 = 0LL;
  DWORD2(v22) = v12;
  v23 = 0LL;
  *(_OWORD *)(v6 + 4 * v10) = v21;
  *(_OWORD *)(v6 + 4 * v10 + 16) = v22;
  *(_DWORD *)(v6 + 4 * v10 + 32) = v11;
  LODWORD(v24) = *((_DWORD *)this + 20);
  if ( (_DWORD)v24 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v13 + *((_QWORD *)this + 7)), &v26, &v23);
      v7 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v15 = *((unsigned int *)v9 + 2);
      v4 = v26;
      v16 = (unsigned int)v15 < (*(unsigned int (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v26 + 80LL))(v26);
      v17 = *(_QWORD *)v4;
      if ( v16 )
      {
        v18 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, __int64, __int64))(v17 + 64))(
                v4,
                (unsigned int)v15,
                *((_QWORD *)this + 17) + 36 * v15,
                1LL);
        v7 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xD7u);
          goto LABEL_13;
        }
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64))(v17 + 48))(
                v4,
                *((_QWORD *)this + 17) + 36 * v15,
                1LL);
        v7 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xDEu);
          goto LABEL_13;
        }
      }
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
      v5 = v23;
      v4 = 0LL;
      v26 = 0LL;
      if ( v23 )
      {
        (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v23 + 16LL))(v23);
        v5 = 0LL;
        v23 = 0LL;
      }
      ++v8;
      v13 += 8LL;
      if ( v8 >= (unsigned int)v24 )
        goto LABEL_15;
      v9 = v25;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0xD2u);
    v4 = v26;
LABEL_13:
    v5 = v23;
  }
  else
  {
LABEL_15:
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
