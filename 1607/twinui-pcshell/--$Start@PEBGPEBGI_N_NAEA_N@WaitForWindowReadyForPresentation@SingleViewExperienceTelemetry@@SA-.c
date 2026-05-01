/*
 * XREFs of ??$Start@PEBGPEBGI_N_NAEA_N@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAI$$QEA_N2AEA_N@Z @ 0x18001FF30
 * Callers:
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x18001DB6C (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x18002173C (-StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@.c)
 *     memset @ 0x18002F32C (memset.c)
 */

SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *__fastcall SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Start<unsigned short const *,unsigned short const *,unsigned int,bool,bool,bool &>(
        SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3,
        unsigned int *a4,
        bool *a5,
        bool *a6,
        bool *a7)
{
  char *v7; // rbx
  _QWORD *v11; // rcx

  *((_QWORD *)this + 2) = this;
  v7 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v11 = (_QWORD *)((char *)this + 136);
  v7[4] = 0;
  v7[64] = 0;
  *((_DWORD *)v7 + 10) = 0;
  *((_QWORD *)v7 + 6) = "WaitForWindowReadyForPresentation";
  *((_QWORD *)v7 + 7) = 0LL;
  *((_QWORD *)v7 + 9) = 1LL;
  v11[18] = 0LL;
  v11[19] = 0LL;
  memset(v11, 0, 0x90uLL);
  *((_QWORD *)v7 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::`vftable';
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::StartActivity(this, *a2, *a3, *a4, *a5, *a6, *a7);
  return this;
}
