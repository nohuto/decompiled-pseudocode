/*
 * XREFs of GreDeleteWnd @ 0x1C027A5A0
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0265450 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEndPage @ 0x1C0267EB0 (NtGdiEndPage.c)
 *     EngDeleteWnd @ 0x1C027A4E0 (EngDeleteWnd.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0048D90 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0277BD4 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?bDelete@EWNDOBJ@@QEAAHXZ @ 0x1C0279A04 (-bDelete@EWNDOBJ@@QEAAHXZ.c)
 *     ?bValid@EWNDOBJ@@QEAAHXZ @ 0x1C0279A4C (-bValid@EWNDOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GreDeleteWnd(EWNDOBJ *this)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  EWNDOBJ *v5; // rcx
  EWNDOBJ *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  TRACKOBJ *v9; // rcx
  __int64 v10; // rax
  EWNDOBJ *v11; // rcx
  __int64 v12; // rdx
  _BYTE v13[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v14[88]; // [rsp+40h] [rbp-58h] BYREF
  HDEV v15; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+18h] BYREF

  result = EWNDOBJ::bValid(this);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(v3 + 168);
    v15 = *(HDEV *)(*(_QWORD *)(v4 + 32) + 48LL);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v13, (struct PDEVOBJ *)&v15);
    v17 = ghsemWndobj;
    GreAcquireSemaphore(ghsemWndobj);
    v16 = *((_QWORD *)this + 25);
    GreAcquireSemaphore(v16);
    (*(void (__fastcall **)(EWNDOBJ *, __int64))(v4 + 40))(this, 32LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    v5 = *(EWNDOBJ **)(v4 + 24);
    if ( v5 == this )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 20);
    }
    else if ( v5 )
    {
      while ( 1 )
      {
        v6 = (EWNDOBJ *)*((_QWORD *)v5 + 20);
        if ( v6 == this )
          break;
        v5 = (EWNDOBJ *)*((_QWORD *)v5 + 20);
        if ( !v6 )
          goto LABEL_9;
      }
      *((_QWORD *)v5 + 20) = *((_QWORD *)this + 20);
    }
LABEL_9:
    EWNDOBJ::bDelete(this);
    *((_DWORD *)this + 38) = 0;
    Win32FreePool(this, v7);
    if ( !*(_QWORD *)(v4 + 24) )
    {
      v9 = gpto;
      if ( (TRACKOBJ *)v4 == gpto )
      {
        gpto = *(TRACKOBJ **)(v4 + 8);
      }
      else if ( gpto )
      {
        while ( 1 )
        {
          v10 = *((_QWORD *)v9 + 1);
          if ( v10 == v4 )
            break;
          v9 = (TRACKOBJ *)*((_QWORD *)v9 + 1);
          if ( !v10 )
            goto LABEL_17;
        }
        *((_QWORD *)v9 + 1) = *(_QWORD *)(v4 + 8);
      }
LABEL_17:
      v11 = *(EWNDOBJ **)(v4 + 16);
      if ( v11 )
      {
        EWNDOBJ::bDelete(v11);
        *(_DWORD *)(*(_QWORD *)(v4 + 16) + 152LL) = 0;
        Win32FreePool(*(_QWORD *)(v4 + 16), v12);
      }
      *(_DWORD *)v4 = 0;
      Win32FreePool(v4, v8);
    }
    vSpWndobjChange(v15, 0LL);
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
    DCOBJ::~DCOBJ((DCOBJ *)v14);
    return PDEVOBJ::vUnreferencePdev(&v15, 0LL);
  }
  return result;
}
