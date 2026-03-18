/*
 * XREFs of ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C0150D68
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C0095174 (xxxTranslateAccelerator.c)
 * Callees:
 *     MNLookUpItem @ 0x1C006F45C (MNLookUpItem.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z @ 0x1C0150DC8 (-UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z.c)
 */

__int64 __fastcall xxxTA_AccelerateMenu(
        struct tagWND *const a1,
        struct tagMENU *const a2,
        unsigned int a3,
        HMENU *const a4)
{
  unsigned int v4; // ebx
  unsigned int TopLevelMenuIndex; // eax
  __int64 v10; // rsi
  __int64 v12; // r8
  HMENU *v13; // r8
  HMENU v14; // r8
  __int64 v15; // rax
  int v16; // r10d
  __int64 v17; // [rsp+88h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a2 )
    goto LABEL_3;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex(a2, a3);
  v10 = TopLevelMenuIndex;
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_3;
  v12 = *(_QWORD *)a2;
  v4 = 2;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(a1, 278LL, v12, 0LL, 0, 0, 0LL, 1, 1);
  if ( (unsigned int)v10 >= *((_DWORD *)a2 + 13)
    || (v13 = *(HMENU **)(*((_QWORD *)a2 + 10) + 152LL * (int)v10 + 16)) != 0LL
    && (v14 = *v13,
        *a4 = v14,
        _InterlockedAdd(&glSendMessage, 1u),
        xxxSendTransformableMessageTimeout(a1, 279LL, (__int64)v14, v10, 0, 0, 0LL, 1, 1),
        (unsigned int)v10 >= *((_DWORD *)a2 + 13))
    || (v15 = MNLookUpItem((__int64)a2, a3, 0, &v17)) == 0 )
  {
    v4 = 0;
LABEL_3:
    *a4 = 0LL;
    return v4;
  }
  if ( (*(_DWORD *)(v15 + 4) & 3) != 0 || v16 )
    return 3;
  return v4;
}
