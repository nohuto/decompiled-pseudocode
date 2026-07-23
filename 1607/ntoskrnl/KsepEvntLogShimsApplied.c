/*
 * XREFs of KsepEvntLogShimsApplied @ 0x1401DCA94
 * Callers:
 *     KseDriverLoadImage @ 0x140514D7C (KseDriverLoadImage.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14010B37C (KsepPoolAllocatePaged.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUID @ 0x1404D011C (RtlStringFromGUID.c)
 */

void __fastcall KsepEvntLogShimsApplied(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v6; // bx
  UNICODE_STRING *Paged; // rdi
  unsigned int v8; // esi
  UNICODE_STRING *v9; // r14
  int v10; // ebx
  unsigned int v11; // ecx
  ULONG v12; // eax
  unsigned int i; // ebx
  UNICODE_STRING *v14; // rcx
  unsigned int v15; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  __int64 v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  unsigned int *v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  wchar_t *Buffer; // [rsp+80h] [rbp+7h]
  int v23; // [rsp+88h] [rbp+Fh]
  int v24; // [rsp+8Ch] [rbp+13h]

  v15 = a3;
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  v6 = 0;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  if ( KseEtwHandle && EtwEventEnabled(KseEtwHandle, &KseShimsApplied) && a3 && a2 && a1 )
  {
    Paged = (UNICODE_STRING *)KsepPoolAllocatePaged(16LL * a3);
    if ( Paged )
    {
      v8 = 0;
      if ( v15 )
      {
        while ( 1 )
        {
          v9 = &Paged[v8];
          if ( RtlStringFromGUID((const GUID *const)(a2 + 80LL * v8), v9) < 0 )
            break;
          ++v8;
          v6 += v9->Length + 4;
          if ( v8 >= v15 )
          {
            if ( v6 )
            {
              Destination.Buffer = (wchar_t *)KsepPoolAllocatePaged(v6);
              if ( Destination.Buffer )
              {
                Destination.MaximumLength = v6;
                v10 = 0;
                while ( RtlAppendUnicodeStringToString(&Destination, &Paged[v10]) >= 0 )
                {
                  v11 = v15;
                  if ( v10 != v15 - 1 )
                  {
                    if ( RtlAppendUnicodeToString(&Destination, L"\n") < 0 )
                      goto LABEL_19;
                    v11 = v15;
                  }
                  if ( ++v10 >= v11 )
                  {
                    UserData.Ptr = *((_QWORD *)a1 + 1);
                    v12 = *a1 + 2;
                    v19 = 4LL;
                    UserData.Size = v12;
                    v21 = 4LL;
                    v18 = a2 + 68;
                    v20 = &v15;
                    Buffer = Destination.Buffer;
                    UserData.Reserved = 0;
                    v23 = Destination.Length + 2;
                    v24 = 0;
                    EtwWrite(KseEtwHandle, &KseShimsApplied, 0LL, 4u, &UserData);
                    goto LABEL_19;
                  }
                }
              }
            }
            break;
          }
        }
      }
LABEL_19:
      for ( i = 0; i < v15; ++i )
      {
        v14 = &Paged[i];
        if ( v14->Buffer )
          RtlFreeAnsiString(v14);
      }
      KsepPoolFreePaged(Paged);
    }
    if ( Destination.Buffer )
      KsepPoolFreePaged(Destination.Buffer);
  }
}
