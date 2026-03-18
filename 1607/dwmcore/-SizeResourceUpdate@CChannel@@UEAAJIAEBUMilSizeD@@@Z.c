/*
 * XREFs of ?SizeResourceUpdate@CChannel@@UEAAJIAEBUMilSizeD@@@Z @ 0x18001E440
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18004AC50 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::SizeResourceUpdate(CChannel *this, int a2, const struct MilSizeD *a3)
{
  __int128 v6; // xmm0
  unsigned int v7; // ebx
  _DWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  char *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = (char *)this + 176;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v6 = *(_OWORD *)a3;
  v9[0] = 37;
  v9[1] = a2;
  v10 = v6;
  v7 = CChannel::SendCommand(this, v9, 0x18u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v7;
}
