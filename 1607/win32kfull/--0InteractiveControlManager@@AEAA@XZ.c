/*
 * XREFs of ??0InteractiveControlManager@@AEAA@XZ @ 0x1C0123D68
 * Callers:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 * Callees:
 *     ?ReadSettings@InteractiveControlSettings@@QEAAJXZ @ 0x1C0123FE0 (-ReadSettings@InteractiveControlSettings@@QEAAJXZ.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     TraceLoggingRegisterEx @ 0x1C0368288 (TraceLoggingRegisterEx.c)
 */

InteractiveControlManager *__fastcall InteractiveControlManager::InteractiveControlManager(
        InteractiveControlManager *this)
{
  unsigned int *v1; // r8
  __int64 v3; // r9
  InteractiveControlSettings *v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax
  TLG_PENABLECALLBACK v7; // rdx
  PVOID v8; // r8

  *(_QWORD *)this = 0LL;
  v1 = (unsigned int *)&unk_1C02E2EE8;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  v3 = 29LL;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 1;
  v4 = (InteractiveControlManager *)((char *)this + 84);
  do
  {
    *((_DWORD *)v4 + 2 * *v1) = v1[1];
    v5 = *v1;
    v6 = v1[1];
    v1 += 4;
    *((_DWORD *)v4 + 2 * v5 + 1) = v6;
    --v3;
  }
  while ( v3 );
  InteractiveControlSettings::ReadSettings(v4);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, v7, v8);
  memset((char *)this + 40, 0, 0x28uLL);
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 7) = *((_DWORD *)this + 27);
  return this;
}
