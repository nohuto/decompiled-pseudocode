/*
 * XREFs of ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18003F1D8
 * Callers:
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18008AF78 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18008B1A4 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x180074F00 (-PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z.c)
 */

__int64 __fastcall CContactManager::PostKeystateFeedbackUpdate(
        CContactManager *this,
        unsigned int a2,
        unsigned int a3,
        const struct tagPOINT *a4,
        bool a5)
{
  __int64 v5; // rbx
  __int64 v6; // r10
  unsigned int v7; // edx
  __int64 v9; // rdi
  struct tagPOINT v10; // rax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  __int128 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  v5 = a2;
  v6 = 0LL;
  v7 = *((_DWORD *)this + 60);
  if ( v7 )
  {
    v9 = *((_QWORD *)this + 27);
    while ( *(_DWORD *)(v9 + 40 * v6) != (_DWORD)v5 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_5;
    }
    if ( (int)v6 >= 0 )
    {
      v13 = 5 * v6;
      *(_QWORD *)(v9 + 8 * v13 + 20) = *(_QWORD *)(v9 + 40 * v6 + 8);
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v13 + 16) = *(_DWORD *)(*((_QWORD *)this + 27) + 40 * v6 + 4);
      *(struct tagPOINT *)(*((_QWORD *)this + 27) + 8 * v13 + 8) = *a4;
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v13 + 4) = a3;
      v14 = a5;
LABEL_15:
      CDesktopManager::PostEventMessage(CDesktopManager::s_pDesktopManagerInstance, 0x408u, v14, v5);
      return 0LL;
    }
  }
LABEL_5:
  if ( a5 )
  {
    v10 = *a4;
    v21 = 0LL;
    *((struct tagPOINT *)&v19 + 1) = v10;
    *(struct tagPOINT *)((char *)&v20 + 4) = v10;
    v11 = *((unsigned int *)this + 60);
    *(_QWORD *)&v19 = __PAIR64__(a3, v5);
    LODWORD(v20) = a3;
    v12 = v11 + 1;
    if ( (int)v11 + 1 >= (unsigned int)v11 )
    {
      if ( v12 > *((_DWORD *)this + 59) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 216, 0x28u, 1, &v19);
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0xC0u);
      }
      else
      {
        v15 = 5 * v11;
        v16 = *((_QWORD *)this + 27);
        *(_OWORD *)(v16 + 8 * v15) = v19;
        *(_OWORD *)(v16 + 8 * v15 + 16) = v20;
        *(_QWORD *)(v16 + 8 * v15 + 32) = v21;
        *((_DWORD *)this + 60) = v12;
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
