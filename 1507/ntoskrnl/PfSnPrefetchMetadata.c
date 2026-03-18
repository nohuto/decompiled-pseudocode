/*
 * XREFs of PfSnPrefetchMetadata @ 0x14042CB54
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x140456B0C (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     PfpPrefetchEntireDirectory @ 0x14042CE40 (PfpPrefetchEntireDirectory.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x140473CFC (PfSnFindPrefetchVolumeInfoInList.c)
 *     NtCreateEvent @ 0x140488270 (NtCreateEvent.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     PfSnPrefetchFileMetadata @ 0x140541200 (PfSnPrefetchFileMetadata.c)
 *     PfSnLogPrefetchMetadata @ 0x140554848 (PfSnLogPrefetchMetadata.c)
 */

__int64 __fastcall PfSnPrefetchMetadata(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // r12d
  unsigned int v6; // r13d
  NTSTATUS v7; // edi
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int *v10; // rdi
  __int64 PrefetchVolumeInfoInList; // rax
  __int64 v12; // r14
  _DWORD *v13; // rdx
  unsigned int j; // ecx
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  unsigned __int16 *v21; // r13
  unsigned int v22; // r12d
  unsigned int v23; // eax
  unsigned int *v24; // rdi
  unsigned int v26; // ebx
  __int64 v27; // r12
  __int64 v28; // xmm1_8
  __int64 v29; // rdx
  __int64 v30; // rax
  BOOLEAN InitialState[8]; // [rsp+20h] [rbp-69h]
  __int128 v32; // [rsp+30h] [rbp-59h] BYREF
  __int64 v33; // [rsp+40h] [rbp-49h]
  __int64 v34; // [rsp+48h] [rbp-41h]
  __int64 v35; // [rsp+50h] [rbp-39h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-31h] BYREF
  __int64 v37; // [rsp+88h] [rbp-1h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v39; // [rsp+F0h] [rbp+67h]
  unsigned int v40; // [rsp+F8h] [rbp+6Fh]
  int i; // [rsp+100h] [rbp+77h]
  HANDLE EventHandle; // [rsp+108h] [rbp+7Fh] BYREF

  v40 = a2;
  v3 = *a1;
  v5 = 0;
  v37 = v3;
  EventHandle = 0LL;
  LOBYTE(a3) = 1;
  v6 = a2;
  PfSnLogPrefetchMetadata(v3, a2, a3);
  if ( v3 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v7 >= 0 )
    {
      v8 = v3 + *(unsigned int *)(v3 + 108);
      v9 = 0LL;
      v34 = v8;
      for ( i = 0; (unsigned int)v9 < *(_DWORD *)(v3 + 112); i = v9 )
      {
        v10 = (unsigned int *)(v8 + 96 * v9);
        PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList((wchar_t *)(v8 + *v10));
        v12 = PrefetchVolumeInfoInList;
        if ( PrefetchVolumeInfoInList && (*(_DWORD *)(PrefetchVolumeInfoInList + 108) & 1) != 0 )
        {
          v13 = v10 + 9;
          for ( j = 0; j < 7; ++j )
          {
            if ( _bittest((const int *)&v6, j) )
              v5 += *v13 + v13[7];
            ++v13;
          }
          *(_DWORD *)InitialState = v5;
          PfSnPrefetchFileMetadata(
            a1,
            *(_QWORD *)(PrefetchVolumeInfoInList + 32),
            v8 + v10[5],
            *(unsigned int *)(PrefetchVolumeInfoInList + 104),
            *(_QWORD *)InitialState,
            EventHandle);
          *(_DWORD *)(v12 + 104) += v5;
          v15 = a1[24];
          v35 = v15;
          *(_DWORD *)v15 = 4;
          v16 = a1[26] & 7;
          v17 = *((_DWORD *)a1 + 53) & 7;
          *(_DWORD *)(v15 + 4) = 768;
          *(_QWORD *)(v15 + 8) = v16 | (8 * (v17 | 8u));
          v18 = 0LL;
          v19 = (_QWORD *)(v15 + 16);
          v20 = 768LL;
          do
          {
            *v19 = v18;
            v18 += 4096LL;
            ++v19;
            --v20;
          }
          while ( v20 );
          v21 = *(unsigned __int16 **)(v12 + 96);
          v22 = 0;
          v23 = v40;
          v24 = v10 + 16;
          v39 = 0;
          do
          {
            if ( _bittest((const int *)&v23, v22) )
            {
              v26 = 0;
              if ( *v24 )
              {
                v27 = v35;
                do
                {
                  RtlInitUnicodeString(&DestinationString, &v21[*(unsigned int *)(v12 + 24) + 2]);
                  ObjectAttributes.RootDirectory = *(HANDLE *)(v12 + 64);
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = &DestinationString;
                  ObjectAttributes.Attributes = 576;
                  v32 = 0uLL;
                  v33 = 0LL;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  PfpPrefetchEntireDirectory(a1 + 1, v12 + 32, v27, &v32, &ObjectAttributes);
                  if ( (_QWORD)v32 && *((_DWORD *)a1 + 58) < *((_DWORD *)a1 + 59) )
                  {
                    v28 = v33;
                    v29 = 3LL * *((unsigned int *)a1 + 58);
                    v30 = a1[28];
                    *(_OWORD *)(v30 + 8 * v29) = v32;
                    *(_QWORD *)(v30 + 8 * v29 + 16) = v28;
                    ++*((_DWORD *)a1 + 58);
                  }
                  ++v26;
                  v21 += *v21 + 2;
                }
                while ( v26 < *v24 );
                v22 = v39;
                v23 = v40;
              }
            }
            ++v22;
            ++v24;
            v39 = v22;
          }
          while ( v22 < 7 );
          v3 = v37;
          v5 = 0;
          v8 = v34;
          *(_QWORD *)(v12 + 96) = v21;
          v6 = v40;
        }
        v9 = (unsigned int)(i + 1);
      }
      v7 = 0;
    }
    if ( EventHandle )
      NtClose(EventHandle);
  }
  else
  {
    v7 = -1073741811;
  }
  PfSnLogPrefetchMetadata(v3, v6, 0LL);
  return (unsigned int)v7;
}
