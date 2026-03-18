/*
 * XREFs of CmpPartialPromoteSubkeys @ 0x1401B3204
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 * Callees:
 *     CmpHashCompressedComponent @ 0x140087D2C (CmpHashCompressedComponent.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1401B366C (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3C44 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x1401B4AF4 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpCleanupKcbStack @ 0x140404934 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140404944 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStack @ 0x1404050C0 (CmpStartKcbStack.c)
 *     CmpFindKcbInHashEntryByName @ 0x140436C74 (CmpFindKcbInHashEntryByName.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404400C0 (CmpGetKcbAtLayerHeight.c)
 *     CmpPopulateKcbStack @ 0x140440110 (CmpPopulateKcbStack.c)
 *     CmpHashUnicodeComponent @ 0x1404B1340 (CmpHashUnicodeComponent.c)
 *     CmpKeyEnumStackGetCurrentKeyNodeStack @ 0x140581810 (CmpKeyEnumStackGetCurrentKeyNodeStack.c)
 *     CmpKeyEnumStackAdvance @ 0x14060A128 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x14060A308 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x14060A67C (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14060A6C8 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BCE4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpPartialPromoteSubkeys(__int64 a1)
{
  __int64 KcbAtLayerHeight; // rsi
  int started; // ebx
  __int64 CurrentKeyNodeStack; // r15
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 EntryAtLayerHeight; // rax
  __int64 v9; // rax
  unsigned __int16 v10; // bx
  _BYTE *v11; // r14
  int v12; // eax
  __int64 KcbInHashEntryByCompressedName; // rax
  int v14; // eax
  int v15; // eax
  _WORD v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v18; // [rsp+48h] [rbp-B8h]
  _BYTE v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[352]; // [rsp+70h] [rbp-90h] BYREF

  CmpKeyEnumStackInitialize(v20);
  CmpInitializeKcbStack(v19);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 2));
  started = CmpStartKcbStack(v19, *(unsigned __int16 *)(a1 + 2));
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKcbStack(v20, a1, 0LL);
    if ( started >= 0 )
    {
      started = CmpKeyEnumStackAdvance(v20);
      if ( started < 0 )
      {
LABEL_20:
        if ( started == -2147483622 )
          started = 0;
      }
      else
      {
        CurrentKeyNodeStack = CmpKeyEnumStackGetCurrentKeyNodeStack(v20);
        while ( 1 )
        {
          v5 = *(unsigned __int16 *)(KcbAtLayerHeight + 58);
          v6 = 0LL;
          v7 = (unsigned __int16)v5;
          if ( (v5 & 0x8000u) == 0LL )
          {
            while ( 1 )
            {
              EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(CurrentKeyNodeStack, v7, v5, v6);
              if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
                break;
              LOWORD(v7) = v7 - 1;
              if ( (v7 & 0x8000u) != 0LL )
                goto LABEL_10;
            }
            v6 = EntryAtLayerHeight;
          }
LABEL_10:
          if ( (_WORD)v7 != (_WORD)v5 )
          {
            v9 = *(_QWORD *)(v6 + 16);
            v10 = *(_WORD *)(v9 + 72);
            v11 = (_BYTE *)(v9 + 76);
            LOBYTE(v9) = *(_BYTE *)(v9 + 2);
            v18 = v11;
            v17[0] = v10;
            v17[1] = v10;
            if ( (v9 & 0x20) != 0 )
            {
              v12 = CmpHashCompressedComponent(v11, v10);
              KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByCompressedName(
                                                 *(_QWORD *)(KcbAtLayerHeight + 24),
                                                 v12 + 37 * *(_DWORD *)(KcbAtLayerHeight + 8),
                                                 KcbAtLayerHeight,
                                                 (_DWORD)v11,
                                                 v10);
            }
            else
            {
              v14 = CmpHashUnicodeComponent(v17);
              KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByName(
                                                 *(_QWORD *)(KcbAtLayerHeight + 24),
                                                 (unsigned int)(v14 + 37 * *(_DWORD *)(KcbAtLayerHeight + 8)),
                                                 KcbAtLayerHeight,
                                                 v17);
            }
            if ( KcbInHashEntryByCompressedName )
            {
              CmpPopulateKcbStack(v19, KcbInHashEntryByCompressedName);
              v15 = CmpPromoteSingleKeyFromKcbStacks(a1, v19, 0LL);
            }
            else
            {
              v15 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(a1, CurrentKeyNodeStack, 0, 0, 0LL, 0LL, 0LL);
            }
            started = v15;
            if ( v15 < 0 )
              break;
            CmpKeyEnumStackCleanup(v20);
            CmpKeyEnumStackInitialize(v20);
            started = CmpKeyEnumStackStartFromKcbStack(v20, a1, 0LL);
            if ( started < 0 )
              break;
          }
          started = CmpKeyEnumStackAdvance(v20);
          if ( started < 0 )
            goto LABEL_20;
        }
      }
    }
  }
  CmpCleanupKcbStack(v19);
  CmpKeyEnumStackCleanup(v20);
  return (unsigned int)started;
}
