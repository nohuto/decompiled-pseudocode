/*
 * XREFs of ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x18007E290
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180009FA8 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x18007DBC0 (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x18007E890 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800877D0 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x180087840 (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleFlickFeedbackMessage(CContactManager *this, char a2, int a3)
{
  unsigned int v3; // r10d
  int v4; // r14d
  unsigned __int16 *v5; // r15
  __int64 v6; // rbx
  __int64 v8; // r9
  __int64 v9; // rbp
  CTrackingTooltip *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  HMODULE ModuleHandleW; // rax
  CContactManager *v14; // rcx
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  __int64 v17; // rcx
  CTrackingTooltip *v18; // rcx
  CTrackingTooltip *v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // xmm1_8
  __int64 v24; // rcx
  unsigned int v26; // [rsp+20h] [rbp-28h]
  int v27; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 52);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( v3 )
  {
    v8 = *((_QWORD *)this + 23);
    while ( *(_DWORD *)(v8 + 24 * v6) != a3 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v3 )
        goto LABEL_30;
    }
    if ( (int)v6 >= 0 )
    {
      if ( a2 )
      {
        v9 = 3 * v6;
        v10 = *(CTrackingTooltip **)(v8 + 24 * v6 + 16);
        if ( v10 )
        {
          CTrackingTooltip::Update(v10, (const struct tagPOINT *)(v8 + 8 + 24 * v6), 0LL);
          goto LABEL_30;
        }
        _mm_lfence();
        v11 = *((_QWORD *)this + 23);
        v27 = 0;
        v12 = *(int *)(v11 + 24 * v6 + 4);
        ModuleHandleW = GetModuleHandleW(0LL);
        v5 = CContactManager::LoadFeedbackString(v14, ModuleHandleW, dword_1800AAA90[v12], &v27);
        if ( !v5 )
        {
          v26 = 1772;
LABEL_17:
          v4 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, v26);
          goto LABEL_30;
        }
        v15 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         112LL);
        v16 = v15;
        if ( v15 )
          *v15 = 0;
        else
          v16 = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v9 + 16) = v16;
        v17 = *((_QWORD *)this + 23);
        if ( !*(_QWORD *)(v17 + 8 * v9 + 16) )
        {
          v26 = 1776;
          goto LABEL_17;
        }
        v4 = CTrackingTooltip::Initialize(
               *(CTrackingTooltip **)(v17 + 8 * v9 + 16),
               (const struct tagPOINT *)(v17 + 8 + 8 * v9),
               v5);
        if ( v4 < 0 )
        {
          v18 = *(CTrackingTooltip **)(*((_QWORD *)this + 23) + 8 * v9 + 16);
          if ( v18 )
            CTrackingTooltip::`scalar deleting destructor'(v18);
          *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v9 + 16) = 0LL;
        }
      }
      else
      {
        v19 = *(CTrackingTooltip **)(v8 + 24 * v6 + 16);
        if ( v19 )
          CTrackingTooltip::`scalar deleting destructor'(v19);
        *(_QWORD *)(*((_QWORD *)this + 23) + 24 * v6 + 16) = 0LL;
        v20 = *((_DWORD *)this + 52);
        if ( (unsigned int)v6 < v20 )
        {
          v21 = *((_QWORD *)this + 23);
          if ( (unsigned int)v6 < v20 - 1 )
          {
            do
            {
              v22 = (unsigned int)v6;
              LODWORD(v6) = v6 + 1;
              v23 = *(_QWORD *)(v21 + 24LL * (unsigned int)v6 + 16);
              v24 = 3 * v22;
              *(_OWORD *)(v21 + 8 * v24) = *(_OWORD *)(v21 + 24LL * (unsigned int)v6);
              *(_QWORD *)(v21 + 8 * v24 + 16) = v23;
            }
            while ( (unsigned int)v6 < *((_DWORD *)this + 52) - 1 );
          }
          --*((_DWORD *)this + 52);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
        }
      }
    }
  }
LABEL_30:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v5);
  return (unsigned int)v4;
}
