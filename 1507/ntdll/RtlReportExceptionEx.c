/*
 * XREFs of RtlReportExceptionEx @ 0x1800C7660
 * Callers:
 *     RtlReportException @ 0x1800C7550 (RtlReportException.c)
 * Callees:
 *     ReportExceptionInternal @ 0x180001C2C (ReportExceptionInternal.c)
 *     RtlQueryResourcePolicy @ 0x180004FE0 (RtlQueryResourcePolicy.c)
 *     WerpProcessId @ 0x180045EA0 (WerpProcessId.c)
 *     PssNtCaptureSnapshot @ 0x180058F80 (PssNtCaptureSnapshot.c)
 *     PssNtFreeSnapshot @ 0x1800597E0 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtSetInformationProcess @ 0x180093AC0 (NtSetInformationProcess.c)
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180093D80 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     NtWaitForMultipleObjects @ 0x180093EB0 (NtWaitForMultipleObjects.c)
 *     memset @ 0x180098540 (memset.c)
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
  unsigned int v18; // [rsp+54h] [rbp-584h]
  char *v19; // [rsp+60h] [rbp-578h] BYREF
  HANDLE v20; // [rsp+68h] [rbp-570h]
  HANDLE Handle; // [rsp+70h] [rbp-568h]
  HANDLE v22; // [rsp+78h] [rbp-560h]
  HANDLE v23[2]; // [rsp+80h] [rbp-558h] BYREF
  int v24; // [rsp+90h] [rbp-548h] BYREF
  __int64 v25; // [rsp+98h] [rbp-540h]
  unsigned int v26; // [rsp+A0h] [rbp-538h]
  _DWORD *v27; // [rsp+A8h] [rbp-530h]
  int v28; // [rsp+B0h] [rbp-528h]
  void *v29; // [rsp+B8h] [rbp-520h]
  __int64 v30; // [rsp+C0h] [rbp-518h]
  __int128 v31; // [rsp+C8h] [rbp-510h]
  __int64 v32; // [rsp+D8h] [rbp-500h]
  _QWORD v33[2]; // [rsp+E0h] [rbp-4F8h] BYREF
  int v34; // [rsp+F0h] [rbp-4E8h]
  __int64 v35; // [rsp+F8h] [rbp-4E0h]
  __int64 v36; // [rsp+100h] [rbp-4D8h]
  int v37; // [rsp+108h] [rbp-4D0h]
  __int128 v38; // [rsp+110h] [rbp-4C8h]
  __int64 v39; // [rsp+120h] [rbp-4B8h]
  __int64 v40; // [rsp+128h] [rbp-4B0h]
  __int64 v41; // [rsp+148h] [rbp-490h]
  char v42; // [rsp+160h] [rbp-478h] BYREF
  _QWORD v43[4]; // [rsp+590h] [rbp-48h] BYREF

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
  if ( (int)RtlQueryResourcePolicy(0, 0, &v24, 4LL) < 0 || v24 > 10 )
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
