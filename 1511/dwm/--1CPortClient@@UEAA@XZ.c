/*
 * XREFs of ??1CPortClient@@UEAA@XZ @ 0x1400014E0
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001080 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001DD0 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001EA0 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     ??_ECPortClient@@UEAAPEAXI@Z @ 0x140004E90 (--_ECPortClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPortClient::~CPortClient(CPortClient *this)
{
  bool v1; // zf
  void *v3; // r8
  void *v4; // rcx

  v1 = *((_BYTE *)this + 56) == 0;
  *(_QWORD *)this = &CPortClient::`vftable';
  if ( !v1 )
  {
    v4 = (void *)*((_QWORD *)this + 6);
    if ( v4 )
    {
      CloseHandle(v4);
      *((_BYTE *)this + 56) = 0;
    }
  }
  v3 = (void *)*((_QWORD *)this + 9);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  if ( v3 )
  {
    HeapFree(*((HANDLE *)this + 10), 0, v3);
    *((_QWORD *)this + 9) = 0LL;
  }
}
