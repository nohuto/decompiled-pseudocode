/*
 * XREFs of ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0078960
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C0078618 (_RegisterRawInputDevices.c)
 * Callees:
 *     ValidatePtiMouse @ 0x1C004B980 (ValidatePtiMouse.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C0078B5C (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     UpdateRawMouseMode @ 0x1C0090674 (UpdateRawMouseMode.c)
 *     HasHidTable @ 0x1C0090A50 (HasHidTable.c)
 */

void __fastcall AdjustLegacyDeviceFlags(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rbx
  struct tagPROCESS_HID_REQUEST *v2; // rax
  int v3; // edx
  int v4; // r9d
  int v5; // edx
  struct tagPROCESS_HID_REQUEST *v6; // rax
  struct tagPROCESS_HID_REQUEST *v7; // rsi
  int v8; // r8d
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // eax

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
      v5 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)((_BYTE)v3 << 6)) & 0x40;
      *(_DWORD *)(v1 + 100) = v5;
      *(_DWORD *)(v1 + 100) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v2 + 5) << 6)) & 0x80;
    }
    HMAssignmentLock(v1 + 72, *((_QWORD *)v2 + 4));
  }
  else
  {
    *(_DWORD *)(v1 + 100) &= 0xFFFFF9CF;
    v16 = *(_DWORD *)(v1 + 100);
    if ( (v16 & 0x40) != 0 )
      --gHidCounters;
    *(_DWORD *)(v1 + 100) = v16 & 0xFFFFFF3F;
    HMAssignmentUnlock(v1 + 72);
  }
  v6 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 2u);
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v1 + 100) |= 1u;
    v8 = *((_DWORD *)v6 + 5);
    v9 = *(_DWORD *)(v1 + 100);
    if ( -__CFSHR__(v9, 3) != -(*((_DWORD *)v7 + 5) & 1) )
    {
      if ( (*((_DWORD *)v7 + 5) & 1) != 0 )
        ++dword_1C0321704;
      else
        --dword_1C0321704;
      v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(4 * v8)) & 4;
      *(_DWORD *)(v1 + 100) = v10;
      *(_DWORD *)(v1 + 100) = v10 ^ ((unsigned __int8)(v9 ^ (v9 ^ (4 * v8)) & 4) ^ (unsigned __int8)(4 * *((_DWORD *)v7 + 5))) & 8;
    }
    v11 = ValidatePtiMouse(gpqForeground);
    v12 = v11;
    if ( v11 && (unsigned int)HasHidTable(v11) && *(_QWORD *)(*(_QWORD *)(v12 + 384) + 784LL) == v1 )
      UpdateRawMouseMode(gpqForeground);
    HMAssignmentLock(v1 + 64, *((_QWORD *)v7 + 4));
  }
  else
  {
    *(_DWORD *)(v1 + 100) &= 0xFFFFFEFC;
    v13 = *(_DWORD *)(v1 + 100);
    if ( (v13 & 4) != 0 )
      --dword_1C0321704;
    *(_DWORD *)(v1 + 100) = v13 & 0xFFFFFFF3;
    v14 = ValidatePtiMouse(gpqForeground);
    v15 = v14;
    if ( v14 && (unsigned int)HasHidTable(v14) && *(_QWORD *)(*(_QWORD *)(v15 + 384) + 784LL) == v1 )
      UpdateRawMouseMode(gpqForeground);
    HMAssignmentUnlock(v1 + 64);
  }
}
