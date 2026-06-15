/*
 * XREFs of ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180025BCC
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x180017E40 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180025C2C (-FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180025EA0 (-Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CMeterHardware::Initialize(CMeterHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  int MeterControlForEndpoint; // ebx

  MeterControlForEndpoint = CMeterHardware::FindMeterControlForEndpoint(this, a2, a3);
  if ( MeterControlForEndpoint < 0
    || (MeterControlForEndpoint = CMeterControlBase::Initialize(this, a2), MeterControlForEndpoint < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMeterHardware::Initialize", 0x17Du, MeterControlForEndpoint);
  }
  return (unsigned int)MeterControlForEndpoint;
}
