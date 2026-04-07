/*
 * XREFs of ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18003A98C
 * Callers:
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18008A248 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18008A46C (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x180076DF0 (-PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z.c)
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
  struct tagPOINT v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  __int128 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  v5 = a2;
  v6 = 0LL;
  v7 = *((_DWORD *)this + 60);
  if ( v7 )
  {
    v15 = *((_QWORD *)this + 27);
    while ( *(_DWORD *)(v15 + 40 * v6) != (_DWORD)v5 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_2;
    }
    if ( (int)v6 >= 0 )
    {
      v13 = 5 * v6;
      *(_QWORD *)(v15 + 8 * v13 + 20) = *(_QWORD *)(v15 + 40 * v6 + 8);
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v13 + 16) = *(_DWORD *)(*((_QWORD *)this + 27) + 40 * v6 + 4);
      *(struct tagPOINT *)(*((_QWORD *)this + 27) + 8 * v13 + 8) = *a4;
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v13 + 4) = a3;
      v12 = a5;
LABEL_8:
      CDesktopManager::PostEventMessage(CDesktopManager::s_pDesktopManagerInstance, 0x408u, v12, v5);
      return 0LL;
    }
  }
LABEL_2:
  if ( a5 )
  {
    v9 = *a4;
    v21 = 0LL;
    *((struct tagPOINT *)&v19 + 1) = v9;
    *(struct tagPOINT *)((char *)&v20 + 4) = v9;
    v10 = *((unsigned int *)this + 60);
    *(_QWORD *)&v19 = __PAIR64__(a3, v5);
    LODWORD(v20) = a3;
    v11 = v10 + 1;
    if ( (int)v10 + 1 >= (unsigned int)v10 )
    {
      if ( v11 > *((_DWORD *)this + 59) )
      {
        v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 216, 0x28u, 1, &v19);
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
      }
      else
      {
        v16 = 5 * v10;
        v17 = *((_QWORD *)this + 27);
        *(_OWORD *)(v17 + 8 * v16) = v19;
        *(_OWORD *)(v17 + 8 * v16 + 16) = v20;
        *(_QWORD *)(v17 + 8 * v16 + 32) = v21;
        *((_DWORD *)this + 60) = v11;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    v12 = a5;
    goto LABEL_8;
  }
  return 0LL;
}
