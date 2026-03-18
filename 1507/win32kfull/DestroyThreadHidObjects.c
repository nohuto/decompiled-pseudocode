/*
 * XREFs of DestroyThreadHidObjects @ 0x1C0078200
 * Callers:
 *     <none>
 * Callees:
 *     ValidatePtiMouse @ 0x1C004B980 (ValidatePtiMouse.c)
 *     FreeHidProcessRequest @ 0x1C00783D4 (FreeHidProcessRequest.c)
 *     UpdateRawMouseMode @ 0x1C0090674 (UpdateRawMouseMode.c)
 */

__int64 __fastcall DestroyThreadHidObjects(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  struct tagPROCESS_HID_REQUEST *v6; // rcx
  struct tagPROCESS_HID_REQUEST *v7; // rdi
  __int64 v8; // rax
  struct tagPROCESS_HID_REQUEST *v9; // rdi
  struct tagPROCESS_HID_REQUEST *v10; // rdi
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 784LL);
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
      --dword_1C0321704;
      *(_DWORD *)(v2 + 100) = v14 & 0xFFFFFFFB;
    }
    if ( ValidatePtiMouse(gpqForeground) == a1 )
      UpdateRawMouseMode(v4);
  }
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  EnterDeviceInfoListCrit_(v4);
  v7 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 16);
  while ( v7 != (struct tagPROCESS_HID_REQUEST *)(v2 + 16) )
  {
    v6 = v7;
    v7 = *(struct tagPROCESS_HID_REQUEST **)v7;
    v8 = *((_QWORD *)v6 + 4);
    if ( v8 )
    {
      if ( *(_QWORD *)(v8 + 16) == a1 )
        FreeHidProcessRequest(v6);
    }
  }
  v9 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 32);
  while ( v9 != (struct tagPROCESS_HID_REQUEST *)(v2 + 32) )
  {
    v6 = v9;
    v9 = *(struct tagPROCESS_HID_REQUEST **)v9;
    v12 = *((_QWORD *)v6 + 4);
    if ( v12 && *(_QWORD *)(v12 + 16) == a1 )
      FreeHidProcessRequest(v6);
  }
  v10 = *(struct tagPROCESS_HID_REQUEST **)(v2 + 48);
  while ( v10 != (struct tagPROCESS_HID_REQUEST *)(v2 + 48) )
  {
    v6 = v10;
    v10 = *(struct tagPROCESS_HID_REQUEST **)v10;
    v15 = *((_QWORD *)v6 + 4);
    if ( v15 && *(_QWORD *)(v15 + 16) == a1 )
      FreeHidProcessRequest(v6);
  }
  return LeaveDeviceInfoListCrit_(v6);
}
