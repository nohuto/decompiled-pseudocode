/*
 * XREFs of ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x1800920C8
 * Callers:
 *     ?Init@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180001B10 (-Init@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800921B0 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800A2A24 (-Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z.c)
 *     ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800A3A84 (--_GMeshGraph@Mesh@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::GrowPreallocatedGraphObjects(Mesh *this)
{
  int v2; // esi
  Mesh::MeshGraph *v3; // rbp
  unsigned int v4; // edx
  Mesh::MeshGraph *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v12; // edx
  struct Mesh::MeshGraph *v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 2) + 64;
  v3 = 0LL;
  v13 = 0LL;
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *(_QWORD *)this);
  v5 = (Mesh::MeshGraph *)*((_QWORD *)this + 2);
  *(_QWORD *)this = 0LL;
  if ( v5 )
    Mesh::MeshGraph::`scalar deleting destructor'(v5, v4);
  *((_QWORD *)this + 2) = 0LL;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 64) = 0LL;
    *(_DWORD *)(v6 + 32) = 0;
    *(_DWORD *)(v6 + 56) = 0;
    *(_DWORD *)(v6 + 88) = 0;
    *(_DWORD *)(v6 + 92) = 0;
    *(_DWORD *)(v6 + 96) = 0;
    *(_DWORD *)(v6 + 100) = 0;
    *(_DWORD *)(v6 + 104) = 0;
    *(_DWORD *)(v6 + 128) = 0;
  }
  v7 = 40LL * v2;
  if ( !is_mul_ok(v2, 0x28uLL) )
    v7 = -1LL;
  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         v7);
  if ( v8 )
  {
    v9 = Mesh::MeshGraph::Create(v2, v2, 2 * v2, 0, &v13);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v10 = 0;
      *((_QWORD *)this + 2) = v13;
      *(_QWORD *)this = v8;
      *((_DWORD *)this + 2) = v2;
      return v10;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8Du);
    v3 = v13;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x8Bu);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v8);
  if ( v3 )
    Mesh::MeshGraph::`scalar deleting destructor'(v3, v12);
  return v10;
}
