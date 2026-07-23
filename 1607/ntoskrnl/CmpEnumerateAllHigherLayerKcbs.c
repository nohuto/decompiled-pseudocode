/*
 * XREFs of CmpEnumerateAllHigherLayerKcbs @ 0x1404D35A0
 * Callers:
 *     CmpCleanupDiscardReplaceContext @ 0x1403FAEDC (CmpCleanupDiscardReplaceContext.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060B9BC (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x14060BC08 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpForceInvalidateAllHigherLayerKcbs @ 0x14060BC74 (CmpForceInvalidateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14060BE64 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14060E518 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x14060E7E8 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 */

_UNKNOWN **__fastcall CmpEnumerateAllHigherLayerKcbs(
        __int64 a1,
        __int64 a2,
        unsigned int (__fastcall *a3)(_QWORD, _QWORD),
        __int64 a4,
        char a5,
        char a6)
{
  _UNKNOWN **result; // rax
  _QWORD *v7; // rdi
  bool v8; // bp
  _QWORD *v11; // rbx
  char v12; // r10
  char *v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  unsigned int (__fastcall *v17)(char *, __int64); // [rsp+58h] [rbp+10h]
  unsigned int (__fastcall *v18)(_QWORD, _QWORD); // [rsp+60h] [rbp+18h]

  result = &retaddr;
  v18 = a3;
  v17 = (unsigned int (__fastcall *)(char *, __int64))a2;
  v7 = *(_QWORD **)(a1 + 184);
  v8 = 0;
  if ( v7 )
  {
    v11 = (_QWORD *)v7[4];
    result = (_UNKNOWN **)(v7 + 4);
    v12 = 0;
    if ( v11 != v7 + 4 )
    {
      while ( v11 == v7 + 4 )
      {
        v11 = v7;
        v12 = 1;
        v7 = (_QWORD *)v7[3];
LABEL_18:
        result = (_UNKNOWN **)(*(_QWORD *)(a1 + 184) + 32LL);
        if ( v11 == result )
          return result;
      }
      v13 = (char *)v11[2];
      v14 = v11;
      if ( v12 )
      {
        v11 = (_QWORD *)*v11;
        if ( !v8 )
          v8 = a3(v13, a4) == 1;
        if ( a5 )
        {
          LOBYTE(a2) = 1;
          CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v13, a2);
        }
        else
        {
          CmpUnlockKcb(v13);
        }
        if ( v8 )
        {
          v11 = v7;
          v7 = (_QWORD *)v7[3];
          v12 = 1;
          goto LABEL_17;
        }
      }
      else
      {
        v15 = v11[2];
        if ( a5 )
        {
          CmpReferenceKeyControlBlock(v15);
        }
        else if ( a6 )
        {
          CmpLockKcbExclusive(v15);
        }
        else
        {
          CmpLockKcbShared(v15);
        }
        if ( v17(v13, a4) == 1 )
        {
          v11 = (_QWORD *)v11[4];
          v7 = v14;
        }
        else
        {
          v11 = (_QWORD *)*v11;
          if ( a5 )
          {
            LOBYTE(a2) = 1;
            CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)v13, a2);
          }
          else
          {
            CmpUnlockKcb(v13);
          }
        }
      }
      v12 = 0;
LABEL_17:
      a3 = v18;
      goto LABEL_18;
    }
  }
  return result;
}
