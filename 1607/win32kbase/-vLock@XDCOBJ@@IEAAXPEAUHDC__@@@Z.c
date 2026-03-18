/*
 * XREFs of ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00BD350
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C001CB50 (GreCreateCompatibleDC.c)
 *     ReleaseCacheDC @ 0x1C0024AF0 (ReleaseCacheDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     hbmSelectBitmap @ 0x1C0025B20 (hbmSelectBitmap.c)
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
 *     GreIntersectClipRect @ 0x1C00453F0 (GreIntersectClipRect.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0028BD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     HmgLockEx @ 0x1C002A600 (HmgLockEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C005C908 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  __int64 v3; // rax
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v6; // rcx
  int v7; // ebx

  v3 = HmgLockEx((unsigned int)a2, 1, *((_DWORD *)this + 3));
  *(_QWORD *)this = v3;
  if ( v3 )
  {
    ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    v6 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v6 + 2544) = ThreadCurrentObj;
    }
    else if ( *(struct UMPDOBJ **)(v6 + 2544) != ThreadCurrentObj )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
LABEL_14:
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 56LL) & 0x8000) == 0
        || (v7 = *(_DWORD *)(*(_QWORD *)this + 2528LL), v7 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
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
