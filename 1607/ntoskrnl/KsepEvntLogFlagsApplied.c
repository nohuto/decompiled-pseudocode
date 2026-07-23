/*
 * XREFs of KsepEvntLogFlagsApplied @ 0x14014A8A4
 * Callers:
 *     KseQueryDeviceFlags @ 0x140535070 (KseQueryDeviceFlags.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void KsepEvntLogFlagsApplied(unsigned __int16 *a1, unsigned __int16 *a2, int a3, ...)
{
  REGHANDLE v3; // rbx
  ULONGLONG v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  int v9; // [rsp+48h] [rbp-38h]
  int v10; // [rsp+4Ch] [rbp-34h]
  int *v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+5Ch] [rbp-24h]
  va_list v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]
  int v17; // [rsp+B0h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va, a3);
  v17 = a3;
  v3 = KseEtwHandle;
  if ( KseEtwHandle && EtwEventEnabled(KseEtwHandle, &KseFlagsApplied) && a1 )
  {
    if ( a2 )
    {
      v6 = *((_QWORD *)a1 + 1);
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = v6;
      LODWORD(v6) = *a1 + 2;
      v12 = 4;
      UserData.Size = v6;
      v8 = *((_QWORD *)a2 + 1);
      LODWORD(v6) = *a2;
      v15 = 8;
      v9 = v6 + 2;
      v11 = &v17;
      va_copy(v14, va);
      EtwWrite(v3, &KseFlagsApplied, 0LL, 4u, &UserData);
    }
  }
}
