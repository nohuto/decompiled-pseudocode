/*
 * XREFs of GreSetDeviceGammaRamp @ 0x1C01070A4
 * Callers:
 *     RestoreGammaRamp @ 0x1C0106C30 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C0106E90 (FadeDesktop.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02B32F0 (NtGdiSetDeviceGammaRamp.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0107244 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C0107284 (-GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall GreSetDeviceGammaRamp(HDC a1, void *a2, int a3, int a4)
{
  unsigned int v7; // r14d
  int v8; // edi
  unsigned int v9; // ebx
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  _BYTE v12[4]; // [rsp+30h] [rbp-C8h] BYREF
  int v13; // [rsp+34h] [rbp-C4h] BYREF
  unsigned int v14[2]; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v15[8]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD v16[7]; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v17[8]; // [rsp+80h] [rbp-78h] BYREF

  v7 = (unsigned int)a1;
  v8 = 0;
  v13 = 0;
  v14[0] = (unsigned int)a1;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] && !*(_DWORD *)(v16[0] + 32LL) )
  {
    DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)v12);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v15, (struct XDCOBJ *)v16);
    v9 = GreSetDeviceGammaRampInternal(
           *(HDEV *)(v16[0] + 48LL),
           a2,
           a3,
           a4,
           (enum _SETGAMMARAMP_FAILED_REASON *)&v13,
           v14);
    v14[1] = v9;
    v8 = v13;
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v15);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
    v7 = v14[0];
  }
  if ( !v9 )
  {
    memset(v17, 0, sizeof(v17));
    v17[0] = 0x4000000006LL;
    memset(&v17[1], 0, 36);
    LODWORD(v17[6]) = 84;
    HIDWORD(v17[6]) = v8;
    v17[7] = __PAIR64__(a4, v7);
    DrvDxgkWriteDiagEntry(v17);
    EngSetLastError(0x57u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v9;
}
