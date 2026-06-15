/*
 * XREFs of ??1CAudioDGModule@@UEAA@XZ @ 0x140017CEC
 * Callers:
 *     _dynamic_atexit_destructor_for___AtlModule__ @ 0x14001BB00 (_dynamic_atexit_destructor_for___AtlModule__.c)
 *     ??_GCAudioDGModule@@UEAAPEAXI@Z @ 0x140025DA0 (--_GCAudioDGModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x140015C24 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 *     ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x140026744 (-Term@CAtlComModule@ATL@@QEAAXXZ.c)
 *     ?Term@CAtlModule@ATL@@QEAAXXZ @ 0x1400267C0 (-Term@CAtlModule@ATL@@QEAAXXZ.c)
 */

void __fastcall CAudioDGModule::~CAudioDGModule(CAudioDGModule *this)
{
  char *v2; // rcx
  char *v3; // rcx
  ATL::CAtlComModule *v4; // rcx
  ATL::CAtlComModule *v5; // rcx

  *(_QWORD *)this = &CAudioDGModule::`vftable';
  v2 = (char *)*((_QWORD *)this + 14);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 14) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 15);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_14003D020);
    qword_14003D020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
  g_SysFxUtilTlp = 0LL;
  EtwEventUnregister(qword_1400540D0);
  qword_1400540D0 = 0LL;
  dword_1400540B0 = 0;
  ATL::CAtlComModule::ExecuteObjectMain(v4, 0);
  ATL::CAtlModule::Term(this);
  ATL::CAtlComModule::Term(v5);
  if ( *((_BYTE *)this + 98) )
    CoUninitialize();
  ATL::CAtlModule::Term(this);
}
