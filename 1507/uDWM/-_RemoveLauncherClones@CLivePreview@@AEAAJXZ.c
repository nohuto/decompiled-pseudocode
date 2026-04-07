/*
 * XREFs of ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x18006A154
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180030B1C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CLivePreview::_RemoveLauncherClones(CLivePreview *this)
{
  unsigned int v1; // esi
  int v2; // eax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  struct CVisual *v7; // rdx
  int v8; // eax
  CBaseObject *v9; // rcx

  v1 = 0;
  v2 = *((_DWORD *)this + 78) - 1;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = 40LL * v2;
    do
    {
      v6 = *((_QWORD *)this + 36);
      if ( *(_DWORD *)(*(_QWORD *)(v6 + v5) + 112LL) == 6 )
      {
        v7 = *(struct CVisual **)(v6 + v5 + 8);
        if ( v7 )
        {
          v8 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v7 + 3) + 32LL), v7);
          v1 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x7C8u);
            return v1;
          }
          v9 = *(CBaseObject **)(*((_QWORD *)this + 36) + v5 + 8);
          if ( v9 )
          {
            CBaseObject::Release(v9);
            *(_QWORD *)(*((_QWORD *)this + 36) + v5 + 8) = 0LL;
          }
        }
      }
      v5 -= 40LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return v1;
}
