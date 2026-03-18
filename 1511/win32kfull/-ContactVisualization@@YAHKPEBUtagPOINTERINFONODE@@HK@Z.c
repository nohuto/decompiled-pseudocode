/*
 * XREFs of ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DB1E0
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C00874C0 (IsCurrentDesktopComposed.c)
 *     _GetPointerDeviceType @ 0x1C01CEFEC (_GetPointerDeviceType.c)
 *     ?DeferPointerCursorOperation@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB4F0 (-DeferPointerCursorOperation@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z @ 0x1C01DB568 (-GetWindowBarrelVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@H@Z.c)
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01DB63C (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB740 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_CONTACT_INFO@@@Z @ 0x1C01DB800 (-PointerEventIntToDigitizerContactInfo@Feedback@@YAXPEBUtagPOINTEREVENTINT@@HHHPEAUtagDIGITIZER_.c)
 *     FeedbackGetWindowSetting @ 0x1C01DBE2C (FeedbackGetWindowSetting.c)
 *     DwmAsyncSendTouchContacts @ 0x1C025F100 (DwmAsyncSendTouchContacts.c)
 */

__int64 __fastcall ContactVisualization(unsigned int a1, const struct tagPOINTERINFONODE *a2, int a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  int v6; // ebx
  __int64 v7; // r15
  int v8; // ebp
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r12d
  unsigned int *v15; // rbx
  __int64 v16; // r8
  unsigned int v17; // ecx
  _DWORD *v18; // rax
  int v19; // edi
  BOOL v20; // ebp
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  bool v24; // zf
  int v25; // edi
  int WindowVisualizationSetting; // eax
  __int64 v27; // rax
  BOOL v28; // ebp
  __int64 v29; // r14
  __int64 v30; // rdx
  unsigned int v31; // eax
  unsigned int i; // ebp
  int v33; // r14d
  void *v34; // rax
  struct tagDIGITIZER_CONTACT_INFO *v36; // [rsp+28h] [rbp-70h]
  int v37; // [rsp+30h] [rbp-68h]
  _DWORD v38[3]; // [rsp+34h] [rbp-64h] BYREF
  __int64 v39; // [rsp+40h] [rbp-58h]
  _DWORD v40[20]; // [rsp+48h] [rbp-50h] BYREF
  int v41; // [rsp+A0h] [rbp+8h] BYREF
  int v42; // [rsp+B0h] [rbp+18h]
  int v43; // [rsp+B8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = a4;
  v10 = *(_DWORD *)UPDWORDPointer(8216LL);
  v37 = v10;
  if ( (unsigned int)IsCurrentDesktopComposed() )
    v7 = Win32AllocPool(40 * v4);
  v14 = 0;
  if ( (_DWORD)v4 )
  {
    v15 = (unsigned int *)((char *)a2 + 56);
    v39 = v4;
    do
    {
      if ( (unsigned int)IsPointerInfoNodeValid(a2) )
      {
        v11 = *v15;
        if ( (unsigned int)(v11 - 2) <= 1 )
        {
          v17 = v15[3];
          if ( (v17 & 0x2000) != 0 )
          {
            v40[1] = v15[8];
            v40[2] = v15[9];
            v40[0] = v17;
            if ( (v17 & 0x10001) != 0 )
            {
              if ( (_DWORD)v11 == 3 && (unsigned int)GetPointerDeviceType(*((_QWORD *)v15 + 2)) == 2 )
              {
                _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
              }
              else
              {
                v18 = (_DWORD *)UPDWORDPointer(8216LL);
                v38[0] = 0;
                v19 = 0;
                v20 = *v18 == 0;
                if ( *v15 == 2 )
                {
                  v21 = *((_QWORD *)v15 + 3);
                  if ( v21 )
                  {
                    v22 = ValidateHwnd(v21);
                    if ( v22 )
                    {
                      FeedbackGetWindowSetting(v22, 12LL, 1LL, v38);
                      v19 = v38[0];
                    }
                  }
                }
                if ( *v15 == 3 || v20 || !(unsigned int)IsCurrentDesktopComposed() || (v23 = 0, v19) )
                  v23 = 1;
                _InterlockedAnd((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0xFFFFFCFF);
                _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, v23 != 0 ? 256 : 512);
                v8 = v43;
              }
            }
            DeferPointerCursorOperation((const struct tagPOINTERCURSORDATA *)v40);
            v16 = v39;
          }
          if ( v8 != 3 )
          {
            v24 = *v15 == 2;
            v25 = 0;
            v41 = 0;
            if ( !v24
              || (WindowVisualizationSetting = Feedback::GetWindowVisualizationSetting(
                                                 (Feedback *)v15,
                                                 (const struct tagPOINTER_INFO *)(v10 == 0),
                                                 v8 == 2,
                                                 v10 == 2,
                                                 (int)&v41,
                                                 (int *)v36),
                  v25 = v41,
                  WindowVisualizationSetting)
              || v41 )
            {
              if ( v7 )
              {
                v27 = v14;
                v28 = 1;
                ++v14;
                v29 = v7 + 40 * v27;
                if ( *v15 == 3 )
                  v28 = Feedback::GetWindowBarrelVisualizationSetting(
                          (Feedback *)v15,
                          (const struct tagPOINTER_INFO *)((unsigned __int8)(*(_BYTE *)(v15 - 14) & 8) >> 3),
                          v16) != 0;
                if ( !v42 || (v30 = 1LL, v43 != 2) )
                  v30 = 0LL;
                Feedback::PointerEventIntToDigitizerContactInfo(
                  (Feedback *)(v15 - 2),
                  (const struct tagPOINTEREVENTINT *)v30,
                  v28,
                  v25,
                  v29,
                  v36);
                v31 = v15[3];
                if ( (v31 & 0x10000) != 0 )
                {
                  EtwTraceContactVisualizationDown();
                }
                else if ( (v31 & 0x40000) != 0 )
                {
                  EtwTraceContactVisualizationUp();
                }
                v10 = v37;
                v8 = v43;
              }
            }
            v16 = v39;
          }
        }
      }
      a2 = (const struct tagPOINTERINFONODE *)((char *)a2 + 216);
      v15 += 54;
      v12 = v16 - 1;
      v39 = v12;
    }
    while ( v12 );
    v6 = 0;
  }
  if ( !v7 )
    return 1;
  for ( i = 0; i < v14; i += v33 )
  {
    v33 = v14 - i;
    if ( v14 - i > 0xB )
      v33 = 11;
    v34 = (void *)ReferenceDwmApiPort(5LL * i, v11, v12, v13);
    v6 = DwmAsyncSendTouchContacts(v34);
    if ( v6 < 0 )
      break;
  }
  Win32FreePool(v7);
  if ( v6 >= 0 )
    return 1;
  return v5;
}
