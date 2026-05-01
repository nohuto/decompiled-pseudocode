/*
 * XREFs of ??$Start@PEBGPEBGPEBG@Reactivate@SingleViewExperienceTelemetry@@SA?AV01@$$QEAPEBG00@Z @ 0x180027A50
 * Callers:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@7@2@Z @ 0x18002718C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Desktop@Sh.c)
 * Callees:
 *     ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z @ 0x180027F28 (-StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z.c)
 *     memset @ 0x18002F32C (memset.c)
 */

SingleViewExperienceTelemetry::Reactivate *__fastcall SingleViewExperienceTelemetry::Reactivate::Start<unsigned short const *,unsigned short const *,unsigned short const *>(
        SingleViewExperienceTelemetry::Reactivate *this,
        const unsigned __int16 **a2,
        const unsigned __int16 **a3,
        const unsigned __int16 **a4)
{
  char *v4; // rbx
  _QWORD *v8; // rcx

  *((_QWORD *)this + 2) = this;
  v4 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v8 = (_QWORD *)((char *)this + 136);
  v4[4] = 0;
  v4[64] = 0;
  *((_DWORD *)v4 + 10) = 0;
  *((_QWORD *)v4 + 6) = "Reactivate";
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 9) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset(v8, 0, 0x90uLL);
  *((_QWORD *)v4 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  SingleViewExperienceTelemetry::Reactivate::StartActivity(this, *a2, *a3, *a4);
  return this;
}
