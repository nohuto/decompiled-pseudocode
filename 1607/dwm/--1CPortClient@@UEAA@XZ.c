/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x1400015A0
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001080 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001F60 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140002030 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x140004A70 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x140004AA8 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

void __fastcall CPortClient::~CPortClient(CPortClient *this)
{
  void *v2; // rcx
  void *v3; // rdi
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CPortClient::`vftable';
  if ( (unsigned int)EvaluateCurrentState(this) && *((_QWORD *)this + 8) )
    NtAlpcDeletePortSection(*((_QWORD *)this + 6), 0LL);
  if ( *((_BYTE *)this + 56) )
  {
    v2 = (void *)*((_QWORD *)this + 6);
    if ( v2 )
    {
      CloseHandle(v2);
      *((_BYTE *)this + 56) = 0;
    }
  }
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  if ( !(unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)v2) )
  {
    v3 = (void *)*((_QWORD *)this + 10);
    if ( v3 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
}
