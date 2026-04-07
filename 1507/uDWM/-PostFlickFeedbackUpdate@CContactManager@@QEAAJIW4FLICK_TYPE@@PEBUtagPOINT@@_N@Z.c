/*
 * XREFs of ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x18008056C
 * Callers:
 *     ??1CFlickVisual@@MEAA@XZ @ 0x180087930 (--1CFlickVisual@@MEAA@XZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180087AF4 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x180087F50 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CFlickVisual@@MEAAJXZ @ 0x180088010 (-UpdateTransition@CFlickVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x18006CFC0 (-PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z.c)
 */

__int64 __fastcall CContactManager::PostFlickFeedbackUpdate(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int8 a5)
{
  LPARAM v5; // rdi
  __int64 v6; // r10
  unsigned int v7; // edx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  WPARAM v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]

  v5 = a2;
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 208);
  if ( v7 )
  {
    v9 = *(_QWORD *)(a1 + 184);
    while ( *(_DWORD *)(v9 + 24 * v6) != (_DWORD)v5 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_5;
    }
    if ( (int)v6 >= 0 )
    {
      v13 = 3 * v6;
      *(_QWORD *)(v9 + 8 * v13 + 8) = *a4;
      *(_DWORD *)(*(_QWORD *)(a1 + 184) + 8 * v13 + 4) = a3;
      v14 = a5;
LABEL_15:
      CDesktopManager::PostEventMessage((HANDLE *)CDesktopManager::s_pDesktopManagerInstance, 0x407u, v14, v5);
      return 0LL;
    }
  }
LABEL_5:
  if ( a5 )
  {
    v10 = *a4;
    v20 = 0LL;
    *((_QWORD *)&v19 + 1) = v10;
    v11 = *(unsigned int *)(a1 + 208);
    *(_QWORD *)&v19 = __PAIR64__(a3, v5);
    v12 = v11 + 1;
    if ( (int)v11 + 1 >= (unsigned int)v11 )
    {
      if ( v12 > *(_DWORD *)(a1 + 204) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 184, 0x18u, 1, &v19);
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0xC0u);
      }
      else
      {
        v15 = 3 * v11;
        v16 = *(_QWORD *)(a1 + 184);
        *(_OWORD *)(v16 + 8 * v15) = v19;
        *(_QWORD *)(v16 + 8 * v15 + 16) = v20;
        *(_DWORD *)(a1 + 208) = v12;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    }
    v14 = a5;
    goto LABEL_15;
  }
  return 0LL;
}
