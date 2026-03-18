/*
 * XREFs of MmChangeImageProtection @ 0x1403CF640
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseResourceLite @ 0x14001A338 (MiReleaseResourceLite.c)
 *     MiAcquireResourceExclusiveLite @ 0x14001A35C (MiAcquireResourceExclusiveLite.c)
 *     MiSetImageProtection @ 0x14001A37C (MiSetImageProtection.c)
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     MiSessionReferenceImage @ 0x14011FF1C (MiSessionReferenceImage.c)
 *     MmReleaseLoadLock @ 0x1403CF8C4 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1403CF8F0 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  __int64 Lock; // r14
  PVOID *v11; // rax
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // ecx
  _QWORD *v19; // r15
  _QWORD *v20; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rsi

  if ( (unsigned int)(a4 - 1) <= 1 && (*(_BYTE *)(a1 + 10) & 7) == 2 && !*(_DWORD *)(a1 + 44) )
  {
    v8 = *(_DWORD *)(a1 + 40);
    if ( (v8 & 0xFFF) == 0 )
    {
      v9 = v8 >> 12;
      Lock = MmAcquireLoadLock();
      --*(_WORD *)(Lock + 484);
      MiAcquireResourceExclusiveLite(Lock);
      v11 = MiLookupDataTableEntry(*(_QWORD *)(a1 + 32), 1);
      v12 = (ULONG_PTR)v11;
      if ( v11 )
      {
        v13 = (unsigned __int64)v11[6];
        v14 = a2 + a3;
        v15 = v13 + *((unsigned int *)v11 + 16);
        if ( *(_QWORD *)(a1 + 32) + (unsigned __int64)*(unsigned int *)(a1 + 40) > v15
          || a2 < v13
          || v14 > v15
          || v14 - 1 < a2 )
        {
          v17 = -1073741800;
        }
        else
        {
          v16 = *(_DWORD *)(v12 + 104);
          if ( (v16 & 0x80000) != 0 )
          {
            v17 = -1073741757;
          }
          else
          {
            v17 = 0;
            *(_DWORD *)(v12 + 104) = v16 | 0x80000;
            if ( v13 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
              MiSessionReferenceImage(v13);
            else
              ++*(_WORD *)(v12 + 108);
          }
        }
      }
      else
      {
        v17 = -1073741275;
      }
      MiReleaseResourceLite(Lock);
      MmReleaseLoadLock(Lock);
      if ( v17 < 0 )
        goto LABEL_22;
      if ( *(char *)MiGetPdeAddress(*(_QWORD *)(v12 + 48)) >= 0 )
      {
        v18 = 0;
        v19 = (_QWORD *)(a1 + 48);
        if ( !v9 )
        {
LABEL_19:
          MiSetImageProtection(v12, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
          if ( a4 == 1 )
          {
            v22 = *(_QWORD *)(v12 + 112);
            if ( v22
              && (v25 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v22) + 96) + 8LL), (v25 & 0xFFFFFFFFFFFFFFF8uLL) > 8) )
            {
              v23 = v25 & 0xFFFFFFFFFFFFFFF8uLL;
            }
            else
            {
              v23 = 0LL;
            }
            if ( qword_1402DBE50 )
            {
              v24 = qword_1402DBE50(v23, a1, a2, a3, a2 - *(_QWORD *)(v12 + 48));
              v17 = v24;
              if ( v24 >= 0 )
              {
                if ( (MiFlags & 0x10000) != 0 && v24 == 300 && v9 )
                {
                  v26 = v9;
                  do
                  {
                    MiMarkPfnVerified(48LL * *v19++ - 0x58000000000LL, 0);
                    --v26;
                  }
                  while ( v26 );
                }
                MiSetImageProtection(v12, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
                v17 = 0;
              }
            }
            else
            {
              v17 = -1073741822;
            }
          }
          else if ( (MiFlags & 0x10000) != 0 && v9 )
          {
            v27 = v9;
            do
            {
              MiClearPfnImageVerified(48LL * *v19++ - 0x58000000000LL, 0x18u);
              --v27;
            }
            while ( v27 );
          }
          goto LABEL_21;
        }
        v20 = (_QWORD *)(a1 + 48);
        while ( (*(_QWORD *)(48LL * *v20 - 0x57FFFFFFFD8LL) & 0x200000000000000LL) == 0 )
        {
          ++v18;
          ++v20;
          if ( v18 >= v9 )
            goto LABEL_19;
        }
      }
      v17 = -1073741800;
LABEL_21:
      MmAcquireLoadLock();
      MiAcquireResourceExclusiveLite(Lock);
      *(_DWORD *)(v12 + 104) &= ~0x80000u;
      MiReleaseResourceLite(Lock);
      MiUnloadSystemImage(v12);
      MmReleaseLoadLock(Lock);
LABEL_22:
      KiLeaveCriticalRegionUnsafe(Lock);
      return (unsigned int)v17;
    }
  }
  return 3221225485LL;
}
