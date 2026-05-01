/*
 * XREFs of ??$Start@PEBGPEBGIAEBQEAUHWND__@@@Show@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x18001FE50
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001D9C8 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 * Callees:
 *     ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18002192C (-StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     memset @ 0x18002F32C (memset.c)
 */

SingleViewExperienceTelemetry::Show *__fastcall SingleViewExperienceTelemetry::Show::Start<unsigned short const *,unsigned short const *,unsigned int,HWND__ * const &>(
        SingleViewExperienceTelemetry::Show *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3,
        unsigned int *a4,
        void **a5)
{
  char *v5; // rbx
  _QWORD *v9; // rcx

  *((_QWORD *)this + 2) = this;
  v5 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v9 = (_QWORD *)((char *)this + 136);
  v5[4] = 0;
  v5[64] = 0;
  *((_DWORD *)v5 + 10) = 0;
  *((_QWORD *)v5 + 6) = "Show";
  *((_QWORD *)v5 + 7) = 0LL;
  *((_QWORD *)v5 + 9) = 1LL;
  v9[18] = 0LL;
  v9[19] = 0LL;
  memset(v9, 0, 0x90uLL);
  *((_QWORD *)v5 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Show::`vftable';
  SingleViewExperienceTelemetry::Show::StartActivity(this, *a2, *a3, *a4, *a5);
  return this;
}
