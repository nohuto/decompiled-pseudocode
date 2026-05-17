/*
 * XREFs of BaseGetNamedObjectDirectory @ 0x180102F14
 * Callers:
 *     BaseFormatObjectAttributes @ 0x180102E7C (BaseFormatObjectAttributes.c)
 *     _ResOpenFileMapping @ 0x180104C74 (_ResOpenFileMapping.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenThreadToken @ 0x1800A68A0 (NtOpenThreadToken.c)
 *     ZwOpenDirectoryObject @ 0x1800A6F20 (ZwOpenDirectoryObject.c)
 */

__int64 __fastcall BaseGetNamedObjectDirectory(_QWORD *a1)
{
  __m128i *v2; // rbx
  __int64 result; // rax
  int v4; // edi
  __m128i v5; // xmm0
  int v6; // ebx
  __int64 v7; // [rsp+28h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+30h] [rbp-40h]
  int v9; // [rsp+38h] [rbp-38h]
  HANDLE v10; // [rsp+40h] [rbp-30h]
  __int64 *v11; // [rsp+48h] [rbp-28h]
  int v12; // [rsp+50h] [rbp-20h]
  __int128 v13; // [rsp+58h] [rbp-18h]
  HANDLE Handle; // [rsp+A8h] [rbp+38h]
  HANDLE v15; // [rsp+B0h] [rbp+40h]
  __int64 v16; // [rsp+B8h] [rbp+48h]

  v2 = (__m128i *)((char *)NtCurrentPeb()->ReadOnlySharedMemoryBase
                 + *((_QWORD *)NtCurrentPeb()->ReadOnlyStaticServerData + 1)
                 - NtCurrentPeb()->CsrServerReadOnlySharedMemoryBase);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    result = NtOpenThreadToken();
    if ( (int)result < 0 )
      return result;
    v4 = NtSetInformationThread();
    if ( v4 < 0 )
    {
      NtClose(Handle);
      return (unsigned int)v4;
    }
  }
  else
  {
    Handle = 0LL;
  }
  v10 = 0LL;
  v9 = 48;
  v12 = 64;
  v5 = v2[2];
  v7 = v2[2].m128i_i64[0];
  v8 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( v8 )
    v8 += (unsigned __int64)NtCurrentPeb()->ReadOnlySharedMemoryBase
        + *((_QWORD *)NtCurrentPeb()->ReadOnlyStaticServerData + 1)
        - *(_QWORD *)((char *)NtCurrentPeb()->ReadOnlySharedMemoryBase
                    + *((_QWORD *)NtCurrentPeb()->ReadOnlyStaticServerData + 1)
                    - NtCurrentPeb()->CsrServerReadOnlySharedMemoryBase
                    + 2896)
        - NtCurrentPeb()->CsrServerReadOnlySharedMemoryBase;
  else
    v8 = 0LL;
  v11 = &v7;
  v13 = 0LL;
  v6 = ZwOpenDirectoryObject();
  if ( v6 < 0 )
  {
    v6 = ZwOpenDirectoryObject();
    if ( v6 >= 0 )
    {
      v10 = v15;
      v9 = 48;
      v11 = (__int64 *)&unk_180109590;
      v12 = 64;
      v13 = 0LL;
      v6 = ZwOpenDirectoryObject();
      NtClose(v15);
    }
  }
  if ( Handle )
  {
    NtSetInformationThread();
    NtClose(Handle);
  }
  *a1 = v16;
  return (unsigned int)v6;
}
