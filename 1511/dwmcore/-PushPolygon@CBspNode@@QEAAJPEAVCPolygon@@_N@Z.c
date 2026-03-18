/*
 * XREFs of ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016681C
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18015AC0C (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016681C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x180131084 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z @ 0x180166748 (-AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18016681C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x180166B0C (-ReleaseSubTree@CBspNode@@QEAAXXZ.c)
 */

__int64 __fastcall CBspNode::PushPolygon(CPolygon ***this, struct CPolygon *a2, bool a3)
{
  struct CPolygon *v3; // rsi
  CBspNode **v4; // rbx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  struct CPolygon *v11; // rax
  __int64 v12; // rax
  bool v13; // r8
  unsigned int v15; // [rsp+20h] [rbp-20h]
  struct CPolygon *v16; // [rsp+30h] [rbp-10h] BYREF
  struct CPolygon *v17; // [rsp+38h] [rbp-8h] BYREF
  int v20; // [rsp+78h] [rbp+38h] BYREF

  v3 = a2;
  v4 = (CBspNode **)this;
  v16 = 0LL;
  v17 = 0LL;
  v20 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    v7 = CPolygon::CompareAndSplit(*this[4], a2, (enum D2DVectorHelper::Relation *)&v20, &v16, &v17);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x92u);
      v3 = v16;
      goto LABEL_34;
    }
    if ( v20 )
    {
      if ( v20 == 1 )
      {
        v16 = v3;
        goto LABEL_12;
      }
      if ( v20 == 2 )
        v17 = v3;
    }
    else
    {
      v9 = CBspNode::AddPolygon((CBspNode *)v4, v3);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x98u);
        goto LABEL_40;
      }
    }
    v3 = v16;
LABEL_12:
    if ( !v3 )
      goto LABEL_23;
    if ( !v4[2] )
    {
      v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
             WPF::g_pProcessHeap,
             104LL);
      if ( v8 )
      {
        *(_QWORD *)v8 = &CMILRefCountBase::`vftable';
        *(_QWORD *)v8 = &CBspNode::`vftable';
        *(_DWORD *)(v8 + 8) = 0;
        *(_DWORD *)(v8 + 56) = 0;
        *(_QWORD *)(v8 + 32) = v8 + 64;
        *(_QWORD *)(v8 + 40) = v8 + 64;
        *(_DWORD *)(v8 + 48) = 4;
        *(_DWORD *)(v8 + 52) = 4;
        *(_BYTE *)(v8 + 96) = a3;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v3 = v16;
      }
      v4 = (CBspNode **)this;
      this[2] = (CPolygon **)v8;
      if ( !v8 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xABu);
        goto LABEL_34;
      }
    }
    v10 = CBspNode::PushPolygon(v4[2], v3, a3);
    v6 = v10;
    if ( v10 < 0 )
    {
      v15 = 173;
    }
    else
    {
LABEL_23:
      v11 = v17;
      if ( !v17 )
        goto LABEL_34;
      if ( v4[3] )
      {
        v13 = a3;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                WPF::g_pProcessHeap,
                104LL);
        v13 = a3;
        if ( v12 )
        {
          *(_QWORD *)v12 = &CMILRefCountBase::`vftable';
          *(_QWORD *)v12 = &CBspNode::`vftable';
          *(_DWORD *)(v12 + 8) = 0;
          *(_DWORD *)(v12 + 56) = 0;
          *(_QWORD *)(v12 + 32) = v12 + 64;
          *(_QWORD *)(v12 + 40) = v12 + 64;
          *(_DWORD *)(v12 + 48) = 4;
          *(_DWORD *)(v12 + 52) = 4;
          *(_BYTE *)(v12 + 96) = a3;
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          v3 = v16;
        }
        v4 = (CBspNode **)this;
        this[3] = (CPolygon **)v12;
        if ( !v12 )
        {
          v6 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB5u);
          goto LABEL_34;
        }
        v11 = v17;
      }
      v10 = CBspNode::PushPolygon(v4[3], v11, v13);
      v6 = v10;
      if ( v10 >= 0 )
      {
LABEL_34:
        if ( v20 == 3 )
        {
          if ( v3 )
            (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v3 + 8LL))(v3);
          if ( v17 )
            (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v17 + 8LL))(v17);
          v4 = (CBspNode **)this;
        }
        goto LABEL_40;
      }
      v15 = 183;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v15);
    goto LABEL_34;
  }
  v5 = CBspNode::AddPolygon((CBspNode *)this, a2);
  v6 = v5;
  if ( v5 >= 0 )
    return (unsigned int)v6;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8Au);
LABEL_40:
  if ( v6 < 0 )
    CBspNode::ReleaseSubTree((CBspNode *)v4);
  return (unsigned int)v6;
}
