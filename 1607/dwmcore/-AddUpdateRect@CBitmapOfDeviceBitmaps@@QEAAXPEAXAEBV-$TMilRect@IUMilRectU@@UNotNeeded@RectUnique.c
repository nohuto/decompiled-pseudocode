/*
 * XREFs of ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180094200
 * Callers:
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18002A51C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180093FD0 (-AddUpdateRect@CBitmapOfDeviceBitmaps@@QEAAXPEAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800942EC (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180084E80 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x1800A3E40 (-AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@@Z @ 0x180113238 (-SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180175294 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

void __fastcall CBitmapOfDeviceBitmaps::AddUpdateRect(__int64 a1, int a2, struct tagRECT *a3)
{
  __int64 v4; // rdi
  __int64 v7; // rbx
  int valid; // eax
  int v9; // eax
  char v10; // [rsp+50h] [rbp+8h] BYREF
  HGDIOBJ ho; // [rsp+60h] [rbp+18h] BYREF

  ho = 0LL;
  LODWORD(v4) = *(_DWORD *)(a1 + 320);
  v10 = 0;
  if ( !(_DWORD)v4 )
    return;
  while ( 1 )
  {
    v4 = (unsigned int)(v4 - 1);
    v7 = *(_QWORD *)(a1 + 296) + 96 * v4;
    if ( *(_DWORD *)(v7 + 8) != a2 )
      break;
    if ( g_LockAndReadSharedSurfaceTexture )
      CD3DDeviceLevel1::ReadTexture(
        *(CD3DDeviceLevel1 **)(*(_QWORD *)(v7 + 16) + 16LL),
        *(struct ID3D11Texture2D **)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 160LL) + 128LL));
    CBitmap::AddDirtyRect((CBitmap *)(a1 + 24), a3);
    valid = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::AddValidRect(v7, a3, &ho, &v10);
    if ( valid < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, valid, 0x331u);
      goto LABEL_7;
    }
    if ( v10 )
      goto LABEL_7;
LABEL_10:
    if ( !(_DWORD)v4 )
      goto LABEL_7;
  }
  v9 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::SubtractValidRect(*(_QWORD *)(a1 + 296) + 96 * v4, a3, &ho);
  if ( v9 >= 0 )
    goto LABEL_10;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x33Au);
LABEL_7:
  if ( ho )
    DeleteObject(ho);
}
