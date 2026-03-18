/*
 * XREFs of TrimBGRMapCache @ 0x14030556C
 * Callers:
 *     AddBGRMapCache @ 0x14030435C (AddBGRMapCache.c)
 *     FindBGRMapCache @ 0x140305094 (FindBGRMapCache.c)
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall TrimBGRMapCache(int a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  int v4; // r14d
  unsigned __int64 v5; // rdi
  _OWORD *v6; // rbp
  int v7; // ecx

  v2 = 0;
  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 112);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 24));
  v4 = *(_DWORD *)(v3 + 56);
  if ( v4 > 5 && *(_DWORD *)(v3 + 64) )
  {
    v5 = *(_QWORD *)(v3 + 48);
    v2 = *(_DWORD *)(v3 + 56);
    v6 = (_OWORD *)v5;
    do
    {
      --v4;
      if ( *(int *)(v3 + 56) <= 5 )
        break;
      if ( *(_DWORD *)(v5 + 8) )
      {
        if ( v6 != (_OWORD *)v5 )
          *v6 = *(_OWORD *)v5;
        ++v6;
      }
      else
      {
        EngFreeMem(*(PVOID *)v5);
        --*(_DWORD *)(v3 + 56);
        --*(_DWORD *)(v3 + 64);
      }
      v5 += 16LL;
    }
    while ( v4 );
    if ( v2 != *(_DWORD *)(v3 + 56) )
    {
      if ( v5 > (unsigned __int64)v6 )
      {
        v7 = *(_DWORD *)(v3 + 48) + 16 * v2 - v5;
        if ( v7 > 0 )
          memmove(v6, (const void *)v5, v7);
      }
      v2 -= *(_DWORD *)(v3 + 56);
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(v3 + 24));
  return v2;
}
