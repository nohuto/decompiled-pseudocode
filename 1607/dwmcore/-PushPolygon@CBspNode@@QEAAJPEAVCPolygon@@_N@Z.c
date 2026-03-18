/*
 * XREFs of ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180199750
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x18018CCF8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180199750 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x18015384C (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z @ 0x180199694 (-AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180199750 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 *     ?ReleaseSubTree@CBspNode@@QEAAXXZ @ 0x1801999FC (-ReleaseSubTree@CBspNode@@QEAAXXZ.c)
 */

__int64 __fastcall CBspNode::PushPolygon(CBspNode *this, struct CPolygon *a2, bool a3)
{
  struct CPolygon *v3; // rdi
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  struct CPolygon *v9; // rax
  __int64 v10; // rax
  bool v11; // r8
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-20h]
  struct CPolygon *v17; // [rsp+30h] [rbp-10h] BYREF
  int v18; // [rsp+60h] [rbp+20h] BYREF
  bool v19; // [rsp+70h] [rbp+30h]
  struct CPolygon *v20; // [rsp+78h] [rbp+38h] BYREF

  v19 = a3;
  v3 = a2;
  v17 = 0LL;
  v20 = 0LL;
  v18 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    v7 = CPolygon::CompareAndSplit(**((CPolygon ***)this + 4), a2, (enum D2DVectorHelper::Relation *)&v18, &v17, &v20);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x92u);
      v3 = v20;
      goto LABEL_36;
    }
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v17 = v3;
      }
      else if ( v18 == 2 )
      {
        v20 = v3;
        goto LABEL_13;
      }
    }
    else
    {
      v8 = CBspNode::AddPolygon(this, v3);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x98u);
        goto LABEL_41;
      }
    }
    v3 = v20;
LABEL_13:
    v9 = v17;
    if ( v17 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        v11 = v19;
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                WPF::g_pProcessHeap,
                104LL);
        v11 = v19;
        if ( v10 )
        {
          *(_QWORD *)v10 = &CMILRefCountBase::`vftable';
          *(_QWORD *)v10 = &CBspNode::`vftable';
          *(_DWORD *)(v10 + 8) = 0;
          *(_DWORD *)(v10 + 56) = 0;
          *(_QWORD *)(v10 + 32) = v10 + 64;
          *(_QWORD *)(v10 + 40) = v10 + 64;
          *(_DWORD *)(v10 + 48) = 4;
          *(_DWORD *)(v10 + 52) = 4;
          *(_BYTE *)(v10 + 96) = v11;
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
          v3 = v20;
        }
        *((_QWORD *)this + 2) = v10;
        if ( !v10 )
        {
          v16 = 171;
LABEL_19:
          v12 = -2147024882;
          v6 = -2147024882;
LABEL_20:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v16);
          goto LABEL_36;
        }
        v9 = v17;
      }
      v13 = CBspNode::PushPolygon(*((CBspNode **)this + 2), v9, v11);
      v6 = v13;
      if ( v13 < 0 )
      {
        v16 = 173;
LABEL_25:
        v12 = v13;
        goto LABEL_20;
      }
    }
    if ( v3 )
    {
      if ( !*((_QWORD *)this + 3) )
      {
        v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                WPF::g_pProcessHeap,
                104LL);
        if ( v14 )
        {
          *(_QWORD *)v14 = &CMILRefCountBase::`vftable';
          *(_QWORD *)v14 = &CBspNode::`vftable';
          *(_DWORD *)(v14 + 8) = 0;
          *(_DWORD *)(v14 + 56) = 0;
          *(_QWORD *)(v14 + 32) = v14 + 64;
          *(_QWORD *)(v14 + 40) = v14 + 64;
          *(_DWORD *)(v14 + 48) = 4;
          *(_DWORD *)(v14 + 52) = 4;
          *(_BYTE *)(v14 + 96) = v19;
          _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
          v3 = v20;
        }
        *((_QWORD *)this + 3) = v14;
        if ( !v14 )
        {
          v16 = 181;
          goto LABEL_19;
        }
      }
      v13 = CBspNode::PushPolygon(*((CBspNode **)this + 3), v3, v19);
      v6 = v13;
      if ( v13 < 0 )
      {
        v16 = 183;
        goto LABEL_25;
      }
    }
LABEL_36:
    if ( v18 == 3 )
    {
      if ( v17 )
        (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v17 + 8LL))(v17);
      if ( v3 )
        (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v3 + 8LL))(v3);
    }
    goto LABEL_41;
  }
  v5 = CBspNode::AddPolygon(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
    return (unsigned int)v6;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8Au);
LABEL_41:
  if ( v6 < 0 )
    CBspNode::ReleaseSubTree(this);
  return (unsigned int)v6;
}
