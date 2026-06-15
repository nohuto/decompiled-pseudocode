/*
 * XREFs of ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x18001B578
 * Callers:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18001C868 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x18001B3C4 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 *     memset_0 @ 0x180024558 (memset_0.c)
 */

__int64 __fastcall GenerateMediaManagerNotification(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r9
  _DWORD *v5; // rdi
  int v6; // ebx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  _WORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  SIZE_T v15; // rbp
  HANDLE ProcessHeap; // rax
  _DWORD *v17; // rax
  HANDLE v18; // rax

  v2 = (_QWORD *)*a1;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  if ( *a1 )
  {
    do
    {
      if ( !v2 )
        ATL::AtlThrowImpl(-2147467259);
      v8 = v2[2];
      v2 = (_QWORD *)*v2;
      v9 = *(_WORD **)(v8 + 16);
      v10 = 0LL;
      if ( !v9 )
        goto LABEL_9;
      v11 = 1024LL;
      v6 = 0;
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v11;
      }
      while ( v11 );
      if ( v11 )
        v10 = 1024 - v11;
      else
LABEL_9:
        v6 = -2147024809;
      v12 = v6 < 0 ? 0LL : 2 * v10;
      if ( v6 < 0 )
        goto LABEL_27;
      v13 = v7 + v12 + 2;
      if ( v13 < v7 )
        goto LABEL_29;
      if ( v13 + 4 < v13 )
        goto LABEL_29;
      if ( v13 + 8 < v13 + 4 )
        goto LABEL_29;
      v7 = v13 + 12;
      if ( v13 + 12 < v13 + 8 )
        goto LABEL_29;
      v6 = 0;
    }
    while ( v2 );
  }
  v14 = v7;
  v15 = v7 + 42;
  ProcessHeap = GetProcessHeap();
  v17 = HeapAlloc(ProcessHeap, 0, v15);
  v5 = v17;
  if ( !v17 )
  {
    v6 = -2147024882;
    goto LABEL_27;
  }
  memset_0(v17, 0, v15);
  *v5 = v15;
  v5[1] = 0x10000;
  *((_QWORD *)v5 + 1) = 0LL;
  v5[6] = 0;
  if ( !v14 )
  {
LABEL_26:
    *a2 = v5;
    v5 = 0LL;
    goto LABEL_27;
  }
  v6 = SetNotificationData(a1, (__int64)(v5 + 8), v14);
  if ( v6 < 0 )
    goto LABEL_27;
  if ( v14 <= 0xFFFFFFFF )
  {
    v5[7] = v14;
    v6 = 0;
    goto LABEL_26;
  }
  v5[7] = -1;
LABEL_29:
  v6 = -2147024362;
LABEL_27:
  v18 = GetProcessHeap();
  HeapFree(v18, 0, v5);
  return (unsigned int)v6;
}
