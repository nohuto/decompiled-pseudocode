/*
 * XREFs of ?Create@MeshGraph@Mesh@@SAJHHHHPEAPEAU12@@Z @ 0x1800A2A24
 * Callers:
 *     ?LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z @ 0x1800917B8 (-LookupCachedGridGraph@Mesh@@AEAAJPEAPEAUMeshGraph@1@@Z.c)
 *     ?GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ @ 0x1800920C8 (-GrowPreallocatedGraphObjects@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::MeshGraph::Create(int a1, int a2, int a3, int a4, struct Mesh::MeshGraph **a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // r13
  __int64 v7; // r9
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  TemporaryConfiguration *v10; // rdi
  TemporaryConfiguration *v11; // rsi
  LPVOID v12; // rbp
  unsigned __int64 v13; // r14
  SIZE_T v14; // rdx
  LPVOID (__fastcall *v15)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  TemporaryConfiguration *v16; // rax
  SIZE_T v17; // rdx
  LPVOID (__fastcall *v18)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  TemporaryConfiguration *v19; // rax
  SIZE_T v20; // rdx
  LPVOID (__fastcall *v21)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v22; // rax
  __int64 v23; // rax
  __int64 v24; // r14
  LPVOID (__fastcall *v25)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  _DWORD *v26; // rax
  unsigned int v28; // [rsp+20h] [rbp-48h]
  __int64 v29; // [rsp+30h] [rbp-38h]

  v5 = 0;
  v6 = a4;
  v7 = -1LL;
  v8 = a3;
  v9 = a2;
  v10 = 0LL;
  v11 = 0LL;
  v29 = 0LL;
  v12 = 0LL;
  if ( a1 > 0 )
  {
    v13 = a1;
    v14 = (__int64)a1 << 6;
    if ( !is_mul_ok(a1, 0x40uLL) )
      v14 = -1LL;
    v15 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v15 == WPF::ProcessHeapImpl::Alloc )
      v16 = (TemporaryConfiguration *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v14);
    else
      v16 = (TemporaryConfiguration *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T), __int64))v15)(
                                        WPF::g_pProcessHeap,
                                        v14,
                                        WPF::ProcessHeapImpl::Alloc,
                                        -1LL);
    v10 = v16;
    if ( v16 )
      `vector constructor iterator'(v16, 0x40uLL, v13, (void *(*)(void *))Mesh::MeshVertex::MeshVertex);
    else
      v10 = 0LL;
    if ( !v10 )
    {
      v28 = 4897;
LABEL_49:
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, v28);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, TemporaryConfiguration *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v10);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, TemporaryConfiguration *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v11);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, LPVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v12);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v29);
      return v5;
    }
    v7 = -1LL;
  }
  if ( (int)v9 > 0 )
  {
    v17 = 88 * v9;
    if ( !is_mul_ok(v9, 0x58uLL) )
      v17 = -1LL;
    v18 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v19 = v18 == WPF::ProcessHeapImpl::Alloc
        ? (TemporaryConfiguration *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v17)
        : (TemporaryConfiguration *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T), __int64))v18)(
                                      WPF::g_pProcessHeap,
                                      v17,
                                      WPF::ProcessHeapImpl::Alloc,
                                      -1LL);
    v11 = v19;
    if ( v19 )
      `vector constructor iterator'(v19, 0x58uLL, v9, (void *(*)(void *))Mesh::MeshLine::MeshLine);
    else
      v11 = 0LL;
    if ( !v11 )
    {
      v28 = 4903;
      goto LABEL_49;
    }
  }
  if ( (int)v8 > 0 )
  {
    v20 = 88 * v8;
    if ( !is_mul_ok(v8, 0x58uLL) )
      v20 = -1LL;
    v21 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v22 = v21 == WPF::ProcessHeapImpl::Alloc
        ? WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v20)
        : (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T), __int64))v21)(
                    WPF::g_pProcessHeap,
                    v20,
                    WPF::ProcessHeapImpl::Alloc,
                    v7);
    v12 = v22;
    if ( !v22 )
    {
      v28 = 4909;
      goto LABEL_49;
    }
  }
  if ( (int)v6 <= 0 )
  {
    v24 = 0LL;
    goto LABEL_28;
  }
  v23 = 2 * v6;
  if ( !is_mul_ok(v6, 2uLL) )
    v23 = -1LL;
  v29 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v23);
  v24 = v29;
  if ( !v29 )
  {
    v28 = 4915;
    goto LABEL_49;
  }
LABEL_28:
  v25 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v25 == WPF::ProcessHeapImpl::Alloc )
    v26 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x88uLL);
  else
    v26 = (_DWORD *)v25(WPF::g_pProcessHeap, 136LL);
  if ( v26 )
  {
    v26[6] = a1;
    *((_QWORD *)v26 + 2) = v10;
    v26[12] = v9;
    *((_QWORD *)v26 + 5) = v11;
    v26[20] = v8;
    *((_QWORD *)v26 + 9) = v12;
    v26[30] = v6;
    *((_QWORD *)v26 + 14) = v24;
    *((_QWORD *)v26 + 8) = 0LL;
    v26[8] = 0;
    v26[14] = 0;
    *((_QWORD *)v26 + 11) = 0LL;
    *((_QWORD *)v26 + 12) = 0LL;
    v26[26] = 0;
    v26[32] = 0;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v26 )
  {
    v28 = 4923;
    goto LABEL_49;
  }
  *a5 = (struct Mesh::MeshGraph *)v26;
  return v5;
}
