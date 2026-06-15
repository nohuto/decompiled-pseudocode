/*
 * XREFs of ?GetClientReleaseEvent@CSystemAudioDeviceSharedNew@@UEAAJIPEA_K@Z @ 0x14002DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::GetClientReleaseEvent(
        CSystemAudioDeviceSharedNew *this,
        unsigned int a2,
        unsigned __int64 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64 *))(**((_QWORD **)this + 45) + 32LL))(
           *((_QWORD *)this + 45),
           a2,
           a3);
}
