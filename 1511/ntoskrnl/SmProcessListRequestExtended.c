/*
 * XREFs of SmProcessListRequestExtended @ 0x1406576D0
 * Callers:
 *     SmProcessListRequest @ 0x1406574E4 (SmProcessListRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     SmKmFileInfoGetPath @ 0x14065A420 (SmKmFileInfoGetPath.c)
 */

__int64 __fastcall SmProcessListRequestExtended(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned __int64 v9; // rbp
  int Path; // ebp

  v4.Count = 0LL;
  v5 = 0;
  if ( *(_BYTE *)(a2 + 1) )
  {
    v6 = 1;
    while ( 1 )
    {
      v7 = *(_DWORD *)(a2 + 4 + 4LL * v5);
      v8 = (struct _EX_RUNDOWN_REF *)(a1 + 176LL * (v7 & 0x1F));
      if ( !ExAcquireRundownProtection(v8 + 1) )
        goto LABEL_7;
      if ( (v8[3].Count & 0x7FF) != v7 >> 5 )
        break;
      v4.Count = v8->Count;
LABEL_8:
      if ( v4.Count )
      {
        v9 = (unsigned __int64)v5 << 7;
        if ( *(_BYTE *)(v4.Count + 4484) == 1 )
        {
          Path = SmKmFileInfoGetPath(v4.Count + 4680, v9 + a2 + 132, 128LL);
          if ( Path < 0 )
            goto LABEL_17;
        }
        else
        {
          *(_WORD *)(a2 + v9 + 132) = 0;
        }
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (*(_DWORD *)(v4.Count + 4480) & 0x1F) + a1 + 8));
        v4.Count = 0LL;
      }
      else
      {
        memmove(
          (void *)(a2 + 4 + 4LL * v5),
          (const void *)(a2 + 4 * (v6 + 1LL)),
          4 * (*(unsigned __int8 *)(a2 + 1) - v5) - 4);
        --v5;
        --v6;
        --*(_BYTE *)(a2 + 1);
      }
      ++v5;
      ++v6;
      if ( v5 >= *(unsigned __int8 *)(a2 + 1) )
        goto LABEL_16;
    }
    ExReleaseRundownProtection_0(v8 + 1);
LABEL_7:
    v4.Count = 0LL;
    goto LABEL_8;
  }
LABEL_16:
  Path = 0;
LABEL_17:
  if ( v4.Count )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (*(_DWORD *)(v4.Count + 4480) & 0x1F) + a1 + 8));
  return (unsigned int)Path;
}
