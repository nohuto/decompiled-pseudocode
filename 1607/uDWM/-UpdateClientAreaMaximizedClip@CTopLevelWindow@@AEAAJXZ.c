/*
 * XREFs of ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180006764
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180023210 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x1800267F0 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x180006DE8 (-SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floorf_0 @ 0x180050576 (floorf_0.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaMaximizedClip(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rbx
  float v4; // xmm0_4
  float v5; // xmm2_4
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 62) )
  {
    v3 = *((_QWORD *)this + 93);
    v8 = *(_OWORD *)((char *)this + 660);
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v3 + 180) - 1.0)) & _xmm);
    if ( v4 >= 0.0000011920929
      || (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v3 + 184) - 1.0)) & _xmm), v5 >= 0.0000011920929) )
    {
      LODWORD(v8) = (int)floorf_0((float)(int)v8 / *(float *)(v3 + 180));
      DWORD1(v8) = (int)floorf_0((float)SDWORD1(v8) / *(float *)(v3 + 180));
      DWORD2(v8) = (int)floorf_0((float)SDWORD2(v8) / *(float *)(v3 + 184));
      HIDWORD(v8) = (int)floorf_0((float)SHIDWORD(v8) / *(float *)(v3 + 184));
    }
    v6 = CClientArea::SetMaximizedClipMargins(
           *((CClientArea **)this + 62),
           (const struct _MARGINS *)((unsigned __int64)&v8 & -(__int64)((*((_BYTE *)this + 264) & 4) != 0)));
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x12BEu);
  }
  return v1;
}
