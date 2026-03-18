/*
 * XREFs of ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0089760
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00893B4 (_RegisterRawInputDevices.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00537A0 (UpdateRawMouseMode.c)
 *     HasHidTable @ 0x1C0053C70 (HasHidTable.c)
 *     ValidatePtiMouse @ 0x1C008591C (ValidatePtiMouse.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C0089978 (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 */

void __fastcall AdjustLegacyDeviceFlags(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rbx
  struct tagPROCESS_HID_REQUEST *v2; // rax
  int v3; // edx
  int v4; // r9d
  struct tagPROCESS_HID_REQUEST *v5; // rax
  struct tagPROCESS_HID_REQUEST *v6; // rsi
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  int v15; // edx
  int v16; // ecx

  v1 = *((_QWORD *)a1 + 98);
  v2 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 6u);
  if ( v2 )
  {
    *(_DWORD *)(v1 + 100) |= 0x10u;
    v3 = *((_DWORD *)v2 + 5);
    v4 = *(_DWORD *)(v1 + 100);
    if ( -__CFSHR__(v4, 7) != -(v3 & 1) )
    {
      if ( (*((_DWORD *)v2 + 5) & 1) != 0 )
        ++gHidCounters;
      else
        --gHidCounters;
      v15 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)((_BYTE)v3 << 6)) & 0x40;
      *(_DWORD *)(v1 + 100) = v15;
      *(_DWORD *)(v1 + 100) = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v2 + 5) << 6)) & 0x80;
    }
    HMAssignmentLock(v1 + 72, *((_QWORD *)v2 + 4));
  }
  else
  {
    *(_DWORD *)(v1 + 100) &= 0xFFFFF9CF;
    v14 = *(_DWORD *)(v1 + 100);
    if ( (v14 & 0x40) != 0 )
      --gHidCounters;
    *(_DWORD *)(v1 + 100) = v14 & 0xFFFFFF3F;
    HMAssignmentUnlock(v1 + 72);
  }
  v5 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 2u);
  v6 = v5;
  if ( v5 )
  {
    *(_DWORD *)(v1 + 100) |= 1u;
    v7 = *((_DWORD *)v5 + 5);
    v8 = *(_DWORD *)(v1 + 100);
    if ( -__CFSHR__(v8, 3) != -(*((_DWORD *)v6 + 5) & 1) )
    {
      if ( (*((_DWORD *)v6 + 5) & 1) != 0 )
        ++dword_1C032171C;
      else
        --dword_1C032171C;
      v16 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(4 * v7)) & 4;
      *(_DWORD *)(v1 + 100) = v16;
      *(_DWORD *)(v1 + 100) = v16 ^ ((unsigned __int8)(v8 ^ (v8 ^ (4 * v7)) & 4) ^ (unsigned __int8)(4 * *((_DWORD *)v6 + 5))) & 8;
    }
    v9 = ValidatePtiMouse(gpqForeground);
    v10 = v9;
    if ( v9 && (unsigned int)HasHidTable(v9) && *(_QWORD *)(*(_QWORD *)(v10 + 376) + 784LL) == v1 )
      UpdateRawMouseMode(gpqForeground);
    HMAssignmentLock(v1 + 64, *((_QWORD *)v6 + 4));
  }
  else
  {
    *(_DWORD *)(v1 + 100) &= 0xFFFFFEFC;
    v11 = *(_DWORD *)(v1 + 100);
    if ( (v11 & 4) != 0 )
      --dword_1C032171C;
    *(_DWORD *)(v1 + 100) = v11 & 0xFFFFFFF3;
    v12 = ValidatePtiMouse(gpqForeground);
    v13 = v12;
    if ( v12 && (unsigned int)HasHidTable(v12) && *(_QWORD *)(*(_QWORD *)(v13 + 376) + 784LL) == v1 )
      UpdateRawMouseMode(gpqForeground);
    HMAssignmentUnlock(v1 + 64);
  }
}
