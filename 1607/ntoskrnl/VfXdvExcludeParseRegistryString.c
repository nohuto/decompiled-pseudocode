/*
 * XREFs of VfXdvExcludeParseRegistryString @ 0x1407D1CA0
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1407A52D8 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfDriverLock @ 0x1406FE42C (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140704D8C (VfDriverUnlock.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x140716668 (VfSuspectExcludedDriversAllocateEntry.c)
 */

int VfXdvExcludeParseRegistryString()
{
  unsigned __int64 Entry; // rax
  __int64 *v1; // rcx
  __int64 *v2; // rdi
  __int64 v3; // r12
  unsigned __int16 v4; // dx
  __int64 *i; // rbx
  unsigned __int16 v6; // dx
  int v7; // edx
  _QWORD *v8; // rsi
  _QWORD *v9; // rax
  unsigned __int16 v11[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-20h]

  LODWORD(Entry) = VfXdvSuppressDriversBufferLength;
  if ( VfXdvSuppressDriversBufferLength == -1 )
  {
    VfXdvSuppressDriversBufferLength = 0;
  }
  else
  {
    v1 = VfXdvSuppressDriversBuffer;
    Entry = ((unsigned __int64)(unsigned int)VfXdvSuppressDriversBufferLength - 2) >> 1;
    v2 = (__int64 *)((char *)VfXdvSuppressDriversBuffer + 2 * Entry);
    if ( VfXdvSuppressDriversBuffer < v2 )
    {
      v3 = 0x100002601LL;
      do
      {
        v4 = *(_WORD *)v1;
        if ( *(_WORD *)v1 <= 0x20u && (LODWORD(Entry) = v4, _bittest64(&v3, v4)) || v4 == 12288 )
        {
          v1 = (__int64 *)((char *)v1 + 2);
        }
        else
        {
          if ( v4 == 34 )
          {
            v1 = (__int64 *)((char *)v1 + 2);
            i = (__int64 *)((char *)v1 + 2);
            if ( (__int64 *)((char *)v1 + 2) >= v2 )
              return Entry;
            do
            {
              if ( *(_WORD *)i == 34 )
                break;
              i = (__int64 *)((char *)i + 2);
            }
            while ( i < v2 );
            if ( i >= v2 )
              return Entry;
          }
          else
          {
            for ( i = (__int64 *)((char *)v1 + 2); i < v2; i = (__int64 *)((char *)i + 2) )
            {
              v6 = *(_WORD *)i;
              if ( *(_WORD *)i <= 0x20u )
              {
                LODWORD(Entry) = v6;
                if ( _bittest64(&v3, v6) )
                  break;
              }
              if ( v6 == 12288 )
                break;
            }
          }
          v7 = 2 * (((char *)i - (char *)v1) >> 1);
          if ( v7 )
          {
            LODWORD(Entry) = v7 + 2;
            v11[0] = 2 * (((char *)i - (char *)v1) >> 1);
            v11[1] = v7 + 2;
            if ( (unsigned __int16)(v7 + 2) < (unsigned __int16)v7 )
              return Entry;
            v12 = v1;
            Entry = (unsigned __int64)VfSuspectExcludedDriversAllocateEntry(v11, 0x45586656u);
            v8 = (_QWORD *)Entry;
            if ( Entry )
            {
              VfDriverLock();
              v9 = (_QWORD *)qword_140300638;
              if ( *(__int64 **)qword_140300638 != &VfXdvExcludedDriversList )
                __fastfail(3u);
              *v8 = &VfXdvExcludedDriversList;
              v8[1] = v9;
              *v9 = v8;
              qword_140300638 = (__int64)v8;
              LODWORD(Entry) = VfDriverUnlock();
            }
          }
          v1 = (__int64 *)((char *)i + 2);
        }
      }
      while ( v1 < v2 );
    }
  }
  return Entry;
}
