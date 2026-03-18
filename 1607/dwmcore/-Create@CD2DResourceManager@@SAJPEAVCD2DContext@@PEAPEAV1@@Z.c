/*
 * XREFs of ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x1800B7264
 * Callers:
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18007E428 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DResourceManager::Create(struct CD2DContext *a1, struct CD2DResourceManager **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         32LL);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 16) = 0;
    *(_QWORD *)(v5 + 24) = a1;
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = (struct CD2DResourceManager *)v5;
  if ( !v5 )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xFu);
  }
  return v4;
}
