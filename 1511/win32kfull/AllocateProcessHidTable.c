/*
 * XREFs of AllocateProcessHidTable @ 0x1C010A7B8
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00893B4 (_RegisterRawInputDevices.c)
 * Callees:
 *     <none>
 */

__int64 AllocateProcessHidTable()
{
  __int64 result; // rax
  struct tagPROCESS_HID_TABLE *v1; // rcx
  _QWORD *v2; // rax
  struct tagPROCESS_HID_TABLE **v3; // rax
  struct tagPROCESS_HID_TABLE *v4; // rdx

  result = Win32AllocPoolWithQuotaZInit(104LL, 1953002325LL);
  v1 = (struct tagPROCESS_HID_TABLE *)result;
  if ( result )
  {
    v2 = (_QWORD *)(result + 16);
    v2[1] = v2;
    *v2 = v2;
    *((_QWORD *)v1 + 5) = (char *)v1 + 32;
    *((_QWORD *)v1 + 4) = (char *)v1 + 32;
    *((_QWORD *)v1 + 7) = (char *)v1 + 48;
    *((_QWORD *)v1 + 6) = (char *)v1 + 48;
    if ( LODWORD(aDeviceTemplate[154]) )
      v3 = (struct tagPROCESS_HID_TABLE **)&RawInputManagerObject::gHidRequestTable[4];
    else
      v3 = &qword_1C03274E8;
    v4 = *v3;
    *(_QWORD *)v1 = *v3;
    *((_QWORD *)v1 + 1) = v3;
    if ( *((struct tagPROCESS_HID_TABLE ***)v4 + 1) != v3 )
      __fastfail(3u);
    ++gnHidProcess;
    *((_QWORD *)v4 + 1) = v1;
    *v3 = v1;
    return (__int64)v1;
  }
  return result;
}
