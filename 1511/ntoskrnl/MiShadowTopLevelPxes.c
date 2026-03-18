/*
 * XREFs of MiShadowTopLevelPxes @ 0x1401DEB30
 * Callers:
 *     MiCopyTopLevelMappings @ 0x14001883C (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChange @ 0x14013F8C8 (MiReplicatePteChange.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

_UNKNOWN **__fastcall MiShadowTopLevelPxes(__int64 a1, unsigned int a2, int a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // r14
  unsigned __int64 DeepFreezeStartTime; // r15
  __int64 v7; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (MiFlags & 0x600000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 1528);
    if ( v5 )
    {
      result = (_UNKNOWN **)PsInitialSystemProcess;
      if ( PsInitialSystemProcess )
      {
        DeepFreezeStartTime = PsInitialSystemProcess[2].DeepFreezeStartTime;
        v7 = (a2 >> 3) & 0x1FF;
        do
        {
          if ( _bittest64(qword_1402FE970, (unsigned int)(v7 - 256)) )
          {
            result = (_UNKNOWN **)MI_READ_PTE_LOCK_FREE((__int64 *)(DeepFreezeStartTime + 8 * v7));
            *(_QWORD *)(v5 + 8 * v7) = result;
          }
          v7 = (unsigned int)(v7 + 1);
          --a3;
        }
        while ( a3 );
      }
    }
  }
  return result;
}
