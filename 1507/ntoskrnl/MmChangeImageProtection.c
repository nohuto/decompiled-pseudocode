/*
 * XREFs of MmChangeImageProtection @ 0x140452054
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     MiSetImageProtection @ 0x140023100 (MiSetImageProtection.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiSessionReferenceImage @ 0x14015A40C (MiSessionReferenceImage.c)
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmChangeImageProtection(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v8; // r14d
  unsigned int v9; // r14d
  __int64 Lock; // rbx
  PVOID *v11; // rax
  ULONG_PTR v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  int v16; // eax
  int v17; // edi
  __int16 v18; // ax
  int v19; // ecx
  _QWORD *v20; // r15
  _QWORD *v21; // rdx
  __int16 v22; // ax
  __int16 v23; // ax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rbp

  if ( (unsigned int)(a4 - 1) > 1 )
    return 3221225485LL;
  if ( (*(_BYTE *)(a1 + 10) & 7) != 2 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 44) )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 40);
  if ( (v8 & 0xFFF) != 0 )
    return 3221225485LL;
  v9 = v8 >> 12;
  Lock = MmAcquireLoadLock();
  --*(_WORD *)(Lock + 484);
  --*(_WORD *)(Lock + 484);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
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
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v18 = *(_WORD *)(Lock + 484) + 1;
  *(_WORD *)(Lock + 484) = v18;
  if ( !v18 && *(_QWORD *)(Lock + 152) != Lock + 152 && !*(_WORD *)(Lock + 486) )
    KiCheckForKernelApcDelivery();
  MmReleaseLoadLock(Lock);
  if ( v17 >= 0 )
  {
    if ( *(char *)(((*(_QWORD *)(v12 + 48) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL) < 0 )
    {
      v17 = -1073741800;
    }
    else
    {
      v19 = 0;
      v20 = (_QWORD *)(a1 + 48);
      if ( v9 )
      {
        v21 = (_QWORD *)(a1 + 48);
        while ( (*(_QWORD *)(48LL * *v21 - 0x57FFFFFFFD8LL) & 0x200000000000000LL) == 0 )
        {
          ++v21;
          if ( ++v19 >= v9 )
            goto LABEL_21;
        }
        v17 = -1073741800;
      }
      else
      {
LABEL_21:
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
          if ( qword_14032C1B0 )
          {
            v27 = qword_14032C1B0(v26, a1, a2, a3, a2 - *(_QWORD *)(v12 + 48));
            v17 = v27;
            if ( v27 >= 0 )
            {
              if ( (MiFlags & 0x30000) != 0 && v27 == 300 && v9 )
              {
                v29 = v9;
                do
                {
                  MiMarkPfnVerified(48LL * *v20++ - 0x58000000000LL, 0);
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
        else if ( (MiFlags & 0x30000) != 0 && v9 )
        {
          v30 = v9;
          do
          {
            MiClearPfnImageVerified(48LL * *v20++ - 0x58000000000LL, 0x18u);
            --v30;
          }
          while ( v30 );
        }
      }
    }
    MmAcquireLoadLock();
    --*(_WORD *)(Lock + 484);
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    *(_DWORD *)(v12 + 104) &= ~0x80000u;
    ExReleaseResourceLite(&PsLoadedModuleResource);
    v22 = *(_WORD *)(Lock + 484) + 1;
    *(_WORD *)(Lock + 484) = v22;
    if ( !v22 && *(_QWORD *)(Lock + 152) != Lock + 152 && !*(_WORD *)(Lock + 486) )
      KiCheckForKernelApcDelivery();
    MiUnloadSystemImage(v12);
    MmReleaseLoadLock(Lock);
  }
  v23 = *(_WORD *)(Lock + 484) + 1;
  *(_WORD *)(Lock + 484) = v23;
  if ( !v23 && *(_QWORD *)(Lock + 152) != Lock + 152 && !*(_WORD *)(Lock + 486) )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v17;
}
