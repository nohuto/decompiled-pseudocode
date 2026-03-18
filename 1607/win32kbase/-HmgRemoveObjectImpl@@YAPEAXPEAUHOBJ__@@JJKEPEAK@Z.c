/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0033330 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0036A00 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgRemoveObject @ 0x1C0036A70 (HmgRemoveObject.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0039260 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0047300 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00BE080 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00BF6C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveGarbageCollectible @ 0x1C00C0C48 (HmgRemoveGarbageCollectible.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00CA188 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00CBCF0 (EngDeleteDriverObj.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C002A0C0 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002A400 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct OBJECT *__fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, int a2, int a3, char a4, char a5, unsigned int *a6)
{
  __int16 v8; // r13
  unsigned int v9; // r14d
  struct OBJECT *v10; // rbx
  _DWORD *v11; // rsi
  struct OBJECT *EntryObject; // rbp
  unsigned int v13; // edi
  __int64 v14; // rcx
  unsigned int v16; // ecx
  _DWORD *v17; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+28h] [rbp-40h]

  v8 = a2;
  v9 = (unsigned int)a1;
  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  v10 = 0LL;
  v17 = 0LL;
  v18 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v17, (unsigned __int16)v9 | (v9 >> 8) & 0xFF0000, (a4 & 2) == 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v17) )
  {
    v11 = v17;
    EntryObject = GdiHandleManager::GetEntryObject(
                    (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                    *v17 & 0xFFFFFF);
    if ( (a4 & 2) == 0
      || (v13 = v11[2] & 0xFFFFFFFE, v13 == -2147483630)
      || v13 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)
      || !v13 )
    {
      if ( *((_BYTE *)v11 + 14) == a5 && *((_WORD *)v11 + 6) == HIWORD(v9) )
      {
        v16 = *((_DWORD *)EntryObject + 2);
        if ( *((_WORD *)EntryObject + 6) == v8 && v16 == a3 )
        {
          if ( (a4 & 1) != 0 || (*((_BYTE *)v11 + 15) & 1) == 0 )
          {
            HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v17);
            goto LABEL_8;
          }
        }
        else if ( a6 )
        {
          *a6 = v16;
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
      goto LABEL_9;
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
  }
  EntryObject = 0LL;
LABEL_8:
  v10 = EntryObject;
LABEL_9:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v17);
  GreReleaseHmgrSemaphore(v14);
  return v10;
}
