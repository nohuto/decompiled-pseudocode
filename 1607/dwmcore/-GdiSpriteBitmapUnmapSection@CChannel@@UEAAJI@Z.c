/*
 * XREFs of ?GdiSpriteBitmapUnmapSection@CChannel@@UEAAJI@Z @ 0x18001E000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::GdiSpriteBitmapUnmapSection(CChannel *this, int a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]
  char *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = (char *)this + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v6 = 167;
  v7 = a2;
  v4 = CChannel::SendCommand(this, &v6, 8u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v4;
}
