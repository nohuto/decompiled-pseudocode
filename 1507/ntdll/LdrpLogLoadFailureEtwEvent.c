/*
 * XREFs of LdrpLogLoadFailureEtwEvent @ 0x180073030
 * Callers:
 *     LdrpSnapModule @ 0x1800156C0 (LdrpSnapModule.c)
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 * Callees:
 *     RtlGetThreadErrorMode @ 0x1800730E0 (RtlGetThreadErrorMode.c)
 *     EtwEventWriteNoRegistration @ 0x180077C30 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 */

int __fastcall LdrpLogLoadFailureEtwEvent(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        int a3,
        const EVENT_DESCRIPTOR *a4,
        char a5)
{
  struct _PEB *v6; // rax
  int v9; // ecx
  int v10; // eax
  ULONG v11; // r8d
  int v12; // eax
  int ProcessInformation; // [rsp+30h] [rbp-40h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+54h] [rbp-1Ch]
  __int64 v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+64h] [rbp-Ch]
  int v22; // [rsp+A0h] [rbp+30h] BYREF

  v22 = a3;
  ProcessInformation = 0;
  v6 = NtCurrentPeb();
  if ( (v6->BitField & 0x10) != 0 )
  {
    if ( a5 )
      goto LABEL_8;
    LODWORD(v6) = RtlGetThreadErrorMode();
    if ( ((unsigned __int8)v6 & 0x10) == 0 )
    {
      LODWORD(v6) = NtQueryInformationProcess(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      ProcessDefaultHardErrorMode,
                      &ProcessInformation,
                      4u,
                      0LL);
      v9 = ProcessInformation;
      if ( (int)v6 < 0 )
        v9 = 5;
      ProcessInformation = v9;
      if ( (v9 & 5) != 0 )
      {
LABEL_8:
        UserData.Reserved = 0;
        v18 = 0;
        UserData.Ptr = (unsigned __int64)&v22;
        v16 = *((_QWORD *)a1 + 1);
        v10 = *a1 + 2;
        UserData.Size = 4;
        v17 = v10;
        if ( a2 )
        {
          v11 = 3;
          v19 = *((_QWORD *)a2 + 1);
          v12 = *a2 + 2;
          v21 = 0;
          v20 = v12;
        }
        else
        {
          v11 = 2;
        }
        LODWORD(v6) = EtwEventWriteNoRegistration(&UserLoaderGuid, a4, v11, &UserData);
      }
    }
  }
  return (int)v6;
}
