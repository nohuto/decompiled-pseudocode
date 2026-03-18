/*
 * XREFs of ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@IPEAPEAV1@@Z @ 0x180177EE8
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18012E0F8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I@Z @ 0x180178270 (-UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I@Z.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::Create(
        const struct LightInfo *a1,
        unsigned int a2,
        struct CHwLightCollectionBuffer **a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  CHwLightCollectionBuffer *v8; // rbx

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         304LL);
  v8 = (CHwLightCollectionBuffer *)v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v7 + 8) = 0;
    *(_QWORD *)v7 = &CHwLightCollectionBuffer::`vftable';
    *(_DWORD *)(v7 + 16) = -1;
    memset_0((void *)(v7 + 32), 0, 0xC0uLL);
    *((_DWORD *)v8 + 72) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    (**(void (__fastcall ***)(CHwLightCollectionBuffer *))v8)(v8);
    CHwLightCollectionBuffer::UpdateLightInfo(v8, a1, a2);
    *a3 = v8;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x24u);
  }
  return v6;
}
