/*
 * XREFs of StorCreateSystemLogEntry @ 0x1C00304A8
 * Callers:
 *     StorpLogSystemEvent @ 0x1C0029A10 (StorpLogSystemEvent.c)
 * Callees:
 *     memmove @ 0x1C0012FC0 (memmove.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RaidScsiErrorToIoError @ 0x1C003027C (RaidScsiErrorToIoError.c)
 *     RtlStringCchCopyW @ 0x1C00302BC (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1C0030334 (RtlStringCchLengthW.c)
 */

__int64 __fastcall StorCreateSystemLogEntry(PVOID IoObject, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v7; // r15d
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  unsigned int v12; // r11d
  __int64 v13; // rax
  int v14; // r11d
  _WORD *ErrorLogEntry; // rax
  _WORD *v16; // rsi
  size_t v18; // rdx
  int v19; // eax
  unsigned int v20; // eax
  wchar_t *v21; // r14
  unsigned int i; // ebp
  const wchar_t *v23; // r11
  size_t v24; // rbx
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF
  __int64 v26; // [rsp+78h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 40);
  if ( v3 <= 0xF0 )
  {
    v7 = *(_DWORD *)(a2 + 56);
    v8 = v3 + 32;
    v9 = 0;
    v10 = (v8 + 3) & 0xFFFFFFFC;
    v11 = v10 - v8;
    v12 = v10 + 40;
    if ( v7 )
    {
      v13 = *(_QWORD *)(a2 + 64);
      v26 = v13;
      while ( RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(v13 + 8LL * v9), 0xF0uLL, &pcchLength) >= 0 )
      {
        v12 = v14 + 2 * pcchLength + 2;
        if ( v12 > 0xF0 )
          break;
        v13 = v26;
        if ( ++v9 >= v7 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      if ( v12 <= 0xF0 && v12 - 72 <= 0x96 )
      {
        ErrorLogEntry = IoAllocateErrorLogEntry(IoObject, v12);
        v16 = ErrorLogEntry;
        if ( !ErrorLogEntry )
          return 3238002691LL;
        memset(ErrorLogEntry, 0, 0x28uLL);
        *(_BYTE *)v16 = 15;
        v16[1] = v10;
        v16[2] = *(_WORD *)(a2 + 56);
        v16[3] = *(_DWORD *)(a2 + 56) != 0 ? v10 + 40 : 0;
        if ( *(_BYTE *)(a2 + 28) )
          v19 = RaidScsiErrorToIoError(*(_DWORD *)(a2 + 32));
        else
          v19 = *(_DWORD *)(a2 + 32);
        *((_DWORD *)v16 + 3) = v19;
        *((_DWORD *)v16 + 4) = *(_DWORD *)(a2 + 36);
        *((_DWORD *)v16 + 5) = 0;
        v16[20] = 1;
        v16[22] = 32;
        v16[23] = *(_WORD *)(a2 + 40);
        *((_DWORD *)v16 + 12) = *((_DWORD *)v16 + 3);
        *((_DWORD *)v16 + 13) = *(_DWORD *)(a2 + 36);
        *((_DWORD *)v16 + 14) = *(unsigned __int16 *)(a2 + 16);
        *((_DWORD *)v16 + 15) = *(unsigned __int16 *)(a2 + 20);
        *((_DWORD *)v16 + 16) = *(unsigned __int16 *)(a2 + 24);
        *((_BYTE *)v16 + 68) = *(_BYTE *)(a2 + 12);
        *(_WORD *)((char *)v16 + 69) = 0;
        *((_BYTE *)v16 + 71) = 0;
        v20 = *(_DWORD *)(a2 + 40);
        if ( v20 )
        {
          memmove(v16 + 36, *(const void **)(a2 + 48), v20);
          if ( v11 )
            memset((char *)v16 + *(unsigned int *)(a2 + 40) + 72, 45, v11);
        }
        v21 = (_WORD *)((char *)v16 + v10 + 40);
        for ( i = 0; i < *(_DWORD *)(a2 + 56); ++i )
        {
          if ( RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a2 + 64) + 8LL * i), v18, &pcchLength) < 0 )
          {
            *v21++ = 0;
          }
          else
          {
            v24 = pcchLength;
            RtlStringCchCopyW(v21, pcchLength + 1, v23);
            v21 += v24 + 1;
          }
        }
        IoWriteErrorLogEntry(v16);
        return 0LL;
      }
    }
  }
  if ( a3 )
    *a3 = 150;
  return 3238002698LL;
}
