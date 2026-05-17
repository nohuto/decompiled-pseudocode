/*
 * XREFs of LdrpLogLoadFailureEtwEvent @ 0x18007E464
 * Callers:
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 * Callees:
 *     RtlGetThreadErrorMode @ 0x18007E510 (RtlGetThreadErrorMode.c)
 *     EtwEventWriteNoRegistration @ 0x180084090 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 */

int __fastcall LdrpLogLoadFailureEtwEvent(unsigned __int16 *a1, unsigned __int16 *a2, int a3, __int64 a4, char a5)
{
  struct _PEB *v6; // rax
  int v9; // ecx
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  int ProcessInformation; // [rsp+30h] [rbp-40h] BYREF
  int *v15; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  __int64 v18; // [rsp+48h] [rbp-28h]
  int v19; // [rsp+50h] [rbp-20h]
  int v20; // [rsp+54h] [rbp-1Ch]
  __int64 v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]
  int v24; // [rsp+A0h] [rbp+30h] BYREF

  v24 = a3;
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
                      (PROCESSINFOCLASS)12,
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
        v17 = 0;
        v20 = 0;
        v15 = &v24;
        v18 = *((_QWORD *)a1 + 1);
        v10 = *a1 + 2;
        v16 = 4;
        v19 = v10;
        if ( a2 )
        {
          v11 = 3LL;
          v21 = *((_QWORD *)a2 + 1);
          v12 = *a2 + 2;
          v23 = 0;
          v22 = v12;
        }
        else
        {
          v11 = 2LL;
        }
        LODWORD(v6) = EtwEventWriteNoRegistration(&UserLoaderGuid, a4, v11, &v15);
      }
    }
  }
  return (int)v6;
}
