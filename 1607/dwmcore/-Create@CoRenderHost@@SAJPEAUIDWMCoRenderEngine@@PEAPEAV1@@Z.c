/*
 * XREFs of ?Create@CoRenderHost@@SAJPEAUIDWMCoRenderEngine@@PEAPEAV1@@Z @ 0x180119E9C
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCoRenderHost@@QEAAPEAXI@Z @ 0x180113F24 (--_GCoRenderHost@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CoRenderHost::Create(struct IDWMCoRenderEngine *a1, struct CoRenderHost **a2)
{
  CoRenderHost *v4; // rax
  CoRenderHost *v5; // rbx
  unsigned int v6; // edi
  int v7; // eax

  v4 = (CoRenderHost *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         48LL);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 3) = a1;
    *(_QWORD *)v4 = &CoRenderHost::`vftable'{for `IDWMCoRenderHost'};
    *((_QWORD *)v4 + 1) = &CoRenderHost::`vftable'{for `IDeviceResourceNotify'};
    if ( a1 )
      (*(void (__fastcall **)(struct IDWMCoRenderEngine *))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD *, CoRenderHost *))(**((_QWORD **)v5 + 3) + 24LL))(*((_QWORD **)v5 + 3), v5);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x23u);
      CoRenderHost::`scalar deleting destructor'(v5);
    }
    else
    {
      *a2 = v5;
    }
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21u);
  }
  return v6;
}
