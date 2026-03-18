/*
 * XREFs of bUnloadEudcFont @ 0x140104924
 * Callers:
 *     bDeleteAllFlEntry @ 0x14010469C (bDeleteAllFlEntry.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x14020E8D4 (-CleanUpEUDC@@YAXXZ.c)
 *     GreEudcLoadLinkW @ 0x14032453C (GreEudcLoadLinkW.c)
 *     GreEudcUnloadLinkW @ 0x140324810 (GreEudcUnloadLinkW.c)
 *     bDeleteFlEntry @ 0x140324924 (bDeleteFlEntry.c)
 * Callees:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     vKillEudcRFONTs @ 0x140104B04 (vKillEudcRFONTs.c)
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z @ 0x1402889F8 (-prfntDeactivateEudcRFONTs@@YAXPEBQEAVPFE@@PEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall bUnloadEudcFont(struct PFE **a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  _WORD *v5; // rdi
  __int64 SessionState; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  _WORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // ax
  _WORD *v13; // rax
  int v15; // edx
  void *v16; // rcx
  struct PFE *v17; // rbx
  void *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r9
  struct _LIST_ENTRY v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v22 = Win32AllocPoolZInit(522LL, 1886221383LL);
  v5 = (_WORD *)v22;
  if ( !v22 )
  {
    EngSetLastError(8u);
    goto LABEL_29;
  }
  SessionState = W32GetSessionState(v3, v2, v4);
  v7 = (__int64)*a1;
  v8 = 261LL;
  v9 = v5;
  v10 = *(_QWORD *)(SessionState + 96);
  v11 = *(_QWORD *)(*(_QWORD *)*a1 + 24LL) - (_QWORD)v5;
  do
  {
    if ( v8 == -2147483385 )
      break;
    v12 = *(_WORD *)((char *)v9 + v11);
    if ( !v12 )
      break;
    *v9++ = v12;
    --v8;
  }
  while ( v8 );
  v13 = v9 - 1;
  if ( v8 )
    v13 = v9;
  *v13 = 0;
  if ( !v8 )
  {
    Win32FreePool(v5);
    return 0LL;
  }
  v15 = 0;
  if ( (*(_DWORD *)(v10 + 13512) & 0x10) != 0 || !*(_DWORD *)(v10 + 19560) )
    goto LABEL_13;
  v20 = 7LL;
  v19 = v10 + 14412;
  do
  {
    if ( *(_DWORD *)(v19 - 124) && *(_WORD *)v19 && *(struct PFE **)(v19 + 524) == *a1 )
      v15 = 1;
    v19 += 664LL;
    --v20;
  }
  while ( v20 );
  if ( !v15 )
  {
LABEL_13:
    *(_DWORD *)(v7 + 12) &= ~0x200u;
    v16 = *(void **)(v7 + 112);
    if ( v16 )
    {
      Win32FreePool(v16);
      *(_QWORD *)(v7 + 112) = 0LL;
    }
    v17 = a1[1];
    if ( v17 )
    {
      *((_DWORD *)v17 + 3) &= ~0x200u;
      v18 = (void *)*((_QWORD *)v17 + 14);
      if ( v18 )
      {
        Win32FreePool(v18);
        *((_QWORD *)v17 + 14) = 0LL;
      }
    }
    v21.Blink = &v21;
    v21.Flink = &v21;
    prfntDeactivateEudcRFONTs(a1, &v21);
    vKillEudcRFONTs(&v21);
  }
  if ( !(unsigned int)PFTOBJ::bUnloadEUDCFont((PFTOBJ *)v19, v5) )
  {
LABEL_29:
    AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(&v22);
    return 0LL;
  }
  Win32FreePool(v5);
  return 1LL;
}
