/*
 * XREFs of EngMapFontFileFDInternal @ 0x1400D09E8
 * Callers:
 *     xInsertMetricsRFONTOBJ @ 0x1400C21D8 (xInsertMetricsRFONTOBJ.c)
 *     ?QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1400C258C (-QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1400C2794 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     NtGdiGetFontFileData @ 0x1400CF300 (NtGdiGetFontFileData.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D06A4 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400FC44C (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1401871BC (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 *     ?GreMakeFontDir@@YAKKPEAEPEAG@Z @ 0x140226FB4 (-GreMakeFontDir@@YAKKPEAEPEAG@Z.c)
 *     ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ @ 0x14025FA80 (-TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ.c)
 *     ?MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x14029122C (-MapFontFiles@@YA_NKPEAPEAUFONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     EngMapFontFileFD @ 0x14031C160 (EngMapFontFileFD.c)
 * Callees:
 *     ?bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z @ 0x1400CF638 (-bMapRoutine@@YAHPEAUFONTFILEVIEW@@PEAUFILEVIEW@@W4_MAP_MODE@@@Z.c)
 *     ?MapViewOfSectionToFontDriverProcess@@YA_NPEAUFILEVIEW@@@Z @ 0x1400CFDC8 (-MapViewOfSectionToFontDriverProcess@@YA_NPEAUFILEVIEW@@@Z.c)
 *     ?bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x1400CFE9C (-bCreateSection@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z @ 0x1400D3D14 (-vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x1400D3DA0 (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z @ 0x140140530 (-Attach@AttachProcessObj@Gre@@QEAAXW4Mode@12@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall EngMapFontFileFDInternal(struct FILEVIEW *a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v7; // edi
  int v8; // r15d
  Gre::Base *v9; // rcx
  struct _FAST_MUTEX **v10; // r14
  unsigned __int16 **v11; // rsi
  int Section; // esi
  unsigned int v14; // esi
  unsigned __int8 v15; // al
  _BYTE v17[80]; // [rsp+30h] [rbp-69h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-19h] BYREF
  char v19; // [rsp+B0h] [rbp+17h]

  memset_0(v17, 0, sizeof(v17));
  v7 = 1;
  v8 = 1;
  v10 = (struct _FAST_MUTEX **)Gre::Base::Globals(v9);
  KeAcquireGuardedMutex(*v10 + 26);
  v11 = (unsigned __int16 **)((char *)a1 + 80);
  if ( *((_QWORD *)a1 + 2) )
  {
    ++*((_DWORD *)a1 + 25);
    v8 = 0;
  }
  else
  {
    if ( !*v11 )
    {
      KeReleaseGuardedMutex(*v10 + 26);
      return 0LL;
    }
    if ( *((_QWORD *)a1 + 4) )
    {
      v15 = MapViewOfSectionToFontDriverProcess(a1);
      v7 = v15;
      if ( v15 )
        *((_DWORD *)a1 + 25) = 1;
      v8 = 0;
    }
  }
  KeReleaseGuardedMutex(*v10 + 26);
  if ( !v8 )
  {
LABEL_4:
    if ( v7 )
    {
      if ( a2 )
        *a2 = *((_QWORD *)a1 + 2);
      if ( a3 )
        *a3 = *((_DWORD *)a1 + 6);
    }
    return v7;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  v19 = 0;
  if ( a4 )
    Gre::AttachProcessObj::Attach(&ApcState, 0LL);
  Section = bCreateSection(*v11, (__int64)v17, 0, (unsigned int)(*((_BYTE *)a1 + 44) != 0) + 1);
  if ( v19 )
    KeUnstackDetachProcess(&ApcState);
  if ( !Section )
    return 0;
  if ( MapViewOfSectionToFontDriverProcess((struct FILEVIEW *)v17) )
  {
    KeAcquireGuardedMutex(*v10 + 26);
    ++*((_DWORD *)a1 + 25);
    if ( *((_QWORD *)a1 + 2) )
    {
      v14 = 0;
    }
    else
    {
      v14 = bMapRoutine((__int64)a1, (__int64)v17, 1);
      v7 = v14;
    }
    KeReleaseGuardedMutex(*v10 + 26);
    if ( !v14 )
      vUnmapFileFD((struct FILEVIEW *)v17, 1);
    goto LABEL_4;
  }
  vUnreferenceFileviewSection((struct FILEVIEW *)v17);
  return 0LL;
}
