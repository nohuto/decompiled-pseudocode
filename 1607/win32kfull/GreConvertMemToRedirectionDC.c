/*
 * XREFs of GreConvertMemToRedirectionDC @ 0x1C00D8824
 * Callers:
 *     UpdateSpriteArea @ 0x1C00D661C (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00D8568 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0049344 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0049640 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreConvertMemToRedirectionDC(HDC a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v8, a1);
  v4 = v8[0];
  *a2 = 0;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 32) == 1 )
    {
      v5 = *(_QWORD *)(v4 + 48);
      if ( v5 )
      {
        if ( (*(_DWORD *)(v5 + 2152) & 0x400) != 0 )
        {
          *(_DWORD *)(v4 + 36) |= 0x4000u;
          v3 = 1;
          *(_DWORD *)(v8[0] + 36LL) |= 1u;
          *(_DWORD *)(v8[0] + 32LL) = 0;
          v6 = *(_QWORD *)(v8[0] + 512LL);
          if ( (*(_DWORD *)(v6 + 112) & 0x800) == 0 && !*(_WORD *)(v6 + 100) )
          {
            *(_DWORD *)(v6 + 112) |= 0x800u;
            *a2 = 1;
          }
        }
      }
    }
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v8);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v9);
  return v3;
}
