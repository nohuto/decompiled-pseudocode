/*
 * XREFs of ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180077BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180017DE8 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?AssertW@@YAXPEBG000K@Z @ 0x18009CBEC (-AssertW@@YAXPEBG000K@Z.c)
 */

__int64 __fastcall CWindowList::CreateWindow(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v3; // esi
  CWindowData *v4; // rax
  CWindowData *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2) )
    AssertW(0LL, L"pwdData == 0", L"CWindowList::CreateWindow", L"windows\\dwm\\udwm\\windowlist.cpp", 0x556u);
  v4 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        1216LL);
  if ( v4 )
    v5 = CWindowData::CWindowData(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    *((_QWORD *)v5 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v5);
    *((_QWORD *)v5 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x559u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v3;
}
