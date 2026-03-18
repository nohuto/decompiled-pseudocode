/*
 * XREFs of ?Create@CD3DVertexBuffer@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z @ 0x1800ACC38
 * Callers:
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007CC34 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x1800ACEA4 (-EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DVertexBuffer::Create(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        __int64 a3,
        struct CD3DVertexBuffer **a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi

  v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         72LL);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_DWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 44) = 0;
    *(_DWORD *)(v6 + 64) = 0;
    *(_QWORD *)(v6 + 24) = a1;
    *(_DWORD *)(v6 + 48) = 2097120;
    *(_DWORD *)(v6 + 52) = 2;
    *(_BYTE *)(v6 + 56) = 0;
    *(_QWORD *)v6 = &CD3DVertexBuffer::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v8 = CD3DBuffer::EnsureByteSpace((CD3DBuffer *)v7, 5000 * dword_1801C65A0[*(int *)(v7 + 64)], 1);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x9Du);
      CMILRefCountBase::Release((CMILRefCountBase *)v7);
    }
    else
    {
      *a4 = (struct CD3DVertexBuffer *)v7;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x9Au);
  }
  return v9;
}
