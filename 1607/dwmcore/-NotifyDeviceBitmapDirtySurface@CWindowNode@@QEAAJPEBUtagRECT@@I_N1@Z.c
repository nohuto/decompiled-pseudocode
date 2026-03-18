/*
 * XREFs of ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180029B84
 * Callers:
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18002A51C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z @ 0x1800244AC (-PropagateFlags@CVisual@@KAXPEAV1@_N11111@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z @ 0x180029718 (-AddLocalDirtyRect@CWindowNode@@AEAAJAEAUMilRectF@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x1800B10F0 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     Template_xnn @ 0x180140F50 (Template_xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyDeviceBitmapDirtySurface(
        CWindowNode *this,
        const struct tagRECT *a2,
        unsigned int a3,
        char a4,
        char a5)
{
  unsigned int v5; // r14d
  char v6; // si
  signed __int64 v11; // rbx
  __int64 i; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  char v15; // al
  int v17; // [rsp+28h] [rbp-60h]
  float v18[4]; // [rsp+40h] [rbp-48h] BYREF

  v5 = 0;
  v6 = 0;
  if ( a3 )
  {
    v11 = (char *)a2 - (char *)v18;
    do
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xnn(
          (_DWORD)a2 + 16 * v5,
          (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEWINDOW,
          *((_QWORD *)this + 79),
          a4,
          (__int64)&a2[v5],
          v17,
          (__int64)this + 712);
      for ( i = 0LL; i < 4; ++i )
        v18[i] = (float)*(int *)((char *)&v18[i] + v11);
      if ( (int)CWindowNode::AddLocalDirtyRect(this, (struct MilRectF *)v18, a5) < 0 )
        v6 = 1;
      ++v5;
      v11 += 16LL;
    }
    while ( v5 < a3 );
  }
  v13 = CDxAccumulationContext::ProcessGdiUpdate(this, 0);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2EEu);
  }
  else
  {
    v15 = v6;
    if ( a4 )
      v15 = 1;
    CVisual::PropagateFlags(this, a4, v15, 1, 0, 0, 0);
  }
  return v14;
}
