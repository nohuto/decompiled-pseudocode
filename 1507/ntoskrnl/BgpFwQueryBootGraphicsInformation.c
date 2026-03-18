/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x140152BA8
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x1401501E4 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  PVOID v5; // rbp
  size_t v6; // r14
  void *Memory; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // r15
  void *v10; // rcx
  unsigned int v11; // eax

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      *(_DWORD *)a2 = 8;
      *(_DWORD *)a2 = Size + 8;
    }
    else if ( a1 == 3 )
    {
      *(_OWORD *)a2 = xmmword_140323DA0;
      *(_OWORD *)(a2 + 16) = xmmword_140323DB0;
      *(_OWORD *)(a2 + 32) = xmmword_140323DC0;
      *(_OWORD *)(a2 + 48) = xmmword_140323DD0;
      *(_OWORD *)(a2 + 64) = xmmword_140323DE0;
      *(_OWORD *)(a2 + 80) = xmmword_140323DF0;
      *(_OWORD *)(a2 + 96) = xmmword_140323E00;
      *(_OWORD *)(a2 + 112) = xmmword_140323E10;
    }
    else
    {
      v5 = qword_140323D40;
      if ( Src || qword_140323D40 )
      {
        v6 = (unsigned int)Size;
        if ( !qword_140323D40 )
        {
          Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
          v3 = (__int64)Memory;
          if ( !Memory )
            return (unsigned int)-1073741801;
          v5 = Memory;
          memmove(Memory, Src, v6);
        }
        if ( (int)v6 + 8 < (unsigned int)v6 )
        {
          v2 = -1073741675;
        }
        else
        {
          BgpFwReleaseLock();
          PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v6 + 8), 0x4B494742u);
          v9 = PoolWithTag;
          if ( PoolWithTag )
          {
            v10 = PoolWithTag + 2;
            v11 = ((unsigned int)dword_140323CF0 >> 23) & 1;
            v9[1] = 8;
            *v9 = v11;
            memmove(v10, v5, v6);
            BgpFwAcquireLock();
            *(_QWORD *)a2 = v9;
          }
          else
          {
            BgpFwAcquireLock();
            v2 = -1073741801;
          }
        }
        if ( v3 )
          BgpFwFreeMemory(v3);
      }
      else
      {
        *(_QWORD *)a2 = 0LL;
      }
    }
  }
  else
  {
    *(_OWORD *)a2 = xmmword_140323CD0;
    *(_OWORD *)(a2 + 16) = xmmword_140323CE0;
    *(_DWORD *)(a2 + 20) = 0;
    if ( (dword_140323CF0 & 2) != 0 )
      *(_DWORD *)(a2 + 20) = 1;
  }
  return v2;
}
