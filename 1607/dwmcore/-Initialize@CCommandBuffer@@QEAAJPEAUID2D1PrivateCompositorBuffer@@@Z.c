/*
 * XREFs of ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009E04C
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x18009DCF4 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x180106DD0 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CCommandBuffer::Initialize(CCommandBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rax
  void *v8; // rdi
  unsigned int v9; // ebx
  const void *v10; // rax
  unsigned int v11; // ecx
  _DWORD *v12; // rax

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( v5 == 144 * (v5 / 0x90uLL) )
  {
    v6 = (*(unsigned int (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2) / 0x90;
    v7 = 144LL * v6;
    if ( !is_mul_ok(v6, 0x90uLL) )
      v7 = -1LL;
    v8 = (void *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   v7);
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
      v10 = (const void *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 24LL))(a2);
      memcpy_0(v8, v10, v9);
      v11 = 0;
      if ( v6 )
      {
        v12 = v8;
        while ( *v12 <= 3u && v12[3] <= 7u )
        {
          ++v11;
          v12 += 36;
          if ( v11 >= v6 )
            goto LABEL_13;
        }
        v4 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x35u);
      }
      else
      {
LABEL_13:
        *(_QWORD *)this = v8;
        v8 = 0LL;
        *((_DWORD *)this + 2) = v6;
      }
      if ( v8 )
        operator delete(v8);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x28u);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x23u);
  }
  return v4;
}
