/*
 * XREFs of VidSchWaitForPagingFence @ 0x1C007A020
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003369C (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 * Callees:
 *     VidSchWaitForSingleSyncObject @ 0x1C001D890 (VidSchWaitForSingleSyncObject.c)
 */

_UNKNOWN **__fastcall VidSchWaitForPagingFence(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // ebx
  __int64 v9; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( (_DWORD)a4 )
  {
    result = &retaddr;
    v5 = a4;
    v9 = 0LL;
    do
    {
      if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 52) )
        break;
      if ( (v5 & 1) != 0 )
        result = (_UNKNOWN **)VidSchWaitForSingleSyncObject(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8 * v9), a2, a3, a4);
      v9 = (unsigned int)(v9 + 1);
      v5 >>= 1;
    }
    while ( v5 );
  }
  return result;
}
