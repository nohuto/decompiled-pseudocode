/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x1401B4118
 * Callers:
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpGetKeyNodeForKcb @ 0x1404017F0 (CmpGetKeyNodeForKcb.c)
 *     CmpFindNameInListWithStatus @ 0x1404019DC (CmpFindNameInListWithStatus.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x14040336C (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1404037F4 (CmpCleanupKcbStack.c)
 *     CmpInitializeKcbStack @ 0x140403804 (CmpInitializeKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140403EA8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14043F0C0 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1404A9170 (CmpReleaseKeyNodeForKcb.c)
 *     CmpIsValueTombstone @ 0x1404CD800 (CmpIsValueTombstone.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  int v7; // r12d
  size_t v8; // r14
  __int64 v9; // r15
  void *v10; // rsi
  unsigned int v11; // r13d
  signed int started; // edi
  __int64 i; // rax
  unsigned __int16 *v14; // rdi
  __int64 v15; // r8
  unsigned __int16 v16; // dx
  __int16 v17; // r14
  __int64 KcbAtLayerHeight; // r12
  int EffectiveKcbSemantics; // eax
  __int64 v20; // rcx
  int KeyNodeForKcb; // eax
  int v22; // ecx
  unsigned int v23; // edi
  __int64 v24; // rcx
  char v26; // [rsp+40h] [rbp-B8h]
  _BYTE v27[3]; // [rsp+41h] [rbp-B7h] BYREF
  int v28; // [rsp+44h] [rbp-B4h]
  unsigned int v29; // [rsp+48h] [rbp-B0h]
  unsigned int v30; // [rsp+4Ch] [rbp-ACh] BYREF
  size_t Size; // [rsp+50h] [rbp-A8h] BYREF
  void *Src; // [rsp+58h] [rbp-A0h] BYREF
  int v33; // [rsp+60h] [rbp-98h]
  __int64 v34; // [rsp+68h] [rbp-90h] BYREF
  __int64 v35; // [rsp+70h] [rbp-88h] BYREF
  __int64 v36; // [rsp+78h] [rbp-80h] BYREF
  unsigned __int16 *v37; // [rsp+80h] [rbp-78h]
  __int64 v38; // [rsp+88h] [rbp-70h]
  __int64 v39; // [rsp+90h] [rbp-68h]
  __int64 v40; // [rsp+98h] [rbp-60h]
  _BYTE v41[88]; // [rsp+A0h] [rbp-58h] BYREF

  CmpInitializeKcbStack(v41);
  LOBYTE(v7) = 0;
  v8 = 0LL;
  Size = 0LL;
  v35 = 0xFFFFFFFFLL;
  v36 = 0xFFFFFFFFLL;
  v9 = 0LL;
  v38 = 0LL;
  v10 = 0LL;
  Src = 0LL;
  v27[0] = 0;
  v34 = 0xFFFFFFFFLL;
  v11 = 0;
  v29 = 0;
  v26 = 0;
  v39 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v41, v39);
  if ( started < 0 )
    goto LABEL_42;
  CmpLockKcbStackShared(v41);
  v7 = 1;
  v28 = 1;
  v27[1] = 1;
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
    goto LABEL_42;
  for ( i = 0LL; ; i = (unsigned int)(v7 + v33) )
  {
    v33 = i;
    if ( (unsigned int)i >= a3 )
    {
      *a5 = v11;
      if ( a6 )
        *a6 = v29;
      started = v26 != 0 ? 0x80000005 : 0;
      goto LABEL_42;
    }
    v40 = 3 * i;
    v14 = *(unsigned __int16 **)(a2 + 24 * i);
    v37 = v14;
    if ( *v14 )
    {
      v15 = *((_QWORD *)v14 + 1);
      do
      {
        if ( *(_WORD *)(v15 + 2 * ((unsigned __int64)(*v14 - v7) >> 1)) )
          break;
        v16 = *v14 - 2;
        *v14 = v16;
      }
      while ( v16 );
    }
    v30 = -1;
    v17 = *(_WORD *)(v39 + 58);
    if ( v17 >= 0 )
      break;
LABEL_20:
    if ( v30 == -1 )
    {
      started = -1073741772;
      goto LABEL_41;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 8LL))(
           *(_QWORD *)(v9 + 24),
           v30,
           &v35);
    v37 = (unsigned __int16 *)v8;
    if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(v9 + 24), v8) )
    {
      started = -1073741772;
      goto LABEL_42;
    }
    v23 = *(_DWORD *)(v8 + 4);
    if ( v23 >= 0x80000000 )
      v23 += 0x80000000;
    LODWORD(Size) = v23;
    v11 = (v11 + 7) & 0xFFFFFFF8;
    v29 = (v29 + 7) & 0xFFFFFFF8;
    if ( v26 || v23 + v11 > *a5 || v23 + v11 < v11 )
    {
      v26 = v7;
    }
    else
    {
      if ( !(unsigned __int8)CmpGetValueData(
                               v22,
                               v30,
                               v8,
                               (unsigned int)&Size,
                               (__int64)&Src,
                               (__int64)v27,
                               (__int64)&v34) )
      {
        started = -1073741670;
        v10 = Src;
        goto LABEL_42;
      }
      v23 = Size;
      memmove((void *)(a4 + v11), Src, (unsigned int)Size);
      v24 = v40;
      *(_DWORD *)(a2 + 8 * v40 + 16) = *(_DWORD *)(v8 + 12);
      *(_DWORD *)(a2 + 8 * v24 + 8) = v23;
      *(_DWORD *)(a2 + 8 * v24 + 12) = v11;
      v11 += v23;
      if ( v27[0] )
        ExFreePoolWithTag(Src, 0);
      else
        (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v34);
      v10 = 0LL;
      Src = 0LL;
    }
    v29 += v23;
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v35);
    v8 = 0LL;
    Size = 0LL;
  }
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v41, (unsigned __int16)v17);
    EffectiveKcbSemantics = CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, a1);
    if ( EffectiveKcbSemantics == v28 )
      goto LABEL_19;
    if ( *(_DWORD *)(v20 + 32) != -1 )
      break;
LABEL_16:
    if ( --v17 < 0 )
      goto LABEL_19;
  }
  KeyNodeForKcb = CmpGetKeyNodeForKcb(v20, &v36, 0LL);
  started = CmpFindNameInListWithStatus(
              *(_QWORD *)(KcbAtLayerHeight + 24),
              KeyNodeForKcb + 36,
              (_DWORD)v14,
              0,
              0LL,
              (__int64)&v30);
  CmpReleaseKeyNodeForKcb(KcbAtLayerHeight, &v36);
  if ( started >= 0 )
  {
    v9 = KcbAtLayerHeight;
    v38 = KcbAtLayerHeight;
LABEL_19:
    v7 = v28;
    goto LABEL_20;
  }
  if ( started == -1073741772 )
  {
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, a1) )
      goto LABEL_19;
    LODWORD(v14) = (_DWORD)v37;
    goto LABEL_16;
  }
  LOBYTE(v7) = v28;
LABEL_41:
  v8 = Size;
LABEL_42:
  if ( v10 )
  {
    if ( v27[0] )
      ExFreePoolWithTag(v10, 0);
    else
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v34);
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 24) + 16LL))(*(_QWORD *)(v9 + 24), &v35);
  if ( (_BYTE)v7 )
    CmpUnlockKcbStack(v41);
  CmpCleanupKcbStack(v41);
  return (unsigned int)started;
}
