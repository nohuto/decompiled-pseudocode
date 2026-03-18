/*
 * XREFs of ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x180033508
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180033B34 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800364D4 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800A30CC (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetSnapshotBitmapSourceInfo(
        CCachedVisualImage *this,
        const struct tagRECT *a2,
        struct BitmapSourceInfo *a3)
{
  LONG bottom; // eax
  struct CDisplay *v4; // rbx
  LONG left; // r15d
  LONG top; // r12d
  LONG right; // r13d
  int CurrentDisplaySet; // eax
  __int64 v10; // r9
  CDisplaySet *v11; // rsi
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  LONG *v16; // rcx
  LONG v17; // r10d
  int PrimaryDisplay; // eax
  struct CDisplay *v20; // [rsp+38h] [rbp-28h] BYREF
  CDisplaySet *v21; // [rsp+40h] [rbp-20h] BYREF
  _DWORD v22[4]; // [rsp+48h] [rbp-18h] BYREF

  bottom = a2->bottom;
  v4 = 0LL;
  left = a2->left;
  top = a2->top;
  right = a2->right;
  v21 = 0LL;
  v20 = 0LL;
  v22[0] = left;
  v22[1] = top;
  v22[2] = right;
  v22[3] = bottom;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v21);
  v11 = v21;
  v12 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x3BDu);
  }
  else
  {
    if ( *((_DWORD *)v21 + 18) )
    {
      LOBYTE(v15) = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v22, 0LL, *((_QWORD *)v21 + 6), v10);
      while ( 1 )
      {
        v4 = *(struct CDisplay **)(v14 + 8 * v13);
        if ( !(_BYTE)v15
          && !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(
                                 (char *)v4 + 104,
                                 v13,
                                 v14,
                                 v15)
          && right > *v16
          && v16[2] > left
          && v17 > v16[1]
          && v16[3] > top )
        {
          break;
        }
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= *((_DWORD *)v11 + 18) )
          goto LABEL_18;
      }
      (**(void (__fastcall ***)(struct CDisplay *))v4)(v4);
      goto LABEL_11;
    }
LABEL_18:
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v11, &v20);
    v12 = PrimaryDisplay;
    if ( PrimaryDisplay >= 0 )
    {
      v4 = v20;
LABEL_11:
      *(_QWORD *)a3 = *((_QWORD *)v4 + 29);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(*((_QWORD *)v4 + 17) + 244LL);
      goto LABEL_12;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryDisplay, 0x3D2u);
    v4 = v20;
  }
LABEL_12:
  if ( v11 )
    CDisplaySet::Release(v11);
  if ( v4 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v4 + 8LL))(v4);
  return v12;
}
