/*
 * XREFs of ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x18007E4D4
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180009FA8 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x18007DBC0 (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x18007DC1C (-BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800877D0 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x180087840 (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleKeystateFeedbackMessage(CContactManager *this, char a2, int a3)
{
  unsigned int v3; // r10d
  const struct tagPOINT *v4; // rbp
  int v6; // esi
  unsigned __int16 *v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // r9
  unsigned __int16 *v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  const struct tagPOINT *v13; // rdx
  unsigned __int16 *v14; // rax
  int v15; // r9d
  _BYTE *v16; // rax
  _BYTE *v17; // rcx
  __int64 v18; // rcx
  CTrackingTooltip *v19; // rcx
  CTrackingTooltip *v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int64 v25; // rcx
  __int64 v26; // xmm0_8
  unsigned int v28; // [rsp+20h] [rbp-28h]

  v3 = *((_DWORD *)this + 60);
  v4 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( v3 )
  {
    v9 = *((_QWORD *)this + 27);
    while ( *(_DWORD *)(v9 + 40LL * v8) != a3 )
    {
      if ( ++v8 >= v3 )
        goto LABEL_42;
    }
    if ( (v8 & 0x80000000) == 0 )
    {
      if ( a2 )
      {
        if ( *(_QWORD *)(v9 + 40LL * v8 + 32) )
        {
          if ( *(_DWORD *)(v9 + 40LL * v8 + 4) != *(_DWORD *)(v9 + 40LL * v8 + 16) )
          {
            v10 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                        WPF::g_pProcessHeap,
                                        2LL * *((int *)this + 12));
            v7 = v10;
            if ( !v10 )
            {
              v28 = 1831;
LABEL_28:
              v15 = -2147024882;
              v6 = -2147024882;
              goto LABEL_29;
            }
            *v10 = 0;
            v11 = CContactManager::BuildFeedbackString(
                    (const unsigned __int16 **)this,
                    *(_DWORD *)(*((_QWORD *)this + 27) + 40LL * v8 + 4),
                    v10,
                    *((_DWORD *)this + 12));
            v6 = v11;
            if ( v11 < 0 )
            {
              v28 = 1833;
LABEL_22:
              v15 = v11;
LABEL_29:
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, v28);
              goto LABEL_42;
            }
          }
          v12 = *((_QWORD *)this + 27);
          v13 = (const struct tagPOINT *)(v12 + 40LL * v8);
          if ( v13[1].x != v13[2].y || *(_DWORD *)(v12 + 40LL * v8 + 12) != *(_DWORD *)(v12 + 40LL * v8 + 24) )
            v4 = v13 + 1;
          CTrackingTooltip::Update(*(CTrackingTooltip **)(v12 + 40LL * v8 + 32), v4, v7);
        }
        else
        {
          v14 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                      WPF::g_pProcessHeap,
                                      2LL * *((int *)this + 12));
          v7 = v14;
          if ( !v14 )
          {
            v28 = 1849;
            goto LABEL_28;
          }
          *v14 = 0;
          v11 = CContactManager::BuildFeedbackString(
                  (const unsigned __int16 **)this,
                  *(_DWORD *)(*((_QWORD *)this + 27) + 40LL * v8 + 4),
                  v14,
                  *((_DWORD *)this + 12));
          v6 = v11;
          if ( v11 < 0 )
          {
            v28 = 1851;
            goto LABEL_22;
          }
          v16 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           112LL);
          v17 = v16;
          if ( v16 )
            *v16 = 0;
          else
            v17 = 0LL;
          *(_QWORD *)(*((_QWORD *)this + 27) + 40LL * v8 + 32) = v17;
          v18 = *((_QWORD *)this + 27);
          if ( !*(_QWORD *)(v18 + 40LL * v8 + 32) )
          {
            v28 = 1854;
            goto LABEL_28;
          }
          v6 = CTrackingTooltip::Initialize(
                 *(CTrackingTooltip **)(v18 + 40LL * v8 + 32),
                 (const struct tagPOINT *)(v18 + 8 + 40LL * v8),
                 v7);
          if ( v6 < 0 )
          {
            v19 = *(CTrackingTooltip **)(*((_QWORD *)this + 27) + 40LL * v8 + 32);
            if ( v19 )
              CTrackingTooltip::`scalar deleting destructor'(v19);
            *(_QWORD *)(*((_QWORD *)this + 27) + 40LL * v8 + 32) = 0LL;
          }
        }
      }
      else
      {
        v20 = *(CTrackingTooltip **)(v9 + 40LL * v8 + 32);
        if ( v20 )
          CTrackingTooltip::`scalar deleting destructor'(v20);
        *(_QWORD *)(*((_QWORD *)this + 27) + 40LL * v8 + 32) = 0LL;
        v21 = *((_DWORD *)this + 60);
        if ( v8 < v21 )
        {
          v22 = *((_QWORD *)this + 27);
          if ( v8 < v21 - 1 )
          {
            do
            {
              v23 = v8++;
              v24 = *(_OWORD *)(v22 + 40LL * v8 + 16);
              v25 = 5 * v23;
              *(_OWORD *)(v22 + 8 * v25) = *(_OWORD *)(v22 + 40LL * v8);
              v26 = *(_QWORD *)(v22 + 40LL * v8 + 32);
              *(_OWORD *)(v22 + 8 * v25 + 16) = v24;
              *(_QWORD *)(v22 + 8 * v25 + 32) = v26;
            }
            while ( v8 < *((_DWORD *)this + 60) - 1 );
          }
          --*((_DWORD *)this + 60);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
        }
      }
    }
  }
LABEL_42:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v7);
  return (unsigned int)v6;
}
