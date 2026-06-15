/*
 * XREFs of ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180025EA0
 * Callers:
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180025BCC (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800348E0 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x180004970 (-GetChannelCount@CMeterHardware@@MEAAJPEAI@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x180034890 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterControlBase::Initialize(CMeterControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx
  unsigned int *v4; // rdx
  int (*v5)(CMeterSoftware *__hidden, unsigned int *); // rax
  int ChannelCount; // eax

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 24);
  if ( v3 < 0
    || ((v4 = (unsigned int *)((char *)this + 32),
         v5 = *(int (**)(CMeterSoftware *__hidden, unsigned int *))(*(_QWORD *)this + 40LL),
         v5 != CMeterSoftware::GetChannelCount)
      ? ((char *)v5 != (char *)CMeterHardware::GetChannelCount
       ? (ChannelCount = ((__int64 (__fastcall *)(CMeterControlBase *, unsigned int *))v5)(this, v4))
       : (ChannelCount = CMeterHardware::GetChannelCount(this, v4)))
      : (ChannelCount = CMeterSoftware::GetChannelCount(this, v4)),
        v3 = ChannelCount,
        ChannelCount < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::Initialize", 0xA4u, v3);
  }
  return (unsigned int)v3;
}
