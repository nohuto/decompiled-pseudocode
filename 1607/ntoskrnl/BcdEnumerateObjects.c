/*
 * XREFs of BcdEnumerateObjects @ 0x1406D21C0
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1406940D0 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x14012E5FC (BiIsOfflineHandle.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1404DE2FC (RtlGUIDFromString.c)
 *     BiEnumerateSubKeys @ 0x14053C7E0 (BiEnumerateSubKeys.c)
 *     BiGetObjectDescription @ 0x14053DD94 (BiGetObjectDescription.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E6E4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E708 (BiAcquireBcdSyncMutant.c)
 *     BiIsEnumerateMatch @ 0x1406D26A4 (BiIsEnumerateMatch.c)
 */

NTSTATUS __cdecl BcdEnumerateObjects(
        HANDLE BcdStoreHandle,
        PBCD_OBJECT_DESCRIPTION BcdEnumDescriptor,
        PVOID Buffer,
        PULONG BufferSize,
        PULONG ObjectCount)
{
  PCWSTR *v5; // rdi
  PULONG v6; // r12
  char *v7; // r14
  PULONG v9; // rsi
  char v10; // r15
  NTSTATUS result; // eax
  NTSTATUS v12; // ebx
  int v13; // eax
  __int64 v14; // r15
  __int64 v15; // r12
  const WCHAR **v16; // rsi
  int ObjectDescription; // ebx
  unsigned __int64 v18; // rdx
  ULONG v19; // ecx
  ULONG v20; // r14d
  ULONG v21; // esi
  ULONG i; // r12d
  int v23; // ebx
  GUID *v24; // rbx
  _QWORD *v25; // r8
  PCWSTR *v26; // rax
  ULONG v27; // [rsp+20h] [rbp-50h] BYREF
  PCWSTR *v28; // [rsp+28h] [rbp-48h] BYREF
  HANDLE v29; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  ULONG v31; // [rsp+40h] [rbp-30h]
  ULONG v32; // [rsp+44h] [rbp-2Ch]
  GUID *Guid; // [rsp+48h] [rbp-28h]
  char *v34; // [rsp+50h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  char IsOfflineHandle; // [rsp+C0h] [rbp+50h]

  v5 = 0LL;
  Guid = (GUID *)Buffer;
  v6 = BufferSize;
  v7 = (char *)Buffer;
  if ( !Buffer && *BufferSize )
    return -1073741811;
  v9 = ObjectCount;
  if ( !ObjectCount || !BcdEnumDescriptor->Version )
    return -1073741811;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  v10 = IsOfflineHandle;
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    v29 = 0LL;
    v28 = 0LL;
    v12 = BiOpenKey(BcdStoreHandle, L"Objects", 0x20019u, &v29);
    if ( v12 >= 0 )
    {
      v13 = BiEnumerateSubKeys(v29, &v28, &v27);
      v5 = v28;
      v12 = v13;
      if ( v13 >= 0 )
      {
        v14 = 0LL;
        if ( v27 )
        {
          v15 = v27;
          v16 = v28;
          do
          {
            if ( (int)BiOpenKey(v29, *v16, 0x20019u, &Handle) >= 0 )
            {
              ObjectDescription = BiGetObjectDescription((__int64)Handle, &v28);
              BiCloseKey(Handle);
              if ( ObjectDescription >= 0 )
              {
                if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v28)) )
                  v14 = (unsigned int)(v14 + 1);
              }
            }
            ++v16;
            --v15;
          }
          while ( v15 );
          v6 = BufferSize;
          v7 = (char *)Guid;
          v9 = ObjectCount;
        }
        if ( (unsigned __int64)(24 * v14) > 0xFFFFFFFF
          || (v18 = 8LL * (unsigned int)v14, v19 = (24 * v14 + 7) & 0xFFFFFFF8, v34 = &v7[v19], v18 > 0xFFFFFFFF)
          || (v20 = v19 + ((v18 + 7) & 0xFFFFFFF8), v32 = v20, v20 < v19) )
        {
          v12 = -1073741675;
        }
        else if ( v20 <= *v6 )
        {
          v31 = 0;
          v21 = 0;
          if ( v27 )
          {
            for ( i = v31; i < v27; ++i )
            {
              if ( v21 >= (unsigned int)v14 )
                break;
              if ( (int)BiOpenKey(v29, v5[i], 0x20019u, &Handle) >= 0 )
              {
                v23 = BiGetObjectDescription((__int64)Handle, &v28);
                BiCloseKey(Handle);
                if ( v23 >= 0 )
                {
                  if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v28)) )
                  {
                    RtlInitUnicodeString(&DestinationString, v5[i]);
                    v24 = Guid;
                    if ( RtlGUIDFromString(&DestinationString, Guid) >= 0 )
                    {
                      v25 = v34;
                      v26 = v28;
                      *(_QWORD *)&v24[1].Data1 = v34;
                      Guid = (GUID *)((char *)v24 + 24);
                      *v25 = v26;
                      v34 = (char *)(v25 + 1);
                      ++v21;
                    }
                  }
                }
              }
            }
            v20 = v32;
            v6 = BufferSize;
          }
          v12 = 0;
          *v6 = v20;
          *ObjectCount = v21;
        }
        else
        {
          v12 = -1073741789;
          *v6 = v20;
          *v9 = v14;
        }
        v10 = IsOfflineHandle;
      }
    }
    if ( v29 )
      BiCloseKey(v29);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4B444342u);
    BiReleaseBcdSyncMutant(v10);
    return v12;
  }
  return result;
}
