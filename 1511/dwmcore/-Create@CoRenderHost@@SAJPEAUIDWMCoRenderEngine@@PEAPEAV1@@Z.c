/*
 * XREFs of ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x180103D8C
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180100008 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 *     ??0CoRenderHost@@AEAA@PEAUIDWMCoRenderEngine@@@Z @ 0x180103B6C (--0CoRenderHost@@AEAA@PEAUIDWMCoRenderEngine@@@Z.c)
 */

__int64 __fastcall CoRenderHost::Create(struct IDWMCoRenderEngine *a1, struct CoRenderHost **a2)
{
  CoRenderHost *v4; // rax
  CoRenderHost *v5; // rsi
  unsigned int v6; // ebx
  int v7; // eax

  v4 = (CoRenderHost *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         48LL);
  if ( v4 )
    v5 = CoRenderHost::CoRenderHost(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, CoRenderHost *))(**((_QWORD **)v5 + 3) + 24LL))(*((_QWORD *)v5 + 3), v5);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v5;
      v5 = 0LL;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x23u);
    }
    if ( v5 )
      CoRenderHost::`scalar deleting destructor'(v5);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
  }
  return v6;
}
