/*
 * XREFs of ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01D2BA0
 * Callers:
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01F222C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C00DF580 (IsCurrentDesktopComposed.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     _GetPointerDeviceType @ 0x1C01C89BC (_GetPointerDeviceType.c)
 *     ?DeferPointerCursorOperation@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01D2F0C (-DeferPointerCursorOperation@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01D2F84 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01D3058 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01D3204 (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     ?SwitchMouseCursors@@YAXHHH@Z @ 0x1C01D3324 (-SwitchMouseCursors@@YAXHHH@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01D382C (FeedbackGetWindowSetting.c)
 *     DwmAsyncSendTouchContacts @ 0x1C025C880 (DwmAsyncSendTouchContacts.c)
 */

__int64 __fastcall ContactVisualization(unsigned int a1, const struct tagPOINTERINFONODE *a2, int a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  int v6; // ebx
  __int64 v7; // r12
  const struct tagPOINTERINFONODE *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r13d
  char *v13; // rbx
  char *v14; // r15
  int v15; // ecx
  int v16; // ecx
  const struct tagPOINTERCURSORDATA *v17; // rcx
  int v18; // ecx
  int v19; // edi
  int v20; // r14d
  int v21; // r13d
  _DWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  bool v25; // zf
  int v26; // edi
  int WindowVisualizationSetting; // eax
  BOOL v28; // r14d
  __int64 v29; // r13
  __int64 v30; // rdx
  unsigned int i; // r14d
  int v32; // r15d
  void *v33; // rax
  struct tagDIGITIZER_CONTACT_INFO *v35; // [rsp+28h] [rbp-50h]
  int v36; // [rsp+30h] [rbp-48h] BYREF
  int v37; // [rsp+34h] [rbp-44h] BYREF
  int v38; // [rsp+38h] [rbp-40h]
  __int64 v39; // [rsp+40h] [rbp-38h]
  _DWORD v40[4]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v41[8]; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v42; // [rsp+C0h] [rbp+48h]
  const struct tagPOINTERINFONODE *v43; // [rsp+C8h] [rbp+50h]

  v43 = a2;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = a2;
  v38 = *(_DWORD *)UPDWORDPointer(8216LL);
  if ( (unsigned int)IsCurrentDesktopComposed() )
    v7 = Win32AllocPool(40 * v4, 1987081045LL);
  v42 = 0;
  v12 = 0;
  if ( (_DWORD)v4 )
  {
    v13 = (char *)v8 + 68;
    v39 = v4;
    while ( 1 )
    {
      if ( (unsigned int)IsPointerInfoNodeValid(v8) )
      {
        v14 = v13 - 12;
        v15 = *((_DWORD *)v13 - 3);
        if ( (unsigned int)(v15 - 2) <= 1 && (*((_DWORD *)v13 - 17) & 0x1000) == 0 )
          break;
      }
LABEL_50:
      v12 = v42;
      v8 = (const struct tagPOINTERINFONODE *)((char *)v8 + 216);
      v13 += 216;
      --v4;
      v43 = v8;
      v39 = v4;
      if ( !v4 )
      {
        v6 = 0;
        goto LABEL_52;
      }
    }
    if ( v15 == 3 && (unsigned int)GetPointerDeviceType(*(_QWORD *)(v13 + 4), v9, v10, v11) == 1 )
    {
      v16 = *(_DWORD *)v13;
      Feedback::gfIntegratedPenActive = ((unsigned __int8)*(_DWORD *)v13 >> 1) & 1;
      if ( !Feedback::gfUsingPenCursors || gCursorSuppressionState == 2 || (v16 & 0x10001) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0xFFFFFCFF);
        _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0x100u);
      }
      v17 = (const struct tagPOINTERCURSORDATA *)v40;
      v40[0] = *(_DWORD *)v13;
      v40[1] = *((_DWORD *)v13 + 5);
      v40[2] = *((_DWORD *)v13 + 6);
    }
    else
    {
      if ( Feedback::gfIntegratedPenActive || (v18 = *(_DWORD *)v13, (*(_DWORD *)v13 & 0x2000) == 0) )
      {
LABEL_34:
        if ( a4 != 3 )
        {
          v25 = *(_DWORD *)v14 == 2;
          v26 = 0;
          v36 = 0;
          if ( !v25
            || (WindowVisualizationSetting = Feedback::GetWindowVisualizationSetting(
                                               (Feedback *)(v13 - 12),
                                               (const struct tagPOINTER_INFO *)(v38 == 0),
                                               a4 == 2,
                                               v38 == 2,
                                               (int)&v36,
                                               (int *)v35),
                v26 = v36,
                WindowVisualizationSetting)
            || v36 )
          {
            if ( v7 )
            {
              ++v42;
              v28 = 1;
              v29 = v7 + 40LL * v12;
              if ( *(_DWORD *)v14 == 3 )
                v28 = Feedback::GetWindowBarrelVisualizationSetting(
                        (Feedback *)(v13 - 12),
                        (const struct tagPOINTER_INFO *)((unsigned __int8)(*(v13 - 68) & 8) >> 3),
                        v10) != 0;
              if ( !a3 || (v30 = 1LL, a4 != 2) )
                v30 = 0LL;
              Feedback::PointerEventIntToDigitizerContactInfo(
                (Feedback *)(v13 - 20),
                (const struct tagPOINTEREVENTINT *)v30,
                v28,
                v26,
                v29,
                v35);
              if ( (*(_DWORD *)v13 & 0x10000) != 0 )
              {
                EtwTraceContactVisualizationDown();
              }
              else if ( (*(_DWORD *)v13 & 0x40000) != 0 )
              {
                EtwTraceContactVisualizationUp();
              }
              v8 = v43;
            }
          }
          v4 = v39;
        }
        goto LABEL_50;
      }
      v41[1] = *((_DWORD *)v13 + 5);
      v41[2] = *((_DWORD *)v13 + 6);
      v41[0] = v18;
      if ( (v18 & 0x10001) != 0 )
      {
        v19 = 0;
        v20 = 0;
        v21 = 0;
        if ( *(_DWORD *)v14 == 3 && (unsigned int)GetPointerDeviceType(*(_QWORD *)(v13 + 4), v9, v10, v11) == 2 )
        {
          v21 = 1;
        }
        else
        {
          v22 = (_DWORD *)UPDWORDPointer(8216LL);
          v37 = 0;
          LOBYTE(v20) = *v22 == 0;
          if ( *(_DWORD *)v14 == 2 )
          {
            v23 = *(_QWORD *)(v13 + 12);
            if ( v23 )
            {
              v24 = ValidateHwnd(v23);
              if ( v24 )
              {
                FeedbackGetWindowSetting(v24, 12LL, 1LL, &v37);
                v19 = v37;
              }
            }
          }
          if ( *(_DWORD *)v14 == 3 || v20 || !(unsigned int)IsCurrentDesktopComposed() || v19 )
          {
            v19 = 1;
            v20 = 0;
          }
          else
          {
            v19 = 0;
            v20 = 1;
          }
        }
        SwitchMouseCursors(v19, v20, v21);
        v12 = v42;
        v8 = v43;
        v4 = v39;
      }
      v17 = (const struct tagPOINTERCURSORDATA *)v41;
    }
    DeferPointerCursorOperation(v17);
    goto LABEL_34;
  }
LABEL_52:
  if ( !v7 )
    return 1;
  for ( i = 0; i < v12; i += v32 )
  {
    v32 = v12 - i;
    if ( v12 - i > 0xB )
      v32 = 11;
    v33 = (void *)ReferenceDwmApiPort(5LL * i, v9, v10, v11);
    v6 = DwmAsyncSendTouchContacts(v33);
    if ( v6 < 0 )
      break;
  }
  Win32FreePool(v7, v9, v10);
  if ( v6 >= 0 )
    return 1;
  return v5;
}
