/*
 * XREFs of CmEnumerateValueFromLayeredKey @ 0x1405FCDA4
 * Callers:
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14002CF68 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CmpGetKeyNodeForKcb @ 0x1404017F0 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpQueryKeyValueData @ 0x14043F230 (CmpQueryKeyValueData.c)
 *     CmpValueEnumStackAdvance @ 0x14060B534 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14060B640 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x14060B6C0 (CmpValueEnumStackInitialize.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x14060B7CC (CmpValueEnumStackStartFromKcbStack.c)
 */

__int64 __fastcall CmEnumerateValueFromLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        void *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // r12
  char v8; // r14
  __int64 KcbAtLayerHeight; // rsi
  __int64 v10; // r15
  __int64 v11; // rdx
  int started; // edi
  __int64 v13; // r8
  __int16 v14; // r10
  __int16 v15; // r8
  char v16; // r9
  __int16 v17; // r10
  int v18; // ebx
  unsigned int v19; // edi
  __int64 v20; // r13
  __int64 KeyNodeForKcb; // rax
  __int64 v22; // rbx
  _BYTE v25[8]; // [rsp+48h] [rbp-A1h] BYREF
  _BYTE v26[8]; // [rsp+50h] [rbp-99h] BYREF
  _BYTE v27[8]; // [rsp+58h] [rbp-91h] BYREF
  __int64 v28[4]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v29; // [rsp+80h] [rbp-69h]
  void *Src; // [rsp+88h] [rbp-61h]
  int v31; // [rsp+90h] [rbp-59h] BYREF
  __int16 v32; // [rsp+96h] [rbp-53h]

  v7 = a2;
  Src = a4;
  v29 = a6;
  memset(v28, 0, sizeof(v28));
  WORD1(v28[0]) = -1;
  v8 = 0;
  CmpValueEnumStackInitialize(&v31);
  HvpGetCellContextReinitialize((__int64)v27);
  KcbAtLayerHeight = 0LL;
  v10 = 0LL;
  HvpGetCellContextReinitialize((__int64)v25);
  HvpGetCellContextReinitialize((__int64)v26);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v28, *(_QWORD *)(a1 + 8));
  if ( started < 0 )
    goto LABEL_24;
  CmpLockKcbStackShared((__int64)v28);
  v8 = 1;
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    started = (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_24;
  }
  v14 = WORD1(v28[0]);
  if ( SWORD1(v28[0]) <= 0 )
    goto LABEL_15;
  do
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v28, v14);
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      v16 = 1;
    v14 = v15 + v17;
  }
  while ( v14 > 0 );
  if ( !v16 )
  {
LABEL_15:
    KcbAtLayerHeight = v28[1];
    KeyNodeForKcb = CmpGetKeyNodeForKcb(v28[1], (__int64)v25, 0);
    v10 = KeyNodeForKcb;
    if ( (*(_BYTE *)(KeyNodeForKcb + 2) & 0x40) != 0 )
    {
      started = -1073741816;
      goto LABEL_24;
    }
    if ( *(_DWORD *)(KeyNodeForKcb + 36) <= (unsigned int)v7 )
    {
      started = -2147483622;
      goto LABEL_24;
    }
    v20 = KcbAtLayerHeight;
    v19 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                        *(_QWORD *)(KcbAtLayerHeight + 24),
                        *(unsigned int *)(KeyNodeForKcb + 40),
                        v26)
                    + 4 * v7);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v26);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v25);
    v10 = 0LL;
    goto LABEL_20;
  }
  started = CmpValueEnumStackStartFromKcbStack(&v31, v28, a1);
  if ( started < 0 )
    goto LABEL_24;
  started = CmpValueEnumStackAdvance(&v31);
  if ( started < 0 )
    goto LABEL_24;
  v18 = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_14:
    v19 = v31;
    v20 = CmpGetKcbAtLayerHeight((__int64)v28, v32);
LABEL_20:
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v20 + 24) + 8LL))(
            *(_QWORD *)(v20 + 24),
            v19,
            v27);
    started = CmpQueryKeyValueData(v20, v19, v22, a3, Src, a5, (int *)v29);
    if ( started >= 0 )
      started = 0;
    if ( v22 )
      (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v20 + 24) + 16LL))(*(_QWORD *)(v20 + 24), v27);
    goto LABEL_24;
  }
  while ( 1 )
  {
    started = CmpValueEnumStackAdvance(&v31);
    if ( started < 0 )
      break;
    if ( ++v18 >= (unsigned int)v7 )
      goto LABEL_14;
  }
LABEL_24:
  CmpValueEnumStackCleanup(&v31, v11, v13);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      v25);
  if ( v8 )
    CmpUnlockKcbStack((__int64)v28);
  CmpCleanupKcbStack((__int64)v28);
  return (unsigned int)started;
}
