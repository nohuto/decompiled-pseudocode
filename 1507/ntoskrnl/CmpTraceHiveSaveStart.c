/*
 * XREFs of CmpTraceHiveSaveStart @ 0x140653730
 * Callers:
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 */

void __fastcall CmpTraceHiveSaveStart(__int64 a1)
{
  _QWORD *v2; // rax
  void *v3; // rbx
  ULONG v4; // edx
  __int16 v5; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-28h] BYREF
  __int16 *v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]

  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_SAVE_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v5 = 0;
    v2 = CmpConstructName(a1);
    v3 = v2;
    if ( v2 )
    {
      v4 = *(unsigned __int16 *)v2;
      UserData.Ptr = v2[1];
      v8 = &v5;
      UserData.Size = v4;
      UserData.Reserved = 0;
      v9 = 2LL;
      EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 2u, &UserData);
      ExFreePoolWithTag(v3, 0x624E4D43u);
    }
  }
}
