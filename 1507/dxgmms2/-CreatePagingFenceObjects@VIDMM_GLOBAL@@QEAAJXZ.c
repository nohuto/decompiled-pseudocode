/*
 * XREFs of ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0039AFC
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C003D084 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchCreateSyncObject @ 0x1C0032EB0 (VidSchCreateSyncObject.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004C978 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreatePagingFenceObjects(VIDMM_GLOBAL *this)
{
  __int64 v1; // rdi
  int i; // esi
  __int64 v4; // rcx
  __int64 v5; // rax
  int SyncObject; // ebp
  int v8[20]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0LL;
  if ( !*((_DWORD *)this + 1604) )
    return 0LL;
  for ( i = 0; ; i += 100 )
  {
    memset(v8, 0, sizeof(v8));
    v8[0] = 5;
    v4 = (unsigned int)(-101 - i);
    *((_QWORD *)this + v1 + 610) = v4;
    *((_QWORD *)this + v1 + 674) = v4;
    v5 = *((_QWORD *)this + 2);
    *(_QWORD *)&v8[2] = v4;
    SyncObject = VidSchCreateSyncObject(
                   *(_QWORD *)(v5 + 384),
                   0LL,
                   (__int64)v8,
                   0LL,
                   0LL,
                   (__int64 *)this + v1 + 738,
                   0LL);
    if ( SyncObject < 0 )
      break;
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= *((_DWORD *)this + 1604) )
      return 0LL;
  }
  VIDMM_GLOBAL::DestroyPagingFenceObjects(this);
  return (unsigned int)SyncObject;
}
