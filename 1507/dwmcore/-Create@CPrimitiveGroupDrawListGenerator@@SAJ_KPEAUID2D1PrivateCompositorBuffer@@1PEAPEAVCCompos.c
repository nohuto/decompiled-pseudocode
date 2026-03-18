/*
 * XREFs of ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompositionSurfaceBitmap@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180073154
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18006E850 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x18005D1E8 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18005D278 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18007307C (-Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVCCompositionSurfaceBitmap@@_K01PEAPEAVCResource@@1@Z @ 0x180076B14 (-Initialize@CPrimitiveGroupDrawListGenerator@@AEAAJPEAPEAVCCompositionSurfaceBitmap@@_K01PEAPEAV.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        __int64 a1,
        struct ID2D1PrivateCompositorBuffer *a2,
        struct ID2D1PrivateCompositorBuffer *a3,
        struct CCompositionSurfaceBitmap **a4,
        unsigned __int64 a5,
        struct CCompositionSurfaceBitmap **a6,
        unsigned __int64 a7,
        struct CResource **a8,
        unsigned __int64 a9,
        struct CPrimitiveGroupDrawListGenerator **a10)
{
  LPVOID (__fastcall *v13)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  CCommandBuffer *v14; // rax
  CCommandBuffer *v15; // r15
  LPVOID (__fastcall *v16)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  CPrimitiveBuffer *v17; // rax
  CPrimitiveBuffer *v18; // r14
  int v19; // eax
  unsigned int v20; // esi
  LPVOID (__fastcall *v21)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  CPrimitiveGroupDrawListGenerator *v22; // rax
  CPrimitiveGroupDrawListGenerator *v23; // rdi
  int v24; // eax
  int v26; // r9d
  unsigned int v27; // [rsp+20h] [rbp-48h]

  v13 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v13 == WPF::ProcessHeapImpl::Alloc )
    v14 = (CCommandBuffer *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
  else
    v14 = (CCommandBuffer *)v13(WPF::g_pProcessHeap, 16LL);
  v15 = v14;
  if ( !v14 )
  {
    v20 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC1u);
    return v20;
  }
  *(_QWORD *)v14 = 0LL;
  v16 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v16 == WPF::ProcessHeapImpl::Alloc )
    v17 = (CPrimitiveBuffer *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
  else
    v17 = (CPrimitiveBuffer *)v16(WPF::g_pProcessHeap, 16LL);
  v18 = v17;
  if ( v17 )
  {
    *(_QWORD *)v17 = 0LL;
    *((_DWORD *)v17 + 2) = 0;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v18 )
  {
    v19 = CCommandBuffer::Initialize(v15, a2);
    v20 = v19;
    if ( v19 < 0 )
    {
      v27 = 196;
    }
    else
    {
      v19 = CPrimitiveBuffer::Initialize(v18, a3);
      v20 = v19;
      if ( v19 >= 0 )
      {
        v21 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
        if ( v21 == WPF::ProcessHeapImpl::Alloc )
          v22 = (CPrimitiveGroupDrawListGenerator *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x88uLL);
        else
          v22 = (CPrimitiveGroupDrawListGenerator *)v21(WPF::g_pProcessHeap, 136LL);
        v23 = v22;
        if ( v22 )
        {
          *((_QWORD *)v22 + 2) = v15;
          *(_QWORD *)v22 = &CMILRefCountBase::`vftable';
          *(_QWORD *)v22 = &CPrimitiveGroupDrawListGenerator::`vftable';
          *((_DWORD *)v22 + 2) = 0;
          *((_QWORD *)v22 + 3) = v18;
          *((_QWORD *)v22 + 4) = a1;
          *((_QWORD *)v22 + 5) = 0LL;
          *((_QWORD *)v22 + 6) = 0LL;
          *((_QWORD *)v22 + 7) = 0LL;
          *((_DWORD *)v22 + 16) = 0;
          *((_QWORD *)v22 + 9) = 0LL;
          *((_QWORD *)v22 + 10) = 0LL;
          *((_QWORD *)v22 + 11) = 0LL;
          *((_DWORD *)v22 + 24) = 0;
          *((_QWORD *)v22 + 13) = 0LL;
          *((_QWORD *)v22 + 14) = 0LL;
          *((_QWORD *)v22 + 15) = 0LL;
          *((_DWORD *)v22 + 32) = 0;
        }
        else
        {
          v23 = 0LL;
        }
        if ( v23 )
        {
          (**(void (__fastcall ***)(CPrimitiveGroupDrawListGenerator *))v23)(v23);
          v24 = CPrimitiveGroupDrawListGenerator::Initialize(v23, a4, a5, a6, a7, a8, a9);
          v20 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xD6u);
          }
          else
          {
            v15 = 0LL;
            v18 = 0LL;
            *a10 = v23;
            v23 = 0LL;
          }
          if ( v23 )
            (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v23 + 8LL))(v23);
          goto LABEL_20;
        }
        v27 = 203;
        goto LABEL_31;
      }
      v27 = 197;
    }
    v26 = v19;
    goto LABEL_34;
  }
  v27 = 194;
LABEL_31:
  v26 = -2147024882;
  v20 = -2147024882;
LABEL_34:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v27);
LABEL_20:
  if ( v15 )
    CPrimitiveBuffer::`scalar deleting destructor'((void **)v15);
  if ( v18 )
    CPrimitiveBuffer::`scalar deleting destructor'((void **)v18);
  return v20;
}
