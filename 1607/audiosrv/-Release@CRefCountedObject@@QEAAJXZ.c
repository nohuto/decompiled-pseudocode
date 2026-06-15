/*
 * XREFs of ?Release@CRefCountedObject@@QEAAJXZ @ 0x1800279B0
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180014954 (--1CAudioSession@@MEAA@XZ.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180015860 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180032D80 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x18005EC70 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 * Callees:
 *     ??_GCMuteGainStage@@UEAAPEAXI@Z @ 0x180027A20 (--_GCMuteGainStage@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject::Release(CRefCountedObject *this)
{
  unsigned __int32 v2; // edi
  void *(__fastcall *v4)(CMuteGainStage *__hidden, unsigned int); // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CRefCountedObject *))(*(_QWORD *)this + 16LL))(this);
    v4 = *(void *(__fastcall **)(CMuteGainStage *__hidden, unsigned int))(*(_QWORD *)this + 8LL);
    if ( v4 == CMuteGainStage::`scalar deleting destructor' )
      CMuteGainStage::`scalar deleting destructor'(this, 1u);
    else
      v4(this, 1u);
  }
  return v2;
}
