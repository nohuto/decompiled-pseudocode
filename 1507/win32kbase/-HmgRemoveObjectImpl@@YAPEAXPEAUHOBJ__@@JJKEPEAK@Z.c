/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00B2F54
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C000C0A0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0026110 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00336C0 (--1SURFMEM@@QEAA@XZ.c)
 *     HmgRemoveObject @ 0x1C0036B40 (HmgRemoveObject.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0042E40 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0043D80 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00B00E0 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveGarbageCollectible @ 0x1C00B366C (HmgRemoveGarbageCollectible.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00BCDD8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00BE530 (EngDeleteDriverObj.c)
 * Callees:
 *     ?vFree@ENTRYOBJ@@QEAAXI@Z @ 0x1C0038660 (-vFree@ENTRYOBJ@@QEAAXI@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C003C1A0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C003C340 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C003C3A0 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 */

_QWORD *__fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, __int16 a2, int a3, char a4, char a5, unsigned int *a6)
{
  __int64 v6; // rbp
  __int16 v10; // esi^2
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  _QWORD *v16; // rbx
  unsigned int v17; // ecx
  _BYTE v19[32]; // [rsp+30h] [rbp-38h] BYREF

  v6 = (unsigned __int16)a1;
  v10 = WORD1(a1);
  if ( (unsigned __int16)a1 >= (unsigned int)gcMaxHmgr )
    return 0LL;
  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  v11 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v6;
  HANDLELOCK::vLockHandle((HANDLELOCK *)v19, (struct _ENTRY *)v11, (a4 & 2) == 0, v6, 0);
  if ( !HANDLELOCK::bValid((HANDLELOCK *)v19) )
  {
    v16 = 0LL;
    goto LABEL_19;
  }
  if ( (a4 & 2) != 0 )
  {
    v15 = *(_DWORD *)(v11 + 8) & 0xFFFFFFFE;
    if ( v15 != -2147483630 && v15 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) && v15 )
      goto LABEL_16;
  }
  if ( *(_BYTE *)(v11 + 14) != a5 || *(_WORD *)(v11 + 12) != v10 )
    goto LABEL_16;
  v16 = *(_QWORD **)v11;
  v17 = *(_DWORD *)(*(_QWORD *)v11 + 8LL);
  if ( *(_WORD *)(*(_QWORD *)v11 + 12LL) != a2 || v17 != a3 )
  {
    v16 = 0LL;
    if ( a6 )
      *a6 = v17;
    goto LABEL_17;
  }
  if ( (a4 & 1) != 0 || (*(_BYTE *)(v11 + 15) & 1) == 0 )
  {
    *v16 = 0LL;
    ENTRYOBJ::vFree((ENTRYOBJ *)v11, v6);
  }
  else
  {
LABEL_16:
    v16 = 0LL;
  }
LABEL_17:
  HANDLELOCK::vUnlock((HANDLELOCK *)v19);
LABEL_19:
  GreReleaseHmgrSemaphore(v13, v12, v14);
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)v19);
  return v16;
}
