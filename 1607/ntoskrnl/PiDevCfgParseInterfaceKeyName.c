/*
 * XREFs of PiDevCfgParseInterfaceKeyName @ 0x1401CEBD4
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140635480 (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 */

char __fastcall PiDevCfgParseInterfaceKeyName(__int64 a1, GUID *a2, __int64 *a3)
{
  char v3; // bl
  unsigned __int16 v6; // ax
  NTSTATUS v7; // r8d
  __int64 v8; // rdx
  __int16 v9; // ax
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( *(_WORD *)a1 >= 0x4Cu )
  {
    v11.Buffer = *(wchar_t **)(a1 + 8);
    v6 = *(_WORD *)(a1 + 2);
    v11.Length = 76;
    v11.MaximumLength = v6;
    v7 = RtlGUIDFromString(&v11, a2);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(_WORD *)(v8 + 76);
      if ( v9 == 35 )
      {
        *a3 = (v8 + 78) & -(__int64)(*(_WORD *)(v8 + 78) != 0);
      }
      else if ( v9 )
      {
        v7 = -1073741823;
      }
      else
      {
        *a3 = 0LL;
      }
      if ( v7 >= 0 )
        return 1;
    }
  }
  return v3;
}
