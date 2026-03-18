/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C005BC00
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     HmgSetOwner @ 0x1C0042E90 (HmgSetOwner.c)
 *     HmgIsGarbageCollectibleType @ 0x1C00B3420 (HmgIsGarbageCollectibleType.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1, __int64 a2)
{
  char v2; // r14
  int v3; // edx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int i; // ebp
  __int64 v10; // rbx
  char v11; // al

  v2 = a1;
  PsGetCurrentProcess(a1, a2);
  GreAcquireHmgrSemaphore(v4, v3, v5);
  for ( i = 1; i < gcMaxHmgr; ++i )
  {
    v10 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
    v7 = *(unsigned __int8 *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * i + 14);
    if ( v2 )
    {
      if ( v2 == (_BYTE)v7 )
        goto LABEL_6;
    }
    else if ( (unsigned __int8)(v7 - 1) <= 0x1Du )
    {
LABEL_6:
      if ( ((*(_DWORD *)(v10 + 24LL * i + 8) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      {
        v6 = *(_QWORD *)(v10 + 24LL * i);
        if ( *(_DWORD *)(v6 + 8) && (unsigned int)HmgIsGarbageCollectibleType(*(unsigned __int8 *)(v10 + 24LL * i + 14)) )
          *(_WORD *)(v6 + 14) |= 0x4000u;
        v7 = *(_QWORD *)(v10 + 24LL * i);
        if ( *(_DWORD *)(v7 + 8) || (*(_WORD *)(v7 + 14) & 0x4000) != 0 )
        {
          if ( (unsigned int)HmgSetOwner(*(_QWORD *)v7, -2147483630, *(_BYTE *)(v10 + 24LL * i + 14))
            && (*(_WORD *)(*(_QWORD *)(v10 + 24LL * i) + 14LL) & 0x4000) != 0 )
          {
            _InterlockedIncrement(&gGarbageCollectionPendingCount);
          }
        }
        else
        {
          *(_DWORD *)(v10 + 24LL * i + 8) &= ~1u;
          *(_DWORD *)(v7 + 8) = 0;
          *(_WORD *)(*(_QWORD *)(v10 + 24LL * i) + 12LL) = 0;
          *(_QWORD *)(*(_QWORD *)(v10 + 24LL * i) + 16LL) = 0LL;
          *(_BYTE *)(v10 + 24LL * i + 15) &= ~1u;
          v11 = *(_BYTE *)(v10 + 24LL * i + 15);
          if ( (v11 & 0x20) != 0 )
            *(_QWORD *)(v10 + 24LL * i + 16) = 0LL;
          *(_BYTE *)(v10 + 24LL * i + 15) = v11 & 0xDF;
        }
      }
    }
  }
  GreReleaseHmgrSemaphore(v7, v6, v8);
}
