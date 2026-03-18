/*
 * XREFs of ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464
 * Callers:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0005D58 (GreBeginGdiRenderingToDxSurface.c)
 *     GreGetCharSet @ 0x1C0023BD8 (GreGetCharSet.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     GreExtTextOutRect @ 0x1C0039588 (GreExtTextOutRect.c)
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0046684 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0046768 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0049F00 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C004BFB0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     GreRectVisible @ 0x1C004C688 (GreRectVisible.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00F05D8 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetAppClipBox @ 0x1C00FA434 (GreGetAppClipBox.c)
 *     GreTransformPoints @ 0x1C00FB364 (GreTransformPoints.c)
 *     NtGdiModifyWorldTransform @ 0x1C0109040 (NtGdiModifyWorldTransform.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0265F34 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     GreExtEscape @ 0x1C0267554 (GreExtEscape.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02A69E8 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0048E40 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00680A8 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v10; // rcx
  int v11; // ebx

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    v10 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v10 + 2544) = ThreadCurrentObj;
    }
    else if ( *(struct UMPDOBJ **)(v10 + 2544) != ThreadCurrentObj )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
LABEL_14:
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 56LL) & 0x8000) == 0
        || (v11 = *(_DWORD *)(*(_QWORD *)this + 2528LL), v11 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
      {
LABEL_13:
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
        goto LABEL_14;
      }
    }
    else if ( *(_DWORD *)(*(_QWORD *)this + 2528LL) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2528LL) = 0;
    }
    if ( (unsigned int)XDCOBJ::bSaveAttributes(this) )
      return;
    goto LABEL_13;
  }
}
