/*
 * XREFs of GreSetBitmapDimension @ 0x1C02B8DA8
 * Callers:
 *     NtGdiSetBitmapDimension @ 0x1C02A8510 (NtGdiSetBitmapDimension.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BA4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0010BE0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreSetBitmapDimension(HSURF a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rcx
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v8 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v12);
  SURFREF::SURFREF((SURFREF *)v13, a1);
  v9 = v14;
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 112) & 0x4000000) != 0 )
    {
      if ( a4 )
        *a4 = *(_QWORD *)(v14 + 144);
      v12[1] = __PAIR64__(a3, a2);
      v8 = 1;
      *(_QWORD *)(v9 + 144) = __PAIR64__(a3, a2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v13);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
  return v8;
}
