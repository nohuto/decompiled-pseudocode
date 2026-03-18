/*
 * XREFs of ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z @ 0x180158FB4
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x18014C5A8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z @ 0x180158FB4 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18011A6F0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ??0CBspNode@@QEAA@XZ @ 0x180158C1C (--0CBspNode@@QEAA@XZ.c)
 *     ?AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z @ 0x180158D58 (-AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z @ 0x180158FB4 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x180159214 (-ReleaseSubTree@CBspNode@@QEAAXXZ.c)
 */

__int64 __fastcall CBspNode::PushPolygon(CPolygon ***this, struct CPolygon *a2)
{
  struct CPolygon *v2; // rsi
  CBspNode **v3; // rbx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  CBspNode *v8; // rax
  int v9; // eax
  struct CPolygon *v10; // rax
  CBspNode *v11; // rax
  int v12; // eax
  struct CPolygon *v14; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+70h] [rbp+30h] BYREF
  struct CPolygon *v17; // [rsp+78h] [rbp+38h] BYREF

  v2 = a2;
  v3 = (CBspNode **)this;
  v14 = 0LL;
  v17 = 0LL;
  v16 = 0;
  if ( *((_DWORD *)this + 16) )
  {
    v6 = CPolygon::CompareAndSplit(*this[5], a2, (enum D2DVectorHelper::Relation *)&v16, &v14, &v17);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA4u);
      v2 = v14;
      goto LABEL_31;
    }
    if ( v16 )
    {
      if ( v16 == 1 )
        goto LABEL_14;
      if ( v16 == 2 )
        v17 = v2;
    }
    else
    {
      v7 = CBspNode::AddPolygon((CBspNode *)v3, v2);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xAAu);
        goto LABEL_37;
      }
    }
    v2 = v14;
LABEL_14:
    if ( v2 )
    {
      if ( !v3[3] )
      {
        v8 = (CBspNode *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           104LL);
        if ( v8 )
          v8 = CBspNode::CBspNode(v8);
        v3 = (CBspNode **)this;
        this[3] = (CPolygon **)v8;
        if ( !v8 )
        {
          v5 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBDu);
          goto LABEL_31;
        }
      }
      v9 = CBspNode::PushPolygon(v3[3], v2);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xBFu);
        goto LABEL_31;
      }
    }
    v10 = v17;
    if ( v17 )
    {
      if ( !v3[4] )
      {
        v11 = (CBspNode *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 16LL))(
                            WPF::g_pProcessHeap,
                            104LL);
        if ( v11 )
          v11 = CBspNode::CBspNode(v11);
        v3 = (CBspNode **)this;
        this[4] = (CPolygon **)v11;
        if ( !v11 )
        {
          v5 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC7u);
          goto LABEL_31;
        }
        v10 = v17;
      }
      v12 = CBspNode::PushPolygon(v3[4], v10);
      v5 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC9u);
    }
LABEL_31:
    if ( v16 == 3 )
    {
      if ( v2 )
        (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v2 + 8LL))(v2);
      if ( v17 )
        (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v17 + 8LL))(v17);
      v3 = (CBspNode **)this;
    }
    goto LABEL_37;
  }
  v4 = CBspNode::AddPolygon((CBspNode *)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
    return (unsigned int)v5;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x9Cu);
LABEL_37:
  if ( v5 < 0 )
    CBspNode::ReleaseSubTree((CBspNode *)v3);
  return (unsigned int)v5;
}
