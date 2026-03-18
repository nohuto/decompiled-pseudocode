/*
 * XREFs of ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025E4FC
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0016820 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0018878 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     GreDrawStream @ 0x1C0026AD0 (GreDrawStream.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     GreExtEscape @ 0x1C01257FC (GreExtEscape.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0155C88 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0269018 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02A5DC8 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0019F00 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00D3330 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v7; // rcx
  int v8; // ebx

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
    v7 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v7 + 2544) = ThreadCurrentObj;
    }
    else if ( *(struct UMPDOBJ **)(v7 + 2544) != ThreadCurrentObj )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
LABEL_14:
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 56LL) & 0x8000) == 0
        || (v8 = *(_DWORD *)(*(_QWORD *)this + 2528LL), v8 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
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
