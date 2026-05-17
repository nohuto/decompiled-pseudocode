/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x180052A30
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x180052564 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180052590 (RtlpAtomMapAtomToHandleEntry.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x18008E850 (_snwprintf_s.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(__int64 a1, char *a2, _DWORD *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  unsigned __int16 v8; // bx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  unsigned int v14; // esi
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  unsigned int v17; // eax
  wchar_t Buffer[16]; // [rsp+40h] [rbp-68h] BYREF

  v8 = (unsigned __int16)a2;
  if ( RtlpLockAtomTable(a1, a2, (__int64)a3, (__int64)a4) )
  {
    if ( v8 < 0xC000u )
    {
      if ( !v8 )
      {
        v10 = -1073741811;
        goto LABEL_31;
      }
      v10 = 0;
      if ( a3 )
        *a3 = 1;
      if ( a4 )
        *a4 = 1;
      if ( !a5 )
        goto LABEL_31;
      v14 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
      v17 = *a6;
      if ( v14 >= *a6 )
      {
        v14 = v17 - 2;
        if ( v17 < 2 )
          v14 = 0;
      }
      if ( v14 )
      {
        memmove(a5, Buffer, v14);
        v16 = (unsigned __int64)v14 >> 1;
        goto LABEL_14;
      }
    }
    else
    {
      v10 = -1073741816;
      v11 = RtlpAtomMapAtomToHandleEntry(a1, v8 & 0x3FFF);
      v12 = v11;
      if ( !v11 )
        goto LABEL_31;
      if ( *(_WORD *)(v11 + 10) != v8 )
        goto LABEL_31;
      v13 = (unsigned __int16 *)(v11 + 12);
      if ( !v13 )
        goto LABEL_31;
      v10 = 0;
      if ( a3 )
        *a3 = *v13;
      if ( a4 )
        *a4 = *(unsigned __int16 *)(v12 + 14);
      if ( !a5 )
        goto LABEL_31;
      v14 = 2 * *(unsigned __int8 *)(v12 + 16);
      v15 = *a6;
      if ( v14 >= *a6 )
      {
        if ( v15 < 2 )
        {
          *a6 = v14;
          v14 = 0;
        }
        else
        {
          v14 = v15 - 2;
        }
      }
      if ( v14 )
      {
        memmove(a5, (const void *)(v12 + 18), v14);
        v16 = (unsigned __int64)v14 >> 1;
LABEL_14:
        *((_WORD *)a5 + v16) = 0;
        *a6 = v14;
LABEL_31:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
        return v10;
      }
    }
    v10 = -1073741789;
    goto LABEL_31;
  }
  return 3221225485LL;
}
