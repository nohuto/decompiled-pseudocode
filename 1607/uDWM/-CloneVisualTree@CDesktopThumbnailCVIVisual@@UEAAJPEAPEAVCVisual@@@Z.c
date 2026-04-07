/*
 * XREFs of ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@@Z @ 0x180096890
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x18001FB60 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18007FBB8 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::CloneVisualTree(CDesktopThumbnailCVIVisual *this, struct CVisual **a2)
{
  __int64 v2; // rax
  int v5; // eax
  unsigned int v6; // esi
  CBaseObject *v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  CBaseObject *v13; // [rsp+50h] [rbp+8h] BYREF
  struct CVisual *v14; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 2);
  v13 = 0LL;
  v5 = CDesktopThumbnailCVIVisual::Create(*(struct IDwmChannel **)(v2 + 16), &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v13;
    v14 = v13;
    v8 = CVisual::CloneVisualTree(this, &v14);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x207u);
      goto LABEL_13;
    }
    *((_QWORD *)v7 + 35) = *((_QWORD *)this + 35);
    v9 = *((_QWORD *)this + 35);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v7 = v13;
    }
    *((_QWORD *)v7 + 33) = *((_QWORD *)this + 33);
    v10 = *((_QWORD *)this + 33);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v7 = v13;
    }
    *((_QWORD *)v7 + 36) = *((_QWORD *)this + 36);
    v11 = *((_QWORD *)this + 36);
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v7 = v13;
    }
    *a2 = v7;
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x204u);
  }
  v7 = v13;
LABEL_13:
  if ( v7 )
    CBaseObject::Release(v7);
  return v6;
}
