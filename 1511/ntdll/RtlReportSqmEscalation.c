/*
 * XREFs of RtlReportSqmEscalation @ 0x1800D0F90
 * Callers:
 *     <none>
 * Callees:
 *     SendMessageToWERService @ 0x180002C98 (SendMessageToWERService.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlReportSqmEscalation(int a1, int a2, int a3, __int64 a4, _DWORD *a5)
{
  HANDLE v7; // r14
  unsigned int UniqueProcess; // r15d
  unsigned int UniqueThread; // r12d
  unsigned int Section; // edi
  int v12; // eax
  NTSTATUS v13; // eax
  _QWORD v16[5]; // [rsp+80h] [rbp-80h] BYREF
  HANDLE v17[176]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v18[176]; // [rsp+630h] [rbp+530h] BYREF

  memset(v18, 0, 1400);
  memset(v17, 0, 1400);
  memset(v16, 0, sizeof(v16));
  v7 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  UniqueProcess = (unsigned int)NtCurrentTeb()->ClientId.UniqueProcess;
  UniqueThread = (unsigned int)NtCurrentTeb()->ClientId.UniqueThread;
  if ( !a5 )
  {
    memset(v18, 0, 0x578uLL);
    HIDWORD(v18[8]) = a2;
    LODWORD(v18[9]) = a3;
    v18[10] = 0LL;
    LODWORD(v18[0]) = 91751760;
    LODWORD(v18[5]) = 0x40000000;
    v18[6] = __PAIR64__(UniqueThread, UniqueProcess);
    LODWORD(v18[7]) = a1;
    *(_QWORD *)((char *)&v18[7] + 4) = a4;
    memset(v17, 0, 0x578uLL);
    LODWORD(v17[0]) = 91751760;
    v12 = SendMessageToWERService((__int64)v18, (__int64)v17);
    if ( v12 >= 0 )
    {
      if ( v12 == 258 )
      {
        Section = -1073741248;
      }
      else
      {
        v7 = v17[6];
        if ( v17[6] )
        {
          while ( 1 )
          {
            v13 = NtWaitForSingleObject(v7, 1u, 0LL);
            Section = v13;
            if ( v13 == 258 || v13 < 0 )
              break;
            if ( v13 != 192 && v13 != 257 )
              goto LABEL_13;
          }
        }
        else
        {
LABEL_13:
          Section = 0;
        }
      }
    }
    else
    {
      Section = -1073741823;
    }
    goto LABEL_19;
  }
  if ( *a5 == 3468 && a5[1] <= 0xAu )
  {
    memset(v16, 0, 20);
    *(_OWORD *)&v16[3] = 0LL;
    Section = NtCreateSection();
LABEL_19:
    if ( v7 )
      NtClose(v7);
    return Section;
  }
  return (unsigned int)-1073741811;
}
