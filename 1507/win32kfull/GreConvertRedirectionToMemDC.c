/*
 * XREFs of GreConvertRedirectionToMemDC @ 0x1C0293EA0
 * Callers:
 *     UpdateSpriteArea @ 0x1C000A280 (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C000ADB8 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0016C48 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0019E80 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreConvertRedirectionToMemDC(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v9, a1);
  if ( v9[0] )
  {
    if ( !*(_DWORD *)(v9[0] + 32LL) )
    {
      v4 = *(_QWORD *)(v9[0] + 48LL);
      if ( v4 )
      {
        if ( (*(_DWORD *)(v4 + 2152) & 0x400) != 0 )
        {
          *(_DWORD *)(v9[0] + 36LL) &= ~0x4000u;
          v3 = 1;
          *(_DWORD *)(v9[0] + 36LL) &= ~1u;
          *(_DWORD *)(v9[0] + 32LL) = 1;
          if ( a2 )
            *(_DWORD *)(*(_QWORD *)(v9[0] + 512LL) + 112LL) &= ~0x800u;
        }
      }
    }
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v9);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(
    (__int64)v10,
    v5,
    v6,
    v7);
  return v3;
}
