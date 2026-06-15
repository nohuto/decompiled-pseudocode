/*
 * XREFs of ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x1400265F4
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ??1CStreamGroup@@QEAA@XZ @ 0x1400045B0 (--1CStreamGroup@@QEAA@XZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x1400050F0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ??1?$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ @ 0x140026B7C (--1-$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??1CStreamInstance@@QEAA@XZ @ 0x1400032B0 (--1CStreamInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 */

CStreamInstance *__fastcall CStreamInstance::`scalar deleting destructor'(CStreamInstance *this)
{
  CStreamInstance::~CStreamInstance(this);
  operator delete(this);
  return this;
}
