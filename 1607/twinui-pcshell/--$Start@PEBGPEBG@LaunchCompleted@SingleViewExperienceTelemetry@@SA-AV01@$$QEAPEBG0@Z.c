/*
 * XREFs of ??$Start@PEBGPEBG@LaunchCompleted@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x18001F3D8
 * Callers:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18001C6F8 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 * Callees:
 *     ?StartActivity@LaunchCompleted@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180022038 (-StartActivity@LaunchCompleted@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     memset @ 0x18002F32C (memset.c)
 */

SingleViewExperienceTelemetry::LaunchCompleted *__fastcall SingleViewExperienceTelemetry::LaunchCompleted::Start<unsigned short const *,unsigned short const *>(
        SingleViewExperienceTelemetry::LaunchCompleted *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3)
{
  char *v3; // rbx
  _QWORD *v7; // rcx

  *((_QWORD *)this + 2) = this;
  v3 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v7 = (_QWORD *)((char *)this + 136);
  v3[4] = 0;
  v3[64] = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 6) = "LaunchCompleted";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &SingleViewExperienceTelemetry::LaunchCompleted::`vftable';
  SingleViewExperienceTelemetry::LaunchCompleted::StartActivity(this, *a2, *a3);
  return this;
}
