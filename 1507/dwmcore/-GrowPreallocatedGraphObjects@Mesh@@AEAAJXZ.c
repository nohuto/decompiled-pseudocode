/*
 * XREFs of ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x1800759D8
 * Callers:
 *     ?Init@Mesh@@AEAAJPEBUContentInfo@1@@Z @ 0x1800094C4 (-Init@Mesh@@AEAAJPEBUContentInfo@1@@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180075B0C (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x18005E76C (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800711C0 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall Mesh::GrowPreallocatedGraphObjects(Mesh *this)
{
  int v1; // r15d
  int v3; // r15d
  Mesh::MeshGraph *v4; // rbp
  Mesh::MeshGraph *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r12
  int v11; // eax
  int v12; // esi
  Mesh::MeshGraph *v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 2);
  v14 = 0LL;
  v3 = v1 + 64;
  v4 = 0LL;
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *(_QWORD *)this);
  v5 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
  *(_QWORD *)this = 0LL;
  if ( v5 )
    Mesh::MeshGraph::`scalar deleting destructor'(v5);
  v6 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 2) = 0LL;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_DWORD *)(v6 + 32) = 0;
    *(_DWORD *)(v6 + 56) = 0;
    *(_QWORD *)(v6 + 88) = 0LL;
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_DWORD *)(v6 + 104) = 0;
    *(_DWORD *)(v6 + 128) = 0;
  }
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 64) = 0LL;
    *(_DWORD *)(v7 + 32) = 0;
    *(_DWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(v7 + 96) = 0LL;
    *(_DWORD *)(v7 + 104) = 0;
    *(_DWORD *)(v7 + 128) = 0;
  }
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
  {
    *(_QWORD *)(v8 + 64) = 0LL;
    *(_DWORD *)(v8 + 32) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    *(_QWORD *)(v8 + 88) = 0LL;
    *(_QWORD *)(v8 + 96) = 0LL;
    *(_DWORD *)(v8 + 104) = 0;
    *(_DWORD *)(v8 + 128) = 0;
  }
  v9 = (__int64)v3 << 6;
  if ( !is_mul_ok(v3, 0x40uLL) )
    v9 = -1LL;
  v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v9);
  if ( !v10 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Bu);
LABEL_17:
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v10);
    if ( v4 )
      Mesh::MeshGraph::`scalar deleting destructor'(v4);
    return (unsigned int)v12;
  }
  v11 = Mesh::MeshGraph::Create(v3, v3, 2 * v3, 0, &v14);
  v4 = v14;
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x7Du);
  }
  else
  {
    *(_QWORD *)this = v10;
    v12 = 0;
    *((_DWORD *)this + 2) = v3;
    *((_QWORD *)this + 2) = v4;
  }
  if ( v12 < 0 )
    goto LABEL_17;
  return (unsigned int)v12;
}
