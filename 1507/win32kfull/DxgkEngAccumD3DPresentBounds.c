/*
 * XREFs of DxgkEngAccumD3DPresentBounds @ 0x1C0263F30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C0016C48 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0019E80 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkEngAccumD3DPresentBounds(HDC a1, int *a2)
{
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d
  DC *v6; // rdx
  struct EPOINTL *v7; // rax
  int v8; // r8d
  int v9; // r8d
  int v10; // r10d
  int v11; // r10d
  int v12; // r9d
  int v13; // r11d
  int v15; // [rsp+20h] [rbp-40h] BYREF
  int v16; // [rsp+24h] [rbp-3Ch]
  int v17; // [rsp+28h] [rbp-38h]
  int v18; // [rsp+2Ch] [rbp-34h]
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v20[32]; // [rsp+40h] [rbp-20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v19, a1);
  if ( v19[0] )
  {
    v3 = a2[1];
    v4 = a2[2];
    v5 = a2[3];
    v15 = *a2;
    v16 = v3;
    v17 = v4;
    v18 = v5;
    if ( !ERECTL::bEmpty((ERECTL *)&v15) && (*((_DWORD *)v6 + 9) & 0xE0) != 0 )
    {
      v7 = DC::eptlOrigin(v6);
      v9 = v8 - *(_DWORD *)v7;
      v11 = v10 - *(_DWORD *)v7;
      LODWORD(v7) = *((_DWORD *)v7 + 1);
      v16 = v12 - (_DWORD)v7;
      v18 = v13 - (_DWORD)v7;
      v15 = v9;
      v17 = v11;
      XDCOBJ::vAccumulate((XDCOBJ *)v19, (struct ERECTL *)&v15);
    }
  }
  XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v19);
  return UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v20);
}
