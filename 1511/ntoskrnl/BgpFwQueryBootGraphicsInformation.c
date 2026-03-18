/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x14011E928
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x14011BF60 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14011E344 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  PVOID v6; // rbp
  size_t v7; // r14
  void *Memory; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v10; // r15
  void *v11; // rcx
  unsigned int v12; // eax

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
      *(_OWORD *)a2 = xmmword_1402D4C60;
      *(_OWORD *)(a2 + 16) = xmmword_1402D4C70;
      *(_OWORD *)(a2 + 32) = xmmword_1402D4C80;
      *(_OWORD *)(a2 + 48) = xmmword_1402D4C90;
      *(_OWORD *)(a2 + 64) = xmmword_1402D4CA0;
      *(_OWORD *)(a2 + 80) = xmmword_1402D4CB0;
      *(_OWORD *)(a2 + 96) = xmmword_1402D4CC0;
      *(_OWORD *)(a2 + 112) = xmmword_1402D4CD0;
    }
    else
    {
      v6 = qword_1402D4C00;
      if ( qword_1402D4BF8 || qword_1402D4C00 )
      {
        v7 = (unsigned int)Size;
        if ( !qword_1402D4C00 )
        {
          Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
          v3 = (__int64)Memory;
          if ( !Memory )
            return (unsigned int)-1073741801;
          v6 = Memory;
          memmove(Memory, qword_1402D4BF8, v7);
        }
        if ( (int)v7 + 8 < (unsigned int)v7 )
        {
          v2 = -1073741675;
        }
        else
        {
          BgpFwReleaseLock();
          PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v7 + 8), 0x4B494742u);
          v10 = PoolWithTag;
          if ( PoolWithTag )
          {
            v11 = PoolWithTag + 2;
            v12 = ((unsigned int)dword_1402D4BB0 >> 23) & 1;
            v10[1] = 8;
            *v10 = v12;
            memmove(v11, v6, v7);
            BgpFwAcquireLock();
            *(_QWORD *)a2 = v10;
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
    *(_OWORD *)a2 = xmmword_1402D4B90;
    *(_OWORD *)(a2 + 16) = xmmword_1402D4BA0;
    *(_DWORD *)(a2 + 20) = 0;
    if ( (dword_1402D4BB0 & 2) != 0 )
      *(_DWORD *)(a2 + 20) = 1;
  }
  return v2;
}
