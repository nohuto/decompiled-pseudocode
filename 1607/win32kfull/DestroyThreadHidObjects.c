/*
 * XREFs of DestroyThreadHidObjects @ 0x1C00E2960
 * Callers:
 *     <none>
 * Callees:
 *     UpdateRawMouseMode @ 0x1C005B7C4 (UpdateRawMouseMode.c)
 *     ValidatePtiMouse @ 0x1C00E1668 (ValidatePtiMouse.c)
 *     ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00E1BEC (-SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z.c)
 *     FreeHidProcessRequest @ 0x1C00E26B0 (FreeHidProcessRequest.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01CBF44 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  struct tagPROCESS_HID_REQUEST *v7; // rdi
  struct tagPROCESS_HID_REQUEST *v8; // rcx
  __int64 v9; // rax
  struct tagPROCESS_HID_REQUEST *v10; // rdi
  struct tagPROCESS_HID_REQUEST *v11; // rdi
  int v13; // eax
  int v14; // eax
  struct tagPROCESS_HID_REQUEST *v15; // rcx
  __int64 v16; // rax
  const struct tagPROCESSINFO *v17; // rcx
  struct tagPROCESSINFO *v18; // rcx
  struct tagPROCESS_HID_REQUEST *v19; // rax
  struct tagPROCESS_HID_REQUEST *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 376) + 776LL);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) == a1 )
    {
      HMAssignmentUnlock(v2 + 72);
      *(_DWORD *)(v2 + 100) &= 0xFFFFFFCF;
      v13 = *(_DWORD *)(v2 + 100);
      if ( (v13 & 0x40) != 0 )
      {
        --gHidCounters;
        *(_DWORD *)(v2 + 100) = v13 & 0xFFFFFFBF;
      }
    }
  }
  v4 = v2 + 64;
  v5 = *(_QWORD *)(v2 + 64);
  if ( v5 && *(_QWORD *)(v5 + 16) == a1 )
  {
    HMAssignmentUnlock(v4);
    *(_DWORD *)(v2 + 100) &= 0xFFFFFFFC;
    v14 = *(_DWORD *)(v2 + 100);
    if ( (v14 & 4) != 0 )
    {
      --dword_1C032682C;
      *(_DWORD *)(v2 + 100) = v14 & 0xFFFFFFFB;
    }
    if ( ValidatePtiMouse(gpqForeground) == a1 )
      UpdateRawMouseMode(v4);
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  EnterDeviceInfoListCrit_(v4);
  v6 = *(_DWORD *)(a1 + 1096);
  if ( (v6 & 0x200000) != 0 )
  {
    v17 = *(const struct tagPROCESSINFO **)(a1 + 376);
    *(_DWORD *)(a1 + 1096) = v6 & 0xFFDFFFFF;
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
  v7 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 16);
  while ( v7 != (struct tagPROCESS_HID_REQUEST *)(v2 + 16) )
  {
    v8 = v7;
    v7 = *(struct tagPROCESS_HID_REQUEST **)v7;
    v9 = *((_QWORD *)v8 + 4);
    if ( v9 )
    {
      if ( *(_QWORD *)(v9 + 16) == a1 )
        FreeHidProcessRequest(v8, 1, (struct tagPROCESS_HID_TABLE *)v2);
    }
  }
  v10 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 32);
  while ( v10 != (struct tagPROCESS_HID_REQUEST *)(v2 + 32) )
  {
    v15 = v10;
    v10 = *(struct tagPROCESS_HID_REQUEST **)v10;
    v16 = *((_QWORD *)v15 + 4);
    if ( v16 && *(_QWORD *)(v16 + 16) == a1 )
      FreeHidProcessRequest(v15, 2, (struct tagPROCESS_HID_TABLE *)v2);
  }
  v11 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 48);
  while ( v11 != (struct tagPROCESS_HID_REQUEST *)(v2 + 48) )
  {
    v20 = v11;
    v11 = *(struct tagPROCESS_HID_REQUEST **)v11;
    v21 = *((_QWORD *)v20 + 4);
    if ( v21 && *(_QWORD *)(v21 + 16) == a1 )
      FreeHidProcessRequest(v20, 3, (struct tagPROCESS_HID_TABLE *)v2);
  }
  return LeaveDeviceInfoListCrit_();
}
