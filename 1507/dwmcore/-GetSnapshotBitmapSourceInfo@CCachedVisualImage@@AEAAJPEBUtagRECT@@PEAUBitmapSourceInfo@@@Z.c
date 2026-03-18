/*
 * XREFs of ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x180052E90
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800535A4 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18000DD28 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180054CFC (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::GetSnapshotBitmapSourceInfo(
        CCachedVisualImage *this,
        const struct tagRECT *a2,
        struct BitmapSourceInfo *a3)
{
  LONG bottom; // eax
  struct CDisplay *v4; // rdi
  LONG left; // r15d
  LONG top; // r12d
  LONG right; // r13d
  int CurrentDisplaySet; // eax
  unsigned int v10; // esi
  CDisplaySet *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r10
  bool IsEmpty; // r11
  volatile signed __int32 *v15; // rdx
  LONG *v16; // rcx
  LONG v17; // r9d
  int PrimaryDisplay; // eax
  CDisplaySet *v20; // [rsp+30h] [rbp-30h] BYREF
  struct CDisplay *v21; // [rsp+38h] [rbp-28h] BYREF
  LONG v22; // [rsp+40h] [rbp-20h]
  _DWORD v23[4]; // [rsp+48h] [rbp-18h] BYREF

  bottom = a2->bottom;
  v4 = 0LL;
  left = a2->left;
  top = a2->top;
  right = a2->right;
  v20 = 0LL;
  v21 = 0LL;
  v23[0] = left;
  v23[1] = top;
  v23[2] = right;
  v22 = bottom;
  v23[3] = bottom;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v20);
  v10 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x3F8u);
    v11 = v20;
  }
  else
  {
    v11 = v20;
    if ( *((_DWORD *)v20 + 18) )
    {
      IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v23);
      while ( IsEmpty
           || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(*(_QWORD *)(v13 + 8 * v12) + 112LL))
           || right <= *v16
           || v16[2] <= left
           || v17 <= v16[1]
           || v16[3] <= top )
      {
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *((_DWORD *)v11 + 18) )
          goto LABEL_18;
      }
      v21 = (struct CDisplay *)v15;
      _InterlockedIncrement(v15 + 2);
      v11 = v20;
      if ( v15 )
        goto LABEL_11;
    }
LABEL_18:
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v11, &v21);
    v10 = PrimaryDisplay;
    if ( PrimaryDisplay >= 0 )
    {
LABEL_11:
      v4 = v21;
      *(_QWORD *)a3 = *((_QWORD *)v21 + 104);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(*((_QWORD *)v4 + 19) + 852LL);
      goto LABEL_12;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryDisplay, 0x40Du);
    v4 = v21;
  }
LABEL_12:
  if ( v11 )
    CDisplaySet::Release(v11);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  return v10;
}
