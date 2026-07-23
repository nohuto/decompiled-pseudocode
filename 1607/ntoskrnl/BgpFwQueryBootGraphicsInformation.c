/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x14012A060
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x1401276A4 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  int v5; // eax
  unsigned __int8 v6; // cl
  int v8; // ecx
  PVOID v9; // rbp
  size_t v10; // r14
  void *Memory; // rax
  unsigned int *PoolWithTag; // rax
  unsigned int *v13; // r12
  void *v14; // rcx
  unsigned int v15; // eax

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
      *(_OWORD *)a2 = xmmword_1402FA060;
      *(_OWORD *)(a2 + 16) = xmmword_1402FA070;
      *(_OWORD *)(a2 + 32) = xmmword_1402FA080;
      *(_OWORD *)(a2 + 48) = xmmword_1402FA090;
      *(_OWORD *)(a2 + 64) = xmmword_1402FA0A0;
      *(_OWORD *)(a2 + 80) = xmmword_1402FA0B0;
      *(_OWORD *)(a2 + 96) = xmmword_1402FA0C0;
      *(_OWORD *)(a2 + 112) = xmmword_1402FA0D0;
    }
    else
    {
      v9 = qword_1402F9FE0;
      if ( Src || qword_1402F9FE0 )
      {
        v10 = (unsigned int)Size;
        if ( !qword_1402F9FE0 )
        {
          Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
          v3 = (__int64)Memory;
          if ( !Memory )
            return (unsigned int)-1073741801;
          v9 = Memory;
          memmove(Memory, Src, v10);
        }
        if ( (int)v10 + 8 < (unsigned int)v10 )
        {
          v2 = -1073741675;
        }
        else
        {
          BgpFwReleaseLock();
          PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v10 + 8), 0x4B494742u);
          v13 = PoolWithTag;
          if ( PoolWithTag )
          {
            v14 = PoolWithTag + 2;
            v15 = ((unsigned int)dword_1402F9F90 >> 23) & 1;
            v13[1] = 8;
            *v13 = v15;
            memmove(v14, v9, v10);
            BgpFwAcquireLock();
            *(_QWORD *)a2 = v13;
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
    *(_OWORD *)a2 = xmmword_1402F9F70;
    *(_OWORD *)(a2 + 16) = xmmword_1402F9F80;
    *(_DWORD *)(a2 + 20) = 0;
    v5 = *(_DWORD *)(a2 + 20);
    if ( (dword_1402F9F90 & 2) != 0 )
      v5 = 1;
    *(_DWORD *)(a2 + 20) = v5;
    v6 = BYTE2(BgInternal);
    if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 )
    {
      v8 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v8;
      v6 = BYTE2(BgInternal);
    }
    *(_DWORD *)(a2 + 28) = v6;
  }
  return v2;
}
