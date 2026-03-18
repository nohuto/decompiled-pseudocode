/*
 * XREFs of ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x18001FB98
 * Callers:
 *     ?Init@Mesh@@AEAAJPEBUContentInfo@1@@Z @ 0x1800179FC (-Init@Mesh@@AEAAJPEBUContentInfo@1@@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18001FD70 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x180068ADC (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x180068F7C (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall Mesh::GrowPreallocatedGraphObjects(Mesh *this)
{
  int v1; // r15d
  int v3; // r15d
  Mesh::MeshGraph *v4; // rbp
  unsigned int v5; // edx
  Mesh::MeshGraph *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r12
  int v12; // eax
  int v13; // esi
  unsigned int v15; // edx
  Mesh::MeshGraph *v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 2);
  v16 = 0LL;
  v3 = v1 + 64;
  v4 = 0LL;
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *(_QWORD *)this);
  v6 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
  *(_QWORD *)this = 0LL;
  if ( v6 )
    Mesh::MeshGraph::`scalar deleting destructor'(v6, v5);
  v7 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 2) = 0LL;
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
  v8 = *((_QWORD *)this + 5);
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
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 64) = 0LL;
    *(_DWORD *)(v9 + 32) = 0;
    *(_DWORD *)(v9 + 56) = 0;
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_QWORD *)(v9 + 96) = 0LL;
    *(_DWORD *)(v9 + 104) = 0;
    *(_DWORD *)(v9 + 128) = 0;
  }
  v10 = (__int64)v3 << 6;
  if ( !is_mul_ok(v3, 0x40uLL) )
    v10 = -1LL;
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v10);
  if ( !v11 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x7Bu);
LABEL_17:
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v11);
    if ( v4 )
      Mesh::MeshGraph::`scalar deleting destructor'(v4, v15);
    return (unsigned int)v13;
  }
  v12 = Mesh::MeshGraph::Create(v3, v3, 2 * v3, 0, &v16);
  v4 = v16;
  v13 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x7Du);
  }
  else
  {
    *(_QWORD *)this = v11;
    v13 = 0;
    *((_DWORD *)this + 2) = v3;
    *((_QWORD *)this + 2) = v4;
  }
  if ( v13 < 0 )
    goto LABEL_17;
  return (unsigned int)v13;
}
