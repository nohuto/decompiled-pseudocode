/*
 * XREFs of ?GetAPOExceptionCrashPolicy@CAPOExceptionWrapper@@AEAAHXZ @ 0x18008C2A0
 * Callers:
 *     ?APOProcess@CAPOExceptionWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z @ 0x18008BE00 (-APOProcess@CAPOExceptionWrapper@@UEAAXIPEAPEAUAPO_CONNECTION_PROPERTY@@I0@Z.c)
 *     ?CalcInputFrames@CAPOExceptionWrapper@@UEAAII@Z @ 0x18008C060 (-CalcInputFrames@CAPOExceptionWrapper@@UEAAII@Z.c)
 *     ?CalcOutputFrames@CAPOExceptionWrapper@@UEAAII@Z @ 0x18008C110 (-CalcOutputFrames@CAPOExceptionWrapper@@UEAAII@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAPOExceptionWrapper::GetAPOExceptionCrashPolicy(CAPOExceptionWrapper *this)
{
  DWORD v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]
  int v4; // [rsp+58h] [rbp+10h] BYREF
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  v3 = HIDWORD(this);
  v2 = 4;
  return !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"DisableAudioDGCrashOnAPOException",
            0x18u,
            &v5,
            &v4,
            &v2)
      && v4;
}
