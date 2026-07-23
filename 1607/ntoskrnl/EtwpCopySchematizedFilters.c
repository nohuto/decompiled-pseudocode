/*
 * XREFs of EtwpCopySchematizedFilters @ 0x1406A8E68
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140409D90 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     EtwpRegisterUMGuid @ 0x14040D4A0 (EtwpRegisterUMGuid.c)
 *     EtwpBuildNotificationPacket @ 0x1404928BC (EtwpBuildNotificationPacket.c)
 *     EtwpRegisterProvider @ 0x140492AB4 (EtwpRegisterProvider.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall EtwpCopySchematizedFilters(char *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax
  char *v4; // r9
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __int64 v11; // rbp
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = 0LL;
  v5 = (_DWORD *)(a2 + 112);
  v6 = 0;
  v8 = 0LL;
  do
  {
    if ( *v5 )
    {
      result = *(_QWORD *)(a2 + 368);
      v11 = *(_QWORD *)(result + v8 + 64);
      if ( v11 )
      {
        if ( ((unsigned __int8)(1 << v6) & a3) != 0 )
        {
          memmove(a1, *(const void **)(result + v8 + 64), *(unsigned int *)(v11 + 16));
          v4 = a1;
          result = (*(_DWORD *)(v11 + 16) + 7) & 0xFFFFFFF8;
          *((_DWORD *)a1 + 5) = result;
          a1 += result;
        }
      }
    }
    ++v6;
    v5 += 8;
    v8 += 80LL;
  }
  while ( v6 < 8 );
  if ( v4 )
    *((_DWORD *)v4 + 5) = 0;
  return result;
}
