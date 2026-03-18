/*
 * XREFs of ?Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800ACD0C
 * Callers:
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x18007CC34 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x1800ACEA4 (-EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DIndexBuffer::Create(struct CD3DDeviceLevel1 *a1, __int64 a2, struct CD3DIndexBuffer **a3)
{
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi

  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         64LL);
  v6 = (volatile signed __int32 *)v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_DWORD *)(v5 + 40) = 0;
    *(_DWORD *)(v5 + 44) = 0;
    *(_DWORD *)(v5 + 48) = -1;
    *(_QWORD *)(v5 + 24) = a1;
    *(_DWORD *)(v5 + 52) = 2;
    *(_BYTE *)(v5 + 56) = 0;
    *(_QWORD *)v5 = &CD3DIndexBuffer::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v7 = CD3DBuffer::EnsureByteSpace((CD3DBuffer *)v6, 0x3E80u, 1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xBCu);
      CMILRefCountBase::Release((CMILRefCountBase *)v6);
    }
    else
    {
      *a3 = (struct CD3DIndexBuffer *)v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB9u);
  }
  return v8;
}
