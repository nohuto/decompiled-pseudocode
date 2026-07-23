/*
 * XREFs of BcdEnumerateObjects @ 0x14070D344
 * Callers:
 *     SepSecureBootCorrectBcd @ 0x1406D68C4 (SepSecureBootCorrectBcd.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x14014FE60 (BiIsOfflineHandle.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14043D910 (RtlGUIDFromString.c)
 *     BiGetObjectDescription @ 0x14056D7EC (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x14056DFB8 (BiEnumerateSubKeys.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
 *     BiIsEnumerateMatch @ 0x14070D824 (BiIsEnumerateMatch.c)
 */

NTSTATUS __cdecl BcdEnumerateObjects(
        HANDLE BcdStoreHandle,
        PBCD_OBJECT_DESCRIPTION BcdEnumDescriptor,
        PVOID Buffer,
        PULONG BufferSize,
        PULONG ObjectCount)
{
  char **v5; // rdi
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
  char ***v25; // r8
  char **v26; // rax
  ULONG v27; // [rsp+20h] [rbp-50h] BYREF
  char **v28; // [rsp+28h] [rbp-48h] BYREF
  HANDLE v29; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  GUID *Guid; // [rsp+40h] [rbp-30h]
  ULONG v32; // [rsp+48h] [rbp-28h]
  ULONG v33; // [rsp+4Ch] [rbp-24h]
  char ***v34; // [rsp+50h] [rbp-20h]
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
          v16 = (const WCHAR **)v28;
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
          || (v18 = 8LL * (unsigned int)v14,
              v19 = (24 * v14 + 7) & 0xFFFFFFF8,
              v34 = (char ***)&v7[v19],
              v18 > 0xFFFFFFFF)
          || (v20 = v19 + ((v18 + 7) & 0xFFFFFFF8), v32 = v20, v20 < v19) )
        {
          v12 = -1073741675;
        }
        else if ( v20 <= *v6 )
        {
          v33 = 0;
          v21 = 0;
          if ( v27 )
          {
            for ( i = v33; i < v27; ++i )
            {
              if ( v21 >= (unsigned int)v14 )
                break;
              if ( (int)BiOpenKey(v29, (const WCHAR *)v5[i], 0x20019u, &Handle) >= 0 )
              {
                v23 = BiGetObjectDescription((__int64)Handle, &v28);
                BiCloseKey(Handle);
                if ( v23 >= 0 )
                {
                  if ( (unsigned __int8)BiIsEnumerateMatch(BcdEnumDescriptor->Type, HIDWORD(v28)) )
                  {
                    RtlInitUnicodeString(&DestinationString, (PCWSTR)v5[i]);
                    v24 = Guid;
                    if ( RtlGUIDFromString(&DestinationString, Guid) >= 0 )
                    {
                      v25 = v34;
                      v26 = v28;
                      *(_QWORD *)&v24[1].Data1 = v34;
                      Guid = (GUID *)((char *)v24 + 24);
                      *v25 = v26;
                      v34 = v25 + 1;
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
      ExFreePoolWithTag(v5, 0);
    BiReleaseBcdSyncMutant(v10);
    return v12;
  }
  return result;
}
