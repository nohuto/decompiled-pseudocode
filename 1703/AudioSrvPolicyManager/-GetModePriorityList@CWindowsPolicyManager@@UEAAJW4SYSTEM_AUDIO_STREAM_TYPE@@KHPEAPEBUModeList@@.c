/*
 * XREFs of ?GetModePriorityList@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@KHPEAPEBUModeList@@@Z @ 0x180004A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetModePriorityList(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v5; // rdi
  unsigned int v6; // ebx
  LSTATUS ValueW; // eax
  bool v8; // zf
  __int64 v9; // r9
  DWORD pdwType; // [rsp+40h] [rbp-18h] BYREF
  DWORD pcbData[5]; // [rsp+44h] [rbp-14h] BYREF
  unsigned int pvData; // [rsp+70h] [rbp+18h] BYREF

  v5 = a5;
  v6 = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_3:
      v6 = -2147024809;
      goto LABEL_4;
    }
  }
  else if ( a3 >= 0x15 )
  {
    goto LABEL_3;
  }
  if ( a2 == 1 && a3 >= 0x15 )
    goto LABEL_3;
  if ( a5 )
  {
    if ( a2 )
      v9 = (__int64)*(&off_180023BB0 + a3);
    else
      v9 = (__int64)*(&off_180023DB0 + a3);
    *a5 = v9;
  }
  else
  {
    v6 = -2147467261;
  }
LABEL_4:
  if ( a3 == 18 && a2 == 1 )
  {
    pdwType = 0;
    pcbData[0] = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\OOBE",
               L"LaunchUserOOBE",
               0x10000012u,
               &pdwType,
               &pvData,
               pcbData);
    if ( !ValueW )
    {
      if ( pdwType == 4 )
      {
        if ( pvData > 1 )
          return v6;
        v8 = pvData == 1;
      }
      else
      {
        if ( pcbData[0] != 4 || (unsigned __int16)(pvData - 48) > 1u )
          return v6;
        ValueW = 0;
        v8 = (_WORD)pvData == 49;
      }
      LOBYTE(ValueW) = v8;
      if ( ValueW )
        *v5 = &unk_180023A48;
    }
  }
  return v6;
}
