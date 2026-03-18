/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0059CA0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C00599AC (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     HmgIsGarbageCollectibleType @ 0x1C00C09DC (HmgIsGarbageCollectibleType.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1)
{
  char v1; // bp
  unsigned int v2; // ebx
  int v3; // edx
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edx
  signed int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // r8
  struct OBJECT *EntryObject; // rsi
  int v14; // edx
  char v15; // al
  char v16; // al

  v1 = a1;
  v2 = 0;
  PsGetCurrentProcess(a1);
  GreAcquireHmgrSemaphore(v4, v3, v5);
  while ( ++v2 < *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v7 = *((_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 2);
    v8 = *(_DWORD *)(v7 + 2056);
    if ( v2 < v8 + ((*(unsigned __int16 *)(v7 + 2) - 1) << 16) )
    {
      if ( v2 >= v8 )
      {
        v9 = ((v2 - v8) >> 16) + 1;
        if ( (v2 - v8) >> 16 != -2 )
          goto LABEL_7;
      }
      else
      {
        v9 = 0;
LABEL_7:
        v10 = *(_QWORD *)(v7 + 8LL * v9 + 8);
        v6 = v2;
        if ( v9 )
          v6 = v2 - ((v9 - 1) << 16) - v8;
        v11 = 0LL;
        if ( (unsigned int)v6 < *(_DWORD *)(v10 + 20) )
        {
          v12 = (unsigned int)v6;
          v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)(unsigned int)v6 >> 8))
                         + 16LL * (unsigned __int8)v6
                         + 8);
          if ( v6 )
          {
            v6 = 3 * v12;
            v11 = *(_QWORD *)v10 + 24 * v12;
          }
        }
        if ( v11 )
        {
          if ( !v2 )
            break;
          v6 = *(unsigned __int8 *)(v11 + 14);
          if ( v1 )
          {
            if ( v1 == (_BYTE)v6 )
              goto LABEL_18;
          }
          else if ( (unsigned __int8)(v6 - 1) <= 0x1Du )
          {
LABEL_18:
            if ( ((*(_DWORD *)(v11 + 8) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
            {
              EntryObject = GdiHandleManager::GetEntryObject(
                              (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                              v2);
              if ( *((_DWORD *)EntryObject + 2) )
              {
                if ( (unsigned int)HmgIsGarbageCollectibleType(*(unsigned __int8 *)(v11 + 14)) )
                  *((_WORD *)EntryObject + 7) |= 0x4000u;
                if ( v14 )
                  goto LABEL_28;
              }
              if ( (*((_WORD *)EntryObject + 7) & 0x4000) != 0 )
              {
LABEL_28:
                if ( (unsigned int)HmgSetOwner(*(_QWORD *)EntryObject, -2147483630, *(_BYTE *)(v11 + 14))
                  && (*((_WORD *)EntryObject + 7) & 0x4000) != 0 )
                {
                  _InterlockedIncrement(&gGarbageCollectionPendingCount);
                }
              }
              else
              {
                *((_DWORD *)EntryObject + 2) = 0;
                *((_WORD *)EntryObject + 6) = 0;
                *((_QWORD *)EntryObject + 2) = 0LL;
                v15 = *(_BYTE *)(v11 + 15);
                *(_DWORD *)(v11 + 8) &= ~1u;
                v16 = v15 & 0xFE;
                *(_BYTE *)(v11 + 15) = v16;
                if ( (v16 & 0x20) != 0 )
                  *(_QWORD *)(v11 + 16) = 0LL;
                *(_BYTE *)(v11 + 15) = v16 & 0xDF;
              }
            }
          }
        }
      }
    }
  }
  GreReleaseHmgrSemaphore(v6);
}
