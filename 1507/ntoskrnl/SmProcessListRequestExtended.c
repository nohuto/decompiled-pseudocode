/*
 * XREFs of SmProcessListRequestExtended @ 0x1406D99A4
 * Callers:
 *     SmProcessListRequest @ 0x1406D97B8 (SmProcessListRequest.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     SmKmFileInfoGetPath @ 0x1406DCB64 (SmKmFileInfoGetPath.c)
 */

__int64 __fastcall SmProcessListRequestExtended(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // r12
  struct _EX_RUNDOWN_REF *v9; // rbx
  unsigned __int64 v10; // rtt
  unsigned __int64 v11; // rtt
  unsigned __int64 v12; // rbp
  int Path; // ebp
  struct _EX_RUNDOWN_REF *v14; // rcx
  unsigned __int64 v15; // rtt
  struct _EX_RUNDOWN_REF *v16; // rcx
  unsigned __int64 v17; // rtt

  v4 = 0LL;
  v5 = 0;
  if ( *(_BYTE *)(a2 + 1) )
  {
    v6 = 1;
    while ( 1 )
    {
      v7 = *(_DWORD *)(a2 + 4 + 4LL * v5);
      v8 = 176LL * (v7 & 0x1F);
      v9 = (struct _EX_RUNDOWN_REF *)(v8 + a1);
      _m_prefetchw((const void *)(v8 + a1 + 8));
      v10 = *(_QWORD *)(v8 + a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + a1 + 8), v10 + 2, v10)
        && !ExfAcquireRundownProtection(v9 + 1) )
      {
        goto LABEL_9;
      }
      if ( (*(_WORD *)(v8 + a1 + 24) & 0x7FF) != v7 >> 5 )
        break;
      v4 = *(_QWORD *)(v8 + a1);
LABEL_10:
      if ( v4 )
      {
        v12 = (unsigned __int64)v5 << 7;
        if ( *(_BYTE *)(v4 + 4484) == 1 )
        {
          Path = SmKmFileInfoGetPath(v4 + 4680, v12 + a2 + 132, 128LL);
          if ( Path < 0 )
            goto LABEL_21;
        }
        else
        {
          *(_WORD *)(a2 + v12 + 132) = 0;
        }
        v14 = (struct _EX_RUNDOWN_REF *)(176LL * (*(_DWORD *)(v4 + 4480) & 0x1F) + a1 + 8);
        _m_prefetchw(v14);
        v15 = v14->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v15 != _InterlockedCompareExchange64((volatile signed __int64 *)v14, v15 - 2, v15) )
          ExfReleaseRundownProtection(v14);
        v4 = 0LL;
      }
      else
      {
        memmove(
          (void *)(a2 + 4 + 4LL * v5),
          (const void *)(a2 + 4 * (v6 + 1LL)),
          4 * (*(unsigned __int8 *)(a2 + 1) - v5) - 4);
        --*(_BYTE *)(a2 + 1);
        --v5;
        --v6;
      }
      ++v5;
      ++v6;
      if ( v5 >= *(unsigned __int8 *)(a2 + 1) )
        goto LABEL_20;
    }
    _m_prefetchw(&v9[1]);
    v11 = v9[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&v9[1], v11 - 2, v11) )
      ExfReleaseRundownProtection(v9 + 1);
LABEL_9:
    v4 = 0LL;
    goto LABEL_10;
  }
LABEL_20:
  Path = 0;
LABEL_21:
  if ( v4 )
  {
    v16 = (struct _EX_RUNDOWN_REF *)(176LL * (*(_DWORD *)(v4 + 4480) & 0x1F) + a1 + 8);
    _m_prefetchw(v16);
    v17 = v16->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v16, v17 - 2, v17) )
      ExfReleaseRundownProtection(v16);
  }
  return (unsigned int)Path;
}
