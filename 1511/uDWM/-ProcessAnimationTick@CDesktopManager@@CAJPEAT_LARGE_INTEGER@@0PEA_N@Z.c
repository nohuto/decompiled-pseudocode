/*
 * XREFs of ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x1800336D0
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180043C90 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AdvanceTimelines@CDesktopManager@@AEAAXN@Z @ 0x180021570 (-AdvanceTimelines@CDesktopManager@@AEAAXN@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ @ 0x180034990 (-OnGlobalTimeUpdated@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180036850 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memcpy_0 @ 0x18004FF5A (memcpy_0.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800772F8 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::ProcessAnimationTick(union _LARGE_INTEGER *a1, union _LARGE_INTEGER *a2, bool *a3)
{
  bool *v4; // r13
  unsigned int v6; // r14d
  __int64 v7; // rcx
  DWORD LowPart; // eax
  double v9; // xmm6_8
  CDesktopManager *v10; // r15
  unsigned int v11; // edi
  int v12; // esi
  const void *v13; // r9
  int v14; // ebx
  CTopLevelWindow3D *v15; // rdi
  __int64 (__fastcall *v16)(CTopLevelWindow3D *__hidden); // rsi
  int v17; // eax
  __int64 v18; // rbx
  bool v19; // bl
  CAnimationEngine *v21; // rcx
  signed int LastError; // eax
  int v23; // eax
  int v24; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-59h] BYREF
  _BYTE *v27; // [rsp+48h] [rbp-51h]
  int v28; // [rsp+50h] [rbp-49h]
  __int64 v29; // [rsp+54h] [rbp-45h]
  _BYTE v30[80]; // [rsp+60h] [rbp-39h] BYREF
  bool v32; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = a3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  if ( CDesktopManager::s_pDesktopManagerInstance )
  {
    PerformanceCount.QuadPart = 0LL;
    SetLastError(0);
    if ( QueryPerformanceCounter(&PerformanceCount) )
    {
      LowPart = PerformanceCount.LowPart;
      if ( a1->QuadPart == -1 )
        *a1 = PerformanceCount;
      v9 = (double)(int)(LowPart - a1->LowPart) / (double)(int)a2->QuadPart;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        TemplateEventDescriptor(v7, &UdwmAnimation_Info);
      v10 = CDesktopManager::s_pDesktopManagerInstance;
      CDesktopManager::AdvanceTimelines(CDesktopManager::s_pDesktopManagerInstance, v9);
      v11 = *((_DWORD *)v10 + 362);
      v12 = 0;
      if ( v11 )
      {
        v13 = (const void *)*((_QWORD *)v10 + 178);
        v26 = v30;
        v27 = v30;
        v28 = 10;
        v29 = 10LL;
        *v4 = 1;
        if ( v11 > 0xA )
        {
          v23 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v26, 8u, v11, v13);
          v12 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0xC0u);
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x568u);
LABEL_40:
            DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v26);
            goto LABEL_19;
          }
          v11 = HIDWORD(v29);
        }
        else
        {
          memcpy_0(v30, v13, 8LL * v11);
          HIDWORD(v29) = v11;
        }
        v14 = 0;
        if ( v11 )
        {
          while ( 1 )
          {
            v15 = (CTopLevelWindow3D *)v26[v14];
            v16 = *(__int64 (__fastcall **)(CTopLevelWindow3D *__hidden))(*(_QWORD *)v15 + 120LL);
            v17 = v16 == CTopLevelWindow3D::OnGlobalTimeUpdated
                ? CTopLevelWindow3D::OnGlobalTimeUpdated(v15)
                : ((__int64 (__fastcall *)(_QWORD, __int64 (__fastcall *)(CTopLevelWindow3D *__hidden)))v16)(
                    v26[v14],
                    CTopLevelWindow3D::OnGlobalTimeUpdated);
            v12 = v17;
            if ( v17 < 0 )
              break;
            if ( (unsigned int)++v14 >= HIDWORD(v29) )
              goto LABEL_15;
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x56Cu);
          goto LABEL_40;
        }
LABEL_15:
        if ( v26 != (_QWORD *)v27 )
        {
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v26);
          v26 = 0LL;
        }
        v4 = a3;
      }
      if ( *((_BYTE *)v10 + 22) )
      {
        v24 = CIconicBitmapRegistry::ProcessTick(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                 + 28));
        v12 = v24;
        if ( v24 >= 0 )
          goto LABEL_20;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x572u);
      }
LABEL_19:
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x583u);
LABEL_24:
        v6 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x5ADu);
        else
          *a1 = PerformanceCount;
        goto LABEL_26;
      }
LABEL_20:
      v18 = *((_QWORD *)v10 + 22);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v19 = !*(_DWORD *)(v18 + 64) || !*(_BYTE *)(v18 + 120);
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( !v19 )
      {
        v21 = (CAnimationEngine *)*((_QWORD *)v10 + 22);
        v32 = 0;
        CAnimationEngine::OnTick(v21, *((double *)CDesktopManager::s_pDesktopManagerInstance + 31), &v32);
        *v4 |= v32;
      }
      goto LABEL_24;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v6 = LastError;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LastError, 0x5A3u);
  }
LABEL_26:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
