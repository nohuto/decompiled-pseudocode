/*
 * XREFs of RtlReportExceptionEx @ 0x1800D0990
 * Callers:
 *     RtlReportException @ 0x1800D0880 (RtlReportException.c)
 * Callees:
 *     ReportExceptionInternal @ 0x180002B6C (ReportExceptionInternal.c)
 *     PssNtCaptureSnapshot @ 0x1800478E0 (PssNtCaptureSnapshot.c)
 *     RtlQueryResourcePolicy @ 0x180053D20 (RtlQueryResourcePolicy.c)
 *     WerpProcessId @ 0x18005BA98 (WerpProcessId.c)
 *     PssNtFreeSnapshot @ 0x180084150 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtSetInformationProcess @ 0x1800A5440 (NtSetInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     NtWaitForMultipleObjects @ 0x1800A5C10 (NtWaitForMultipleObjects.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlReportExceptionEx(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // ebx
  _DWORD *v6; // r13
  int v7; // r15d
  char *v8; // rcx
  int Section; // edi
  __int64 v10; // rbx
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rbx
  int InformationThread; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v18; // [rsp+54h] [rbp-5C4h]
  char *v19; // [rsp+60h] [rbp-5B8h] BYREF
  HANDLE v20; // [rsp+68h] [rbp-5B0h]
  HANDLE Handle; // [rsp+70h] [rbp-5A8h]
  HANDLE v22; // [rsp+78h] [rbp-5A0h]
  HANDLE v23[2]; // [rsp+80h] [rbp-598h] BYREF
  int v24; // [rsp+90h] [rbp-588h] BYREF
  __int64 v25; // [rsp+98h] [rbp-580h]
  unsigned int v26; // [rsp+A0h] [rbp-578h]
  _DWORD *v27; // [rsp+A8h] [rbp-570h]
  int v28; // [rsp+B0h] [rbp-568h]
  void *v29; // [rsp+B8h] [rbp-560h]
  __int64 v30; // [rsp+C0h] [rbp-558h]
  __int128 v31; // [rsp+C8h] [rbp-550h]
  __int64 v32; // [rsp+D8h] [rbp-540h]
  _QWORD v33[2]; // [rsp+E0h] [rbp-538h] BYREF
  int v34; // [rsp+F0h] [rbp-528h]
  __int64 v35; // [rsp+F8h] [rbp-520h]
  __int64 v36; // [rsp+100h] [rbp-518h]
  int v37; // [rsp+108h] [rbp-510h]
  __int128 v38; // [rsp+110h] [rbp-508h]
  __int64 v39; // [rsp+120h] [rbp-4F8h]
  __int64 v40; // [rsp+128h] [rbp-4F0h]
  __int64 v41; // [rsp+148h] [rbp-4D0h]
  char v42; // [rsp+160h] [rbp-4B8h] BYREF
  _QWORD v43[4]; // [rsp+5D0h] [rbp-48h] BYREF

  v30 = a4;
  v23[0] = 0LL;
  v22 = 0LL;
  Handle = 0LL;
  v20 = 0LL;
  v31 = 0LL;
  v5 = 0;
  v29 = 0LL;
  v32 = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  v19 = 0LL;
  v33[1] = a2;
  v33[0] = a1;
  v34 = 48;
  v35 = 0LL;
  v37 = 2;
  v36 = 0LL;
  v38 = 0LL;
  if ( (a3 & 4) == 0 )
  {
    v23[1] = HANDLE_FLAG_INHERIT;
    NtSetInformationProcess();
  }
  if ( (int)ZwCreateEvent() < 0 )
  {
    v22 = 0LL;
  }
  else
  {
    v43[0] = v22;
    v5 = 1;
  }
  if ( (int)RtlQueryResourcePolicy(0, 0, (__int64)&v24, 4LL) < 0 || v24 > 10 )
  {
    v19 = &v42;
    v7 = PssNtCaptureSnapshot((void **)&v19, -1LL, 0xFC0019FF, 0x10001Fu);
    v28 = v7;
    v8 = v19;
    if ( v7 < 0 )
      v8 = 0LL;
    v19 = v8;
  }
  else
  {
    v7 = -1073741801;
    v28 = -1073741801;
    v19 = 0LL;
  }
  v25 = 248LL;
  Section = NtCreateSection();
  if ( Section >= 0 )
  {
    v43[v5] = Handle;
    v10 = (unsigned int)(v5 + 1);
    v18 = v10;
    Section = ZwMapViewOfSection();
    if ( Section >= 0 )
    {
      if ( (int)ZwDuplicateObject() >= 0 )
      {
        v43[v10] = 0LL;
        v10 = (unsigned int)(v10 + 1);
        v18 = v10;
      }
      if ( (int)ZwDuplicateObject() < 0 )
      {
        v20 = 0LL;
      }
      else
      {
        v43[v10] = v20;
        v18 = v10 + 1;
      }
      v11 = v29;
      v27 = v29;
      memset(v29, 0, 0xF8uLL);
      v12 = WerpProcessId((void *)0xFFFFFFFFFFFFFFFFLL);
      v13 = v12;
      v26 = v12;
      InformationThread = ZwQueryInformationThread();
      v15 = v41;
      if ( InformationThread < 0 )
        v15 = 0;
      v40 = v15;
      v39 = v13;
      *(_DWORD *)v11 = 248;
      v11[21] = v33;
      *((_DWORD *)v11 + 1) = v13;
      *((_DWORD *)v11 + 2) = v15;
      v11[23] = 0LL;
      v11[24] = v20;
      v11[26] = v22;
      v11[28] = v19;
      *((_DWORD *)v11 + 58) = v7;
      *((_DWORD *)v11 + 59) = a3;
      v6 = v27;
      v27[60] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
      Section = ReportExceptionInternal(v26, (__int64)Handle, (__int64)v43, v18, a3, v23);
      if ( Section >= 0 )
      {
        if ( v23[0] )
        {
          while ( 1 )
          {
            *(HANDLE *)&v31 = v23[0];
            *((_QWORD *)&v31 + 1) = v22;
            v16 = NtWaitForMultipleObjects();
            if ( v16 < 0 )
              break;
            if ( v16 == 258 )
            {
              Section = -1073741823;
              break;
            }
            if ( v16 != 192 && v16 != 257 )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          Section = 0;
        }
      }
    }
  }
  if ( v19 )
    PssNtFreeSnapshot((__int64)v19);
  if ( v6 )
  {
    NtUnmapViewOfSection();
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
    }
    if ( v23[0] )
      NtClose(v23[0]);
  }
  if ( v20 )
  {
    NtClose(v20);
    v20 = 0LL;
  }
  if ( v22 )
    NtClose(v22);
  return (unsigned int)Section;
}
