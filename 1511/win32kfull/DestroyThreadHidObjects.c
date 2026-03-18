/*
 * XREFs of DestroyThreadHidObjects @ 0x1C00F1690
 * Callers:
 *     <none>
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00537A0 (UpdateRawMouseMode.c)
 *     ValidatePtiMouse @ 0x1C008591C (ValidatePtiMouse.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00896D0 (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     FreeHidProcessRequest @ 0x1C008A2BC (FreeHidProcessRequest.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01D4094 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  struct tagPROCESS_HID_REQUEST *v6; // rdi
  struct tagPROCESS_HID_REQUEST *v7; // rcx
  __int64 v8; // rax
  struct tagPROCESS_HID_REQUEST *v9; // rdi
  struct tagPROCESS_HID_REQUEST *v10; // rdi
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  struct tagPROCESS_HID_REQUEST *v15; // rcx
  __int64 v16; // rax
  const struct tagPROCESSINFO *v17; // rcx
  struct tagPROCESSINFO *v18; // rcx
  struct tagPROCESS_HID_REQUEST *v19; // rax
  struct tagPROCESS_HID_REQUEST *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 784LL);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) == a1 )
    {
      HMAssignmentUnlock(v2 + 72);
      *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      v12 = *(_DWORD *)(v2 + 100);
      if ( (v12 & 0x40) != 0 )
      {
        --gHidCounters;
        *(_DWORD *)(v2 + 100) = v12 & 0xFFFFFFBF;
      }
    }
  }
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && *(_QWORD *)(v4 + 16) == a1 )
  {
    HMAssignmentUnlock(v2 + 64);
    *(_DWORD *)(v2 + 100) &= 0xFFFFFFFC;
    v13 = *(_DWORD *)(v2 + 100);
    if ( (v13 & 4) != 0 )
    {
      --dword_1C032171C;
      *(_DWORD *)(v2 + 100) = v13 & 0xFFFFFFFB;
    }
    if ( ValidatePtiMouse(gpqForeground) == a1 )
      UpdateRawMouseMode(v14);
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  EnterDeviceInfoListCrit_();
  v5 = *(_DWORD *)(a1 + 1072);
  if ( (v5 & 0x200000) != 0 )
  {
    v17 = *(const struct tagPROCESSINFO **)(a1 + 376);
    *(_DWORD *)(a1 + 1072) = v5 & 0xFFDFFFFF;
    if ( !(unsigned int)HasRawKeyboardPerThreadRegistration(v17) )
    {
      v19 = SearchProcessHidRequest(v18, 1, 6, &v22);
      if ( v19 )
      {
        FreeHidProcessRequest(v19, v22, (struct tagPROCESS_HID_TABLE *)v2);
        *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      }
    }
  }
  v6 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 16);
  while ( v6 != (struct tagPROCESS_HID_REQUEST *)(v2 + 16) )
  {
    v7 = v6;
    v6 = *(struct tagPROCESS_HID_REQUEST **)v6;
    v8 = *((_QWORD *)v7 + 4);
    if ( v8 )
    {
      if ( *(_QWORD *)(v8 + 16) == a1 )
        FreeHidProcessRequest(v7, 1, (struct tagPROCESS_HID_TABLE *)v2);
    }
  }
  v9 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 32);
  while ( v9 != (struct tagPROCESS_HID_REQUEST *)(v2 + 32) )
  {
    v15 = v9;
    v9 = *(struct tagPROCESS_HID_REQUEST **)v9;
    v16 = *((_QWORD *)v15 + 4);
    if ( v16 && *(_QWORD *)(v16 + 16) == a1 )
      FreeHidProcessRequest(v15, 2, (struct tagPROCESS_HID_TABLE *)v2);
  }
  v10 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 48);
  while ( v10 != (struct tagPROCESS_HID_REQUEST *)(v2 + 48) )
  {
    v20 = v10;
    v10 = *(struct tagPROCESS_HID_REQUEST **)v10;
    v21 = *((_QWORD *)v20 + 4);
    if ( v21 && *(_QWORD *)(v21 + 16) == a1 )
      FreeHidProcessRequest(v20, 3, (struct tagPROCESS_HID_TABLE *)v2);
  }
  return LeaveDeviceInfoListCrit_();
}
