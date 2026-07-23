/*
 * XREFs of PiLookupInDDBCache @ 0x140515C98
 * Callers:
 *     PpCheckInDriverDatabase @ 0x140515BB0 (PpCheckInDriverDatabase.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     RtlLookupElementGenericTableAvl @ 0x1400C19B0 (RtlLookupElementGenericTableAvl.c)
 *     RtlIsGenericTableEmptyAvl @ 0x1400C1CE0 (RtlIsGenericTableEmptyAvl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcsrchr @ 0x14014F694 (wcsrchr.c)
 */

__int64 __fastcall PiLookupInDDBCache(__int64 a1, void *a2, __int64 a3, _OWORD *a4)
{
  unsigned int v7; // ebx
  PIMAGE_NT_HEADERS v8; // rsi
  wchar_t *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // rax
  _QWORD *v14; // rdx
  PVOID *v15; // rcx
  char **v16; // rcx
  char Buffer[16]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v18; // [rsp+30h] [rbp-58h]
  __int16 v19; // [rsp+32h] [rbp-56h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  unsigned int TimeDateStamp; // [rsp+40h] [rbp-48h]

  PiDDBCacheTable.TableContext = 0LL;
  v7 = -1073741823;
  if ( !RtlIsGenericTableEmptyAvl(&PiDDBCacheTable) )
  {
    v8 = RtlImageNtHeader(a2);
    if ( v8 )
    {
      v9 = wcsrchr(*(const wchar_t **)(a1 + 8), 0x5Cu);
      v10 = v9 ? (__int64)(v9 + 1) : *(_QWORD *)(a1 + 8);
      v20 = v10;
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(v10 + 2 * v11) );
      v18 = 2 * v11;
      v19 = 2 * v11;
      TimeDateStamp = v8->FileHeader.TimeDateStamp;
      v12 = (char *)RtlLookupElementGenericTableAvl(&PiDDBCacheTable, Buffer);
      if ( v12 )
      {
        v14 = *(_QWORD **)v12;
        v15 = (PVOID *)*((_QWORD *)v12 + 1);
        if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 || *v15 != v12 )
          __fastfail(3u);
        *v15 = v14;
        v14[1] = v15;
        v16 = (char **)qword_140748148;
        if ( *(PVOID **)qword_140748148 != &PiDDBCacheList )
          __fastfail(3u);
        *(_QWORD *)v12 = &PiDDBCacheList;
        *((_QWORD *)v12 + 1) = v16;
        *v16 = v12;
        qword_140748148 = (__int64)v12;
        v7 = *((_DWORD *)v12 + 9);
        if ( a4 )
          *a4 = *(_OWORD *)(v12 + 40);
      }
    }
  }
  return v7;
}
