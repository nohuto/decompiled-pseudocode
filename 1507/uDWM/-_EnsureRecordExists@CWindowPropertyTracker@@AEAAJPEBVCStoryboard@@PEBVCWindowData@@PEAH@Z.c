/*
 * XREFs of ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180009AA0
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180009D38 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x180097938 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x180097A2C (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x180097AD0 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x180009984 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x1800099D8 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowPropertyTracker::_EnsureRecordExists(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        const struct CWindowData *a3,
        int *a4)
{
  HWND v7; // rdx
  unsigned int v8; // edi
  int Record; // eax
  int v10; // r15d
  __int64 v11; // rax
  _QWORD *v12; // rcx
  int v13; // ebx
  CWindowPropertyTracker::CPropertyChangeRecord *v14; // r10
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // r8
  __int64 v27; // r10
  unsigned int v28; // eax
  unsigned int v29; // edx
  int v30; // eax
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+30h] [rbp-10h] BYREF
  const struct CStoryboard *v32; // [rsp+78h] [rbp+38h] BYREF
  CWindowPropertyTracker::CPropertyChangeRecord *v33; // [rsp+80h] [rbp+40h] BYREF

  v32 = a2;
  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = (HWND)*((_QWORD *)a3 + 5);
  v33 = 0LL;
  v8 = 0;
  Record = CWindowPropertyTracker::_FindRecord(this, v7);
  v10 = Record;
  if ( Record >= 0 )
  {
    v25 = 0;
    v26 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    while ( v25 < *(_DWORD *)(v26 + 32) )
    {
      if ( *(const struct CStoryboard **)(*(_QWORD *)(v26 + 8) + 8LL * v25) == v32 )
        goto LABEL_18;
      ++v25;
    }
    _mm_lfence();
    v27 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    v28 = *(_DWORD *)(v27 + 32);
    v29 = v28 + 1;
    if ( v28 + 1 >= v28 )
    {
      if ( v29 > *(_DWORD *)(v27 + 28) )
      {
        v30 = DynArrayImpl<0>::AddMultipleAndSet(v27 + 8, 8LL, 1LL, &v32);
        if ( v30 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v27 + 8) + 8LL * *(unsigned int *)(v27 + 32)) = v32;
        *(_DWORD *)(v27 + 32) = v29;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    goto LABEL_18;
  }
  v11 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          152LL);
  v12 = (_QWORD *)v11;
  v8 = 0;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_DWORD *)(v11 + 32) = 0;
    v33 = (CWindowPropertyTracker::CPropertyChangeRecord *)v11;
  }
  else
  {
    v12 = 0LL;
    v33 = 0LL;
  }
  if ( !v12 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x7Du);
    goto LABEL_26;
  }
  v13 = -2147024362;
  *v12 = *((_QWORD *)a3 + 5);
  v14 = v33;
  v15 = *((_DWORD *)v33 + 8);
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  else if ( v16 <= *((_DWORD *)v33 + 7) )
  {
    *(_QWORD *)(*((_QWORD *)v33 + 1) + 8LL * *((unsigned int *)v33 + 8)) = v32;
    *((_DWORD *)v14 + 8) = v16;
  }
  else
  {
    v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)v33 + 8, 8LL, 1LL, &v32);
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0xC0u);
  }
  *((_BYTE *)v33 + 44) = *((_BYTE *)a3 + 556) & 1;
  *((_DWORD *)v33 + 12) = *((_DWORD *)a3 + 47);
  *((_DWORD *)v33 + 13) = *((_DWORD *)a3 + 48);
  v18 = *((_DWORD *)a3 + 49) - *((_DWORD *)a3 + 47);
  if ( v18 < 0 )
    v18 = 0;
  *((_DWORD *)v33 + 14) = v18;
  v19 = *((_DWORD *)a3 + 50) - *((_DWORD *)a3 + 48);
  if ( v19 < 0 )
    v19 = 0;
  *((_DWORD *)v33 + 15) = v19;
  *((_OWORD *)v33 + 4) = *(_OWORD *)((char *)a3 + 204);
  *((_OWORD *)v33 + 5) = *(_OWORD *)((char *)a3 + 220);
  v20 = v33;
  *((_OWORD *)v33 + 6) = *(_OWORD *)((char *)v33 + 44);
  *((_OWORD *)v20 + 7) = *(_OWORD *)((char *)v20 + 60);
  *((_OWORD *)v20 + 8) = *(_OWORD *)((char *)v20 + 76);
  *((_DWORD *)v20 + 36) = *((_DWORD *)v20 + 23);
  v21 = *((_DWORD *)this + 6);
  v22 = v21 + 1;
  if ( v21 + 1 < v21 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v8 = -2147024362;
  }
  else
  {
    v13 = 0;
    if ( v22 <= *((_DWORD *)this + 5) )
    {
      *(_QWORD *)(*(_QWORD *)this + 8LL * v21) = v33;
      *((_DWORD *)this + 6) = v22;
LABEL_16:
      v10 = *((_DWORD *)this + 6) - 1;
      goto LABEL_17;
    }
    v24 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v33);
    v13 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0xC0u);
    v8 = v13;
    if ( v13 >= 0 )
      goto LABEL_16;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x8Du);
LABEL_17:
  if ( v13 >= 0 )
  {
LABEL_18:
    *a4 = v10;
    goto LABEL_19;
  }
LABEL_26:
  if ( v33 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v33);
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return v8;
}
