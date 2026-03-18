/*
 * XREFs of VfSuspectDriversParseRegistryString @ 0x140785700
 * Callers:
 *     VfInitBootDriversLoaded @ 0x14074AA04 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfDriverLock @ 0x1406B26C0 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x1406B8CD0 (VfDriverUnlock.c)
 *     VfSuspectDriversAllocateEntry @ 0x1406C74C8 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversInsert @ 0x1406C7744 (VfSuspectDriversInsert.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x1406C7CC4 (VfSuspectExcludedDriversAllocateEntry.c)
 */

int VfSuspectDriversParseRegistryString()
{
  __int64 *v0; // rcx
  BOOL v1; // ebp
  unsigned __int64 Entry; // rax
  __int64 *v3; // rsi
  __int64 v4; // r13
  unsigned __int16 v5; // dx
  __int64 *i; // rbx
  unsigned __int16 v7; // dx
  int v8; // edx
  __int64 *v9; // rdi
  __int64 *v10; // rdi
  __int64 **v11; // rax
  const void *v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v0 = MmVerifyDriverBuffer;
  v1 = (VfOptionFlags & 1) == 0;
  Entry = ((unsigned __int64)(unsigned int)MmVerifyDriverBufferLength - 2) >> 1;
  v3 = (__int64 *)((char *)MmVerifyDriverBuffer + 2 * Entry);
  if ( MmVerifyDriverBuffer < v3 )
  {
    v4 = 0x100002601LL;
    do
    {
      v5 = *(_WORD *)v0;
      if ( *(_WORD *)v0 <= 0x20u && (LODWORD(Entry) = v5, _bittest64(&v4, v5)) || v5 == 12288 )
      {
        v0 = (__int64 *)((char *)v0 + 2);
        continue;
      }
      if ( v5 == 42 && v1 )
      {
        ViVerifyAllDrivers = 1;
        return Entry;
      }
      if ( v5 == 34 )
      {
        v0 = (__int64 *)((char *)v0 + 2);
        i = (__int64 *)((char *)v0 + 2);
        if ( (__int64 *)((char *)v0 + 2) >= v3 )
          return Entry;
        do
        {
          if ( *(_WORD *)i == 34 )
            break;
          i = (__int64 *)((char *)i + 2);
        }
        while ( i < v3 );
        if ( i >= v3 )
          return Entry;
      }
      else
      {
        for ( i = (__int64 *)((char *)v0 + 2); i < v3; i = (__int64 *)((char *)i + 2) )
        {
          v7 = *(_WORD *)i;
          if ( *(_WORD *)i <= 0x20u )
          {
            LODWORD(Entry) = v7;
            if ( _bittest64(&v4, v7) )
              break;
          }
          if ( v7 == 12288 )
            break;
        }
      }
      v8 = 2 * (((char *)i - (char *)v0) >> 1);
      if ( v8 )
      {
        LODWORD(Entry) = v8 + 2;
        LOWORD(v13[0]) = 2 * (((char *)i - (char *)v0) >> 1);
        WORD1(v13[0]) = v8 + 2;
        if ( (unsigned __int16)(v8 + 2) < (unsigned __int16)v8 )
          return Entry;
        v13[1] = v0;
        if ( v1 )
        {
          Entry = (unsigned __int64)VfSuspectDriversAllocateEntry(v13);
          v9 = (__int64 *)Entry;
          if ( Entry )
          {
            VfDriverLock();
            VfSuspectDriversInsert(v9);
LABEL_28:
            LODWORD(Entry) = VfDriverUnlock();
          }
        }
        else
        {
          Entry = (unsigned __int64)VfSuspectExcludedDriversAllocateEntry((unsigned __int16 *)v13, 0x44456656u);
          v10 = (__int64 *)Entry;
          if ( Entry )
          {
            VfDriverLock();
            v11 = (__int64 **)qword_1402DB2D8;
            *v10 = (__int64)&VfExcludedDriversList;
            v10[1] = (__int64)v11;
            if ( *v11 != &VfExcludedDriversList )
              __fastfail(3u);
            *v11 = v10;
            qword_1402DB2D8 = (__int64)v10;
            goto LABEL_28;
          }
        }
      }
      v0 = (__int64 *)((char *)i + 2);
    }
    while ( v0 < v3 );
  }
  return Entry;
}
