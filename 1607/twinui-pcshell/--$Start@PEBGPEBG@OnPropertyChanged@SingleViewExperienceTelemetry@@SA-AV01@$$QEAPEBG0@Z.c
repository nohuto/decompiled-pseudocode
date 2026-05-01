/*
 * XREFs of ??$Start@PEBGPEBG@OnPropertyChanged@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG0@Z @ 0x18001F4A8
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18001C808 (-OnViewStateChanged@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 * Callees:
 *     ?StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x180021E84 (-StartActivity@OnPropertyChanged@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     memset @ 0x18002F32C (memset.c)
 */

SingleViewExperienceTelemetry::OnPropertyChanged *__fastcall SingleViewExperienceTelemetry::OnPropertyChanged::Start<unsigned short const *,unsigned short const *>(
        SingleViewExperienceTelemetry::OnPropertyChanged *this,
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
  *((_QWORD *)v3 + 6) = "OnPropertyChanged";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &SingleViewExperienceTelemetry::OnPropertyChanged::`vftable';
  SingleViewExperienceTelemetry::OnPropertyChanged::StartActivity(this, *a2, *a3);
  return this;
}
