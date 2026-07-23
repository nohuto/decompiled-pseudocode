/*
 * XREFs of CmpEnumerateLayeredKey @ 0x1405FEDD8
 * Callers:
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401B6C10 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1404017F0 (CmpGetKeyNodeForKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x14040336C (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpQueryKeyDataFromNode @ 0x1404370E0 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpKeyEnumStackAdvance @ 0x14060A1DC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x14060A3BC (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x14060A730 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14060A77C (CmpKeyEnumStackStartFromKcbStack.c)
 */

__int64 __fastcall CmpEnumerateLayeredKey(__int64 a1, unsigned int a2, int a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  __int64 v9; // r13
  char v10; // r14
  __int64 KcbAtLayerHeight; // rsi
  _DWORD *KeyNodeForKcb; // r12
  int started; // ebx
  int v14; // eax
  char v15; // r8
  __int16 v16; // r10
  char v17; // r9
  __int16 v18; // r10
  __int16 v19; // r11
  int v20; // edi
  unsigned int v23; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD *v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  _BYTE v26[8]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v27[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28[5]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v29[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v30[172]; // [rsp+98h] [rbp-68h] BYREF

  v25 = a4;
  v24 = a6;
  memset(v28, 0, 0x20uLL);
  v9 = 0LL;
  WORD1(v28[0]) = -1;
  v10 = 0;
  CmpKeyEnumStackInitialize(v29);
  KcbAtLayerHeight = 0LL;
  KeyNodeForKcb = 0LL;
  HvpGetCellContextReinitialize((__int64)v27);
  HvpGetCellContextReinitialize((__int64)v26);
  if ( a3 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  started = CmpStartKcbStackForTopLayerKcb((__int64)v28, *(_QWORD *)(a1 + 8));
  if ( started >= 0 )
  {
    CmpLockKcbStackShared((__int64)v28);
    v10 = 1;
    v14 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    v15 = 0;
    started = v14;
    if ( v14 >= 0 )
    {
      v16 = WORD1(v28[0]);
      if ( SWORD1(v28[0]) <= 0 )
        goto LABEL_19;
      do
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v28, v16);
        if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
          v17 = 1;
        v16 = v19 + v18;
      }
      while ( v16 > 0 );
      if ( v17 )
      {
        started = CmpKeyEnumStackStartFromKcbStack(v29, v28, a1);
        if ( started >= 0 )
        {
          started = CmpKeyEnumStackAdvance(v29);
          if ( started >= 0 )
          {
            v20 = 0;
            if ( a2 )
            {
              while ( 1 )
              {
                started = CmpKeyEnumStackAdvance(v29);
                if ( started < 0 )
                  break;
                if ( ++v20 >= a2 )
                  goto LABEL_16;
              }
            }
            else
            {
LABEL_16:
              started = CmpQueryKeyDataFromKeyNodeStack(v30, a3, v25, a5, v24);
              if ( started >= 0 )
                started = 0;
            }
          }
        }
      }
      else
      {
LABEL_19:
        KcbAtLayerHeight = v28[1];
        KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(v28[1], (__int64)v27, v15);
        started = CmpFindSubKeyByNumber(*(_QWORD *)(KcbAtLayerHeight + 24), KeyNodeForKcb, a2, &v23);
        if ( started >= 0 )
        {
          if ( v23 == -1 )
          {
            started = -2147483622;
          }
          else
          {
            v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                   *(_QWORD *)(KcbAtLayerHeight + 24),
                   v23,
                   v26);
            started = CmpQueryKeyDataFromNode(
                        *(_QWORD *)(KcbAtLayerHeight + 24),
                        v9,
                        a3,
                        v25,
                        a5,
                        (__int64)v24,
                        0LL,
                        0LL);
            if ( started >= 0 )
              started = 0;
          }
        }
      }
    }
  }
  CmpKeyEnumStackCleanup(v29);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v26);
  if ( KeyNodeForKcb )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v27);
  if ( v10 )
    CmpUnlockKcbStack((__int64)v28);
  CmpCleanupKcbStack((__int64)v28);
  CmpUnlockRegistry();
  return (unsigned int)started;
}
