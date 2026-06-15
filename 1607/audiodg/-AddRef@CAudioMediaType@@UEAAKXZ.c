/*
 * XREFs of ?AddRef@CAudioMediaType@@UEAAKXZ @ 0x140017050
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000BC00 (-IsRightFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z @ 0x14000BD60 (-IsLeftFormatSupported@CProcessNode@@UEAAJPEAUIAudioMediaType@@PEAPEAU2@0@Z.c)
 *     ?SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000BEC0 (-SetRightFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000BFC0 (-SetLeftFormat@CProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EF10 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140015050 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioMediaType::AddRef(CAudioMediaType *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
