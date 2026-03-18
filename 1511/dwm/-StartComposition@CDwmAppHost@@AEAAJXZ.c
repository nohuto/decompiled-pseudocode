/*
 * XREFs of ?StartComposition@CDwmAppHost@@AEAAJXZ @ 0x140001F70
 * Callers:
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002170 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001EA0 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1400049B0 (TemplateEventDescriptor.c)
 *     Template_q @ 0x1400049CC (Template_q.c)
 */

__int64 __fastcall CDwmAppHost::StartComposition(CDwmAppHost *this)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx
  HANDLE CurrentProcess; // rax
  int v5; // eax
  __int64 v6; // rdx
  CDwmAppHost *v7; // rcx
  void *v8; // r8
  __int64 result; // rax
  __int64 *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = &qword_14000A848;
  v1 = DwmInitializeEngine(&v10, &qword_14000A838);
  v3 = v1;
  if ( v1 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x107u);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_DwmEnableBits & 1) != 0 )
      Template_q();
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      TemplateEventDescriptor(v2, &UdwmEstablishTransport_Start);
    CurrentProcess = GetCurrentProcess();
    D3DKMTSetProcessSchedulingPriorityClass(CurrentProcess, 5LL);
    v5 = DwmClientStartup(&v10, &qword_14000A838);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x111u);
    }
    else
    {
      result = CDwmAppHost::StartKernelRedirection(v7, v6, v8);
      v3 = result;
      if ( (int)result >= 0 )
      {
        LOBYTE(word_14000A890) = 1;
        return result;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x113u);
    }
  }
  return v3;
}
