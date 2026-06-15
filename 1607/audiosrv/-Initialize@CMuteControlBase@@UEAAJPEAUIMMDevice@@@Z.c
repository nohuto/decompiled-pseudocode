/*
 * XREFs of ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x1800262A0
 * Callers:
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180025FC4 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180055A00 (-Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x180026240 (-GetLevelData@CMuteHardware@@MEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMuteControlBase::Initialize(CMuteControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx
  __int64 (__fastcall *v4)(CMuteHardware *); // rax
  int LevelData; // eax

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 32);
  if ( v3 < 0
    || ((v4 = *(__int64 (__fastcall **)(CMuteHardware *))(*(_QWORD *)this + 112LL), v4 != CMuteHardware::GetLevelData)
      ? (LevelData = v4(this))
      : (LevelData = CMuteHardware::GetLevelData(this)),
        v3 = LevelData,
        LevelData < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CMuteControlBase::Initialize", 0xAFu, v3);
  }
  return (unsigned int)v3;
}
