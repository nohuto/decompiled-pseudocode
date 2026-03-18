/*
 * XREFs of GreConvertRedirectionToMemDC @ 0x1C0293120
 * Callers:
 *     UpdateSpriteArea @ 0x1C00D661C (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00D8568 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0049344 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0049640 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreConvertRedirectionToMemDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v6, a1);
  if ( v6[0] )
  {
    if ( !*(_DWORD *)(v6[0] + 32LL) )
    {
      v4 = *(_QWORD *)(v6[0] + 48LL);
      if ( v4 )
      {
        if ( (*(_DWORD *)(v4 + 2152) & 0x400) != 0 )
        {
          *(_DWORD *)(v6[0] + 36LL) &= ~0x4000u;
          v3 = 1;
          *(_DWORD *)(v6[0] + 36LL) &= ~1u;
          *(_DWORD *)(v6[0] + 32LL) = 1;
          if ( a2 )
            *(_DWORD *)(*(_QWORD *)(v6[0] + 512LL) + 112LL) &= ~0x800u;
        }
      }
    }
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v6);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v7);
  return v3;
}
