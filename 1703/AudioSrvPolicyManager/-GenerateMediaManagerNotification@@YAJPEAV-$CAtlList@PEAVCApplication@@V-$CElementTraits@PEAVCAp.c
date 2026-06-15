/*
 * XREFs of ?GenerateMediaManagerNotification@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAPEAUMEDIAMANAGER_NOTIFICATION_BLOCK@@@Z @ 0x180019488
 * Callers:
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18001A7D4 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetNotificationData@@YAJPEAV?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@PEAE_K@Z @ 0x1800192D0 (-SetNotificationData@@YAJPEAV-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@A.c)
 *     memset @ 0x18002167E (memset.c)
 */

__int64 __fastcall GenerateMediaManagerNotification(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  unsigned __int64 v5; // rsi
  _DWORD *v6; // rdi
  signed int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rax
  _WORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v18; // rax
  HANDLE v19; // rax

  v2 = (_QWORD *)*a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( *a1 )
  {
    while ( 1 )
    {
      v9 = v2[2];
      v2 = (_QWORD *)*v2;
      v10 = *(_WORD **)(v9 + 24);
      v11 = 0LL;
      if ( v10 )
      {
        v12 = 1024LL;
        do
        {
          if ( !*v10 )
            break;
          ++v10;
          --v12;
        }
        while ( v12 );
        v7 = v12 == 0 ? 0x80070057 : 0;
        v11 = v12 ? 1024 - v12 : 0LL;
      }
      else
      {
        v7 = -2147024809;
      }
      v13 = v7 < 0 ? 0LL : 2 * v11;
      if ( v7 < 0 )
        break;
      v14 = v8 + v13 + 2;
      if ( v14 < v8 )
      {
        v14 = -1LL;
        v7 = -2147024362;
      }
      else
      {
        v7 = 0;
      }
      if ( v7 < 0 )
        break;
      v15 = -1LL;
      if ( v14 + 4 >= v14 )
        v15 = v14 + 4;
      v7 = v14 + 4 < v14 ? 0x80070216 : 0;
      if ( v14 + 4 < v14 )
        goto LABEL_29;
      v16 = -1LL;
      if ( v15 + 4 >= v15 )
        v16 = v15 + 4;
      v7 = v15 + 4 < v15 ? 0x80070216 : 0;
      if ( v15 + 4 < v15 )
        goto LABEL_29;
      v8 = -1LL;
      if ( v16 + 4 >= v16 )
        v8 = v16 + 4;
      v7 = v16 + 4 < v16 ? 0x80070216 : 0;
      if ( v16 + 4 < v16 )
        goto LABEL_29;
      if ( !v2 )
        goto LABEL_28;
    }
  }
  else
  {
LABEL_28:
    v5 = v8;
LABEL_29:
    if ( v7 >= 0 )
    {
      ProcessHeap = GetProcessHeap();
      v18 = HeapAlloc(ProcessHeap, 0, v5 + 42);
      v6 = v18;
      if ( v18 )
      {
        memset(v18, 0, v5 + 42);
        *v6 = v5 + 42;
        v6[1] = 0x10000;
        *((_QWORD *)v6 + 1) = 0LL;
        v6[6] = 0;
        if ( v5 )
        {
          v7 = SetNotificationData(a1, (__int64)(v6 + 8), v5);
          if ( v7 < 0 )
            goto LABEL_37;
          if ( v5 > 0xFFFFFFFF )
          {
            v6[7] = -1;
            v7 = -2147024362;
            goto LABEL_37;
          }
          v6[7] = v5;
          v7 = 0;
        }
        *a2 = v6;
        v6 = 0LL;
        goto LABEL_37;
      }
      v7 = -2147024882;
    }
  }
LABEL_37:
  v19 = GetProcessHeap();
  HeapFree(v19, 0, v6);
  return (unsigned int)v7;
}
