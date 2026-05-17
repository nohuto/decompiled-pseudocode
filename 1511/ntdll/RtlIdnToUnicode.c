/*
 * XREFs of RtlIdnToUnicode @ 0x18006A2A0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180069350 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIsNormalizedString @ 0x1800026D0 (RtlIsNormalizedString.c)
 *     RtlStringCchLengthW @ 0x18001C914 (RtlStringCchLengthW.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     punycode_decode @ 0x18006A464 (punycode_decode.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800959E0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlIdnToUnicode(int a1, wchar_t *a2, int a3, void *a4, int *a5)
{
  int v6; // r10d
  wchar_t *v7; // r11
  char v8; // r12
  char v9; // di
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  unsigned __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r8
  int v19; // ebx
  unsigned __int64 Heap; // rdi
  __int64 i; // rcx
  __int16 v22; // dx
  __int64 j; // rax
  char v24; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v25[15]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v26; // [rsp+50h] [rbp-B0h] BYREF
  _WORD Src[512]; // [rsp+60h] [rbp-A0h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = 0;
  if ( !a2 || !a5 || *a5 < 0 || a3 < -1 || *a5 > 0 && !a4 || (a1 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  if ( a3 == -1 )
  {
    if ( (int)RtlStringCchLengthW(a2, 0x203uLL, &v26) < 0 )
      return 3221227286LL;
    v6 = v26 + 1;
  }
  if ( !v7[v6 - 1] )
    v9 = 1;
  *(_DWORD *)&v25[3] = 511;
  result = punycode_decode(v7, (v8 & 4) != 0, (v8 & 2) != 0, (__int64)v25, (__int64)&v25[7]);
  if ( (int)result < 0 )
    return result;
  if ( v9 )
  {
    if ( (unsigned __int64)*(int *)&v25[3] >= 0x1FF )
      return 3221227286LL;
    v15 = *(_DWORD *)&v25[3] + 1;
    v16 = *(int *)&v25[3];
    ++*(_DWORD *)&v25[3];
    if ( v16 >= 511 )
      _report_rangecheckfailure(v12, v11, v13, v14);
    Src[v16] = 0;
  }
  else
  {
    v15 = *(_DWORD *)&v25[3];
  }
  if ( (v8 & 8) == 0 && !v25[0] )
  {
    v17 = *(_QWORD *)&v25[7];
    if ( (v8 & 4) != 0
      && ((int)RtlIsNormalizedString(1LL, (__int64)Src, (__int64)(*(_QWORD *)&v25[7] - (_QWORD)Src) >> 1, (__int64)&v24) < 0
       || !v24) )
    {
      return 3221227286LL;
    }
    v18 = (v17 - (__int64)Src) >> 1;
    if ( v18 < v15 - (v9 != 0) )
    {
      v19 = v15 - ((v9 != 0) + 1) - v18;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v19);
      if ( !Heap )
        return 3221225495LL;
      for ( i = 0LL; i < v19; ++i )
      {
        v22 = *(_WORD *)(v17 + 2 * i + 2);
        if ( (unsigned __int16)(v22 - 65) <= 0x19u )
        {
          *(_WORD *)(v17 + 2 * i + 2) = v22 + 32;
          *(_BYTE *)(i + Heap) = 1;
        }
      }
      if ( (int)RtlIsNormalizedString((((v8 & 1) == 0) << 8) | 0xDu, v17 + 2, v19, (__int64)&v24) >= 0 && v24 )
      {
        for ( j = 0LL; j < v19; ++j )
        {
          if ( *(_BYTE *)(j + Heap) == 1 )
            *(_WORD *)(v17 + 2 * j + 2) -= 32;
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        v15 = *(_DWORD *)&v25[3];
        goto LABEL_19;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return 3221227286LL;
    }
  }
LABEL_19:
  if ( a4 && *a5 )
  {
    if ( v15 > *a5 )
      return 3221225507LL;
    memmove(a4, Src, 2LL * v15);
  }
  *a5 = v15;
  return 0LL;
}
