/*
 * XREFs of BiLoadSystemStore @ 0x14056D274
 * Callers:
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BiGetSystemStorePath @ 0x14056D3D0 (BiGetSystemStorePath.c)
 *     BiAddStoreFromFile @ 0x14056D638 (BiAddStoreFromFile.c)
 *     BiMarkTreatAsSystemStore @ 0x14056D744 (BiMarkTreatAsSystemStore.c)
 *     BcdCloseStore @ 0x14056E464 (BcdCloseStore.c)
 *     BiIsSystemStore @ 0x14056F55C (BiIsSystemStore.c)
 */

__int64 __fastcall BiLoadSystemStore(_QWORD *a1)
{
  void *v2; // rsi
  int SystemStorePath; // eax
  void *v4; // rbp
  int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v9; // rdx
  void *v10; // rdi
  void *Src; // [rsp+48h] [rbp+10h] BYREF

  Src = 0LL;
  v2 = 0LL;
  SystemStorePath = BiGetSystemStorePath(&Src);
  v4 = Src;
  v5 = SystemStorePath;
  if ( SystemStorePath >= 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)Src + v6) );
    v7 = v6 + 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v7 + 12, 0x4B444342u);
    v2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 1;
      PoolWithTag[1] = 2 * v7 + 12;
      PoolWithTag[2] = 3;
      memmove(PoolWithTag + 3, v4, 2LL * v7);
      v5 = BiAddStoreFromFile(v2, v9, &Src);
      if ( v5 >= 0 )
      {
        v10 = Src;
        v5 = BiMarkTreatAsSystemStore(Src);
        if ( v5 < 0 )
        {
          BcdCloseStore(v10);
        }
        else if ( (unsigned __int8)BiIsSystemStore(v10) )
        {
          *a1 = v10;
        }
        else
        {
          BcdCloseStore(v10);
          v5 = -1073741672;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v5;
}
