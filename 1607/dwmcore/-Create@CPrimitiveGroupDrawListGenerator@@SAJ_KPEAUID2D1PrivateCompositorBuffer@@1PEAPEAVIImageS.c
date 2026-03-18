/*
 * XREFs of ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x18009DCF4
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18004C8B8 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180153354 (-CreateNewGenerator@CCommandListBitmapRepresentation@@AEAAJPEBVCComposition@@PEAVID2DContextOwne.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVIImageSource@@_K01PEAPEAVCResource@@1@Z @ 0x180094990 (-Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVIImageSource@@_K01PEAPEAVCResource@@1@.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x18009DF14 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009DF84 (-Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009E04C (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        __int64 a1,
        struct ID2D1PrivateCompositorBuffer *a2,
        struct ID2D1PrivateCompositorBuffer *a3,
        struct IImageSource **a4,
        unsigned __int64 a5,
        struct IImageSource **a6,
        unsigned __int64 a7,
        struct CResource **a8,
        unsigned __int64 a9,
        struct CPrimitiveGroupDrawListGenerator **a10)
{
  CPrimitiveGroupDrawListGenerator *v14; // rbx
  LPVOID (__fastcall *v15)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CCommandBuffer *v16; // rax
  CCommandBuffer *v17; // r14
  LPVOID (__fastcall *v18)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CPrimitiveBuffer *v19; // rax
  CPrimitiveBuffer *v20; // rsi
  int v21; // eax
  unsigned int v22; // edi
  int v23; // eax
  LPVOID (__fastcall *v24)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CPrimitiveGroupDrawListGenerator *v25; // rax
  int v26; // eax
  int v28; // r9d
  unsigned int v29; // edx
  unsigned int v30; // edx
  unsigned int v31; // [rsp+20h] [rbp-48h]

  v14 = 0LL;
  v15 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v15 == WPF::ProcessHeapImpl::Alloc )
    v16 = (CCommandBuffer *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
  else
    v16 = (CCommandBuffer *)v15(WPF::g_pProcessHeap, 16LL);
  v17 = v16;
  if ( !v16 )
  {
    v22 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA2u);
    return v22;
  }
  *(_QWORD *)v16 = 0LL;
  *((_DWORD *)v16 + 2) = 0;
  v18 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v18 == WPF::ProcessHeapImpl::Alloc )
    v19 = (CPrimitiveBuffer *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
  else
    v19 = (CPrimitiveBuffer *)v18(WPF::g_pProcessHeap, 16LL);
  v20 = v19;
  if ( v19 )
  {
    *(_QWORD *)v19 = 0LL;
    *((_DWORD *)v19 + 2) = 0;
    v21 = CCommandBuffer::Initialize(v17, a2);
    v22 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xA5u);
LABEL_29:
      if ( v14 )
        (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v14 + 8LL))(v14);
      goto LABEL_31;
    }
    v23 = CPrimitiveBuffer::Initialize(v20, a3);
    v22 = v23;
    if ( v23 < 0 )
    {
      v31 = 166;
      v28 = v23;
      goto LABEL_25;
    }
    v24 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v24 == WPF::ProcessHeapImpl::Alloc )
      v25 = (CPrimitiveGroupDrawListGenerator *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x88uLL);
    else
      v25 = (CPrimitiveGroupDrawListGenerator *)v24(WPF::g_pProcessHeap, 136LL);
    v14 = v25;
    if ( v25 )
    {
      *((_QWORD *)v25 + 2) = v17;
      *(_QWORD *)v25 = &CMILRefCountBase::`vftable';
      *(_QWORD *)v25 = &CPrimitiveGroupDrawListGenerator::`vftable';
      *((_DWORD *)v25 + 2) = 0;
      *((_QWORD *)v25 + 3) = v20;
      *((_QWORD *)v25 + 4) = a1;
      *((_QWORD *)v25 + 5) = 0LL;
      *((_QWORD *)v25 + 6) = 0LL;
      *((_QWORD *)v25 + 7) = 0LL;
      *((_DWORD *)v25 + 16) = 0;
      *((_QWORD *)v25 + 9) = 0LL;
      *((_QWORD *)v25 + 10) = 0LL;
      *((_QWORD *)v25 + 11) = 0LL;
      *((_DWORD *)v25 + 24) = 0;
      *((_QWORD *)v25 + 13) = 0LL;
      *((_QWORD *)v25 + 14) = 0LL;
      *((_QWORD *)v25 + 15) = 0LL;
      *((_DWORD *)v25 + 32) = 0;
      _InterlockedExchangeAdd((volatile signed __int32 *)CCounterManager::s_pGlobalPerFrameCounterManager + 10, 1u);
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      (**(void (__fastcall ***)(CPrimitiveGroupDrawListGenerator *))v14)(v14);
      v26 = CPrimitiveGroupDrawListGenerator::Initialize(v14, a4, a5, a6, a7, a8, a9);
      v22 = v26;
      if ( v26 >= 0 )
      {
        *a10 = v14;
        return v22;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xB7u);
      goto LABEL_29;
    }
    v31 = 172;
  }
  else
  {
    v31 = 163;
  }
  v28 = -2147024882;
  v22 = -2147024882;
LABEL_25:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v31);
LABEL_31:
  CPrimitiveBuffer::`scalar deleting destructor'(v17, v29);
  if ( v20 )
    CPrimitiveBuffer::`scalar deleting destructor'(v20, v30);
  return v22;
}
