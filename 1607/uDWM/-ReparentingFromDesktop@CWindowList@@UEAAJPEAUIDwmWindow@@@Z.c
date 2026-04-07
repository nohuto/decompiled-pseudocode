/*
 * XREFs of ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002D410
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001A154 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031834 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032660 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ReparentingFromDesktop(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rsi
  int v5; // ebx
  CWindowData *v6; // rdi
  CBaseObject *v8; // rcx
  CWindowData *v9; // rax
  int v10; // eax
  CWindowList *v11; // rcx

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_3;
  v9 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        1232LL);
  if ( v9 )
    v6 = CWindowData::CWindowData(v9);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x56Au);
    goto LABEL_14;
  }
  *((_QWORD *)v6 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v6);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v10 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v10;
  if ( v10 >= 0 )
LABEL_3:
    v4 = v6;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x56Eu);
  if ( v5 < 0 )
  {
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xA30u);
    goto LABEL_6;
  }
  if ( v4 )
  {
    v8 = (CBaseObject *)*((_QWORD *)v4 + 46);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)v4 + 46) = 0LL;
      CWindowList::OnGDISurfaceChange(v11, v4);
    }
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v5;
}
