/*
 * XREFs of CmpTraceHiveSaveStart @ 0x1405FC160
 * Callers:
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 */

void __fastcall CmpTraceHiveSaveStart(__int64 a1)
{
  ULONGLONG *v2; // rax
  ULONGLONG *v3; // rbx
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
    v2 = (ULONGLONG *)CmpConstructName(a1);
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
      CmpFreeTransientPoolWithTag(v3, 0x624E4D43u);
    }
  }
}
