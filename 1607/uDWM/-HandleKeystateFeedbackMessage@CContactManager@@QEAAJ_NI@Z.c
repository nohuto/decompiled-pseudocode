/*
 * XREFs of ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180086284
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x1800415D4 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x180085BB4 (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x180085CA4 (-BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x18008A6B8 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x18008A728 (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleKeystateFeedbackMessage(CContactManager *this, char a2, int a3)
{
  unsigned int v3; // r10d
  const struct tagPOINT *v4; // rbx
  int v6; // ebp
  unsigned __int16 *v7; // r14
  unsigned int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int16 *v12; // rax
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rcx
  const struct tagPOINT *v16; // rdx
  unsigned __int16 *v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // rcx
  __int64 v20; // rcx
  CTrackingTooltip *v21; // rcx
  CTrackingTooltip *v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rax
  __int128 v26; // xmm1
  __int64 v27; // rcx
  __int64 v28; // xmm0_8
  unsigned int v30; // [rsp+20h] [rbp-28h]

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
      v10 = v8;
      if ( a2 )
      {
        v11 = 5LL * v8;
        if ( *(_QWORD *)(v9 + 40 * v10 + 32) )
        {
          if ( *(_DWORD *)(v9 + 8 * v11 + 4) != *(_DWORD *)(v9 + 40 * v10 + 16) )
          {
            v12 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                        WPF::g_pProcessHeap,
                                        2LL * *((int *)this + 12));
            v7 = v12;
            if ( !v12 )
            {
              v30 = 1831;
LABEL_12:
              v13 = -2147024882;
              v6 = -2147024882;
LABEL_13:
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, v30);
              goto LABEL_42;
            }
            *v12 = 0;
            v14 = CContactManager::BuildFeedbackString(
                    (size_t **)this,
                    *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v11 + 4),
                    v12,
                    *((_DWORD *)this + 12));
            v6 = v14;
            if ( v14 < 0 )
            {
              v30 = 1833;
LABEL_17:
              v13 = v14;
              goto LABEL_13;
            }
          }
          v15 = *((_QWORD *)this + 27);
          v16 = (const struct tagPOINT *)(v15 + 8 * v11);
          if ( v16[1].x != v16[2].y || *(_DWORD *)(v15 + 8 * v11 + 12) != *(_DWORD *)(v15 + 8 * v11 + 24) )
            v4 = v16 + 1;
          CTrackingTooltip::Update(*(CTrackingTooltip **)(v15 + 8 * v11 + 32), v4, v7);
        }
        else
        {
          v17 = (unsigned __int16 *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                      WPF::g_pProcessHeap,
                                      2LL * *((int *)this + 12));
          v7 = v17;
          if ( !v17 )
          {
            v30 = 1849;
            goto LABEL_12;
          }
          *v17 = 0;
          v14 = CContactManager::BuildFeedbackString(
                  (size_t **)this,
                  *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v11 + 4),
                  v17,
                  *((_DWORD *)this + 12));
          v6 = v14;
          if ( v14 < 0 )
          {
            v30 = 1851;
            goto LABEL_17;
          }
          v18 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL))(
                           WPF::g_pProcessHeap,
                           112LL);
          v19 = v18;
          if ( v18 )
            *v18 = 0;
          else
            v19 = 0LL;
          *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v11 + 32) = v19;
          v20 = *((_QWORD *)this + 27);
          if ( !*(_QWORD *)(v20 + 8 * v11 + 32) )
          {
            v30 = 1854;
            goto LABEL_12;
          }
          v6 = CTrackingTooltip::Initialize(
                 *(CTrackingTooltip **)(v20 + 8 * v11 + 32),
                 (const struct tagPOINT *)(v20 + 8 + 8 * v11),
                 v7);
          if ( v6 < 0 )
          {
            v21 = *(CTrackingTooltip **)(*((_QWORD *)this + 27) + 8 * v11 + 32);
            if ( v21 )
              CTrackingTooltip::`scalar deleting destructor'(v21);
            *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v11 + 32) = 0LL;
          }
        }
      }
      else
      {
        v22 = *(CTrackingTooltip **)(v9 + 40LL * v8 + 32);
        if ( v22 )
          CTrackingTooltip::`scalar deleting destructor'(v22);
        *(_QWORD *)(*((_QWORD *)this + 27) + 40LL * v8 + 32) = 0LL;
        v23 = *((_DWORD *)this + 60);
        if ( v8 < v23 )
        {
          v24 = *((_QWORD *)this + 27);
          if ( v8 < v23 - 1 )
          {
            do
            {
              v25 = v8++;
              v26 = *(_OWORD *)(v24 + 40LL * v8 + 16);
              v27 = 5 * v25;
              *(_OWORD *)(v24 + 8 * v27) = *(_OWORD *)(v24 + 40LL * v8);
              v28 = *(_QWORD *)(v24 + 40LL * v8 + 32);
              *(_OWORD *)(v24 + 8 * v27 + 16) = v26;
              *(_QWORD *)(v24 + 8 * v27 + 32) = v28;
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
