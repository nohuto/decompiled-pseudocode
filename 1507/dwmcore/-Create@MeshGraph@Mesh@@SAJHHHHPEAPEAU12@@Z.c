/*
 * XREFs of ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x18005E76C
 * Callers:
 *     ?LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z @ 0x180074DB0 (-LookupCachedGridGraph@Mesh@@AEAAJHPEAPEAUMeshGraph@1@@Z.c)
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x1800759D8 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall Mesh::MeshGraph::Create(int a1, int a2, int a3, int a4, struct Mesh::MeshGraph **a5)
{
  unsigned int v5; // ebp
  unsigned __int64 v6; // r13
  __int64 v7; // r8
  unsigned __int64 v8; // r12
  int v9; // eax
  Mesh::MeshLine *v10; // r14
  Mesh::MeshLine *v11; // r15
  __int64 v12; // rdi
  Mesh::MeshLine *v13; // rax
  __int64 v14; // rdi
  Mesh::MeshLine *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned int v22; // [rsp+20h] [rbp-68h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int64 v24; // [rsp+38h] [rbp-50h]
  int v26; // [rsp+40h] [rbp-48h]

  v5 = 0;
  v6 = a3;
  v7 = -1LL;
  v8 = a4;
  v23 = 0LL;
  v9 = a2;
  v24 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a1 > 0 )
  {
    v12 = 72LL * a1;
    if ( !is_mul_ok(a1, 0x48uLL) )
      v12 = -1LL;
    v13 = (Mesh::MeshLine *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                              WPF::g_pProcessHeap,
                              v12,
                              -1LL);
    v10 = v13;
    if ( v13 )
      `vector constructor iterator'(v13, 72LL, a1, (void (__fastcall *)(Mesh::MeshLine *))Mesh::MeshVertex::MeshVertex);
    else
      v10 = 0LL;
    if ( !v10 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x15B9u);
      v20 = 0LL;
LABEL_37:
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Mesh::MeshLine *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v10);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, Mesh::MeshLine *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v11);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v20);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v24);
      return v5;
    }
    v9 = a2;
    v7 = -1LL;
  }
  if ( v9 > 0 )
  {
    v26 = v9;
    v14 = 88LL * v9;
    if ( !is_mul_ok(v9, 0x58uLL) )
      v14 = -1LL;
    v15 = (Mesh::MeshLine *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                              WPF::g_pProcessHeap,
                              v14,
                              -1LL);
    v11 = v15;
    if ( v15 )
      `vector constructor iterator'(v15, 88LL, v26, (void (__fastcall *)(Mesh::MeshLine *))Mesh::MeshLine::MeshLine);
    else
      v11 = 0LL;
    if ( !v11 )
    {
      v22 = 5567;
LABEL_34:
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v22);
      v20 = v23;
      goto LABEL_37;
    }
  }
  if ( (int)v6 > 0 )
  {
    v16 = 88 * v6;
    if ( !is_mul_ok(v6, 0x58uLL) )
      v16 = -1LL;
    v23 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v16,
            v7);
    if ( !v23 )
    {
      v22 = 5573;
      goto LABEL_34;
    }
  }
  if ( (int)v8 <= 0 )
  {
    v18 = 0LL;
    goto LABEL_22;
  }
  v17 = 2 * v8;
  if ( !is_mul_ok(v8, 2uLL) )
    v17 = -1LL;
  v24 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v17,
          v7);
  v18 = v24;
  if ( !v24 )
  {
    v22 = 5579;
    goto LABEL_34;
  }
LABEL_22:
  v19 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          136LL);
  if ( v19 )
  {
    *(_DWORD *)(v19 + 24) = a1;
    *(_QWORD *)(v19 + 16) = v10;
    *(_DWORD *)(v19 + 48) = a2;
    *(_QWORD *)(v19 + 40) = v11;
    *(_DWORD *)(v19 + 80) = v6;
    v20 = v23;
    *(_QWORD *)(v19 + 72) = v23;
    *(_DWORD *)(v19 + 120) = v8;
    *(_QWORD *)(v19 + 112) = v18;
    *(_QWORD *)(v19 + 64) = 0LL;
    *(_DWORD *)(v19 + 32) = 0;
    *(_DWORD *)(v19 + 56) = 0;
    *(_QWORD *)(v19 + 88) = 0LL;
    *(_QWORD *)(v19 + 96) = 0LL;
    *(_DWORD *)(v19 + 104) = 0;
    *(_DWORD *)(v19 + 128) = 0;
  }
  else
  {
    v20 = v23;
    v19 = 0LL;
  }
  if ( !v19 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x15D3u);
    goto LABEL_37;
  }
  *a5 = (struct Mesh::MeshGraph *)v19;
  return v5;
}
