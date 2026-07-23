/*
 * XREFs of MmChangeImageProtection @ 0x140481ECC
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     MiAcquireResourceExclusiveLite @ 0x140082D98 (MiAcquireResourceExclusiveLite.c)
 *     MiSetImageProtection @ 0x140082DB8 (MiSetImageProtection.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     MiSessionReferenceImage @ 0x140131DE8 (MiSessionReferenceImage.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
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
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ecx
  _QWORD *v22; // r15
  _QWORD *v23; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rsi

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
            if ( v13 >= qword_140326950 && v13 < qword_140326950 + 0x8000000000LL )
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
        goto LABEL_23;
      if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v12 + 48)) )
      {
        v21 = 0;
        v22 = (_QWORD *)(a1 + 48);
        if ( !v9 )
        {
LABEL_20:
          MiSetImageProtection(v12, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
          if ( a4 == 1 )
          {
            v25 = *(_QWORD *)(v12 + 112);
            if ( v25
              && (v28 = *(_QWORD *)(*(_QWORD *)(MiSectionControlArea(v25) + 96) + 8LL), (v28 & 0xFFFFFFFFFFFFFFF8uLL) > 8) )
            {
              v26 = v28 & 0xFFFFFFFFFFFFFFF8uLL;
            }
            else
            {
              v26 = 0LL;
            }
            if ( qword_1403011B0 )
            {
              v27 = qword_1403011B0(v26, a1, a2, a3, a2 - *(_QWORD *)(v12 + 48));
              v17 = v27;
              if ( v27 >= 0 )
              {
                if ( (MiFlags & 0x4000) != 0 && v27 == 300 && v9 )
                {
                  v29 = v9;
                  do
                  {
                    MiMarkPfnVerified(48LL * *v22++ - 0x58000000000LL, 0);
                    --v29;
                  }
                  while ( v29 );
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
          else if ( (MiFlags & 0x4000) != 0 && v9 )
          {
            v30 = v9;
            do
            {
              MiClearPfnImageVerified(48LL * *v22++ - 0x58000000000LL, 0x18u);
              --v30;
            }
            while ( v30 );
          }
          goto LABEL_22;
        }
        v23 = (_QWORD *)(a1 + 48);
        while ( (*(_QWORD *)(48LL * *v23 - 0x57FFFFFFFD8LL) & 0x200000000000000LL) == 0 )
        {
          ++v21;
          ++v23;
          if ( v21 >= v9 )
            goto LABEL_20;
        }
      }
      v17 = -1073741800;
LABEL_22:
      MmAcquireLoadLock();
      MiAcquireResourceExclusiveLite(Lock);
      *(_DWORD *)(v12 + 104) &= ~0x80000u;
      MiReleaseResourceLite(Lock);
      MiUnloadSystemImage(v12);
      MmReleaseLoadLock(Lock);
LABEL_23:
      KiLeaveCriticalRegionUnsafe(Lock, v18, v19, v20);
      return (unsigned int)v17;
    }
  }
  return 3221225485LL;
}
